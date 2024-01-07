
uint FUN_00046178(uint param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_830;
  byte local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  char acStack_818 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_818,0x800,"%s: Bad pic param, input chain is %d\n",DAT_00046378,param_1);
    FUN_0002e584(0,acStack_818);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (uVar3 = FUN_00046024(), (int)uVar3 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_00046378,param_1);
    FUN_0002e584(0,acStack_818,0);
    return uVar3;
  }
  uVar4 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  local_828 = 0x1704aa55;
  local_820 = 0;
  local_81c = 0;
  local_830 = 0;
  local_82c = 0;
  local_824 = 0x1b00;
  iVar1 = FUN_0004966c(uVar4,&local_828);
  if (iVar1 == 6) {
    usleep(300000);
    iVar1 = FUN_000495e4(uVar4,&local_830,5);
    if (iVar1 != 5) {
      pcVar2 = "%s read iic err\n";
      goto LAB_000462cc;
    }
    if ((local_830._1_1_ == '\x17') && ((char)local_830 == '\x05')) {
      uVar3 = local_830 >> 0x10 & 0xff;
      if ((local_830 >> 0x18 == uVar3 + 0x1c >> 8) && ((uint)local_82c == (uVar3 + 0x1c & 0xff)))
      goto LAB_00046268;
      pcVar2 = "%s failed 2!\n";
    }
    else {
      pcVar2 = "%s failed!\n";
    }
    snprintf(acStack_818,0x800,pcVar2,DAT_00046374);
    FUN_0002e584(0,acStack_818);
    FUN_00045ed0(&local_830,5);
  }
  else {
    pcVar2 = "%s write iic err\n";
LAB_000462cc:
    snprintf(acStack_818,0x800,pcVar2);
    FUN_0002e584(0,acStack_818,0);
  }
  uVar3 = 0x80000200;
LAB_00046268:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return uVar3;
}

