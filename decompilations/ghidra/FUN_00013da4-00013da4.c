
undefined4 FUN_00013da4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char acStack_820 [2052];
  
  if (param_2 == 0) {
    FUN_00013ce0();
    iVar5 = FUN_0001e30c();
    iVar1 = FUN_0001e2fc();
    if (iVar5 < iVar1) {
      uRam0007f7a4 = uRam0007f7a4 + 1;
      uVar6 = 0;
      while( true ) {
        uVar7 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        iVar5 = FUN_0001e2fc();
        uVar8 = uRam0007f7a4;
        if (iVar5 <= (int)uVar7) break;
        if (3 < DAT_0007eb9c) {
          uVar3 = FUN_0001e43c(uVar7);
          snprintf(acStack_820,0x800,"conti_check_count:%d, fan_id = %d, fan_speed = %d\n",uVar8,
                   uVar7,uVar3);
          FUN_0002e584(3,acStack_820,0);
        }
      }
    }
    else {
      uRam0007f7a4 = 0;
    }
    iVar5 = FUN_0001e30c();
    iVar1 = FUN_0001e2fc();
    if ((iVar5 < iVar1) && (9 < uRam0007f7a4)) goto LAB_00013ed8;
  }
  else {
    iVar5 = 10;
    do {
      FUN_00013ce0(param_1);
      iVar1 = FUN_0001e30c();
      iVar2 = FUN_0001e2fc();
      if (iVar2 <= iVar1) break;
      FUN_000304d4(2000);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = FUN_0001e30c();
    iVar1 = FUN_0001e2fc();
    if (iVar5 < iVar1) {
LAB_00013ed8:
      if (1 < DAT_0007eb9c) {
        uVar3 = FUN_0001e30c();
        uVar4 = FUN_0001e2fc();
        snprintf(acStack_820,0x800,"Error, fan lost, only find %d (< %d)\n",uVar3,uVar4);
        FUN_0002e584(1,acStack_820,0);
      }
      uVar6 = 0;
      while( true ) {
        uVar8 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        iVar5 = FUN_0001e2fc();
        if (iVar5 <= (int)uVar8) break;
        if (3 < DAT_0007eb9c) {
          uVar3 = FUN_0001e43c(uVar8);
          snprintf(acStack_820,0x800,"fan_id = %d, fan_speed = %d\n",uVar8,uVar3);
          FUN_0002e584(3,acStack_820,0);
        }
      }
      FUN_000356c4(10,0xff);
      FUN_00020a08(1);
      FUN_00031d58(7,"fan lost");
      return 0xffffffff;
    }
  }
  FUN_00020a08(0);
  return 0;
}

