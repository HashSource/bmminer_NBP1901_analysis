
void FUN_000434e0(int **param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  
  ppiVar2 = (int **)*param_2;
  ppiVar3 = param_1 + 1;
  ppiVar1 = (int **)ppiVar2[1];
  *param_2 = (int *)ppiVar1;
  if (ppiVar1 != ppiVar3) {
    ppiVar1[2] = (int *)param_2;
  }
  ppiVar1 = (int **)param_2[2];
  if (ppiVar3 != ppiVar2) {
    ppiVar2[2] = (int *)ppiVar1;
    ppiVar1 = (int **)param_2[2];
  }
  if (ppiVar1 == (int **)0x0) {
    *param_1 = (int *)ppiVar2;
  }
  else if ((int **)ppiVar1[1] == param_2) {
    ppiVar1[1] = (int *)ppiVar2;
  }
  else {
    *ppiVar1 = (int *)ppiVar2;
  }
  ppiVar2[1] = (int *)param_2;
  if (ppiVar3 != param_2) {
    param_2[2] = (int *)ppiVar2;
  }
  return;
}

