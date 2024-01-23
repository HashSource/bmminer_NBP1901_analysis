```c
int MonitorFanSpeedAndUpdateStatus(int targetSpeed) {
    int fanStatus;
    char logBuffer;
    int fanIndex = 0;
    uint32_t totalFans = GetTotalFans();
    while(totalFans > fanIndex) {
        int currentFanSpeed = GetFanSpeed(fanIndex);
        if(currentFanSpeed >= 0) {
            if(globalLogLevel > 4) {
                snprintf(&logBuffer, 0x800, "fan[%u] speed[%u]\n", (int)(uint8_t)fanIndex, currentFanSpeed);
                LogDebugMessage(4, &logBuffer, 0);
            }
            UpdateFanSpeedRecord(fanIndex, currentFanSpeed);
            if(currentFanSpeed <= 9999) {
                fanStatus = SOCK_STREAM;
                if(targetSpeed > (uint32_t)currentFanSpeed) {
                    goto updateFanStatus;
                }
            }
            else {
            updateFanStatus:
                fanStatus = 0;
            }
            SetFanStatus(fanIndex, fanStatus);
        }
        ++fanIndex;
        totalFans = GetTotalFans();
    }
    return (int)(uint8_t)fanIndex;
}
```