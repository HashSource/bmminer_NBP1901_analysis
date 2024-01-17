
undefined4 FUN_00042308(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  iVar1 = FUN_00043014();
  if (iVar1 == param_1) {
    uVar2 = 0x100;
  }
  else {
    iVar1 = FUN_0004301c(iVar1);
    if (iVar1 == param_1) {
      uVar2 = 0x101;
    }
    else {
      snprintf(acStack_808,0x800,"unmaped port = %d\n",param_1);
      FUN_0002e584(0,acStack_808);
      uVar2 = 0x102;
    }
  }
  return uVar2;
}

