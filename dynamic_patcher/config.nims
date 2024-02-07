# Define CPU Arch & OS
switch("cpu", "arm")
switch("os", "linux")

# Link Static
switch("passL", "-static")

# Optimizations
# switch("define", "release")
# switch("opt", "size")
