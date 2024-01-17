
void FUN_0005d890(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *__ptr;
  uint uVar3;
  
  if (param_1 == (void *)0x0) {
    FUN_0005df98(2,"src/zc_hashtable.c",0x44,"a_table[%p] is NULL, just do nothing",0);
    return;
  }
  pvVar1 = *(void **)((int)param_1 + 4);
  uVar2 = *(uint *)((int)param_1 + 8);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      __ptr = *(void **)((int)pvVar1 + uVar3 * 4);
      if (__ptr != (void *)0x0) {
        do {
          pvVar1 = *(void **)((int)__ptr + 0x10);
          if (*(code **)((int)param_1 + 0x14) != (code *)0x0) {
            (**(code **)((int)param_1 + 0x14))(*(undefined4 *)((int)__ptr + 4));
          }
          if (*(code **)((int)param_1 + 0x18) != (code *)0x0) {
            (**(code **)((int)param_1 + 0x18))(*(undefined4 *)((int)__ptr + 8));
          }
          free(__ptr);
          __ptr = pvVar1;
        } while (pvVar1 != (void *)0x0);
        pvVar1 = *(void **)((int)param_1 + 4);
        uVar2 = *(uint *)((int)param_1 + 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
  }
  free(param_1);
  return;
}

