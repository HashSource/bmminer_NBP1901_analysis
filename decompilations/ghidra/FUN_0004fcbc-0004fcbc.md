```c
#include <unistd.h>

#define REG_A_STATUS 0xb0
#define REG_B_CONFIG 0xbc

typedef unsigned int uint;

// Function prototypes (renamed for clarity)
void InitializeHardware();
void WriteToASIC(int chipSelect, uint regAddr, uint regValue);
void ReadFromASIC(int isBroadcast, uint chipAddr, uint regAddr, uint dataLen, uint *readBuffer);

uint ConfigureASIC(uint chipAddr, int isBroadcast, uint data, uint configVal) {
  uint readData;
  uint modifiedData;
  
  // Initialize hardware and wait for 10ms
  InitializeHardware();
  usleep(10000);
  
  if (isBroadcast == 0) {
    // Read ASIC status register when specific chip is targeted
    ReadFromASIC(1, chipAddr, REG_A_STATUS, 0xb0, &readData);
  } else {
    // Read ASIC status register in broadcast mode
    ReadFromASIC(0, chipAddr, 0, REG_A_STATUS, &readData);
  }
  
  // Modify readData based on some bitwise operations
  modifiedData = ((readData & 0xff) & 0xb4) |
                 (((readData >> 8) & 0xff) << 8 & 0xfbffff) |
                 ((readData & 0x332000) | 0x143) << 8 |
                 (((readData >> 24) & 0x33 | 0x20) << 24);
  
  // Write the modified data back to the ASIC
  WriteToASIC(chipAddr, isBroadcast, data, REG_A_STATUS, modifiedData);
  usleep(10000); // Wait for 10ms
  
  // Configure ASIC with provided configVal masked with a value
  WriteToASIC(chipAddr, isBroadcast, data, REG_B_CONFIG, (configVal & 7) | 0x1f8);
  usleep(10000); // Wait for 10ms
  
  // Write the modified data again to the ASIC
  WriteToASIC(chipAddr, isBroadcast, data, REG_A_STATUS, modifiedData);
  usleep(10000); // Wait for 10ms
  
  return 0;
}
```

Comments are added to clarify the intention behind certain parts of the code and renamed functions and variables to make them more descriptive. The code structure and the low-level bitwise operations remain unaltered to ensure that the function's behavior does not change.