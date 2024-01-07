
void FUN_00026134(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  char acStack_818 [2048];
  
  iVar2 = FUN_00026104();
  iVar3 = DAT_0099ee0c;
  uVar1 = DAT_0099ee08;
  iVar4 = iVar2 - DAT_0007fa08;
  DAT_0007fa08 = iVar2;
  dVar5 = (double)FUN_000600b4(DAT_0099ee08 - DAT_0007fa10,
                               DAT_0099ee0c - (DAT_0007fa14 + (uint)(DAT_0099ee08 < DAT_0007fa10)));
  DAT_0007fa10 = uVar1;
  DAT_0007fa14 = iVar3;
  DAT_0099ee00 = ((dVar5 * DAT_00026240) / DAT_00026248) / (double)(longlong)iVar4;
  iVar3 = FUN_0001a18c();
  dVar5 = (double)(longlong)iVar3 * 0.75;
  if ((dVar5 != DAT_0099ee00 && dVar5 < DAT_0099ee00 == (NAN(dVar5) || NAN(DAT_0099ee00))) &&
     (3 < DAT_0007eb9c)) {
    snprintf(acStack_818,0x800,"avg rate is lower than ideal rate, %0.2f in %ld mins\n",
             iVar4 >> 0x1f,DAT_0099ee00,iVar4 / 0x3c);
    FUN_0002e584(3,acStack_818,0);
    return;
  }
  return;
}

