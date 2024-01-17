
int FUN_00044200(uint param_1,byte param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte local_821;
  char acStack_820 [2048];
  
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_0050508c + param_1 * 8) != 0) || (iVar1 = FUN_000440e8(), -1 < iVar1)) {
      if (param_4 != 0) {
        iVar1 = param_3;
        bVar2 = param_2;
        do {
          local_821 = bVar2;
          iVar3 = iVar1 + 1;
          bVar2 = local_821 + 1;
          iVar1 = FUN_00049794(*(undefined4 *)(&DAT_00505088 + param_1 * 8),&local_821,1,iVar1,1);
          if (iVar1 != 1) {
            snprintf(acStack_820,0x800,"fail to write eeprom by iic, chain:%d, addr: %d",param_1,
                     (uint)local_821);
            FUN_0002e584(0,acStack_820);
            return -0x7fffff00;
          }
          iVar1 = iVar3;
        } while (param_3 + param_4 != iVar3);
      }
      sleep(1);
      return 0;
    }
    snprintf(acStack_820,0x800,"%s: auto exec eeprom_open, but chain %d open eeprom failed\n",
             DAT_00044354,param_1);
    FUN_0002e584(0,acStack_820,0);
  }
  else {
    snprintf(acStack_820,0x800,"%s: Bad eeprom param, input chain is %d\n",DAT_00044354,param_1);
    iVar1 = -0x7ffffeff;
    FUN_0002e584(0,acStack_820);
  }
  return iVar1;
}

