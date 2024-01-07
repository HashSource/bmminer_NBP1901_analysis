
undefined4 FUN_000329dc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_82c;
  char acStack_828 [2052];
  
  uVar4 = 0;
  local_82c = 0;
  do {
    iVar1 = FUN_0001e29c(uVar4);
    if (iVar1 != 0) {
      uVar5 = uVar4 & 0xff;
      iVar1 = 0;
      do {
        FUN_0004594c(uVar4);
        sleep(3);
        thunk_FUN_0004672c(uVar5);
        FUN_000304d4(1000);
        if (DAT_00080fb0 != '\0') {
          if (3 < DAT_0007eb9c) {
            snprintf(acStack_828,0x800,"pic enabled for chain %d, press anykey to continue...",uVar4
                    );
            FUN_0002e584(3,acStack_828,0);
          }
          _IO_getc(stdin);
        }
        FUN_00045990(uVar4);
        FUN_000304d4(200);
        FUN_0004594c(uVar4);
        sleep(1);
        FUN_00045990(uVar4);
        FUN_000304d4(200);
        FUN_0002be40(uVar4,0);
        iVar2 = FUN_0001e67c(uVar4);
        if (3 < DAT_0007eb9c) {
          snprintf(acStack_828,0x800,"Chain[%d]: find %d asic, times %d\n",uVar4,iVar2,iVar1);
          FUN_0002e584(3,acStack_828,0);
        }
        iVar3 = FUN_0001e0f0();
        iVar1 = iVar1 + 1;
      } while ((iVar2 != iVar3) && (thunk_FUN_00046900(uVar5), iVar1 != 3));
      iVar1 = FUN_0001e67c(uVar4);
      iVar2 = FUN_0001e0f0();
      if (iVar2 != iVar1) {
        if (3 < DAT_0007eb9c) {
          snprintf(acStack_828,0x800,"Chain %d only find %d asic, will power off hash board %d\n",
                   uVar4,iVar1,uVar4);
          FUN_0002e584(3,acStack_828,0);
        }
        local_82c = 0xffffffff;
        thunk_FUN_00046900(uVar5);
        FUN_0001e200(uVar4,0);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 4);
  return local_82c;
}

