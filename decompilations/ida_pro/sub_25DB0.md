```c
int check_network_status_and_handle()
{
  int actionResult; // r0
  bool networkStatusFlag; // zf
  int timeDiffSeconds; // r2
  int logResult; // r0
  unsigned int randomValue; // r0
  __time_t currentTime; // [sp+0h] [bp-820h] BYREF
  unsigned int randomSeed; // [sp+4h] [bp-81Ch]
  char logBuffer[2072]; // [sp+8h] [bp-818h] BYREF

  get_current_time(&currentTime);
  actionResult = (int)lastNetworkTime;
  networkStatusFlag = lastNetworkTime[0] == 0;
  if ( !lastNetworkTime[0] )
    networkStatusFlag = lastNetworkTime[1] == 0;
  if ( networkStatusFlag )
    return get_current_time(lastNetworkTime);
  timeDiffSeconds = currentTime - lastNetworkTime[0];
  if ( (int)(randomSeed - lastNetworkTime[1]) < 0 )
    --timeDiffSeconds;
  if ( timeDiffSeconds <= 300 )
  {
    if ( networkProblemReported )
    {
      if ( (unsigned int)minimumLogLevel > 3 )
      {
        strcpy(logBuffer, "network connection resume, restart");
        log_message(3, logBuffer, 0);
      }
      actionResult = execute_restart_command(6u, "network connection resume, restart...");
      networkProblemReported = 0;
      pendingRestartFlag[0] = 0;
    }
    else if ( pendingRestartFlag[0] )
    {
      if ( (unsigned int)minimumLogLevel > 3 )
      {
        strcpy(logBuffer, "network connection resume");
        log_message(3, logBuffer, 0);
      }
      logResult = log_restart_event();
      actionResult = execute_restart_command(logResult, 0);
      pendingRestartFlag[0] = 0;
    }
  }
  else if ( pendingRestartFlag[0] )
  {
    if ( pendingRestartFlag[0] + 299 < timeDiffSeconds && !networkProblemReported )
    {
      if ( (unsigned int)minimumLogLevel > 3 )
      {
        snprintf(logBuffer, 0x800u, "network connection lost for 5 min + %d seconds, power off...", pendingRestartFlag[0]);
        log_message(3, logBuffer, 0);
      }
      actionResult = power_off_device();
      networkProblemReported = 1;
    }
  }
  else
  {
    execute_restart_command(3u, "network connection lost");
    randomValue = get_random_seed();
    if ( !randomValue )
      randomValue = randomSeed;
    srandom(randomValue);
    actionResult = random();
    pendingRestartFlag[0] = actionResult % 300 + 1;
    if ( (unsigned int)minimumLogLevel > 3 )
    {
      snprintf(logBuffer, 0x800u, "will power off in %d seconds in case not resume", actionResult % 300 + 1);
      return log_message(3, logBuffer, 0);
    }
  }
  return actionResult;
}
```