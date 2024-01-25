#!/usr/bin/env python3

from decouple import config
from pathlib import Path
import concurrent.futures
import glob
import openai
import os

openai.api_key = config("OPEN_AI_API_KEY")

default_prompt = [
    {
        "role": "system",
        "content": f"You will be provided with decompiled C function from an ARM binary running on an linux embedded system named Bitmain Antminer (Bitcoin ASIC Miner).\nRename the function and local variables making it easier for humans to understand.\nDO NOT modify or remove the logic/structure from the code.",
    },
    {
        "role": "system",
        "content": "Rename only the provided function, and not the called functions. Use snake case styling.",
    },
    {
        "role": "system",
        "content": "Return a JSON mapping between the old function and local variable names and the new names.\nExample: {'old_name': 'new_name;}",
    },
    {
        "role": "system",
        "content": "Only return raw JSON Object, without code block syntax around it. Ex. ```json```",
    },
]

source_file_paths = glob.glob("decompilations/ida_pro/sub_1AAE4.c")


def map_source_file(source_file_path):
    output_file_path = Path(source_file_path).with_suffix(".json")
    output_file_exists = os.path.isfile(output_file_path)

    # Skip If Generated File Exists
    if output_file_exists:
        return None

    with open(source_file_path, "r") as source_file:
        source = source_file.read()

        print(f"{output_file_path}: Mapping")

        messages = default_prompt + [
            {
                "role": "user",
                "content": f"{source}",
            }
        ]

        chat_gpt = openai.ChatCompletion.create(
            model="gpt-4-1106-preview", messages=messages
        )
        chat_gpt_reply = chat_gpt.choices[0].message.content

        with open(output_file_path, "w") as output_file:
            output_file.write(chat_gpt_reply)
            print(f"{output_file_path}: Done")


with concurrent.futures.ThreadPoolExecutor(max_workers=10) as executor:
    executor.map(map_source_file, source_file_paths)
