
undefined4 FUN_00046eb4(undefined4 param_1)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  undefined2 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  char acStack_810 [2048];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  local_81c = 0xd000006;
  local_814 = 0;
  local_818 = 0;
  local_820 = 0x106aa55;
  local_824 = 0;
  iVar1 = FUN_0004966c(param_1);
  if (iVar1 == 8) {
    usleep(300000);
    iVar1 = FUN_000495e4(param_1,&local_824,2);
    if (iVar1 == 2) {
      if (((byte)local_824 == 1) && (local_824._1_1_ == 1)) {
        uVar2 = 0;
      }
      else {
        snprintf(acStack_810,0x800,
                 "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                 DAT_00046fe4,(uint)(byte)local_824,(uint)local_824._1_1_);
        uVar2 = 0x80000200;
        FUN_0002e584(0,acStack_810);
      }
      goto LAB_00046f5c;
    }
    __format = "%s read iic err\n";
  }
  else {
    __format = "%s write iic err\n";
  }
  snprintf(acStack_810,0x800,__format);
  FUN_0002e584(0,acStack_810,0);
  uVar2 = 0x80000200;
LAB_00046f5c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return uVar2;
}

