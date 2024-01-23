```c
int displayASICFrequencyParameters() {
    __int128 temp128Value;
    int returnValue;
    short buffer;
    int temporaryValue;
    if(debugLogLevel > 3) {
        snprintf(&buffer, 0x800, "%-40s : %d\n", "\n", **(int**)ASICParameters);
        logFunction(3, &buffer, 0);
        if(debugLogLevel > 3) {
            snprintf(&buffer, 0x800, "%-40s : ", "freq_base");
            logFunction(3, &buffer, 0);
        }
    }
    int index = 0;
    do {
        returnValue = testChipFrequency(index);
        if(returnValue != 0 && debugLogLevel > 3) {
            snprintf(&buffer, 0x800, "[%d] = %d ", index, *(int*)(index * 4 + *(int*)ASICParameters + 4));
            returnValue = logFunction(3, &buffer, 0);
        }
        ++index;
    }
    while(index != 4);
    if(debugLogLevel > 3) {
        buffer = 10;
        returnValue = logFunction(3, &buffer, 0);
        if(debugLogLevel > 3) {
            snprintf(&buffer, 0x800, "%-40s : %d\n", "freq_threshold", *(int*)(*(int*)ASICParameters + 20));
            returnValue = logFunction(3, &buffer, 0);
            if(debugLogLevel > 3) {
                snprintf(&buffer, 0x800, "%-40s : %d\n", "freq_serial_threshold", *(int*)(*(int*)ASICParameters + 24));
                returnValue = logFunction(3, &buffer, 0);
                if(debugLogLevel <= 3) {
                    goto loc_Return;
                }
                else {
                    snprintf(&buffer, 0x800, "%-40s : %d\n", "freq_diff_threshold", *(int*)(*(int*)ASICParameters + 28));
                    returnValue = logFunction(3, &buffer, 0);
                    if(debugLogLevel > 3) {
                        snprintf(&buffer, 0x800, "%-40s : %d\n", "freq_step", *(int*)(*(int*)ASICParameters + 32));
                        returnValue = logFunction(3, &buffer, 0);
                        goto loc_ParseBoolean;
                    }
                }
            }
        }
        else {
        loc_ParseBoolean:
            uint32_t debugLevel = debugLogLevel;
            if(debugLevel > 3) {
                char* booleanString = "false";
                snprintf(&buffer, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol", *(char*)(*(int*)ASICParameters + 36) != 0 ? "true": "false");
                returnValue = logFunction(3, &buffer, 0);
                if(debugLogLevel <= 3) {
                    return returnValue;
                }
                if(*(char*)(*(int*)ASICParameters + 37) != 0) {
                    booleanString = "true";
                }
                snprintf(&buffer, 0x800, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", booleanString);
                returnValue = logFunction(3, &buffer, 0);
            loc_Return:
                if(debugLogLevel <= 3) {
                    return returnValue;
                }
                snprintf(&buffer, 0x800, "%-40s : %d\n", "is_board_init_with_power_off", *(int*)(*(int*)ASICParameters + 40));
                returnValue = logFunction(3, &buffer, 0);
                if(debugLogLevel <= 3) {
                    return returnValue;
                }
                temp128Value = (unsigned __int128)(uint64_t)temp128Value | ((unsigned __int128)*(int*)(*(int*)ASICParameters + 44) << 64) | ((unsigned __int128)(uint32_t)(temp128Value >>> 0x60X) << 96);
                VCVT.F64.F32((uint64_t)(temp128Value >>> 0x40X), (uint32_t)(temp128Value >>> 0x40X));
                *(double*)&temporaryValue = (double)(temp128Value >>> 0x40X);
                snprintf(&buffer, 0x800, "%-40s : %.4f\n", "hw_threshold", *(double*)&temporaryValue);
                returnValue = logFunction(3, &buffer, 0);
                debugLevel = debugLogLevel;
            }
            if(debugLevel > 3) {
                temp128Value = (unsigned __int128)(uint64_t)temp128Value | ((unsigned __int128)*(int*)(*(int*)ASICParameters + 48) << 64) | ((unsigned __int128)(uint32_t)(temp128Value >>> 0x60X) << 96);
                VCVT.F64.F32((uint64_t)(temp128Value >>> 0x40X), (uint32_t)(temp128Value >>> 0x40X));
                *(double*)&temporaryValue = (double)(temp128Value >>> 0x40X);
                snprintf(&buffer, 0x800, "%-40s : %.2f\n", "nonce_rate_threshold", *(double*)&temporaryValue);
                returnValue = logFunction(3, &buffer, 0);
                if(debugLogLevel > 3) {
                    VCVT.F64.F32((uint64_t)(((unsigned __int128)(uint64_t)temp128Value | ((unsigned __int128)*(int*)(*(int*)ASICParameters + 52) << 64) | ((unsigned __int128)(uint32_t)(temp128Value >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(uint64_t)temp128Value | ((unsigned __int128)*(int*)(*(int*)ASICParameters + 52) << 64) | ((unsigned __int128)(uint32_t)(temp128Value >>> 0x60X) << 96)) >>> 0x40X));
                    *(double*)&temporaryValue = (double)(((unsigned __int128)(uint64_t)temp128Value | ((unsigned __int128)*(int*)(*(int*)ASICParameters + 52) << 64) | ((unsigned __int128)(uint32_t)(temp128Value >>> 0x60X) << 96)) >>> 0x40X);
                    snprintf(&buffer, 0x800, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(double*)&temporaryValue);
                    returnValue = logFunction(3, &buffer, 0);
                    if(debugLogLevel > 3) {
                        snprintf(&buffer, 0x800, "%-40s : %d\n", "freq_tuning_fine_step", *(int*)(*(int*)ASICParameters + 56));
                        returnValue = logFunction(3, &buffer, 0);
                        if(debugLogLevel > 3) {
                            snprintf(&buffer, 0x800, "%-40s : %d\n", "freq_tuning_fine_count", *(int*)(*(int*)ASICParameters + 60));
                            return logFunction(3, &buffer, 0);
                        }
                    }
                }
            }
        }
    }
    return returnValue;
}
```