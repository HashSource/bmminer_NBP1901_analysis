
undefined4 FUN_0004f238(int *param_1,uint param_2,int *param_3)

{
  bool bVar1;
  void *__src;
  void *__dest;
  int iVar2;
  int *piVar3;
  size_t __n;
  
  if (param_3 != (int *)0x0) {
    if (((param_1 == (int *)0x0) || (*param_1 != 1 || param_3 == param_1)) ||
       ((uint)param_1[3] < param_2)) {
      if (param_3[1] == -1) {
        return 0xffffffff;
      }
      piVar3 = param_3 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2;
    }
    else {
      __src = (void *)FUN_0004e0b8(param_1,1);
      if (__src != (void *)0x0) {
        __dest = (void *)param_1[4];
        iVar2 = (param_2 + 1) * 4;
        __n = iVar2 - 4;
        if (__dest == __src) {
          memmove((void *)((int)__dest + iVar2),(void *)((int)__src + __n),
                  (param_1[3] - param_2) * 4);
        }
        else {
          memcpy(__dest,__src,__n);
          memcpy((void *)(param_1[4] + iVar2),(void *)((int)__src + __n),(param_1[3] - param_2) * 4)
          ;
          FUN_0004d898(__src);
        }
        iVar2 = param_1[3];
        *(int **)(param_1[4] + __n) = param_3;
        param_1[3] = iVar2 + 1;
        return 0;
      }
      if (param_3[1] == -1) {
        return 0xffffffff;
      }
      piVar3 = param_3 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2;
    }
    if (iVar2 == 0) {
      FUN_0004eb6c(param_3);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

