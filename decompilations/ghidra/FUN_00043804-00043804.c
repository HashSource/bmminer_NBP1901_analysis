
int FUN_00043804(int *param_1,undefined4 param_2)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  void *local_1c;
  
  ppiVar3 = (int **)*param_1;
  while( true ) {
    if (ppiVar3 == (int **)(param_1 + 1)) {
      return 0;
    }
    FUN_00044000(ppiVar3[4],&local_1c);
    iVar2 = (*(code *)param_1[9])(param_2,local_1c);
    free(local_1c);
    if (iVar2 == 0) break;
    ppiVar1 = ppiVar3 + 1;
    if (iVar2 < 0) {
      ppiVar1 = ppiVar3;
    }
    ppiVar3 = (int **)*ppiVar1;
  }
  return (int)ppiVar3;
}

