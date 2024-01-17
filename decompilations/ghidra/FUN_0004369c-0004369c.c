
void FUN_0004369c(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 + 1;
  iVar2 = iVar1;
  if (param_2 != (undefined4 *)(param_1 + 4)) {
    do {
      iVar1 = iVar2;
      if (param_2[3] == 0) {
        iVar1 = iVar2 + 1;
        param_3 = iVar2;
      }
      FUN_0004369c(param_1,*param_2,param_3,param_4);
      param_2 = (undefined4 *)param_2[1];
      iVar2 = iVar1;
    } while (param_2 != (undefined4 *)(param_1 + 4));
  }
  if (*param_4 == -1) {
    *param_4 = iVar1;
    return;
  }
  if (*param_4 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("black_count == *path_black_count","3rdparty/cstl/src/c_rb.c",0x205,DAT_00043728);
  }
  return;
}

