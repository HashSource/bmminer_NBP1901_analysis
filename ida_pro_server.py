#!/usr/bin/env python3

from http.server import HTTPServer, BaseHTTPRequestHandler
from openai import OpenAI
import time
from decouple import config
from datetime import datetime

openai_client = OpenAI(
    api_key=config("OPEN_AI_API_KEY"),  # Loads from .env file
    timeout=180,  # Seconds
)

default_gpt_prompt = [
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


def request_gpt_enhancement(decompiled_function):
    messages = default_gpt_prompt + [
        {
            "role": "user",
            "content": f"{decompiled_function}",
        }
    ]

    gpt = openai_client.chat.completions.create(
        model="gpt-4-turbo-preview", messages=messages
    )
    gpt_reply = gpt.choices[0].message.content

    return gpt_reply


class IdaProRequestHandler(BaseHTTPRequestHandler):
    def do_POST(self):
        now = datetime.now()
        current_time = now.strftime("%H:%M:%S")
        print(f"Start Time: {current_time}")

        content_length = int(self.headers["Content-Length"])
        request_data = self.rfile.read(content_length).decode("utf-8")
        print(f"Function Size: {content_length}")

        gpt_start_time = time.time()
        gpt_response = request_gpt_enhancement(request_data)
        gpt_end_time = time.time()
        print(f"GPT Enhancement Took: {round(gpt_end_time - gpt_start_time)} Seconds")

        response = gpt_response.encode("utf-8")

        self.send_response(200)
        self.send_header("Content-type", "application/json")
        self.end_headers()

        self.wfile.write(response)


def run(server_class=HTTPServer, handler_class=IdaProRequestHandler):
    server_address = ("localhost", 9090)
    httpd = server_class(server_address, handler_class)
    print("Server starting on port 9090...")
    httpd.serve_forever()


run()
