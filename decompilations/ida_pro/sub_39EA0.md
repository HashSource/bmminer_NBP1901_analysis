```c
int checkAllChainPatternTestDone()
{
  int chainIndex; // r4
  int isChainAvailable; // r0
  int chainStatusIndex; // r3
  char debugMessage[2064]; // [sp+0h] [bp-810h] BYREF

  // If the global log level allows for debug messages, log that we're going to check the chains.
  if (globalLogLevel > 4)
  {
    strcpy(debugMessage, "[DEBUG] Check if all chain pattern test done except block.\n");
    logMessage(DEBUG_LEVEL, debugMessage, 0);
  }

  // If there is a valid control structure for the chains and it has non-NULL start pointer.
  if (chainControlStruct && *(int *)(chainControlStruct + 4))
  {
    chainIndex = 0;
    // Loop through each chain to check the pattern test status.
    while (1)
    {
      isChainAvailable = checkChainAvailable(chainIndex);
      chainStatusIndex = chainIndex + 2;
      ++chainIndex;
      // If the chain is available, check its pattern test status.
      if (isChainAvailable)
      {
        // If any status other than '0' (which means pending) or '2' (meaning done) is found, the test is not done yet.
        if (*(int *)(chainControlStruct + 4 * chainStatusIndex) & 0xFFFFFFFD)
          break;
      }
      // If we have checked all 4 chains, they are all done.
      if (chainIndex == 4)
        return 1;
    }
    // If we've exited the loop early, not all tests have completed.
    return 0;
  }
  else if (globalLogLevel <= 3) // If the control structure is invalid, and log level is not debug, return that tests are done.
  {
    return 1;
  }
  else // If the control structure is invalid but log level permits warnings, log the error and return tests are done.
  {
    strcpy(debugMessage, "Handle is NULL.\n");
    logMessage(WARNING_LEVEL, debugMessage, 0);
    return 1;
  }
}
```