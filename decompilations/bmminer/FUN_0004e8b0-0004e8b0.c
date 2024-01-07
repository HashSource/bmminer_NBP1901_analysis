
undefined4 FUN_0004e8b0(char *param_1,__gnuc_va_list param_2)

{
  int iVar1;
  char *__s;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = vsnprintf((char *)0x0,0,param_1,param_2);
  if (iVar1 != 0) {
    __s = (char *)FUN_0004d880(iVar1 + 1U);
    if (__s == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      vsnprintf(__s,iVar1 + 1U,param_1,param_2);
      iVar2 = FUN_0004dfec(__s,iVar1);
      if (iVar2 == 0) {
        FUN_0004d898(__s);
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0004e144(__s,iVar1,1);
      }
    }
    return uVar3;
  }
  uVar3 = FUN_0004e700("",0);
  return uVar3;
}

