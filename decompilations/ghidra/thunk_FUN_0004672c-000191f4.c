
int thunk_FUN_0004672c(uint param_1)

{
  int iVar1;
  char *__format;
  int iVar2;
  undefined4 uVar3;
  undefined2 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  char acStack_818 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_818,0x800,"%s: Bad pic param, input chain is %d\n",DAT_000468fc,param_1);
    FUN_0002e584(0,acStack_818);
    return -0x7ffffdff;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (iVar1 = FUN_00046024(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_000468fc,param_1);
    FUN_0002e584(0,acStack_818,0);
    return iVar1;
  }
  uVar3 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
  iVar2 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  uStack_828 = 0x1505aa55;
  uStack_820 = 0;
  uStack_81c = 0;
  uStack_82c = 0;
  uStack_824 = 0x1b0001;
  iVar1 = FUN_0004966c(uVar3);
  if (iVar1 == 7) {
    usleep(300000);
    iVar1 = FUN_000495e4(uVar3,&uStack_82c,2);
    if (iVar1 != 2) {
      __format = "%s read iic err\n";
      goto LAB_00046864;
    }
    if (((byte)uStack_82c == 0x15) && (uStack_82c._1_1_ == 1)) goto LAB_00046800;
    snprintf(acStack_818,0x800,
             "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",DAT_000468f8,
             (uint)(byte)uStack_82c,(uint)uStack_82c._1_1_);
    FUN_0002e584(0,acStack_818);
  }
  else {
    __format = "%s write iic err\n";
LAB_00046864:
    snprintf(acStack_818,0x800,__format);
    FUN_0002e584(0,acStack_818,0);
  }
  iVar2 = -0x7ffffe00;
LAB_00046800:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return iVar2;
}

