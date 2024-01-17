
void FUN_00057a8c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_0005df98(2,"src/level_list.c",0x19,"levels is null or 0");
    return;
  }
  FUN_0005df98(param_2,"src/level_list.c",0x1a,"--level_list[%p]--",param_1);
  iVar1 = param_1[1];
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(*param_1 + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_0005f3f8(iVar2,param_2);
        iVar1 = param_1[1];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

