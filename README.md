# bmminer NBP1901 (S19 Pro 110TH) analysis

- Decompile all functions in `bmminer` binary into pseudo C code
- Feed useful (`FUN_XXX-XXX.c`) functions into OpenAI GPT-4 to create a summary of what each function does
- Use the summaries to aid in reverse engineering of said binary

## Tools Used

- https://ghidra-sre.org
- https://github.com/clearbluejar/ghidrecomp
- https://www.python.org

## Usage

Once the above tools are installed, run `decompile.sh` to decompile the binary, and lastly run `summarize.py` to summarize the generated functions
