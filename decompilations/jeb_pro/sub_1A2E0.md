```c
uint32_t GetConfigValue(uint32_t index) {
    uint32_t configMode = gConfigMode;
    int* configTable = (int*)&gConfigTable;
    if(configMode == 2) {
        index = *(uint32_t*)(index * 4 + (int)&gConfigTable);
    }
    else {
        configTable = index * 4 + &gConfigTable;
    }
    if(configMode != 2) {
        index = *(uint32_t*)(configTable + 7);
    }
    return index;
}
```