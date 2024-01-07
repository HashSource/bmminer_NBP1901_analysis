
void FUN_0001fb14(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  if (param_1 != 0 && param_2 < 4) {
    iVar1 = FUN_0001a2e0(param_2);
    uVar2 = FUN_0004e990(iVar1,iVar1 >> 0x1f);
    FUN_0004efd4(param_1,"freq_avg",uVar2);
    return;
  }
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
    snprintf(acStack_808,0x800,"%s: input bad param\n",DAT_0001fbd4);
    FUN_0002e584(3,acStack_808,0);
  }
  return;
}

