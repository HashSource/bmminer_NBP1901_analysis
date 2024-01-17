
void FUN_000581b0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *__ptr;
  void *pvVar4;
  uint uVar5;
  
  param_1 = (undefined4 *)*param_1;
  uVar2 = param_1[2];
  if (uVar2 != 0) {
    iVar3 = param_1[1];
    uVar5 = 0;
    do {
      __ptr = *(void **)(iVar3 + uVar5 * 4);
      iVar1 = uVar5 * 4;
      if (__ptr != (void *)0x0) {
        do {
          pvVar4 = *(void **)((int)__ptr + 0x10);
          if ((code *)param_1[5] != (code *)0x0) {
            (*(code *)param_1[5])(*(undefined4 *)((int)__ptr + 4));
          }
          if ((code *)param_1[6] != (code *)0x0) {
            (*(code *)param_1[6])(*(undefined4 *)((int)__ptr + 8));
          }
          free(__ptr);
          __ptr = pvVar4;
        } while (pvVar4 != (void *)0x0);
        iVar3 = param_1[1];
        uVar2 = param_1[2];
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar3 + iVar1) = 0;
    } while (uVar5 < uVar2);
  }
  *param_1 = 0;
  return;
}

