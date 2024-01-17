
size_t FUN_000477ec(uint param_1,int param_2,int param_3,void *param_4,size_t param_5)

{
  byte *__ptr;
  int iVar1;
  size_t sVar2;
  uint uVar3;
  char *__format;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  size_t __size;
  undefined4 uVar8;
  undefined4 local_834;
  undefined local_830;
  undefined local_82f;
  undefined local_82e;
  undefined local_82d;
  undefined local_82c;
  char acStack_828 [2052];
  
  if (0xf < param_1) {
    snprintf(acStack_828,0x800,"%s: Bad pic param, input chain is %d\n",DAT_00047ac0,param_1);
    FUN_0002e584(0,acStack_828);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (sVar7 = FUN_00046024(), (int)sVar7 < 0)) {
    snprintf(acStack_828,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_00047ac0,param_1);
    FUN_0002e584(0,acStack_828,0);
    return sVar7;
  }
  __size = param_5 + 5;
  uVar8 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  __ptr = (byte *)malloc(__size);
  sVar7 = param_5;
  if (0xf < (int)param_5) {
    sVar7 = 0x10;
  }
  local_834 = 0x3607aa55;
  uVar4 = sVar7 + 0x3d + param_3 + param_2 & 0xffff;
  local_830 = (undefined)param_2;
  local_82f = (undefined)param_3;
  local_82e = (undefined)sVar7;
  local_82c = (undefined)uVar4;
  local_82d = (undefined)(uVar4 >> 8);
  iVar1 = FUN_0004966c(uVar8,&local_834,9);
  if (iVar1 == 9) {
    usleep(300000);
    sVar2 = FUN_000495e4(uVar8,__ptr);
    if (__size == sVar2) {
      uVar4 = (uint)*__ptr;
      if (((__ptr[1] == 0x36) && (__ptr[2] == 1)) && (__size == uVar4)) {
        if ((int)(param_5 + 3) < 1) {
          uVar5 = 0;
          uVar3 = uVar5;
        }
        else {
          uVar5 = 0;
          uVar6 = 0;
          uVar3 = uVar4;
          while( true ) {
            uVar6 = uVar6 + 1 & 0xffff;
            uVar5 = uVar5 + uVar3 & 0xffff;
            if ((int)(param_5 + 3) <= (int)uVar6) break;
            uVar3 = (uint)__ptr[uVar6];
          }
          uVar3 = uVar5 >> 8;
        }
        if ((__ptr[param_5 + 3] == uVar3) && ((uint)__ptr[param_5 + 4] == (uVar5 & 0xff))) {
          memcpy(param_4,__ptr + 3,sVar7);
        }
        else {
          sVar7 = 0;
          snprintf(acStack_828,0x800,"%s failed 2!\n",DAT_00047abc);
          FUN_0002e584(0,acStack_828,0);
          FUN_00046fe8(__ptr,uVar4);
        }
      }
      else {
        snprintf(acStack_828,0x800,
                 "%s failed !\n read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x\n"
                 ,DAT_00047abc,uVar4,(uint)__ptr[1],(uint)__ptr[2]);
        sVar7 = 0;
        FUN_0002e584(0,acStack_828);
        FUN_00046fe8(__ptr,__size);
      }
      goto LAB_000478d0;
    }
    __format = "%s read iic 2 err\n";
  }
  else {
    __format = "%s write iic 2 err\n";
  }
  sVar7 = 0;
  snprintf(acStack_828,0x800,__format,DAT_00047abc);
  FUN_0002e584(0,acStack_828,0);
LAB_000478d0:
  free(__ptr);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return sVar7;
}

