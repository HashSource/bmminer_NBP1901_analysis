
size_t FUN_00048110(uint param_1,int param_2,undefined4 param_3,void *param_4,size_t param_5)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  char *__format;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 local_848;
  undefined local_844;
  undefined local_843;
  undefined local_842;
  undefined local_841;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined2 local_82c;
  char acStack_828 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_828,0x800,"%s: Bad pic param, input chain is %d\n",DAT_00048434,param_1);
    FUN_0002e584(0,acStack_828);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (sVar1 = FUN_00046024(), (int)sVar1 < 0)) {
    snprintf(acStack_828,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_00048434,param_1);
    FUN_0002e584(0,acStack_828,0);
    return sVar1;
  }
  uVar6 = 0;
  sVar1 = FUN_00046ca0(*(undefined4 *)(&DAT_0099ee48 + param_1 * 8),param_2,param_3,0,0);
  if ((int)sVar1 < 0) {
    snprintf(acStack_828,0x800,"%s: select slave: 0x%02x, reg/command: 0x%02x is failed",
             DAT_00048434,param_2,param_3);
    FUN_0002e584(0,acStack_828,0);
    return sVar1;
  }
  usleep(10000);
  uVar7 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  if (0xf < (int)param_5) {
    param_5 = 0x10;
  }
  uVar4 = param_5 + 0x42 + param_2 & 0xffff;
  local_843 = (undefined)param_5;
  local_841 = (undefined)uVar4;
  local_840 = 0;
  local_844 = (undefined)param_2;
  local_83c = 0;
  local_842 = (undefined)(uVar4 >> 8);
  local_838 = 0;
  local_834 = 0;
  local_830 = 0;
  local_82c = 0;
  local_848 = 0x3c06aa55;
  iVar2 = FUN_0004966c(uVar7,&local_848);
  if (iVar2 == 8) {
    uVar8 = param_5 + 5;
    usleep(10000);
    uVar4 = FUN_000495e4(uVar7,&local_840,uVar8);
    if (uVar8 == uVar4) {
      uVar5 = local_840 & 0xff;
      uVar3 = local_840 >> 8 & 0xff;
      uVar4 = local_840 >> 0x10 & 0xff;
      if (((uVar8 == uVar5) && (uVar3 == 0x3c)) && (uVar4 == 1)) {
        uVar4 = 0;
        if (0 < (int)(param_5 + 3)) {
          while( true ) {
            uVar6 = uVar6 + 1 & 0xffff;
            uVar4 = uVar4 + uVar5 & 0xffff;
            if ((int)(param_5 + 3) <= (int)uVar6) break;
            uVar5 = (uint)*(byte *)((int)&local_840 + uVar6);
          }
          uVar6 = uVar4 >> 8;
        }
        if ((*(byte *)((int)&local_840 + param_5 + 3) == uVar6) &&
           ((uint)*(byte *)((int)&local_83c + param_5) == (uVar4 & 0xff))) {
          memcpy(param_4,(void *)((int)&local_840 + 3),param_5);
        }
        else {
          snprintf(acStack_828,0x800,"%s failed 2!\n",DAT_00048430);
          param_5 = 0;
          FUN_0002e584(0,acStack_828);
        }
      }
      else {
        param_5 = 0;
        snprintf(acStack_828,0x800,
                 "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n"
                 ,DAT_00048430,uVar5,uVar3,uVar4);
        FUN_0002e584(0,acStack_828,0);
      }
      goto LAB_00048220;
    }
    __format = "%s read iic err\n";
  }
  else {
    __format = "%s write iic err\n";
  }
  param_5 = 0;
  snprintf(acStack_828,0x800,__format,DAT_00048430);
  FUN_0002e584(0,acStack_828,0);
LAB_00048220:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return param_5;
}

