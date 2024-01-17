
int FUN_0004cde4(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  size_t sVar8;
  
  uVar4 = *(int *)(param_1 + 0x38) + 1;
  *(uint *)(param_1 + 0x38) = uVar4;
  if (0x800 < uVar4) {
    FUN_0004c0cc(param_3,param_1,2,"maximum parsing depth reached");
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x3c);
  if (iVar5 == 0x101) {
    iVar5 = FUN_0004e990(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  else if (iVar5 < 0x102) {
    if (iVar5 == 0x5b) {
      iVar5 = FUN_0004e540();
      if (iVar5 == 0) {
        return 0;
      }
      FUN_0004c5cc(param_1,param_3);
      iVar3 = *(int *)(param_1 + 0x3c);
      if (iVar3 != 0x5d) {
        while (iVar3 != 0) {
          iVar3 = FUN_0004cde4(param_1,param_2,param_3);
          if ((iVar3 == 0) || (iVar3 = FUN_0004f494(iVar5), iVar3 != 0)) goto LAB_0004d10c;
          FUN_0004c5cc(param_1,param_3);
          if (*(int *)(param_1 + 0x3c) != 0x2c) {
            if (*(int *)(param_1 + 0x3c) == 0x5d) goto LAB_0004ce4c;
            break;
          }
          FUN_0004c5cc(param_1,param_3);
          iVar3 = *(int *)(param_1 + 0x3c);
        }
        FUN_0004c0cc(param_3,param_1,8,"\']\' expected");
LAB_0004d10c:
        if (*(int *)(iVar5 + 4) == -1) {
          return 0;
        }
        piVar6 = (int *)(iVar5 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6 + -1;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar3;
LAB_0004d134:
        if (iVar3 == 0) {
          FUN_0004eb6c(iVar5);
          return 0;
        }
        return 0;
      }
      goto LAB_0004ce4c;
    }
    if (iVar5 < 0x5c) {
      if (iVar5 == -1) {
        FUN_0004c0cc(param_3,param_1,8,"invalid token");
        return 0;
      }
LAB_0004d14c:
      FUN_0004c0cc(param_3,param_1,8,"unexpected token");
      return 0;
    }
    if (iVar5 == 0x7b) {
      iVar5 = FUN_0004e1b0();
      if (iVar5 == 0) {
        return 0;
      }
      FUN_0004c5cc(param_1,param_3);
      if (*(int *)(param_1 + 0x3c) != 0x7d) {
        if (*(int *)(param_1 + 0x3c) == 0x100) {
          pvVar7 = *(void **)(param_1 + 0x40);
          sVar8 = *(size_t *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x44) = 0;
          if (pvVar7 == (void *)0x0) {
            return 0;
          }
          while( true ) {
            pvVar2 = memchr(pvVar7,0,sVar8);
            if (pvVar2 != (void *)0x0) {
              FUN_0004d898(pvVar7);
              FUN_0004c0cc(param_3,param_1,0xd,"NUL byte in object key not supported");
              goto LAB_0004d014;
            }
            if (((param_2 & 1) != 0) && (iVar3 = FUN_0004e234(iVar5,pvVar7), iVar3 != 0)) {
              FUN_0004d898(pvVar7);
              FUN_0004c0cc(param_3,param_1,0xe,"duplicate object key");
              goto LAB_0004d014;
            }
            FUN_0004c5cc(param_1,param_3);
            if (*(int *)(param_1 + 0x3c) != 0x3a) {
              FUN_0004d898(pvVar7,param_3);
              FUN_0004c0cc(param_3,param_1,8,"\':\' expected");
              goto LAB_0004d014;
            }
            FUN_0004c5cc(param_1);
            iVar3 = FUN_0004cde4(param_1,param_2,param_3);
            if (iVar3 == 0) {
              FUN_0004d898(pvVar7,pvVar7);
              goto LAB_0004d014;
            }
            iVar3 = FUN_0004ee2c(iVar5);
            if (iVar3 != 0) {
              FUN_0004d898(pvVar7);
              goto LAB_0004d014;
            }
            FUN_0004d898(pvVar7);
            FUN_0004c5cc(param_1,param_3);
            if (*(int *)(param_1 + 0x3c) != 0x2c) break;
            FUN_0004c5cc(param_1,param_3);
            if (*(int *)(param_1 + 0x3c) != 0x100) goto LAB_0004d1cc;
            pvVar7 = *(void **)(param_1 + 0x40);
            sVar8 = *(size_t *)(param_1 + 0x44);
            *(undefined4 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x44) = 0;
            if (pvVar7 == (void *)0x0) {
              return 0;
            }
          }
          if (*(int *)(param_1 + 0x3c) == 0x7d) goto LAB_0004ce4c;
          FUN_0004c0cc(param_3,param_1,8,"\'}\' expected");
        }
        else {
LAB_0004d1cc:
          FUN_0004c0cc(param_3,param_1,8,"string or \'}\' expected");
        }
LAB_0004d014:
        if (*(int *)(iVar5 + 4) == -1) {
          return 0;
        }
        piVar6 = (int *)(iVar5 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6 + -1;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar3;
        goto LAB_0004d134;
      }
      goto LAB_0004ce4c;
    }
    if (iVar5 != 0x100) goto LAB_0004d14c;
    pvVar7 = *(void **)(param_1 + 0x40);
    sVar8 = *(size_t *)(param_1 + 0x44);
    if (((param_2 & 0x10) == 0) && (pvVar2 = memchr(pvVar7,0,sVar8), pvVar2 != (void *)0x0)) {
      FUN_0004c0cc(param_3,param_1,0xb,"\\u0000 is not allowed without JSON_ALLOW_NUL");
      return 0;
    }
    iVar5 = FUN_0004e6f8(pvVar7,sVar8);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else if (iVar5 == 0x103) {
    iVar5 = FUN_0004eb48();
  }
  else if (iVar5 < 0x103) {
    iVar5 = FUN_0004ea14((int)*(undefined8 *)(param_1 + 0x40));
  }
  else if (iVar5 == 0x104) {
    iVar5 = FUN_0004eb54();
  }
  else {
    if (iVar5 != 0x105) goto LAB_0004d14c;
    iVar5 = FUN_0004eb60();
  }
  if (iVar5 == 0) {
    return 0;
  }
LAB_0004ce4c:
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  return iVar5;
}

