```c
int CheckChainPCBAndBOMVersions() {
    int lastChainResult;
    char logBuffer;
    int chainIndex = 0;
    do {
        lastChainResult = CheckChainPresence(chainIndex);
        if(lastChainResult != 0 && logLevel > 3) {
            short pcbVersion = GetChainPCBVersion(chainIndex);
            snprintf(&logBuffer, 0x800, "Chain [%d] PCB Version: 0x%04x\n", chainIndex, pcbVersion);
            LogMessage(3, &logBuffer, 0);
            lastChainResult = chainIndex;
            if(logLevel > 3) {
                short bomVersion = GetChainBOMVersion(lastChainResult);
                snprintf(&logBuffer, 0x800, "Chain [%d] BOM Version: 0x%04x\n", chainIndex, bomVersion);
                lastChainResult = LogMessage(3, &logBuffer, 0);
            }
        }
        ++chainIndex;
    }
    while(chainIndex != 4);
    return lastChainResult;
}
```