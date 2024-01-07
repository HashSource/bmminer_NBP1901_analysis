
void FUN_0001f8b0(int param_1)

{
  undefined4 uVar1;
  uint local_80c;
  char acStack_808 [2048];
  
  local_80c = 0;
  if (param_1 == 0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_808,0x800,"%s: input bad json param\n",DAT_0001f980);
      FUN_0002e584(3,acStack_808,0);
    }
    return;
  }
  local_80c = DAT_00062668 & 0xffffff;
  uVar1 = FUN_0004e744(&local_80c);
  FUN_0004efd4(param_1,"rate_unit",uVar1);
  return;
}

