
void FUN_000424c8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code **ppcVar3;
  code **ppcVar5;
  code **ppcVar4;
  
  iVar1 = FUN_00042308();
  if (iVar1 != 0x102) {
    ppcVar5 = DAT_00042524 + 5;
    ppcVar3 = DAT_00042524;
    do {
      ppcVar4 = ppcVar3 + 1;
      if (*ppcVar3 != (code *)0x0) {
        iVar2 = param_2;
        if (param_2 != 0) {
          iVar2 = 1;
        }
        (**ppcVar3)(iVar1,iVar2);
      }
      ppcVar3 = ppcVar4;
    } while (ppcVar4 != ppcVar5);
    return;
  }
  FUN_00042488(param_1);
  return;
}

