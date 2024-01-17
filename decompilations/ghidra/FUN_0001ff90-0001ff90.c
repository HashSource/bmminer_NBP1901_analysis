
void FUN_0001ff90(int param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char acStack_818 [2048];
  
  if (param_1 == 0 || 3 < param_2) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_818,0x800,"%s: input bad param\n",DAT_000200cc);
      FUN_0002e584(3,acStack_818,0);
    }
    return;
  }
  uVar2 = FUN_0004e540();
  pcVar3 = (char *)FUN_0001e0c0();
  iVar4 = strcmp(pcVar3,"BHB28601");
  if (iVar4 != 0) {
    pcVar3 = (char *)FUN_0001e0c0();
    iVar4 = strcmp(pcVar3,"BHB28501");
    if (iVar4 != 0) {
      uVar5 = FUN_0001e19c();
      goto LAB_00020068;
    }
  }
  uVar5 = FUN_00014434();
LAB_00020068:
  if (0 < (int)uVar5) {
    uVar8 = 0;
    do {
      uVar7 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      sVar1 = FUN_000152f0(param_2,uVar7);
      uVar6 = FUN_0004e990((int)sVar1,(int)sVar1 >> 0x1f);
      FUN_0004f494(uVar2,uVar6);
    } while (uVar5 != uVar8);
  }
  FUN_0004efd4(param_1,"temp_pic",uVar2);
  return;
}

