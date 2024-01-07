
void FUN_00037f08(void)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = FUN_0001e0f0();
  __ptr = DAT_004fcb38;
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      puVar2 = &DAT_00202a2a + iVar3;
      iVar3 = iVar3 + 1;
      __ptr_00 = *(void **)((int)__ptr + (int)puVar2 * 4 + 4);
      if (__ptr_00 != (void *)0x0) {
        free(__ptr_00);
        __ptr = DAT_004fcb38;
        *(undefined4 *)((int)DAT_004fcb38 + (int)puVar2 * 4 + 4) = 0;
      }
    } while (iVar1 != iVar3);
  }
  free(__ptr);
  DAT_004fcb38 = (void *)0x0;
  return;
}

