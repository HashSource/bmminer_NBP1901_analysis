#!/usr/bin/env python3

import os
import openai
import glob
from pathlib import Path
from decouple import config

openai.api_key = config("OPEN_AI_API_KEY")

default_prompt = [
    {"role": "system", "content": "You are a intelligent assistant"},
    {
        "role": "system",
        "content": f"You will be provided with code that was decompiled with Ghidra into pseudo C code from an ARM binary running on linux embedded system named Bitmain Antminer",
    },
    {
        "role": "system",
        "content": f"Rename all symbols, variables, function names, making it easier to understand. Keep the structure of the code the same, and add comments",
    },
    {
        "role": "system",
        "content": f"Return only the modified code without any other text",
    },
]

source_file_paths = glob.glob("decompilations/bmminer/FUN_*-*.c")
for index, source_file_path in enumerate(source_file_paths):
    output_file_path = Path(source_file_path).with_suffix(".md")
    output_file_exists = os.path.isfile(output_file_path)

    # Skip If Generated File Exists
    if output_file_exists:
        print(f"Skipping: {output_file_path}")
        continue


    with open(source_file_path, "r") as source_file:
        source = source_file.read()

        print(f"Summarizing ({index}/{len(source_file_paths)}): {output_file_path}")

        messages = default_prompt + [{
                "role": "user",
                "content": f"{source}",
        }]

        chat_gpt = openai.ChatCompletion.create(
            model="gpt-4-1106-preview", messages=messages
        )
        chat_gpt_reply = chat_gpt.choices[0].message.content

        with open(output_file_path, "w") as output_file:
            output_file.write(chat_gpt_reply)
            print(f"Finished")
