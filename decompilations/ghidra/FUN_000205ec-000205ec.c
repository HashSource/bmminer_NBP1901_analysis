
void FUN_000205ec(int param_1,uint param_2)

{
  undefined4 uVar1;
  char acStack_808 [2048];
  
  if (param_1 != 0 && param_2 < 4) {
    uVar1 = FUN_0004e990(*(int *)(&DAT_00081118 + param_2 * 4),
                         *(int *)(&DAT_00081118 + param_2 * 4) >> 0x1f);
    FUN_0004efd4(param_1,"nonce",uVar1);
    return;
  }
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
    snprintf(acStack_808,0x800,"%s: input bad param\n",DAT_000206b0);
    FUN_0002e584(3,acStack_808,0);
  }
  return;
}

