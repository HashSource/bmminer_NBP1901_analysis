
void FUN_00043230(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c [2];
  
  piVar2 = *(int **)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(*piVar2 + 0x20) != 0) {
    FUN_00044000(iVar1,local_1c);
    (**(code **)(*piVar2 + 0x20))(local_1c[0]);
    iVar1 = *(int *)(param_1 + 0x14);
  }
  FUN_00044040(*(undefined4 *)(iVar1 + 0x14),param_2,param_3);
  return;
}

