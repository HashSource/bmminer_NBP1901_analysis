
int FUN_00019de4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  local_c = 0;
  if (DAT_0007edc8 != 2) {
    FUN_000188a0(param_1,(undefined)DAT_00080fb4,&local_c);
    return local_c;
  }
  iVar3 = (&DAT_0007f8c4)[param_1];
  iVar1 = FUN_0001e0f0();
  iVar2 = FUN_0001e130();
  return (iVar2 * iVar1 * iVar3) / 1000 + local_c;
}

