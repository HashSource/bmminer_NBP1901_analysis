
void * FUN_0004e0b8(int param_1,int param_2,int param_3)

{
  void *__dest;
  void *__src;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  __src = *(void **)(param_1 + 0x10);
  if (uVar2 < (uint)(param_2 + *(int *)(param_1 + 0xc))) {
    uVar1 = uVar2 << 1;
    if (uVar1 < uVar2 + param_2) {
      uVar1 = uVar2 + param_2;
    }
    __dest = (void *)FUN_0004d880(uVar1 << 2);
    if (__dest == (void *)0x0) {
      __src = (void *)0x0;
    }
    else {
      *(uint *)(param_1 + 8) = uVar1;
      *(void **)(param_1 + 0x10) = __dest;
      if (param_3 != 0) {
        memcpy(__dest,__src,*(int *)(param_1 + 0xc) << 2);
        FUN_0004d898(__src);
        return *(void **)(param_1 + 0x10);
      }
    }
  }
  return __src;
}

