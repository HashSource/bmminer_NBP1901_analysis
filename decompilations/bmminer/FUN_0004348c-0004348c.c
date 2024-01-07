
void FUN_0004348c(int **param_1,int **param_2)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  ppiVar3 = (int **)param_2[1];
  ppiVar4 = param_1 + 1;
  ppiVar1 = (int **)*ppiVar3;
  param_2[1] = (int *)ppiVar1;
  if (ppiVar1 != ppiVar4) {
    ppiVar1[2] = (int *)param_2;
  }
  piVar2 = param_2[2];
  if (ppiVar4 != ppiVar3) {
    ppiVar3[2] = piVar2;
    piVar2 = param_2[2];
  }
  if (piVar2 == (int *)0x0) {
    *param_1 = (int *)ppiVar3;
  }
  else if ((int **)*piVar2 == param_2) {
    *piVar2 = (int)ppiVar3;
  }
  else {
    piVar2[1] = (int)ppiVar3;
  }
  *ppiVar3 = (int *)param_2;
  if (ppiVar4 != param_2) {
    param_2[2] = (int *)ppiVar3;
  }
  return;
}

