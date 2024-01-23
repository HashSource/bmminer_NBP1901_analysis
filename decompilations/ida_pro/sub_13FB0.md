```c
int __fastcall setFanPWM(int desired_pwm_value)
{
  int operation_result; // r0
  char log_buffer[2064]; // [sp+0h] [bp-810h] BYREF

  operation_result = pwmInitializedFlag;
  if ( !pwmInitializedFlag )
  {
    operation_result = initializePWM(pwmInitializedFlag);
    pwmInitializedFlag = operation_result;
  }
  if ( operation_result < 0 )
  {
    if ( logDebugLevel || logVerboseLevel || logThresholdLevel > 2 )
    {
      strcpy(log_buffer, "pwm for fan init error");
      return logMessage(3, log_buffer, 0);
    }
  }
  else if ( desired_pwm_value != currentPWMValue )
  {
    if ( (unsigned int)globalLogLevel > 4 )
    {
      snprintf(log_buffer, 0x800u, "set pwm = %d", desired_pwm_value);
      logMessage(4, log_buffer, 0);
      operation_result = pwmInitializedFlag;
    }
    setPWMValue(operation_result, desired_pwm_value);
    operation_result = applyFanControl(desired_pwm_value);
    currentPWMValue = desired_pwm_value;
  }
  return operation_result;
}
```