```c
int PrintASICMinerConfig() {
    __int128 tempValue;
    int actionResult;
    char outputBuffer;
    int doubleValue;

    if(minerLogLevel > 3) {
        snprintf(&outputBuffer, 0x800, "%-40s : %d\n", "voltage", **(int**)minerConfig);
        actionResult = LogMessage(3, (int)&outputBuffer, 0);
        if(minerLogLevel > 3) {
            snprintf(&outputBuffer, 0x800, "%-40s : %d\n", "freq_base", *(int*)(*(int*)minerConfig + 4));
            actionResult = LogMessage(3, (int)&outputBuffer, 0);
            if(minerLogLevel > 3) {
                snprintf(&outputBuffer, 0x800, "%-40s : %d\n", "freq_threshold", *(int*)(*(int*)minerConfig + 8));
                actionResult = LogMessage(3, (int)&outputBuffer, 0);
                if(minerLogLevel <= 3) {
                    goto Finish;
                } else {
                    snprintf(&outputBuffer, 0x800, "%-40s : %d\n", "freq_serial_threshold", *(int*)(*(int*)minerConfig + 12));
                    actionResult = LogMessage(3, (int)&outputBuffer, 0);
                    if(minerLogLevel > 3) {
                        snprintf(&outputBuffer, 0x800, "%-40s : %d\n", "freq_step", *(int*)(*(int*)minerConfig + 16));
                        actionResult = LogMessage(3, (int)&outputBuffer, 0);
                        goto LogAdditionalInfo;
                    }
                }
            }
        } else {
        LogAdditionalInfo:
            uint32_t logLevel = minerLogLevel;
            if(logLevel > 3) {
                char* incFreqWithHighVolString = "false";
                snprintf(&outputBuffer, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol", *(char*)(*(int*)minerConfig + 20) != 0 ? "true" : "false");
                actionResult = LogMessage(3, (int)&outputBuffer, 0);
                if(minerLogLevel <= 3) {
                    return actionResult;
                }
                if(*(char*)(*(int*)minerConfig + 21) != 0) {
                    incFreqWithHighVolString = "true";
                }
                snprintf(&outputBuffer, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", incFreqWithHighVolString);
                actionResult = LogMessage(3, (int)&outputBuffer, 0);
            Finish:
                if(minerLogLevel <= 3) {
                    return actionResult;
                }
                snprintf(&outputBuffer, 0x800, "%-40s : %d\n", "is_board_init_with_power_off", *(int*)(*(int*)minerConfig + 24));
                actionResult = LogMessage(3, (int)&outputBuffer, 0);
                if(minerLogLevel <= 3) {
                    return actionResult;
                }
                tempValue = (unsigned __int128)(uint64_t)tempValue | ((unsigned __int128)*(int*)(*(int*)minerConfig + 28) << 64) | ((unsigned __int128)(uint32_t)(tempValue >> 96) << 96);
                ConvertFloat64ToFloat32((uint64_t)(tempValue >> 64), (uint32_t)(tempValue >> 64));
                *(double*)&doubleValue = (double)(tempValue >> 64);
                snprintf(&outputBuffer, 0x800, "%-40s : %.4f\n", "hw_threshold", *(double*)&doubleValue);
                actionResult = LogMessage(3, (int)&outputBuffer, 0);
                logLevel = minerLogLevel;
            }
            if(logLevel > 3) {
                tempValue = (unsigned __int128)(uint64_t)tempValue | ((unsigned __int128)*(int*)(*(int*)minerConfig + 32) << 64) | ((unsigned __int128)(uint32_t)(tempValue >> 96) << 96);
                ConvertFloat64ToFloat32((uint64_t)(tempValue >> 64), (uint32_t)(tempValue >> 64));
                *(double*)&doubleValue = (double)(tempValue >> 64);
                snprintf(&outputBuffer, 0x800, "%-40s : %.2f\n", "nonce_rate_threshold", *(double*)&doubleValue);
                actionResult = LogMessage(3, (int)&outputBuffer, 0);
                if(minerLogLevel > 3) {
                    ConvertFloat64ToFloat32((uint64_t)(((unsigned __int128)(uint64_t)tempValue | ((unsigned __int128)*(int*)(*(int*)minerConfig + 36) << 64) | ((unsigned __int128)(uint32_t)(tempValue >> 96) << 96)) >> 64), (uint32_t)(((unsigned __int128)(uint64_t)tempValue | ((unsigned __int128)*(int*)(*(int*)minerConfig + 36) << 64) | ((unsigned __int128)(uint32_t)(tempValue >> 96) << 96)) >> 64));
                    *(double*)&doubleValue = (double)(((unsigned __int128)(uint64_t)tempValue | ((unsigned __int128)*(int*)(*(int*)minerConfig + 36) << 64) | ((unsigned __int128)(uint32_t)(tempValue >> 96) << 96)) >> 64);
                    snprintf(&outputBuffer, 0x800, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(double*)&doubleValue);
                    return LogMessage(3, (int)&outputBuffer, 0);
                }
            }
        }
    }

    return actionResult;
}
```