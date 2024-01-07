
double FUN_0003f9ec(int param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  bVar4 = SBORROW4(param_1,3);
  iVar2 = param_1 + -3;
  bVar3 = param_1 == 3;
  if (param_1 < 4) {
    bVar4 = SBORROW4(param_2,0xff);
    iVar2 = param_2 + -0xff;
    bVar3 = param_2 == 0xff;
  }
  if (!bVar3 && iVar2 < 0 == bVar4) {
    return DAT_0003fa58;
  }
  pthread_mutex_lock(DAT_0003fa60);
  pdVar1 = (double *)(&DAT_004fcb68 + (param_2 + param_1 * 0x100) * 0x20);
  iVar2 = 4;
  dVar6 = DAT_0003fa58;
  do {
    dVar5 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    iVar2 = iVar2 + -1;
    dVar6 = dVar6 + dVar5;
  } while (iVar2 != 0);
  pthread_mutex_unlock(DAT_0003fa60);
  return dVar6 * 0.25;
}

