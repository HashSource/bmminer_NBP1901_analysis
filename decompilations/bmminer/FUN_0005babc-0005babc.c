
undefined4 FUN_0005babc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined *)(param_1 + 0x1001)) {
  case 0x21:
    if (*(int *)(*(int *)(param_2 + 8) + 0x124) == *(int *)(param_1 + 0x1004)) {
      return 0;
    }
    break;
  default:
    return 0;
  case 0x2a:
    break;
  case 0x2e:
    if (*(int *)(*(int *)(param_2 + 8) + 0x124) < *(int *)(param_1 + 0x1004)) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0005bb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x187c))();
    return uVar1;
  case 0x3d:
    if (*(int *)(*(int *)(param_2 + 8) + 0x124) != *(int *)(param_1 + 0x1004)) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0005bb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x187c))();
  return uVar1;
}

