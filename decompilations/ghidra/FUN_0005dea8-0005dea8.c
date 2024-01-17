
int FUN_0005dea8(int param_1,undefined4 *param_2)

{
  int extraout_r1;
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_2[4];
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 8);
    FUN_0005fadc(*param_2,uVar4);
    uVar1 = extraout_r1 + 1;
    if (uVar1 < uVar4) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + uVar1 * 4);
      piVar2 = (int *)(*(int *)(param_1 + 4) + uVar1 * 4);
      if (iVar3 == 0) {
        while (uVar1 = uVar1 + 1, uVar1 < uVar4) {
          piVar2 = piVar2 + 1;
          if (*piVar2 != 0) {
            return *piVar2;
          }
        }
      }
    }
  }
  return iVar3;
}

