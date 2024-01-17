```c
void configureAntminer(uint chipId, uint frequency, undefined4 voltage, int isChipDisabled, undefined fanSpeed,
                       undefined temperature)
{
  // If the chip is marked as disabled, we use a specific configuration setting
  if (isChipDisabled != 0) {
    setAntminerConfiguration(temperature, 0, fanSpeed, 0x1c);
    return;
  }
  // If the chip is active, we configure it with the frequency, voltage, and other parameters
  setAntminerConfiguration(temperature, 0, fanSpeed, 0x1c,
                           (frequency & 0xff) << 8 | (chipId >> 1 & 0x7f) << 0x11 | 0x1000000);
  return;
}
```
Comments have been added to explain the purpose of the `configureAntminer` function and its parameters, and the function and variable names have been made more descriptive. This should help provide clarity on the code's functionality which configures the Antminer hardware.