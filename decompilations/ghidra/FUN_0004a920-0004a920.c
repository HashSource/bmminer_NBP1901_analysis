
undefined4
FUN_0004a920(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,code *param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  void *__base;
  undefined *puVar8;
  int iVar9;
  char **ppcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char **ppcVar16;
  undefined8 uVar17;
  char acStack_8c [104];
  
  if (param_1 != (undefined4 *)0x0) {
    uVar14 = param_2 & 0x10000;
    uVar13 = param_2 & 0xfffeffff;
    switch(*param_1) {
    case 0:
      puVar8 = &UNK_00066478;
      if ((param_2 & 0x20) == 0) {
        uVar1 = 2;
        puVar8 = &UNK_0006a4f0;
      }
      else {
        uVar1 = 1;
      }
      iVar4 = FUN_0004a8c8(param_4,param_1,acStack_8c);
      if (iVar4 == 0) {
        iVar4 = FUN_0004e49c(param_1);
        if (uVar14 == 0) {
          iVar11 = (*param_5)(&DAT_00066844,1,param_6);
          if (iVar11 != 0) {
            return 0xffffffff;
          }
          if (iVar4 == 0) {
            FUN_0004bca4(param_4,acStack_8c);
            uVar1 = (*param_5)(&DAT_0006a520,1,param_6);
            return uVar1;
          }
        }
        else if (iVar4 == 0) {
LAB_0004ae20:
          FUN_0004bca4(param_4,acStack_8c);
          return 0;
        }
        iVar9 = param_3 + 1;
        iVar11 = FUN_0004a818(uVar13,iVar9,0,param_5,param_6);
        if (iVar11 == 0) {
          if ((param_2 & 0x80) == 0) {
            while( true ) {
              iVar11 = FUN_0004e4e8(param_1,iVar4);
              pcVar5 = (char *)FUN_0004e51c(iVar4);
              sVar6 = strlen(pcVar5);
              FUN_0004a590(pcVar5,sVar6,param_5,param_6,uVar13);
              iVar7 = (*param_5)(puVar8,uVar1,param_6);
              if (iVar7 != 0) break;
              uVar3 = FUN_0004e528(iVar4);
              iVar4 = FUN_0004a920(uVar3,uVar13,iVar9,param_4,param_5,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              if (iVar11 == 0) {
                iVar4 = FUN_0004a818(uVar13,param_3,0,param_5,param_6);
                if (iVar4 != 0) {
                  return 0xffffffff;
                }
                goto LAB_0004b0a8;
              }
              iVar4 = (*param_5)(&DAT_0006a508,1,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              iVar7 = FUN_0004a818(uVar13,iVar9,1,param_5,param_6);
              iVar4 = iVar11;
              if (iVar7 != 0) {
                return 0xffffffff;
              }
            }
          }
          else {
            sVar6 = FUN_0004e218(param_1);
            __base = (void *)FUN_0004d880(sVar6 << 2);
            if (__base != (void *)0x0) {
              ppcVar10 = (char **)((int)__base + -4);
              uVar2 = 0;
              ppcVar16 = ppcVar10;
              do {
                uVar15 = uVar2;
                uVar2 = uVar15 + 1;
                pcVar5 = (char *)FUN_0004e51c(iVar4);
                ppcVar16 = ppcVar16 + 1;
                *ppcVar16 = pcVar5;
                iVar4 = FUN_0004e4e8(param_1,iVar4);
              } while (iVar4 != 0);
              if (sVar6 != uVar2) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i == size","dump.c",0x160,DAT_0004b12c);
              }
              qsort(__base,uVar2,4,FUN_0004a584);
              uVar12 = 0;
              do {
                ppcVar10 = ppcVar10 + 1;
                pcVar5 = *ppcVar10;
                iVar4 = FUN_0004e234(param_1,pcVar5);
                if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("value","dump.c",0x16b,DAT_0004b12c);
                }
                sVar6 = strlen(pcVar5);
                FUN_0004a590(pcVar5,sVar6,param_5,param_6,uVar13);
                iVar11 = (*param_5)(puVar8,uVar1,param_6);
                if ((iVar11 != 0) ||
                   (iVar4 = FUN_0004a920(iVar4,uVar13,iVar9,param_4,param_5,param_6), iVar4 != 0)) {
LAB_0004b040:
                  FUN_0004d898(__base);
                  return 0xffffffff;
                }
                if (uVar12 < uVar15) {
                  iVar4 = (*param_5)(&DAT_0006a508,1,param_6);
                  if (iVar4 != 0) goto LAB_0004b040;
                  iVar4 = FUN_0004a818(uVar13,iVar9,1,param_5,param_6);
                }
                else {
                  iVar4 = FUN_0004a818(uVar13,param_3,0,param_5,param_6);
                }
                if (iVar4 != 0) goto LAB_0004b040;
                uVar12 = uVar12 + 1;
              } while (uVar12 != uVar2);
              FUN_0004d898(__base);
LAB_0004b0a8:
              FUN_0004bca4(param_4,acStack_8c);
              if (uVar14 == 0) {
                uVar1 = (*param_5)(&DAT_0006a520,1,param_6);
                return uVar1;
              }
              return 0;
            }
          }
        }
      }
      break;
    case 1:
      iVar4 = FUN_0004a8c8(param_4,param_1,acStack_8c);
      if (iVar4 == 0) {
        uVar2 = FUN_0004e5a0(param_1);
        if (uVar14 == 0) {
          iVar4 = (*param_5)(&DAT_0006a504,1,param_6);
          if (iVar4 != 0) {
            return 0xffffffff;
          }
          if (uVar2 == 0) {
            FUN_0004bca4(param_4,acStack_8c);
            uVar1 = (*param_5)(&DAT_0006bb38,1,param_6);
            return uVar1;
          }
        }
        else if (uVar2 == 0) goto LAB_0004ae20;
        iVar11 = param_3 + 1;
        iVar4 = FUN_0004a818(uVar13,iVar11,0,param_5,param_6);
        if (iVar4 == 0) {
          uVar15 = 0;
          while( true ) {
            uVar1 = FUN_0004e5bc(param_1,uVar15);
            iVar4 = FUN_0004a920(uVar1,uVar13,iVar11,param_4,param_5,param_6);
            if (iVar4 != 0) break;
            if (uVar15 < uVar2 - 1) {
              iVar4 = (*param_5)(&DAT_0006a508,1,param_6);
              if (iVar4 != 0) {
                return 0xffffffff;
              }
              iVar4 = FUN_0004a818(uVar13,iVar11,1,param_5,param_6);
            }
            else {
              iVar4 = FUN_0004a818(uVar13,param_3,0,param_5,param_6);
            }
            if (iVar4 != 0) {
              return 0xffffffff;
            }
            uVar15 = uVar15 + 1;
            if (uVar2 == uVar15) {
              FUN_0004bca4(param_4,acStack_8c);
              if (uVar14 == 0) {
                uVar1 = (*param_5)(&DAT_0006bb38,1,param_6);
                return uVar1;
              }
              return 0;
            }
          }
        }
      }
      break;
    case 2:
      uVar1 = FUN_0004e768(param_1);
      uVar3 = FUN_0004e784(param_1);
      uVar1 = FUN_0004a590(uVar1,uVar3,param_5,param_6,uVar13);
      return uVar1;
    case 3:
      uVar17 = FUN_0004e9c4(param_1);
      iVar4 = snprintf(acStack_8c,100,"%lld");
      uVar1 = (*param_5)(acStack_8c,iVar4,param_6,param_5,uVar17);
      return uVar1;
    case 4:
      FUN_0004ea70(param_1);
      iVar4 = FUN_0004dbf0(acStack_8c,100,(uVar13 << 0x10) >> 0x1b);
      if (-1 < iVar4) {
        uVar1 = (*param_5)(acStack_8c,iVar4,param_6);
        return uVar1;
      }
      break;
    case 5:
      uVar1 = (*param_5)(&DAT_0006166c,4,param_6);
      return uVar1;
    case 6:
      uVar1 = (*param_5)("false",5,param_6);
      return uVar1;
    case 7:
      uVar1 = (*param_5)(&DAT_0006a4f4,4,param_6);
      return uVar1;
    }
  }
  return 0xffffffff;
}

