
int ** FUN_00043ae8(int **param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int **ppiVar4;
  int **ppiVar5;
  int *piVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  int **ppiVar10;
  void *local_1c;
  
  ppiVar5 = param_1 + 1;
  ppiVar7 = (int **)*param_1;
  while( true ) {
    if (ppiVar5 == ppiVar7) {
      return (int **)0x0;
    }
    FUN_00044000(ppiVar7[4],&local_1c);
    iVar1 = (*(code *)param_1[9])(param_2,local_1c);
    free(local_1c);
    ppiVar4 = (int **)*ppiVar7;
    if (iVar1 == 0) break;
    ppiVar7 = (int **)ppiVar7[1];
    if (iVar1 < 0) {
      ppiVar7 = ppiVar4;
    }
  }
  ppiVar8 = (int **)ppiVar7[1];
  ppiVar9 = ppiVar8;
  ppiVar10 = ppiVar7;
  if ((ppiVar5 != ppiVar4) && (ppiVar9 = ppiVar4, ppiVar5 != ppiVar8)) {
    do {
      ppiVar10 = ppiVar8;
      ppiVar8 = (int **)*ppiVar10;
    } while (ppiVar5 != (int **)*ppiVar10);
    ppiVar9 = (int **)ppiVar10[1];
  }
  ppiVar9[2] = ppiVar10[2];
  ppiVar5 = (int **)ppiVar10[2];
  if (ppiVar5 == (int **)0x0) {
    *param_1 = (int *)ppiVar9;
  }
  else if (ppiVar10 == (int **)*ppiVar5) {
    *ppiVar5 = (int *)ppiVar9;
  }
  else {
    ppiVar5[1] = (int *)ppiVar9;
  }
  if (ppiVar10 != ppiVar7) {
    piVar2 = ppiVar7[4];
    piVar6 = ppiVar7[5];
    piVar3 = ppiVar10[5];
    ppiVar7[4] = ppiVar10[4];
    ppiVar10[4] = piVar2;
    ppiVar7[5] = piVar3;
    ppiVar10[5] = piVar6;
  }
  if (ppiVar10[3] == (int *)0x0) {
    ppiVar7 = (int **)*param_1;
LAB_00043c10:
    ppiVar5 = ppiVar9;
    if (ppiVar9 != ppiVar7) {
      while( true ) {
        ppiVar5 = ppiVar9;
        if (ppiVar9[3] != (int *)0x0) goto LAB_00043c74;
        ppiVar5 = (int **)ppiVar9[2];
        ppiVar7 = (int **)*ppiVar5;
        if (ppiVar9 == ppiVar7) {
          ppiVar7 = (int **)ppiVar5[1];
          if (ppiVar7[3] == (int *)0x1) {
            ppiVar7[3] = (int *)0x0;
            ppiVar5[3] = (int *)0x1;
            FUN_0004348c(param_1,ppiVar5);
            ppiVar5 = (int **)ppiVar9[2];
            ppiVar7 = (int **)ppiVar5[1];
          }
          piVar2 = ppiVar7[1];
          if ((*ppiVar7)[3] == 0) {
            if (piVar2[3] == 0) goto LAB_00043c64;
          }
          else if (piVar2[3] == 0) {
            (*ppiVar7)[3] = 0;
            ppiVar7[3] = (int *)0x1;
            FUN_000434e0(param_1,ppiVar7);
            ppiVar5 = (int **)ppiVar9[2];
            ppiVar7 = (int **)ppiVar5[1];
            piVar2 = ppiVar7[1];
          }
          ppiVar7[3] = ppiVar5[3];
          ppiVar5[3] = (int *)0x0;
          piVar2[3] = 0;
          FUN_0004348c(param_1,ppiVar5);
          ppiVar7 = (int **)*param_1;
          ppiVar9 = ppiVar7;
          goto LAB_00043c10;
        }
        if (ppiVar7[3] == (int *)0x1) {
          ppiVar7[3] = (int *)0x0;
          ppiVar5[3] = (int *)0x1;
          FUN_000434e0(param_1,ppiVar5);
          ppiVar5 = (int **)ppiVar9[2];
          ppiVar7 = (int **)*ppiVar5;
        }
        piVar2 = *ppiVar7;
        if (ppiVar7[1][3] != 0) break;
        if (piVar2[3] != 0) goto LAB_00043cac;
LAB_00043c64:
        ppiVar7[3] = (int *)0x1;
        ppiVar9 = ppiVar5;
        if (ppiVar5 == (int **)*param_1) goto LAB_00043c74;
      }
      if (piVar2[3] == 0) {
        ppiVar7[1][3] = 0;
        ppiVar7[3] = (int *)0x1;
        FUN_0004348c(param_1,ppiVar7);
        ppiVar5 = (int **)ppiVar9[2];
        ppiVar7 = (int **)*ppiVar5;
        piVar2 = *ppiVar7;
      }
LAB_00043cac:
      ppiVar7[3] = ppiVar5[3];
      ppiVar5[3] = (int *)0x0;
      piVar2[3] = 0;
      FUN_000434e0(param_1,ppiVar5);
      ppiVar7 = (int **)*param_1;
      ppiVar9 = ppiVar7;
      goto LAB_00043c10;
    }
LAB_00043c74:
    ppiVar5[3] = (int *)0x0;
  }
  FUN_0004372c(param_1);
  return ppiVar10;
}

