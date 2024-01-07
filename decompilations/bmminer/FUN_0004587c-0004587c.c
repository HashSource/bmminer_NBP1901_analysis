
void FUN_0004587c(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  pthread_mutex_lock(DAT_000458c0);
  if (param_2 >> 2 != 0) {
    uVar1 = 0x10;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      FUN_00040390(uVar1,*puVar2);
      uVar1 = 0x11;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)((int)param_1 + (param_2 & 0xfffffffc)));
  }
  pthread_mutex_unlock(DAT_000458c0);
  return;
}

