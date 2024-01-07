
void FUN_00020c28(int param_1)

{
  undefined4 uVar1;
  char acStack_808 [2048];
  
  if (param_1 == 0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_808,0x800,"%s: input bad json param\n",DAT_00020ccc);
      FUN_0002e584(3,acStack_808,0);
      return;
    }
  }
  else {
    uVar1 = FUN_0004e744(&DAT_0099ede0);
    FUN_0004efd4(param_1,"miner_id",uVar1);
  }
  return;
}

