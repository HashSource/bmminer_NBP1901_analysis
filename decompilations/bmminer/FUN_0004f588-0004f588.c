
int * FUN_0004f588(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != (int *)0x0) {
    switch(*param_1) {
    case 0:
      piVar2 = (int *)FUN_0004e1b0();
      if (piVar2 != (int *)0x0) {
        if (*param_1 != 0) {
          return piVar2;
        }
        iVar5 = FUN_0004be20(param_1 + 2);
        if (iVar5 == 0) {
          return piVar2;
        }
        while( true ) {
          iVar5 = FUN_0004beb0();
          if (iVar5 == 0) {
            return piVar2;
          }
          iVar6 = FUN_0004beb8(iVar5 + -0x10);
          piVar3 = (int *)(iVar6 + 4);
          if (iVar6 == 0) break;
          if (*(int *)(iVar6 + 4) != -1) {
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = *piVar3 + 1;
            DataMemoryBarrier(0xb);
          }
          FUN_0004ee2c(piVar2,iVar5);
          if (*param_1 != 0) {
            return piVar2;
          }
          iVar5 = FUN_0004be98(param_1 + 2,iVar5 + -0x10);
          if (iVar5 == 0) {
            return piVar2;
          }
        }
        return piVar2;
      }
      break;
    case 1:
      piVar2 = (int *)FUN_0004e540();
      if (piVar2 != (int *)0x0) {
        if (*param_1 != 1) {
          return piVar2;
        }
        uVar4 = param_1[3];
        if (uVar4 == 0) {
          return piVar2;
        }
        uVar7 = 0;
        while( true ) {
          iVar5 = 0;
          if (uVar7 < uVar4) {
            iVar5 = *(int *)(param_1[4] + uVar7 * 4);
            piVar3 = (int *)(iVar5 + 4);
            if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != -1)) {
              do {
                bVar1 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar1);
              *piVar3 = *piVar3 + 1;
              DataMemoryBarrier(0xb);
            }
          }
          FUN_0004f494(piVar2,iVar5);
          if (*param_1 != 1) break;
          uVar4 = param_1[3];
          uVar7 = uVar7 + 1;
          if (uVar4 <= uVar7) {
            return piVar2;
          }
        }
        return piVar2;
      }
      break;
    case 2:
      piVar2 = (int *)FUN_0004e144(param_1[2],param_1[3],0);
      return piVar2;
    case 3:
      if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
        iVar5 = 0;
        iVar6 = 0;
      }
      else {
        iVar5 = param_1[2];
        iVar6 = param_1[3];
      }
      piVar2 = (int *)FUN_0004d880(0x10);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar2[2] = iVar5;
      piVar2[3] = iVar6;
      *piVar2 = 3;
      piVar2[1] = 1;
      return piVar2;
    case 4:
      piVar2 = (int *)FUN_0004ea14((int)*(undefined8 *)(param_1 + 2));
      return piVar2;
    case 5:
    case 6:
    case 7:
      return param_1;
    }
  }
  return (int *)0x0;
}

