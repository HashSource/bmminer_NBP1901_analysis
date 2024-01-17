
void FUN_0001f164(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0001e29c(uVar2);
    if ((iVar1 != 0) && (param_1 == 0xff || uVar2 == param_1)) {
      if (param_2 == 0) {
        FUN_000505a4(uVar2 & 0xff,param_3,param_4,param_5,(undefined2)param_6);
      }
      else {
        FUN_00050560(uVar2 & 0xff,param_4,param_5,param_6);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

