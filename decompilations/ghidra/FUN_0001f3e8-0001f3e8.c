
void FUN_0001f3e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  if (param_1 == 0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_808,0x800,"%s: input bad json param\n",DAT_0001f48c);
      FUN_0002e584(3,acStack_808,0);
      return;
    }
  }
  else {
    iVar1 = FUN_0001e28c();
    uVar2 = FUN_0004e990(iVar1,iVar1 >> 0x1f);
    FUN_0004efd4(param_1,"chain_num",uVar2);
  }
  return;
}

