
void FUN_00039584(undefined4 param_1)

{
  undefined4 uVar1;
  char acStack_810 [2052];
  
  uVar1 = param_1;
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"[DEBUG] Check if recv nonce enough, chain = %d.\n",param_1);
    uVar1 = FUN_0002e584(4,acStack_810,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      FUN_000388f4(uVar1);
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_004fcb3c + 4) + 0x28))(param_1);
  }
  return;
}

