
undefined4 FUN_0005d428(void **param_1,int *param_2,int param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_2 * 2;
  if (*param_2 * 2 < param_3) {
    iVar6 = param_3;
  }
  pvVar1 = realloc(*param_1,iVar6 << 2);
  if (pvVar1 == (void *)0x0) {
    piVar3 = __errno_location();
    FUN_0005df98(2,"src/zc_arraylist.c",0x43,"realloc fail, errno[%d]",*piVar3);
    uVar2 = 0xffffffff;
  }
  else {
    iVar5 = *param_2;
    *param_1 = pvVar1;
    iVar4 = iVar6 - iVar5;
    if (iVar4 != 0) {
      memset((void *)((int)pvVar1 + iVar5 * 4),0,iVar4 * 4);
    }
    uVar2 = 0;
    *param_2 = iVar6;
  }
  return uVar2;
}

