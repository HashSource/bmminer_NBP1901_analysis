
void FUN_00043594(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 4);
LAB_000435a4:
  piVar1 = param_2;
  if (param_2 == piVar3) {
    return;
  }
  do {
    while (param_2 = (int *)*piVar1, piVar1[3] != 1) {
      piVar2 = (int *)piVar1[1];
LAB_000435b0:
      FUN_00043594(param_1);
      piVar1 = piVar2;
      if (piVar2 == piVar3) {
        return;
      }
    }
    if ((param_2 != piVar3) && (param_2[3] != 0)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n->left) == clib_black","3rdparty/cstl/src/c_rb.c",0x1ef
                    ,DAT_00043698);
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 == piVar3) {
      piVar1 = (int *)piVar1[2];
      if (piVar1 != piVar3) {
LAB_0004360c:
        if (piVar1[3] != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("debug_node_color(pTree,n->parent) == clib_black","3rdparty/cstl/src/c_rb.c"
                        ,0x1f1,DAT_00043698);
        }
        goto LAB_000435b0;
      }
      goto LAB_000435a4;
    }
    if (piVar2[3] != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("debug_node_color(pTree,n->right) == clib_black","3rdparty/cstl/src/c_rb.c",
                    0x1f0,DAT_00043698);
    }
    piVar1 = (int *)piVar1[2];
    if (piVar1 != piVar3) goto LAB_0004360c;
    FUN_00043594(param_1);
    piVar1 = piVar2;
  } while( true );
}

