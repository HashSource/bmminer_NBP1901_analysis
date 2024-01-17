
void FUN_0004c580(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 + 2U < 2) {
    return;
  }
  FUN_0004c2fc();
  iVar1 = FUN_0004dad4(param_1 + 0x28);
  if (iVar1 == param_2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("c == d","load.c",0x11a,DAT_0004c5c8);
}

