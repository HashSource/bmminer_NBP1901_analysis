
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00048520(undefined4 param_1,char *param_2,uint param_3,char *param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  int local_850;
  undefined local_829;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined2 local_810;
  
  local_829 = 0x11;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00505164);
  local_850 = 0;
  do {
    uVar4 = 0;
    do {
      pcVar3 = param_2 + uVar4;
      uVar4 = uVar4 + 1 & 0xff;
      FUN_00049794(param_1,&local_829,1,pcVar3,1);
    } while (uVar4 < param_3);
    uVar4 = 0;
    usleep(400000);
    do {
      pcVar3 = param_4 + uVar4;
      uVar4 = uVar4 + 1 & 0xff;
      FUN_000496f4(param_1,&local_829,1,pcVar3,1);
    } while (uVar4 < param_5);
    usleep(100000);
    uVar4 = 0;
    pbVar1 = (byte *)(param_4 + 1);
    do {
      pbVar1 = pbVar1 + 1;
      uVar4 = uVar4 + *pbVar1 & 0xffff;
    } while ((byte *)(param_4 + (param_5 - 3)) != pbVar1);
    uVar2 = (uint)(byte)param_4[param_5 - 2] + (uint)(byte)param_4[param_5 - 1] * 0x100 & 0xffff;
    if (uVar4 == uVar2) {
      if ((((*param_2 == *param_4) && (param_2[1] == param_4[1])) && (param_2[3] == param_4[3])) &&
         (param_5 == (byte)param_4[2] + 2)) {
        uVar6 = 0;
        goto LAB_00048744;
      }
      local_828._0_1_ = s_power_reply_the_bad_data_0006a1fc[0];
      local_828._1_1_ = s_power_reply_the_bad_data_0006a1fc[1];
      local_828._2_1_ = s_power_reply_the_bad_data_0006a1fc[2];
      local_828._3_1_ = s_power_reply_the_bad_data_0006a1fc[3];
      uStack_824._0_1_ = s_power_reply_the_bad_data_0006a1fc[4];
      uStack_824._1_1_ = s_power_reply_the_bad_data_0006a1fc[5];
      uStack_824._2_1_ = s_power_reply_the_bad_data_0006a1fc[6];
      uStack_824._3_1_ = s_power_reply_the_bad_data_0006a1fc[7];
      uStack_820._0_1_ = s_power_reply_the_bad_data_0006a1fc[8];
      uStack_820._1_1_ = s_power_reply_the_bad_data_0006a1fc[9];
      uStack_820._2_1_ = s_power_reply_the_bad_data_0006a1fc[10];
      uStack_820._3_1_ = s_power_reply_the_bad_data_0006a1fc[11];
      uStack_81c._0_1_ = s_power_reply_the_bad_data_0006a1fc[12];
      uStack_81c._1_1_ = s_power_reply_the_bad_data_0006a1fc[13];
      uStack_81c._2_1_ = s_power_reply_the_bad_data_0006a1fc[14];
      uStack_81c._3_1_ = s_power_reply_the_bad_data_0006a1fc[15];
      local_818._0_1_ = s_power_reply_the_bad_data_0006a1fc[16];
      local_818._1_1_ = s_power_reply_the_bad_data_0006a1fc[17];
      local_818._2_1_ = s_power_reply_the_bad_data_0006a1fc[18];
      local_818._3_1_ = s_power_reply_the_bad_data_0006a1fc[19];
      uStack_814._0_1_ = s_power_reply_the_bad_data_0006a1fc[20];
      uStack_814._1_1_ = s_power_reply_the_bad_data_0006a1fc[21];
      uStack_814._2_1_ = s_power_reply_the_bad_data_0006a1fc[22];
      uStack_814._3_1_ = s_power_reply_the_bad_data_0006a1fc[23];
      local_810 = (undefined2)ram0x0006a214;
      FUN_0002e584(0,&local_828);
    }
    else {
      snprintf((char *)&local_828,0x800,"power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n"
               ,uVar4,uVar2);
      FUN_0002e584(0,&local_828);
    }
    pbVar5 = (byte *)(param_4 + -1);
    pbVar1 = pbVar5 + param_5;
    iVar7 = 0;
    do {
      pbVar5 = pbVar5 + 1;
      snprintf((char *)&local_828,0x800,"read_back_data[%d] = 0x%02x",iVar7,(uint)*pbVar5);
      FUN_0002e584(0,&local_828);
      iVar7 = iVar7 + 1;
    } while (pbVar1 != pbVar5);
    iVar7 = local_850 + 1;
    snprintf((char *)&local_828,0x800,"Send power cmd(0x%02x) failed, retry %d\n",
             (uint)(byte)param_2[3],local_850);
    FUN_0002e584(0,&local_828);
    local_850 = iVar7;
  } while (iVar7 != 3);
  uVar6 = 0x80000300;
LAB_00048744:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505164);
  return uVar6;
}

