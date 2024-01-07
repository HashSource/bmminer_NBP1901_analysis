
int * FUN_000432d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)malloc(4);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_000437ac(param_1,param_2,param_3);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      return piVar1;
    }
  }
  return (int *)0x0;
}

