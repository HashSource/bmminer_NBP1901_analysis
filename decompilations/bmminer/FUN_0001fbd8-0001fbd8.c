
void FUN_0001fbd8(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  char acStack_808 [2048];
  
  local_818 = 0;
  local_814 = 0;
  local_810 = 0;
  local_80c = 0;
  if (param_1 != 0 && param_2 < 4) {
    uVar1 = FUN_00019de4(param_2);
    snprintf((char *)&local_818,0x10,"%d",uVar1);
    uVar1 = FUN_0004e744(&local_818);
    FUN_0004efd4(param_1,"rate_ideal",uVar1);
    return;
  }
  if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
    return;
  }
  snprintf(acStack_808,0x800,"%s: input bad param\n",DAT_0001fccc);
  FUN_0002e584(3,acStack_808,0);
  return;
}

