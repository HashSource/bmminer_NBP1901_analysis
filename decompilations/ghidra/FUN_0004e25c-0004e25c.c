
bool FUN_0004e25c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *param_1;
  if (iVar3 != *param_2) {
    return false;
  }
  if (param_1 == param_2) {
    return true;
  }
  switch(iVar3) {
  case 0:
    if (param_1[2] == param_2[2]) {
      iVar3 = FUN_0004be20(param_1 + 2);
      if (iVar3 != 0) {
        while (iVar3 = FUN_0004beb0(), iVar3 != 0) {
          iVar1 = FUN_0004beb8(iVar3 + -0x10);
          if (iVar1 == 0) {
            return true;
          }
          iVar2 = FUN_0004e234(param_2,iVar3);
          if (iVar2 == 0) {
            return false;
          }
          iVar1 = FUN_0004e25c(iVar1);
          if (iVar1 == 0) {
            return false;
          }
          if (*param_1 != 0) {
            return true;
          }
          iVar3 = FUN_0004be98(param_1 + 2,iVar3 + -0x10);
          if (iVar3 == 0) {
            return true;
          }
        }
      }
      return true;
    }
    break;
  case 1:
    uVar5 = param_1[3];
    if (uVar5 == param_2[3]) {
      if (uVar5 == 0) {
        return true;
      }
      uVar4 = 0;
      iVar1 = iVar3;
      while( true ) {
        if ((iVar1 == 1) && (uVar4 < (uint)param_1[3])) {
          iVar1 = *(int *)(param_1[4] + uVar4 * 4);
        }
        else {
          iVar1 = 0;
        }
        if (iVar3 != 1) {
          return false;
        }
        if ((uint)param_2[3] <= uVar4) {
          return false;
        }
        if (*(int *)(param_2[4] + uVar4 * 4) == 0 || iVar1 == 0) break;
        iVar3 = FUN_0004e25c();
        if (iVar3 == 0) {
          return false;
        }
        uVar4 = uVar4 + 1;
        if (uVar5 == uVar4) {
          return true;
        }
        iVar1 = *param_1;
        iVar3 = *param_2;
      }
      return false;
    }
    break;
  case 2:
    if ((param_1[3] == param_2[3]) &&
       (iVar3 = memcmp((void *)param_1[2],(void *)param_2[2],param_1[3]), iVar3 == 0)) {
      return true;
    }
    break;
  case 3:
    return param_1[3] == param_2[3] && param_1[2] == param_2[2];
  case 4:
    return *(double *)(param_1 + 2) == *(double *)(param_2 + 2);
  }
  return false;
}

