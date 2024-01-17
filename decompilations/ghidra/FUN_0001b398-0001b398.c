
undefined4 FUN_0001b398(void)

{
  size_t sVar1;
  size_t __nmemb;
  void *__ptr;
  undefined4 uVar2;
  char acStack_818 [2052];
  
  __nmemb = DAT_0058e004;
  sVar1 = DAT_0058dfbc;
  __ptr = calloc(DAT_0058dfbc,0x210);
  DAT_0058e018 = __ptr;
  if (__ptr == (void *)0x0) {
    if (3 < DAT_0007eb9c) {
      snprintf(acStack_818,0x800,"malloc %d runtime_chain failed\n",sVar1);
      FUN_0002e584(3,acStack_818,0);
      return 0x80000400;
    }
    uVar2 = 0x80000400;
  }
  else {
    DAT_0058e020 = calloc(__nmemb,8);
    if (DAT_0058e020 == (void *)0x0) {
      if (3 < DAT_0007eb9c) {
        snprintf(acStack_818,0x800,"malloc %d runtime_fan failed\n",__nmemb);
        FUN_0002e584(3,acStack_818,0);
        __ptr = DAT_0058e018;
      }
      free(__ptr);
      uVar2 = 0x80000400;
    }
    else {
      DAT_0058e010 = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

