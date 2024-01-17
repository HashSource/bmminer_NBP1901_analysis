
void FUN_0004372c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  FUN_00043534(param_1,piVar1);
  if ((piVar1 != param_1 + 1) && (piVar1[3] != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("debug_node_color(pTree,root) == clib_black","3rdparty/cstl/src/c_rb.c",0x1e6,
                  DAT_000437a8);
  }
  FUN_00043594(param_1,piVar1);
  FUN_0004369c(param_1,piVar1,0);
  return;
}

