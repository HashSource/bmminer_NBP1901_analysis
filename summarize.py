#!/usr/bin/env python3

import os
import time
import openai
import glob
from pathlib import Path
from decouple import config

openai.api_key = config("OPEN_AI_API_KEY")

default_prompt = [
    {
        "role": "system",
        "content": f"You will be provided with pseudo C function that was decompiled with Ghidra or IDA Pro from an ARM binary running on an linux embedded system named Bitmain Antminer (Bitcoin ASIC Miner).\nRename the function and variables making it easier for humans to understand.\nDO NOT modify or remove the logic/structure from the code.",
    }
]

source_file_paths = glob.glob("decompilations/bmminer/FUN_*-*.c")
for index, source_file_path in enumerate(source_file_paths):
    output_file_path = Path(source_file_path).with_suffix(".md")
    output_file_exists = os.path.isfile(output_file_path)

    # Skip If Generated File Exists
    if output_file_exists:
        continue

    with open(source_file_path, "r") as source_file:
        start_time = time.process_time()

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
            end_time = time.process_time()
            print(f"Finished In {end_time - start_time}")
