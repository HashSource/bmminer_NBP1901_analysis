
void FUN_00032bd0(void)

{
  uint uVar1;
  char acStack_810 [2052];
  
  FUN_00044b54(&DAT_0099ede0,0x20);
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"miner ID : %s\n",&DAT_0099ede0);
    FUN_0002e584(3,acStack_810,0);
  }
  uVar1 = FUN_00045c98();
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"FPGA Version = 0x%04X\n",uVar1 & 0xffff);
    FUN_0002e584(3,acStack_810,0);
  }
  sprintf(&DAT_00080fdc,"%d.%d.%d.%d",uVar1 & 0xff,(uVar1 << 8) >> 0x18,1,3);
  return;
}

