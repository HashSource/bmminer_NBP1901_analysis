
void FUN_0005d580(void **param_1)

{
  int iVar1;
  void *pvVar2;
  void *__ptr;
  int iVar3;
  
  if (param_1 == (void **)0x0) {
    return;
  }
  __ptr = *param_1;
  if ((param_1[3] != (void *)0x0) && (pvVar2 = param_1[1], 0 < (int)pvVar2)) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      if (*(int *)((int)__ptr + iVar1) != 0) {
        (*(code *)param_1[3])();
        __ptr = *param_1;
        pvVar2 = param_1[1];
      }
    } while (iVar3 < (int)pvVar2);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}

