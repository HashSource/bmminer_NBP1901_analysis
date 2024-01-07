
bool FUN_0002fcd0(int param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  __ptr = (undefined4 *)FUN_0002f490(1,0xc,"util.c",DAT_0002fda0,0x469);
  puVar3 = __ptr + 1;
  *__ptr = param_2;
  __ptr[1] = puVar3;
  __ptr[2] = puVar3;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_0002f33c(DAT_0002fda0,0x46d);
  }
  bVar4 = *(char *)(param_1 + 8) != '\0';
  if (bVar4) {
    free(__ptr);
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 4);
    *(undefined4 **)(param_1 + 4) = puVar3;
    __ptr[1] = param_1;
    __ptr[2] = puVar2;
    *puVar2 = puVar3;
  }
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x28));
  FUN_0002f2c0((pthread_mutex_t *)(param_1 + 0xc),DAT_0002fda0,0x47a);
  (*DAT_0007ecc4)();
  return !bVar4;
}

