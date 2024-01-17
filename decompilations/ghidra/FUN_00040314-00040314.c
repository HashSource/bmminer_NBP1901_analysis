
undefined4 FUN_00040314(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((DAT_00504ca4 == 0) && (iVar1 = FUN_00040038(), iVar1 != 0)) {
    return 0xffffffff;
  }
  if (DAT_00504c8c == 0) {
    iVar1 = *(int *)(&DAT_0007f130 + param_1 * 4);
  }
  else {
    iVar1 = *(int *)(&DAT_0007ee48 + param_1 * 4);
  }
  *param_2 = *(undefined4 *)(DAT_00504c98 + iVar1 * 4);
  return 0;
}

