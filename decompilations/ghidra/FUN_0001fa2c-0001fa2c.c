
void FUN_0001fa2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char acStack_818 [2052];
  
  if (param_1 == 0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_818,0x800,"%s: input bad json param\n",DAT_0001fb10);
      FUN_0002e584(3,acStack_818,0);
      return;
    }
  }
  else {
    uVar1 = FUN_0004e540();
    iVar2 = FUN_0001e2fc();
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        iVar5 = iVar3 + 1;
        iVar3 = FUN_0001e43c(iVar3);
        uVar4 = FUN_0004e990(iVar3,iVar3 >> 0x1f);
        FUN_0004f494(uVar1,uVar4);
        iVar3 = iVar5;
      } while (iVar2 != iVar5);
    }
    FUN_0004efd4(param_1,&DAT_00061b1c,uVar1);
  }
  return;
}

