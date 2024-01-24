```c
void __fastcall processCommandLineArguments(int argc, const char **argv)
{
  int actualArgumentCount; // [sp+Ch] [bp-80Ch] BYREF
  char logBuffer[2056]; // [sp+10h] [bp-808h] BYREF

  actualArgumentCount = argc;
  printHelpOption(&off_7E618, "Options for both config file and command line");
  printHelpOption(&off_7EAC0, "Options for command line only");
  parseArguments(&actualArgumentCount, argv, (void (*)(const char *, ...))printErrorMessage);
  if ( actualArgumentCount != 1 )
  {
    strcpy(logBuffer, "Unexpected extra commandline arguments");
    logMessage(3, logBuffer, 1);
  }
  initializeEnvironment();
  if ( shouldRestartMiner )
    performMinerRestart();
  if ( logFilePath )
  {
    isLoggingEnabled = 1;
    strcpy(loggingFilePath, (const char *)logFilePath);
    if ( logFileMode )
      strcpy(loggingFileMode, (const char *)logFileMode);
    else
      strcpy(loggingFileMode, "a+");
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      snprintf(logBuffer, 0x800u, "Log file path: %s Open flag: %s", loggingFilePath, loggingFileMode);
      logMessage(3, logBuffer, 0);
    }
  }
}
```