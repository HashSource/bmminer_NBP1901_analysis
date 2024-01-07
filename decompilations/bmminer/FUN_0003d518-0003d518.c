
void FUN_0003d518(undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_14 [2];
  
  iVar1 = FUN_0003d468(param_1,local_14);
  if (iVar1 == 0) {
    if (local_14[0] < 0) {
      FUN_0003d2b4("\'%s\' is negative",param_1);
      return;
    }
    *param_2 = local_14[0];
  }
  return;
}

