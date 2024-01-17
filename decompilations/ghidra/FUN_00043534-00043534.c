
void FUN_00043534(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)(param_1 + 4)) {
    return;
  }
  do {
    if (1 < (uint)param_2[3]) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n) == clib_red || debug_node_color(pTree,n) == clib_black"
                    ,"3rdparty/cstl/src/c_rb.c",0x1df,"debug_verify_property_1");
    }
    FUN_00043534(param_1,*param_2);
    param_2 = (undefined4 *)param_2[1];
  } while (param_2 != (undefined4 *)(param_1 + 4));
  return;
}

