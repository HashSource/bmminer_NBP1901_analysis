
void FUN_00020788(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined auStack_830 [32];
  char acStack_810 [2052];
  
  memset(auStack_830,0,0x20);
  if (param_1 != 0 && param_2 < 4) {
    FUN_00017fd8(param_2,auStack_830,0x20);
    uVar1 = FUN_0004e744(auStack_830);
    FUN_0004efd4(param_1,"sn",uVar1);
    return;
  }
  if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
    return;
  }
  snprintf(acStack_810,0x800,"%s: input bad param\n",DAT_0002087c);
  FUN_0002e584(3,acStack_810,0);
  return;
}

