
undefined4 FUN_0005d5f0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1[2] <= param_2) && (iVar1 = FUN_0005d428(param_1,param_1 + 2,param_2), iVar1 != 0)) {
    FUN_0005df98(2,"src/zc_arraylist.c",0x51,"expand_internal fail");
    return 0xffffffff;
  }
  puVar2 = (undefined4 *)(*param_1 + param_2 * 4);
  if ((*(int *)(*param_1 + param_2 * 4) != 0) && ((code *)param_1[3] != (code *)0x0)) {
    (*(code *)param_1[3])();
    puVar2 = (undefined4 *)(*param_1 + param_2 * 4);
  }
  iVar1 = param_1[1];
  *puVar2 = param_3;
  if (iVar1 <= param_2) {
    param_1[1] = param_2 + 1;
  }
  return 0;
}

