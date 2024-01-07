
int * FUN_0002fda4(int **param_1,timespec *param_2)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(param_1 + 3);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
    FUN_0002f33c(DAT_0002fe80,0x486);
  }
  ppiVar4 = (int **)*param_1;
  ppiVar3 = ppiVar4;
  if (param_1 == ppiVar4) {
    if (param_2 == (timespec *)0x0) {
      iVar1 = pthread_cond_wait((pthread_cond_t *)(param_1 + 10),__mutex);
    }
    else {
      iVar1 = pthread_cond_timedwait((pthread_cond_t *)(param_1 + 10),__mutex,param_2);
    }
    if (iVar1 != 0) {
      piVar5 = (int *)0x0;
      goto LAB_0002fdf8;
    }
    ppiVar3 = (int **)*param_1;
    if (ppiVar4 == ppiVar3) {
      piVar5 = (int *)0x0;
      goto LAB_0002fdf8;
    }
  }
  ppiVar4 = (int **)ppiVar3[1];
  piVar2 = *ppiVar3;
  piVar5 = ppiVar3[-1];
  piVar2[1] = (int)ppiVar4;
  *ppiVar4 = piVar2;
  *ppiVar3 = (int *)0x0;
  ppiVar3[1] = (int *)0x0;
  free(ppiVar3 + -1);
LAB_0002fdf8:
  FUN_0002f2c0(__mutex,DAT_0002fe80,0x4a0);
  (*DAT_0007ecc4)();
  return piVar5;
}

