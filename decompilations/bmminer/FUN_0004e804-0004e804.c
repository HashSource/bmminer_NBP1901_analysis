
undefined4 FUN_0004e804(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    uVar2 = FUN_0004e7a0(param_1,param_2,sVar1);
    return uVar2;
  }
  return 0xffffffff;
}

