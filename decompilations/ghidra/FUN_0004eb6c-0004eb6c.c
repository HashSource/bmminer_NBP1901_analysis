
void FUN_0004eb6c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  switch(*param_1) {
  case 0:
    FUN_0004b998(param_1 + 2);
    FUN_0004d898(param_1);
    return;
  case 1:
    uVar3 = param_1[3];
    iVar2 = param_1[4];
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        iVar5 = *(int *)(iVar2 + uVar6 * 4);
        if ((iVar5 != 0) && (piVar4 = (int *)(iVar5 + 4), *(int *)(iVar5 + 4) != -1)) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            FUN_0004eb6c(iVar5);
          }
          iVar2 = param_1[4];
          uVar3 = param_1[3];
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    break;
  case 2:
    iVar2 = param_1[2];
    break;
  case 3:
  case 4:
    goto switchD_0004eb80_caseD_3;
  default:
    return;
  }
  FUN_0004d898(iVar2);
switchD_0004eb80_caseD_3:
  FUN_0004d898(param_1);
  return;
}

