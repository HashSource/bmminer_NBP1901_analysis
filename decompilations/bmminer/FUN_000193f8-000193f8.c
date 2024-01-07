
double FUN_000193f8(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char acStack_818 [2048];
  
  dVar1 = DAT_000194c0;
  iVar3 = 0;
  dVar5 = DAT_000194b8;
  do {
    iVar2 = FUN_0001e29c(iVar3);
    dVar6 = dVar5;
    if ((((iVar2 != 0) &&
         (dVar4 = (double)FUN_000192c8(iVar3),
         dVar4 != dVar1 && dVar4 < dVar1 == (NAN(dVar4) || NAN(dVar1)))) &&
        (dVar6 = dVar4, dVar5 <= dVar4)) && (dVar6 = dVar5, dVar5 < dVar1)) {
      dVar6 = dVar4;
    }
    iVar3 = iVar3 + 1;
    dVar5 = dVar6;
  } while (iVar3 != 4);
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_818,0x800,"the minimal voltage = %.2f",DAT_0007eb9c,dVar6);
    FUN_0002e584(4,acStack_818,0);
  }
  return dVar6;
}

