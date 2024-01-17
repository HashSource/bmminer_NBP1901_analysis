
void FUN_0004512c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + -4);
  iVar1 = 0x30;
  do {
    iVar2 = iVar1 + 1;
    puVar3 = puVar3 + 1;
    FUN_00040390(iVar1,*puVar3);
    iVar1 = iVar2;
  } while (iVar2 != 0x38);
  return;
}

