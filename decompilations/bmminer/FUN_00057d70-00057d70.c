
int FUN_00057d70(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < param_1[1]) && (iVar1 = *(int *)(*param_1 + param_2 * 4), iVar1 != 0)) {
    return iVar1;
  }
  FUN_0005df98(2,"src/level_list.c",0x77,
               "l[%d] not in (0,254), or has no level defined,see configure file define, set to UNKOWN"
               ,param_2);
  if (param_1[1] < 0xff) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x3f8);
  }
  return iVar1;
}

