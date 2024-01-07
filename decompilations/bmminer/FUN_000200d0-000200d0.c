
void FUN_000200d0(int param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char acStack_818 [2052];
  
  if (param_1 == 0 || 3 < param_2) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_818,0x800,"%s: input bad param\n",DAT_00020230);
      FUN_0002e584(3,acStack_818,0);
    }
    return;
  }
  uVar2 = FUN_0004e540();
  uVar6 = 0;
  if ((DAT_00080fb4 == 1) || (uVar5 = 0, DAT_00482a8c < 1)) {
    while( true ) {
      iVar4 = FUN_0001e19c();
      if (iVar4 <= (int)uVar6) break;
      sVar1 = FUN_000152f0(param_2,uVar6 & 0xff);
      uVar6 = uVar6 + 1;
      uVar3 = FUN_0004e990((int)sVar1,(int)sVar1 >> 0x1f);
      FUN_0004f494(uVar2,uVar3);
    }
  }
  else {
    while( true ) {
      iVar4 = FUN_00014434();
      if (iVar4 <= (int)uVar5) break;
      sVar1 = FUN_000153a0(param_2,uVar5 & 0xff);
      uVar3 = FUN_0004e990((int)sVar1,(int)sVar1 >> 0x1f);
      FUN_0004f494(uVar2,uVar3);
      uVar5 = uVar5 + 1;
    }
  }
  FUN_0004efd4(param_1,"temp_chip",uVar2);
  return;
}

