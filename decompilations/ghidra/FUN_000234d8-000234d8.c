
undefined4 FUN_000234d8(char *param_1,size_t param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00036548();
  if (iVar1 == 0) {
    snprintf(param_1,param_2,"%d",param_3);
    return 0;
  }
  if (iVar1 != 1) {
    snprintf(param_1,param_2,"searching");
    return 0;
  }
  uVar2 = FUN_000359ec();
  snprintf(param_1,param_2,"%s:%s","searchfailed",uVar2);
  return 0;
}

