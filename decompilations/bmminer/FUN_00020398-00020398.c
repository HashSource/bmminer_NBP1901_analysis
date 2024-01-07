
void FUN_00020398(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char acStack_820 [2048];
  
  if (param_1 != 0 && param_2 < 4) {
    uVar3 = FUN_0004e540();
    if (DAT_0007f8f0 < 0x18) {
      if (DAT_0007f8f0 != 0) {
        uVar7 = 0;
        puVar6 = (undefined4 *)(&DAT_0058e040 + param_2 * 0xc0);
        do {
          uVar7 = uVar7 + 1;
          FUN_0006015c(*puVar6,puVar6[1]);
          uVar4 = FUN_0004e990();
          FUN_0004f494(uVar3,uVar4);
          puVar6 = puVar6 + 2;
        } while (uVar7 < DAT_0007f8f0);
      }
    }
    else {
      uVar8 = DAT_0007f8f0 % 0x18;
      uVar7 = uVar8 + 0x18;
      do {
        iVar2 = uVar8 * -0x55555555;
        uVar5 = uVar8 % 0x18;
        uVar8 = uVar8 + 1;
        iVar1 = (param_2 * 0x18 + uVar5) * 8;
        FUN_0006015c(*(undefined4 *)(&DAT_0058e040 + iVar1),*(undefined4 *)(&DAT_0058e044 + iVar1),
                     iVar2);
        uVar4 = FUN_0004e990();
        FUN_0004f494(uVar3,uVar4);
      } while (uVar7 != uVar8);
    }
    FUN_0004efd4(param_1,"rate_array",uVar3);
    return;
  }
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
    snprintf(acStack_820,0x800,"%s: input bad param\n",DAT_00020524);
    FUN_0002e584(3,acStack_820,0);
  }
  return;
}

