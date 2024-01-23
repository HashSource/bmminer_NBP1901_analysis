```c
int checkFanStatus(int fanControllerHandle, uint32_t fanIndex, size_t logBufferSize) {
    char logBuffer;
    uint32_t currentFanIndex = fanIndex;
    if(fanIndex == 0) {
        resetFanController(fanControllerHandle);
        int detectedFans = getDetectedFanCount();
        uint32_t expectedFans = getExpectedFanCount();
        if((int)expectedFans <= detectedFans) {
            globalFanCheckCounter = currentFanIndex;
        }
        else {
            ++globalFanCheckCounter;
            while(SOCK_STREAM) {
                int fanId = (int)(uint8_t)currentFanIndex;
                ++currentFanIndex;
                uint32_t totalFansExpected = getExpectedFanCount();
                if((int)totalFansExpected <= fanId) {
                    break;
                }
                else if(globalDebugLevel > 3) {
                    uint32_t checkCount = globalFanCheckCounter;
                    int fanSpeed = getFanSpeed(fanId);
                    snprintf(&logBuffer, 0x800, "conti_check_count:%d, fan_id = %d, fan_speed = %d\n", checkCount, fanId, fanSpeed);
                    logMessage(3, &logBuffer, 0);
                }
            }
        }
        int liveDetectedFans = getDetectedFanCount();
        uint32_t liveExpectedFans = getExpectedFanCount();
        if((int)liveExpectedFans > liveDetectedFans && globalFanCheckCounter > 9) {
        errorHandling:
            if(globalDebugLevel > SOCK_STREAM) {
                int errorDetectedFans = getDetectedFanCount();
                uint32_t errorExpectedFans = getExpectedFanCount();
                snprintf(&logBuffer, 0x800, "Error, fan lost, only find %d (< %d)\n", errorDetectedFans, errorExpectedFans);
                logMessage(SOCK_STREAM, &logBuffer, 0);
            }
            int fanLoopIndex = 0;
            while(SOCK_STREAM) {
                int fanLoopId = (int)(uint8_t)fanLoopIndex;
                ++fanLoopIndex;
                uint32_t loopExpectedFans = getExpectedFanCount();
                if((int)loopExpectedFans <= fanLoopId) {
                    break;
                }
                else if(globalDebugLevel > 3) {
                    int loopFanSpeed = getFanSpeed(fanLoopId);
                    snprintf(&logBuffer, 0x800, "fan_id = %d, fan_speed = %d\n", fanLoopId, loopFanSpeed);
                    logMessage(3, &logBuffer, 0);
                }
            }
            triggerAlarm(10, 0xFF);
            setFanFailureFlag(1);
            logEvent(7, "fan lost", logBufferSize);
            return -1;
        }
    }
    else {
        int retryCount = 10;
        do {
            resetFanController(fanControllerHandle);
            int detectedFanRetry = getDetectedFanCount();
            uint32_t expectedFanRetry = getExpectedFanCount();
            if((int)expectedFanRetry <= detectedFanRetry) {
                break;
            }
            delayMilliseconds(2000);
            --retryCount;
        }
        while(retryCount != 0);
        int finalDetectedFans = getDetectedFanCount();
        uint32_t finalExpectedFans = getExpectedFanCount();
        if((int)finalExpectedFans > finalDetectedFans) {
            goto errorHandling;
        }
    }
    setFanFailureFlag(0);
    return 0;
}
```