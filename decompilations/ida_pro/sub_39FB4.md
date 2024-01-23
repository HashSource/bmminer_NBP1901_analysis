```c
int __fastcall InitializeBoard(int is_power_off)
{
  int boardIndex; // r4
  int status; // r4
  char debugMessage[2056]; // [sp+0h] [bp-808h] BYREF

  if (globalLogLevel > 4)
  {
    snprintf(debugMessage, 0x800u, "[DEBUG] Board init, is_power_off = %d.\n", is_power_off);
    LogDebugMessage(4, debugMessage, 0);
  }
  
  for (boardIndex = 0; boardIndex != 4; ++boardIndex)
  {
    if (CheckBoardPresence(boardIndex))
      ResetBoard((unsigned __int8)boardIndex);
  }
  
  PrepareBoardForOperation();
  status = VerifyBoardStatus();
  FinalizeBoardInitialization();
  SetBoardDefaults();
  FinalizeBoardInitialization();
  
  return status;
}
```