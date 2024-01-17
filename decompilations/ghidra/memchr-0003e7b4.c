
void * memchr(void *__s,int __c,size_t __n)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (__n == 0) {
    return (void *)0x0;
  }
  uVar5 = __c & 0xff;
  if (((uint)__s & 3) == 0) {
LAB_0003e80c:
    uVar4 = (__c & 0xffU) << 8 | uVar5;
    uVar4 = uVar4 | uVar4 << 0x10;
    if (3 < __n) {
                    /* WARNING: Load size is inaccurate */
      uVar3 = *__s ^ uVar4;
      for (uVar3 = uVar3 + 0xfefefeff & ~uVar3; (uVar3 & 0x80808080) == 0;
          uVar3 = uVar3 + 0xfefefeff & ~uVar3) {
        __s = (void *)((int)__s + 4);
        __n = __n - 4;
        if (__n < 4) {
          if (__n == 0) {
            return (void *)0x0;
          }
          break;
        }
                    /* WARNING: Load size is inaccurate */
        uVar3 = *__s ^ uVar4;
      }
    }
                    /* WARNING: Load size is inaccurate */
    if (*__s == uVar5) {
      return __s;
    }
    puVar2 = (uint *)((int)__s + __n);
    while( true ) {
      __s = (void *)((int)__s + 1);
      if ((uint *)__s == puVar2) break;
                    /* WARNING: Load size is inaccurate */
      if (*__s == uVar5) {
        return (uint *)__s;
      }
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if (*__s == uVar5) {
      return __s;
    }
    __s = (uint *)((int)__s + 1);
    while( true ) {
      __n = __n - 1;
      puVar2 = (uint *)__s;
      if (__n == 0) break;
      if (((uint)__s & 3) == 0) goto LAB_0003e80c;
                    /* WARNING: Load size is inaccurate */
      bVar1 = *__s;
      __s = (uint *)((int)__s + 1);
      if (bVar1 == uVar5) {
        return puVar2;
      }
    }
  }
  return (void *)0x0;
}

