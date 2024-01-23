```c
int setMinerChainFrequency(int frequencyDataBuffer, uint32_t chainIndex) {
    char logBuffer;
    if(frequencyDataBuffer == 0 || chainIndex > 3) {
        if(gvar_minerStatus != 0 || gvar_minerError != 0 || (int)gvar_minerMode > 2) {
            snprintf(&logBuffer, 0x800, "%s: input bad param\n", "api_miner_chain_frequency");
            frequencyDataBuffer = logError(3, &logBuffer, 0);
        }
        return frequencyDataBuffer;
    }
    uint32_t chainFreqData = getChainFrequencyData(chainIndex);
    size_t chainFreqDataSize = formatFrequencyData((int)chainFreqData, (int)(chainFreqData >> 31));
    return updateFrequencyDataBuffer((int*)frequencyDataBuffer, "freq_avg", (void*)chainFreqDataSize);
}
```