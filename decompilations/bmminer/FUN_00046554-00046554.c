
int FUN_00046554(uint param_1)

{
  int iVar1;
  char *__format;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  char acStack_818 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_818,0x800,"%s: Bad pic param, input chain is %d\n",DAT_00046728,param_1);
    FUN_0002e584(0,acStack_818);
    return -0x7ffffdff;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (iVar1 = FUN_00046024(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_00046728,param_1);
    FUN_0002e584(0,acStack_818,0);
    return iVar1;
  }
  uVar3 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
  iVar2 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  local_828 = 0x604aa55;
  local_820 = 0;
  local_81c = 0;
  local_82c = 0;
  local_824 = 0xa00;
  iVar1 = FUN_0004966c(uVar3);
  if (iVar1 == 6) {
    usleep(300000);
    iVar1 = FUN_000495e4(uVar3,&local_82c,2);
    if (iVar1 != 2) {
      __format = "%s read iic err\n";
      goto LAB_00046690;
    }
    usleep(300000);
    if (((byte)local_82c == 6) && (local_82c._1_1_ == 1)) goto LAB_0004662c;
    snprintf(acStack_818,0x800,
             "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",DAT_00046724,
             (uint)(byte)local_82c,(uint)local_82c._1_1_);
    FUN_0002e584(0,acStack_818);
  }
  else {
    __format = "%s write iic err\n";
LAB_00046690:
    snprintf(acStack_818,0x800,__format);
    FUN_0002e584(0,acStack_818,0);
  }
  iVar2 = -0x7ffffe00;
LAB_0004662c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return iVar2;
}

