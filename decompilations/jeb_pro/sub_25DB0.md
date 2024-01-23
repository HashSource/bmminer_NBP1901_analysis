```c
int checkNetworkConnectionStatus() {
    int currentTime;
    int* unusedPtr;
    int logBuffer;
    int copiedLogBuffer;
    int networkStatus;
    getTime(&currentTime);
    int networkStatusPrevious = &g_NetworkLastCheckTime;
    int lastNetworkCheckTime = (int)g_NetworkLastCheckTime;
    int networkDownTimeSeconds = (int)g_NetworkDownTimeSeconds;
    if((lastNetworkCheckTime == 0 && networkDownTimeSeconds == 0) == 0) {
        size_t elapsedTime = (size_t)(currentTime - lastNetworkCheckTime);
        if(networkDownTimeSeconds > (int)unusedPtr) {
            --elapsedTime;
        }
        if((int)elapsedTime <= 300) {
            if(g_NetworkWasDownFlag != 0) {
                if(g_VerboseLevel > 3) {
                    __builtin_strcpy(&logBuffer, "network connection resume, restart");
                    outputLog(3, &logBuffer, 0);
                }
                notifyNetworkResume(6, "network connection resume, restart...", elapsedTime);
                g_NetworkWasDownFlag = 0;
                g_NetworkDownStart = 0;
                return networkStatus;
            }
            if(g_NetworkDownStart == 0) {
                return networkStatusPrevious;
            }
            if(g_VerboseLevel > 3) {
                logBuffer = 0x7774656e;
                int logPart2 = 543912559;
                int logPart3 = 1852731235;
                int logPart4 = 0x69746365;
                __builtin_strcpy(&copiedLogBuffer, "on resume");
                outputLog(3, &logBuffer, 0);
            }
            uint32_t logIndex = notifyNetworkStatusChange();
            notifyNetworkResume((int)logIndex, 0, elapsedTime);
            g_NetworkDownStart = 0;
            return (int)logIndex;
        }
        uint32_t networkDownDuration = g_NetworkDownStart;
        if(networkDownDuration == 0) {
            notifyNetworkResume(3, "network connection lost", elapsedTime);
            int* timeSeed = getRandomSeed();
            if(timeSeed == 0) {
                timeSeed = unusedPtr;
            }
            srandom((unsigned int)timeSeed);
            networkStatusPrevious = random();
            elapsedTime = g_VerboseLevel;
            g_NetworkDownStart = (uint32_t)(networkStatusPrevious - networkStatusPrevious / 300 * 300 + SOCK_STREAM);
            if(elapsedTime <= 3) {
                return networkStatusPrevious;
            }
            snprintf(&logBuffer, 0x800, "will power off in %d seconds in case not resume", (uint32_t)(networkStatusPrevious - networkStatusPrevious / 300 * 300 + SOCK_STREAM));
            return outputLog(3, &logBuffer, 0);
        }
        if((int)(networkDownDuration + 299) < (int)elapsedTime && g_NetworkWasDownFlag == 0) {
            size_t verboseLevel = g_VerboseLevel;
            if(verboseLevel > 3) {
                snprintf(&logBuffer, 0x800, "network connection lost for 5 min + %d seconds, power off...", networkDownDuration);
                networkStatusPrevious = outputLog(3, &logBuffer, 0);
            }
            networkStatusPrevious = handleExtendedNetworkDown(networkStatusPrevious, (int)(networkDownDuration + 299), verboseLevel);
            g_NetworkWasDownFlag = 1;
        }
        return networkStatusPrevious;
    }
    return getTime((int*)&g_NetworkLastCheckTime);
}
```