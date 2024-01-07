
void FUN_000602d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code **ppcVar3;
  int iVar4;
  
  iVar1 = DAT_00060310;
  iVar4 = DAT_0006030c + 0x602ea;
  _DT_INIT();
  iVar4 = iVar4 - (int)(code **)(iVar1 + 0x602f0) >> 2;
  if (iVar4 != 0) {
    iVar2 = 0;
    ppcVar3 = (code **)(iVar1 + 0x602f0);
    do {
      iVar2 = iVar2 + 1;
      (**ppcVar3)(param_1,param_2,param_3,*ppcVar3,param_4);
      ppcVar3 = ppcVar3 + 1;
    } while (iVar4 != iVar2);
  }
  return;
}

