
int ** FUN_00043ef8(int **param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  bool bVar5;
  
  ppiVar4 = param_1 + 1;
  ppiVar2 = (int **)param_2[1];
  if ((int **)param_2[1] == ppiVar4) {
    ppiVar2 = (int **)*param_1;
    do {
      ppiVar3 = ppiVar2;
      ppiVar2 = (int **)ppiVar3[1];
    } while (ppiVar4 != ppiVar2);
    if (param_2 == ppiVar3) {
      ppiVar3 = (int **)0x0;
    }
    else {
      ppiVar2 = (int **)param_2[2];
      ppiVar3 = ppiVar4;
      if ((ppiVar4 != ppiVar2) && (ppiVar3 = ppiVar2, param_2 == (int **)ppiVar2[1])) {
        do {
          ppiVar3 = (int **)ppiVar2[2];
          if (ppiVar4 == ppiVar3) {
            return ppiVar3;
          }
          bVar5 = (int **)ppiVar3[1] == ppiVar2;
          ppiVar2 = ppiVar3;
        } while (bVar5);
      }
    }
  }
  else {
    do {
      ppiVar1 = (int **)*ppiVar2;
      ppiVar3 = ppiVar2;
      ppiVar2 = ppiVar1;
    } while (ppiVar4 != ppiVar1);
  }
  return ppiVar3;
}

