
undefined4 FUN_0004a8c8(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  snprintf(param_3,0xb,"%p",param_2);
  iVar1 = FUN_0004bc44(param_1,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_0004eb60();
    uVar2 = FUN_0004b9b0(param_1,param_3,uVar2);
    return uVar2;
  }
  return 0xffffffff;
}

