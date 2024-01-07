
void FUN_00019214(uint param_1)

{
  undefined4 uVar1;
  char acStack_810 [2048];
  
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"chain[%d] PIC jump to app\n",param_1);
    FUN_0002e584(3,acStack_810,0);
  }
  FUN_00046554(param_1 & 0xff);
  usleep(500000);
  uVar1 = FUN_00046178(param_1 & 0xff);
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"Check chain[%d] PIC fw version=0x%02x\n",param_1,uVar1);
    FUN_0002e584(3,acStack_810,0);
  }
  return;
}

