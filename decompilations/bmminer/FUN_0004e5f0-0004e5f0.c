
undefined4 FUN_0004e5f0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  void *__src;
  int *piVar3;
  uint uVar4;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 1 && param_2 != (int *)0x0)) && (*param_2 == 1)) &&
     (iVar2 = FUN_0004e0b8(param_1,param_2[3]), iVar2 != 0)) {
    __n = param_2[3];
    __src = (void *)param_2[4];
    if (__n != 0) {
      uVar4 = 0;
      do {
        iVar2 = *(int *)((int)__src + uVar4 * 4);
        if ((iVar2 != 0) && (piVar3 = (int *)(iVar2 + 4), *(int *)(iVar2 + 4) != -1)) {
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = *piVar3 + 1;
          DataMemoryBarrier(0xb);
          __n = param_2[3];
          __src = (void *)param_2[4];
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < __n);
      __n = __n << 2;
    }
    memcpy((void *)(param_1[4] + param_1[3] * 4),__src,__n);
    param_1[3] = param_1[3] + param_2[3];
    return 0;
  }
  return 0xffffffff;
}

