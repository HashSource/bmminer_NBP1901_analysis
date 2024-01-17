
undefined4 FUN_00043d9c(undefined4 *param_1)

{
  void *pvVar1;
  void **__ptr;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  ppvVar2 = (void **)(param_1 + 1);
  ppvVar4 = (void **)*param_1;
  while (__ptr = ppvVar4, __ptr != ppvVar2) {
    ppvVar4 = (void **)*__ptr;
    if (((void **)*__ptr == ppvVar2) &&
       (ppvVar3 = (void **)__ptr[1], ppvVar4 = ppvVar3, ppvVar2 == ppvVar3)) {
      pvVar1 = __ptr[4];
      if (param_1[7] != 0) {
        FUN_00044000(pvVar1,&local_20);
        (*(code *)param_1[7])(local_20);
        pvVar1 = __ptr[4];
      }
      FUN_00044074(pvVar1);
      pvVar1 = __ptr[5];
      if (pvVar1 != (void *)0x0) {
        if (param_1[8] != 0) {
          FUN_00044000(pvVar1,&local_1c);
          (*(code *)param_1[8])(local_1c);
          pvVar1 = __ptr[5];
        }
        FUN_00044074(pvVar1);
      }
      ppvVar4 = (void **)__ptr[2];
      if (ppvVar4 == (void **)0x0) {
        free(__ptr);
        ppvVar4 = ppvVar3;
      }
      else if (ppvVar3 == (void **)*ppvVar4) {
        if (ppvVar3 != (void **)ppvVar4[1]) {
          free(ppvVar4[1]);
          ppvVar4[1] = ppvVar3;
        }
      }
      else {
        free(*ppvVar4);
        *ppvVar4 = ppvVar3;
      }
    }
  }
  free(param_1);
  return 0;
}

