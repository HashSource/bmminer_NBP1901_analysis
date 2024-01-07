
int FUN_00047158(uint param_1,uint *param_2,int param_3)

{
  int iVar1;
  char *__format;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_834;
  undefined2 uStack_830;
  byte local_82c;
  byte abStack_82b [8];
  byte local_823;
  byte local_822;
  char acStack_820 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_820,0x800,"%s: Bad pic param, input chain is %d\n",DAT_00047520,param_1);
    FUN_0002e584(0,acStack_820);
    return -0x7ffffdff;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (iVar1 = FUN_00046024(), iVar1 < 0)) {
    snprintf(acStack_820,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_00047520,param_1);
    FUN_0002e584(0,acStack_820,0);
    return iVar1;
  }
  if (param_3 == 3) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
    uVar5 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
    abStack_82b[3] = 0;
    abStack_82b[4] = 0;
    abStack_82b[5] = 0;
    local_834 = 0x3704aa55;
    local_82c = 0;
    abStack_82b[0] = 0;
    abStack_82b[1] = 0;
    abStack_82b[2] = 0;
    abStack_82b[6] = 0;
    abStack_82b[7] = 0;
    local_823 = 0;
    local_822 = 0;
    uStack_830 = 0x3b00;
    iVar1 = FUN_0004966c(uVar5,&local_834);
    if (iVar1 == 6) {
      usleep(300000);
      iVar1 = FUN_000495e4(uVar5,&local_82c);
      if (iVar1 == 0xb) {
        if ((local_82c != 0xb) || (abStack_82b[0] != 0x37)) {
          snprintf(acStack_820,0x800,
                   "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                   DAT_00047524,(uint)local_82c,(uint)abStack_82b[0]);
          iVar1 = -1;
          FUN_0002e584(0,acStack_820);
          goto LAB_00047290;
        }
        pbVar2 = &local_82c;
        uVar4 = 0;
        uVar3 = 0xb;
        while( true ) {
          uVar3 = uVar4 + uVar3;
          uVar4 = uVar3 & 0xffff;
          if (pbVar2 == abStack_82b + 7) break;
          pbVar2 = pbVar2 + 1;
          uVar3 = (uint)*pbVar2;
        }
        if (((uint)local_823 == uVar4 >> 8) && ((uint)local_822 == (uVar3 & 0xff))) {
          *param_2 = (CONCAT11(abStack_82b[3],abStack_82b[2]) & 0xff) << 8 | (uint)abStack_82b[3];
          param_2[1] = (CONCAT11(abStack_82b[5],abStack_82b[4]) & 0xff) << 8 | (uint)abStack_82b[5];
          param_2[2] = (CONCAT11(abStack_82b[7],abStack_82b[6]) & 0xff) << 8 | (uint)abStack_82b[7];
          iVar1 = 0xb;
          goto LAB_00047290;
        }
        __format = "%s failed 2!\n";
      }
      else {
        __format = "%s read iic err\n";
      }
    }
    else {
      __format = "%s write iic err\n";
    }
  }
  else {
    if (param_3 != 1) {
      snprintf(acStack_820,0x800,"%s failed: parameters error!\n",DAT_00047528);
      FUN_0002e584(0,acStack_820);
      return -0x7ffffdff;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
    uVar5 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
    local_82c = 0;
    abStack_82b[0] = 0;
    abStack_82b[1] = 0;
    local_834 = 0x3a04aa55;
    abStack_82b[2] = 0;
    abStack_82b[3] = 0;
    abStack_82b[4] = 0;
    abStack_82b[5] = 0;
    uStack_830 = 0x3e00;
    iVar1 = FUN_0004966c(uVar5,&local_834);
    if (iVar1 == 6) {
      usleep(300000);
      iVar1 = FUN_000495e4(uVar5,&local_82c);
      if (iVar1 == 7) {
        if (((local_82c != 7) || (abStack_82b[0] != 0x3a)) || (abStack_82b[1] != 1)) {
          snprintf(acStack_820,0x800,
                   "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n"
                   ,DAT_0004751c,(uint)local_82c,(uint)abStack_82b[0],(uint)abStack_82b[1]);
          iVar1 = -1;
          FUN_0002e584(0,acStack_820);
          goto LAB_00047290;
        }
        uVar3 = (uint)abStack_82b[2] + (uint)abStack_82b[3] + 0x42;
        if (((uint)abStack_82b[4] == uVar3 >> 8) && ((uint)abStack_82b[5] == (uVar3 & 0xff))) {
          *param_2 = (CONCAT11(abStack_82b[3],abStack_82b[2]) & 0xff) << 8 | (uint)abStack_82b[3];
          iVar1 = 7;
          goto LAB_00047290;
        }
        __format = "%s failed 2!\n";
      }
      else {
        __format = "%s read iic err\n";
      }
    }
    else {
      __format = "%s write iic err\n";
    }
  }
  snprintf(acStack_820,0x800,__format);
  iVar1 = -1;
  FUN_0002e584(0,acStack_820);
LAB_00047290:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return iVar1;
}

