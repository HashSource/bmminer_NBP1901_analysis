
void FUN_0001ea18(uint param_1,undefined4 param_2,int param_3,undefined param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2 & 0xff;
    iVar1 = FUN_0001e29c(uVar2);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == uVar3)) {
      if (param_3 == 0) {
        FUN_00050874(uVar3,param_2,param_4);
      }
      else {
        FUN_000508a0(uVar3,param_4);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

