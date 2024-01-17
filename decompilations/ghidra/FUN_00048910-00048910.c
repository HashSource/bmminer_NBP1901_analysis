
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00048910(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_830;
  undefined2 local_82c;
  uint local_828;
  uint local_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined2 local_808;
  
  if ((DAT_00505180 == 0) && (uVar4 = FUN_00048b58(), (int)uVar4 < 0)) {
    snprintf((char *)&local_820,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_power_version");
    FUN_0002e584(0,&local_820,0);
  }
  else {
    uVar2 = DAT_0050517c;
    uVar1 = DAT_00048ab8;
    iVar6 = 10;
    do {
      local_830 = CONCAT31(local_830._1_3_,0xff);
      local_828 = local_828 & 0xffffff00;
      pthread_mutex_lock((pthread_mutex_t *)&DAT_00505164);
      iVar5 = FUN_000496f4(uVar2,&local_828,1,&local_830,1);
      if (iVar5 == 1) {
        cVar3 = (char)local_830;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505164);
        if (cVar3 == -0xb) break;
      }
      else {
        snprintf((char *)&local_820,0x800,"%s: iic read is failed\n",uVar1);
        FUN_0002e584(0,&local_820,0);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505164);
      }
      usleep(100000);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_830 = 0x204aa55;
    local_828 = 0;
    local_824 = 0;
    local_82c = 6;
    iVar6 = FUN_00048520(uVar2,&local_830,6,&local_828,8);
    if (iVar6 == 0) {
      uVar4 = local_824 & 0xffff;
      if (uVar4 != 0) {
        DAT_00505184 = uVar4;
      }
    }
    else {
      uVar4 = 0x80000300;
      local_820._0_1_ = s_get_power_version_failed_0006a2d0[0];
      local_820._1_1_ = s_get_power_version_failed_0006a2d0[1];
      local_820._2_1_ = s_get_power_version_failed_0006a2d0[2];
      local_820._3_1_ = s_get_power_version_failed_0006a2d0[3];
      uStack_81c._0_1_ = s_get_power_version_failed_0006a2d0[4];
      uStack_81c._1_1_ = s_get_power_version_failed_0006a2d0[5];
      uStack_81c._2_1_ = s_get_power_version_failed_0006a2d0[6];
      uStack_81c._3_1_ = s_get_power_version_failed_0006a2d0[7];
      uStack_818._0_1_ = s_get_power_version_failed_0006a2d0[8];
      uStack_818._1_1_ = s_get_power_version_failed_0006a2d0[9];
      uStack_818._2_1_ = s_get_power_version_failed_0006a2d0[10];
      uStack_818._3_1_ = s_get_power_version_failed_0006a2d0[11];
      uStack_814._0_1_ = s_get_power_version_failed_0006a2d0[12];
      uStack_814._1_1_ = s_get_power_version_failed_0006a2d0[13];
      uStack_814._2_1_ = s_get_power_version_failed_0006a2d0[14];
      uStack_814._3_1_ = s_get_power_version_failed_0006a2d0[15];
      local_810._0_1_ = s_get_power_version_failed_0006a2d0[16];
      local_810._1_1_ = s_get_power_version_failed_0006a2d0[17];
      local_810._2_1_ = s_get_power_version_failed_0006a2d0[18];
      local_810._3_1_ = s_get_power_version_failed_0006a2d0[19];
      uStack_80c._0_1_ = s_get_power_version_failed_0006a2d0[20];
      uStack_80c._1_1_ = s_get_power_version_failed_0006a2d0[21];
      uStack_80c._2_1_ = s_get_power_version_failed_0006a2d0[22];
      uStack_80c._3_1_ = s_get_power_version_failed_0006a2d0[23];
      local_808 = (undefined2)ram0x0006a2e8;
      FUN_0002e584(0,&local_820,0);
    }
  }
  return uVar4;
}

