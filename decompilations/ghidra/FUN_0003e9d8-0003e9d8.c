
int FUN_0003e9d8(int param_1,int param_2,char *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint __n;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  uint local_42c;
  uint local_428 [257];
  
  uVar11 = param_4 - 1;
  if (param_4 < 3) {
    local_42c = 1;
    __n = uVar11;
  }
  else {
    __n = FUN_0003e8c8(param_3,param_4,&local_42c);
  }
  uVar9 = local_42c;
  puVar7 = &local_42c;
  do {
    puVar7 = puVar7 + 1;
    *puVar7 = param_4;
  } while (puVar7 != local_428 + 0xff);
  if (param_4 != 0) {
    pbVar4 = (byte *)(param_3 + -1);
    uVar8 = uVar11;
    do {
      pbVar4 = pbVar4 + 1;
      local_428[*pbVar4] = uVar8;
      bVar14 = uVar8 != 0;
      uVar8 = uVar8 - 1;
    } while (bVar14);
  }
  iVar2 = memcmp(param_3,param_3 + local_42c,__n);
  if (iVar2 == 0) {
    uVar6 = __n - 1;
    uVar8 = 0;
    uVar10 = 0;
    do {
      while( true ) {
        uVar5 = local_428[*(byte *)(param_1 + uVar8 + uVar11)];
        if (uVar5 == 0) break;
        if (uVar10 != 0 && uVar5 < uVar9) {
          uVar5 = param_4 - uVar9;
        }
        uVar8 = uVar8 + uVar5;
LAB_0003eab8:
        uVar10 = 0;
        if (param_2 - param_4 < uVar8) {
          return 0;
        }
      }
      uVar5 = __n;
      if (__n < uVar10) {
        uVar5 = uVar10;
      }
      if (uVar5 < uVar11) {
        pcVar13 = param_3 + uVar5;
        pcVar12 = (char *)(param_1 + uVar5 + uVar8);
        if (*(char *)(param_1 + uVar5 + uVar8) == param_3[uVar5]) {
          do {
            uVar5 = uVar5 + 1;
            if (uVar11 <= uVar5) goto LAB_0003eb30;
            pcVar13 = pcVar13 + 1;
            pcVar12 = pcVar12 + 1;
          } while (*pcVar13 == *pcVar12);
        }
        uVar8 = uVar5 + (1 - __n) + uVar8;
        goto LAB_0003eab8;
      }
LAB_0003eb30:
      uVar5 = __n;
      if ((uVar10 < __n) &&
         (pcVar12 = (char *)(param_1 + uVar6 + uVar8),
         param_3[uVar6] == *(char *)(param_1 + uVar6 + uVar8))) {
        pcVar13 = param_3 + uVar6;
        uVar1 = uVar6;
        do {
          uVar5 = uVar1;
          if (uVar5 - 1 == uVar10 - 1) break;
          pcVar13 = pcVar13 + -1;
          pcVar12 = pcVar12 + -1;
          uVar1 = uVar5 - 1;
        } while (*pcVar13 == *pcVar12);
      }
      if (uVar5 < uVar10 + 1) {
        return param_1 + uVar8;
      }
      uVar8 = uVar8 + uVar9;
      uVar10 = param_4 - uVar9;
    } while (uVar8 <= param_2 - param_4);
  }
  else {
    iVar2 = __n - 1;
    uVar9 = param_4 - __n;
    if (param_4 - __n < __n) {
      uVar9 = __n;
    }
    uVar8 = 0;
    do {
      iVar3 = param_1 + uVar8;
      uVar10 = local_428[*(byte *)(iVar3 + uVar11)];
      if (local_428[*(byte *)(iVar3 + uVar11)] == 0) {
        if (uVar11 <= __n) {
LAB_0003ec6c:
          if (iVar2 == -1) {
            return iVar3;
          }
          pcVar13 = (char *)(param_1 + iVar2 + uVar8);
          pcVar12 = param_3 + iVar2;
          uVar10 = uVar9 + 1;
          if (*(char *)(param_1 + iVar2 + uVar8) == param_3[iVar2]) {
            do {
              if (pcVar12 == param_3) {
                return iVar3;
              }
              pcVar12 = pcVar12 + -1;
              pcVar13 = pcVar13 + -1;
            } while (*pcVar12 == *pcVar13);
          }
          goto LAB_0003ecb0;
        }
        pcVar13 = (char *)(param_1 + __n + uVar8);
        uVar10 = __n;
        pcVar12 = param_3 + __n;
        if (*(char *)(param_1 + __n + uVar8) == param_3[__n]) {
          do {
            uVar10 = uVar10 + 1;
            if (uVar11 <= uVar10) goto LAB_0003ec6c;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          } while (*pcVar12 == *pcVar13);
        }
        uVar8 = uVar10 + (1 - __n) + uVar8;
      }
      else {
LAB_0003ecb0:
        uVar8 = uVar8 + uVar10;
      }
    } while (uVar8 <= param_2 - param_4);
  }
  return 0;
}

