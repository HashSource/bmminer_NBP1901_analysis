
undefined4 FUN_00042388(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 2) {
    iVar1 = FUN_0004300c();
    if (-1 < iVar1) {
      uVar2 = FUN_0004300c();
      return uVar2;
    }
  }
  else if (param_1 < 3) {
    if (param_1 == 1) {
      uVar2 = FUN_00042368();
      return uVar2;
    }
  }
  else if (param_1 == 0x100) {
    iVar1 = FUN_00043014();
    if (-1 < iVar1) {
      uVar2 = FUN_00043014();
      return uVar2;
    }
  }
  else if ((param_1 == 0x101) && (iVar1 = FUN_0004301c(), -1 < iVar1)) {
    uVar2 = FUN_0004301c();
    return uVar2;
  }
  return 0;
}

