
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001eb74(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined2 uStack_808;
  undefined local_806;
  
  iVar1 = FUN_0001e0e0();
  if (iVar1 < 10) {
    if (4 < DAT_0007eb9c) {
      local_820._0_1_ = s_no_need_to_set_uart_relay_000623ac[0];
      local_820._1_1_ = s_no_need_to_set_uart_relay_000623ac[1];
      local_820._2_1_ = s_no_need_to_set_uart_relay_000623ac[2];
      local_820._3_1_ = s_no_need_to_set_uart_relay_000623ac[3];
      uStack_81c._0_1_ = s_no_need_to_set_uart_relay_000623ac[4];
      uStack_81c._1_1_ = s_no_need_to_set_uart_relay_000623ac[5];
      uStack_81c._2_1_ = s_no_need_to_set_uart_relay_000623ac[6];
      uStack_81c._3_1_ = s_no_need_to_set_uart_relay_000623ac[7];
      uStack_818._0_1_ = s_no_need_to_set_uart_relay_000623ac[8];
      uStack_818._1_1_ = s_no_need_to_set_uart_relay_000623ac[9];
      uStack_818._2_1_ = s_no_need_to_set_uart_relay_000623ac[10];
      uStack_818._3_1_ = s_no_need_to_set_uart_relay_000623ac[11];
      uStack_814._0_1_ = s_no_need_to_set_uart_relay_000623ac[12];
      uStack_814._1_1_ = s_no_need_to_set_uart_relay_000623ac[13];
      uStack_814._2_1_ = s_no_need_to_set_uart_relay_000623ac[14];
      uStack_814._3_1_ = s_no_need_to_set_uart_relay_000623ac[15];
      local_810._0_1_ = s_no_need_to_set_uart_relay_000623ac[16];
      local_810._1_1_ = s_no_need_to_set_uart_relay_000623ac[17];
      local_810._2_1_ = s_no_need_to_set_uart_relay_000623ac[18];
      local_810._3_1_ = s_no_need_to_set_uart_relay_000623ac[19];
      uStack_80c._0_1_ = s_no_need_to_set_uart_relay_000623ac[20];
      uStack_80c._1_1_ = s_no_need_to_set_uart_relay_000623ac[21];
      uStack_80c._2_1_ = s_no_need_to_set_uart_relay_000623ac[22];
      uStack_80c._3_1_ = s_no_need_to_set_uart_relay_000623ac[23];
      uStack_808 = (undefined2)ram0x000623c4;
      local_806 = (undefined)((uint)ram0x000623c4 >> 0x10);
      FUN_0002e584(4,&local_820,0);
      return;
    }
  }
  else {
    iVar1 = FUN_0001e0e0();
    iVar1 = iVar1 + -3;
    if (-1 < iVar1) {
      do {
        iVar2 = FUN_0001e100();
        uVar6 = 0;
        iVar3 = FUN_0001e160();
        do {
          uVar7 = uVar6 & 0xff;
          iVar4 = FUN_0001e29c(uVar6);
          uVar6 = uVar6 + 1;
          if (iVar4 != 0) {
            iVar4 = FUN_0001e0e0();
            iVar5 = FUN_0001e100();
            FUN_0005129c(uVar7,iVar3 * (iVar1 * iVar2 + iVar2 + -1),iVar5 * (iVar4 - iVar1) + 0xe,1,
                         1);
          }
        } while (uVar6 != 4);
        iVar1 = iVar1 + -3;
      } while (-1 < iVar1);
      return;
    }
  }
  return;
}

