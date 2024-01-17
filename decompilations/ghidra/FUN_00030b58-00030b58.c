
void FUN_00030b58(sem_t *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = sem_post(param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_0002f258(param_1,param_2,param_3,param_4);
  return;
}

