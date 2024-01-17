```c
void HandleMiningError(undefined4 errorCode, int isCriticalError)
{
  // If the error is critical, handle it appropriately
  if (isCriticalError != 0) {
    HandleCriticalError(); // Renamed FUN_0005f880 to HandleCriticalError for clarity
    return;
  }
  
  // If the error is not critical, raise signal 8 (SIGFPE - Floating point exception)
  raise(SIGFPE);
  return;
}
```