
int FUN_00046acc(uint param_1)

{
  int iVar1;
  char *__format;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_830;
  undefined2 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  char acStack_818 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_818,0x800,"%s: Bad pic param, input chain is %d\n",DAT_00046c9c,param_1);
    FUN_0002e584(0,acStack_818);
    return -0x7ffffdff;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (iVar1 = FUN_00046024(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_00046c9c,param_1);
    FUN_0002e584(0,acStack_818,0);
    return iVar1;
  }
  uVar3 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
  iVar2 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  local_828 = 0x1604aa55;
  local_820 = 0;
  local_81c = 0;
  local_830 = 0;
  local_82c = 0;
  local_824 = 0x1a00;
  iVar1 = FUN_0004966c(uVar3,&local_828);
  if (iVar1 == 6) {
    usleep(300000);
    iVar1 = FUN_000495e4(uVar3,&local_830,6);
    if (iVar1 != 6) {
      __format = "%s read iic err\n";
      goto LAB_00046c00;
    }
    if ((local_830._1_1_ == '\x16') && (local_830._2_1_ == '\x01')) goto LAB_00046b9c;
    snprintf(acStack_818,0x800,"%s failed!\n",DAT_00046c98);
    FUN_0002e584(0,acStack_818);
    FUN_00045ed0(&local_830,6);
  }
  else {
    __format = "%s write iic err\n";
LAB_00046c00:
    snprintf(acStack_818,0x800,__format);
    FUN_0002e584(0,acStack_818,0);
  }
  iVar2 = -0x7ffffe00;
LAB_00046b9c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return iVar2;
}

