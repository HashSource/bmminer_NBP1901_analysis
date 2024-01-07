
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00020b7c(int param_1)

{
  undefined4 uVar1;
  char acStack_808 [2048];
  
  if (param_1 == 0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_808,0x800,"%s: input bad json param\n",DAT_00020c24);
      FUN_0002e584(3,acStack_808,0);
      return;
    }
  }
  else {
    uVar1 = FUN_0004ea14((int)_DAT_00080f50);
    FUN_0004efd4(param_1,"total_hash",uVar1);
  }
  return;
}

