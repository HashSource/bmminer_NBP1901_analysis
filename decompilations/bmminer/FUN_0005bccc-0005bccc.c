
undefined4 FUN_0005bccc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x187c) == FUN_000595c0 || *(code **)(param_1 + 0x187c) == FUN_00059cd4)
  {
    iVar1 = FUN_0005da58(param_2,param_1 + 0x1880);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x2084) = *(undefined4 *)(iVar1 + 0x404);
    }
    return 0;
  }
  return 0;
}

