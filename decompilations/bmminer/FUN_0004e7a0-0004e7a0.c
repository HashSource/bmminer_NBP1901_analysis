
undefined4 FUN_0004e7a0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 2 && param_2 != 0)) &&
     (iVar1 = FUN_0004d8b0(param_2,param_3), iVar1 != 0)) {
    FUN_0004d898(param_1[2]);
    param_1[2] = iVar1;
    param_1[3] = param_3;
    return 0;
  }
  return 0xffffffff;
}

