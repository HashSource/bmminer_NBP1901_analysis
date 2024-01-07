
undefined4 FUN_0005da58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  
  uVar1 = (**(code **)(param_1 + 0xc))(param_2);
  FUN_0005fadc(uVar1,*(undefined4 *)(param_1 + 8));
  iVar3 = *(int *)(*(int *)(param_1 + 4) + extraout_r1 * 4);
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(param_1 + 0x10))(param_2,*(undefined4 *)(iVar3 + 4));
    if (iVar2 != 0) break;
    iVar3 = *(int *)(iVar3 + 0x10);
  }
  return *(undefined4 *)(iVar3 + 8);
}

