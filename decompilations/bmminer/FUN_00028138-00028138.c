
void FUN_00028138(int param_1)

{
  char acStack_808 [2048];
  
  if (3000000 < param_1) {
    FUN_0001eb74();
    FUN_000304d4(100);
  }
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_808,0x800,"set UART baud to %d\n",param_1);
    FUN_0002e584(3,acStack_808,0);
  }
  FUN_0001e9cc(param_1);
  FUN_0001e160();
  FUN_00014f20();
  return;
}

