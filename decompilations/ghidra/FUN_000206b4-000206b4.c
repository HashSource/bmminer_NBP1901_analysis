
void FUN_000206b4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  if (param_1 != 0 && param_2 < 4) {
    iVar1 = FUN_00018b30(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_0004eb54();
    }
    else {
      uVar2 = FUN_0004eb48();
    }
    FUN_0004efd4(param_1,"eeprom",uVar2);
    return;
  }
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
    snprintf(acStack_808,0x800,"%s: input bad param\n",DAT_00020784);
    FUN_0002e584(3,acStack_808,0);
  }
  return;
}

