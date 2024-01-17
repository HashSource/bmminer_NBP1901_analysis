
void * memmem(void *__haystack,size_t __haystacklen,void *__needle,size_t __needlelen)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  uint __n;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int local_2c [2];
  
  if (__needlelen != 0) {
    if (__needlelen <= __haystacklen) {
      if (0x1f < __needlelen) {
        pvVar2 = (void *)FUN_0003e9d8();
        return pvVar2;
      }
                    /* WARNING: Load size is inaccurate */
      pvVar2 = memchr(__haystack,(uint)*__needle,__haystacklen);
      if (pvVar2 == (void *)0x0 || __needlelen == 1) {
        return pvVar2;
      }
      uVar9 = __haystacklen - ((int)pvVar2 - (int)__haystack);
      if (__needlelen <= uVar9) {
        if (__needlelen < 3) {
          __n = __needlelen - 1;
          local_2c[0] = 1;
        }
        else {
          __n = FUN_0003e8c8(__needle,__needlelen,local_2c);
        }
        iVar11 = local_2c[0];
        iVar3 = memcmp(__needle,(void *)((int)__needle + local_2c[0]),__n);
        if (iVar3 == 0) {
          uVar6 = __n - 1;
          uVar4 = 0;
          uVar10 = 0;
          do {
            uVar7 = __n;
            if (__n < uVar10) {
              uVar7 = uVar10;
            }
            if (uVar7 < __needlelen) {
              pcVar12 = (char *)((int)__needle + uVar7);
              pcVar5 = (char *)((int)pvVar2 + uVar7 + uVar4);
              if (*(char *)((int)__needle + uVar7) == *(char *)((int)pvVar2 + uVar7 + uVar4)) {
                do {
                  uVar7 = uVar7 + 1;
                  if (__needlelen == uVar7) goto LAB_0003ee1c;
                  pcVar12 = pcVar12 + 1;
                  pcVar5 = pcVar5 + 1;
                } while (*pcVar12 == *pcVar5);
              }
              uVar4 = (1 - __n) + uVar4 + uVar7;
              uVar10 = 0;
            }
            else {
LAB_0003ee1c:
              uVar7 = __n;
              if ((uVar10 < __n) &&
                 (pcVar5 = (char *)((int)pvVar2 + uVar6 + uVar4),
                 *(char *)((int)__needle + uVar6) == *(char *)((int)pvVar2 + uVar6 + uVar4))) {
                pcVar12 = (char *)((int)__needle + uVar6);
                uVar1 = uVar6;
                do {
                  uVar7 = uVar1;
                  if (uVar7 - 1 == uVar10 - 1) break;
                  pcVar12 = pcVar12 + -1;
                  pcVar5 = pcVar5 + -1;
                  uVar1 = uVar7 - 1;
                } while (*pcVar12 == *pcVar5);
              }
              if (uVar7 < uVar10 + 1) {
                return (void *)((int)pvVar2 + uVar4);
              }
              uVar4 = uVar4 + iVar11;
              uVar10 = __needlelen - iVar11;
            }
          } while (uVar4 <= uVar9 - __needlelen);
        }
        else {
          iVar11 = __n - 1;
          uVar4 = __needlelen - __n;
          if (__needlelen - __n < __n) {
            uVar4 = __n;
          }
          uVar10 = 0;
          do {
            if (__n < __needlelen) {
              pcVar12 = (char *)((int)pvVar2 + __n + uVar10);
              pcVar5 = (char *)((int)__needle + __n);
              sVar8 = __n;
              if (*(char *)((int)pvVar2 + __n + uVar10) == *(char *)((int)__needle + __n)) {
                do {
                  sVar8 = sVar8 + 1;
                  if (__needlelen == sVar8) goto LAB_0003ef48;
                  pcVar5 = pcVar5 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (*pcVar5 == *pcVar12);
              }
              uVar10 = (1 - __n) + uVar10 + sVar8;
            }
            else {
LAB_0003ef48:
              if (iVar11 == -1) {
LAB_0003ef8c:
                return (void *)((int)pvVar2 + uVar10);
              }
              pcVar12 = (char *)((int)pvVar2 + iVar11 + uVar10);
              pcVar5 = (char *)((int)__needle + iVar11);
              if (*(char *)((int)pvVar2 + iVar11 + uVar10) == *(char *)((int)__needle + iVar11)) {
                do {
                  if (pcVar5 == (char *)__needle) goto LAB_0003ef8c;
                  pcVar5 = pcVar5 + -1;
                  pcVar12 = pcVar12 + -1;
                } while (*pcVar5 == *pcVar12);
              }
              uVar10 = uVar10 + uVar4 + 1;
            }
          } while (uVar10 <= uVar9 - __needlelen);
        }
      }
    }
    __haystack = (void *)0x0;
  }
  return __haystack;
}

