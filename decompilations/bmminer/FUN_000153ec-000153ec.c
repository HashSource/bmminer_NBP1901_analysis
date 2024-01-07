
int FUN_000153ec(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_0001e29c();
  if (param_2 < 3 && iVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = FUN_0001e19c();
    }
    else {
      uVar2 = FUN_00014434();
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      iVar1 = 0xff;
      do {
        if (param_2 == 0) {
          iVar3 = FUN_000152f0();
        }
        else if (param_2 == 1) {
          iVar3 = FUN_00015354(param_1,uVar4 & 0xff);
        }
        else {
          iVar3 = FUN_000153a0();
        }
        iVar5 = iVar1;
        if (((iVar3 != 0xff) && (iVar5 = iVar3, iVar1 != 0xff)) && (iVar5 = iVar1, iVar1 < iVar3)) {
          iVar5 = iVar3;
        }
        uVar4 = uVar4 + 1;
        iVar1 = iVar5;
      } while (uVar4 != uVar2);
      return iVar5;
    }
  }
  return 0xff;
}

