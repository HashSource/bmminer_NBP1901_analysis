```c
uint32_t SetFanPWM(uint32_t pwmValue) {
    char logBuffer[2048];
    uint32_t pwmInitStatus = globalPwmInitState;

    if(pwmInitStatus == 0) {
        pwmInitStatus = InitializePWM(0);
        globalPwmInitState = pwmInitStatus;
    }

    if(pwmInitStatus < 0x80000000) {
        if(globalCurrentPwmValue != pwmValue) {
            if(minerLogLevel > 4) {
                snprintf(logBuffer, sizeof(logBuffer), "set pwm = %d", pwmValue);
                logMessage(INFO, logBuffer, 0);
                pwmInitStatus = globalPwmInitState;
            }
            ConfigurePWM(pwmInitStatus, pwmValue);
            pwmInitStatus = UpdateFanStatus(pwmValue);
            globalCurrentPwmValue = pwmValue;
        }
    }
    else if(isErrorLogged != 0 || isFanErrorDetected != 0 || minerErrorLevel > 2) {
        __builtin_strcpy(logBuffer, "pwm for fan init error");
        pwmInitStatus = logMessage(ERROR, logBuffer, 0);
    }

    return pwmInitStatus;
}
```

In this refactored function `SetFanPWM`, the parameter `pwmValue` represents the desired PWM (Pulse Width Modulation) value for controlling the fan speed. `pwmInitStatus` is used to track the PWM initialization status, and several global variables are used for condition checks and state maintenance. If the level of logging is sufficiently high, a message about the PWM setting change is logged. Depending on the initialization status, it either configures the fan's PWM or logs an error if there's an issue with the fan initialization.