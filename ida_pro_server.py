#!/usr/bin/env python3

from http.server import HTTPServer, BaseHTTPRequestHandler
import openai
import time
from decouple import config

openai.api_key = config("OPEN_AI_API_KEY")

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

    chat_gpt = openai.ChatCompletion.create(
        model="gpt-4-1106-preview", messages=messages
    )
    chat_gpt_reply = chat_gpt.choices[0].message.content

    return chat_gpt_reply


class IdaProRequestHandler(BaseHTTPRequestHandler):
    def do_POST(self):
        content_length = int(self.headers["Content-Length"])
        request_data = self.rfile.read(content_length).decode("utf-8")

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
