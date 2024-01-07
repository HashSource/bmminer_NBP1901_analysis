
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00019698(int param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  
  uVar3 = FUN_00048910();
  if ((undefined *)0x3 < DAT_0007eb9c) {
    snprintf((char *)&local_830,0x800,"power type version: 0x%04x\n",uVar3);
    FUN_0002e584(3,&local_830,0);
  }
  iVar4 = FUN_0001e91c(uVar3 & 0xffff);
  if (iVar4 == 0) {
    if ((undefined *)0x3 < DAT_0007eb9c) {
      local_830._0_1_ = s_power_type_version_error_000613e0[0];
      local_830._1_1_ = s_power_type_version_error_000613e0[1];
      local_830._2_1_ = s_power_type_version_error_000613e0[2];
      local_830._3_1_ = s_power_type_version_error_000613e0[3];
      uStack_82c._0_1_ = s_power_type_version_error_000613e0[4];
      uStack_82c._1_1_ = s_power_type_version_error_000613e0[5];
      uStack_82c._2_1_ = s_power_type_version_error_000613e0[6];
      uStack_82c._3_1_ = s_power_type_version_error_000613e0[7];
      uStack_828._0_1_ = s_power_type_version_error_000613e0[8];
      uStack_828._1_1_ = s_power_type_version_error_000613e0[9];
      uStack_828._2_1_ = s_power_type_version_error_000613e0[10];
      uStack_828._3_1_ = s_power_type_version_error_000613e0[11];
      uStack_824._0_1_ = s_power_type_version_error_000613e0[12];
      uStack_824._1_1_ = s_power_type_version_error_000613e0[13];
      uStack_824._2_1_ = s_power_type_version_error_000613e0[14];
      uStack_824._3_1_ = s_power_type_version_error_000613e0[15];
      local_820._0_1_ = s_power_type_version_error_000613e0[16];
      local_820._1_1_ = s_power_type_version_error_000613e0[17];
      local_820._2_1_ = s_power_type_version_error_000613e0[18];
      local_820._3_1_ = s_power_type_version_error_000613e0[19];
      uStack_81c._0_1_ = s_power_type_version_error_000613e0[20];
      uStack_81c._1_1_ = s_power_type_version_error_000613e0[21];
      uStack_81c._2_1_ = s_power_type_version_error_000613e0[22];
      uStack_81c._3_1_ = s_power_type_version_error_000613e0[23];
      local_818 = CONCAT22(local_818._2_2_,(short)ram0x000613f8);
      FUN_0002e584(3,&local_830,0);
      return -1;
    }
  }
  else {
    if ((undefined *)0x3 < DAT_0007eb9c) {
      local_830._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[0];
      local_830._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[1];
      local_830._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[2];
      local_830._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[3];
      uStack_82c._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[4];
      uStack_82c._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[5];
      uStack_82c._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[6];
      uStack_82c._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[7];
      uStack_828._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[8];
      uStack_828._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[9];
      uStack_828._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[10];
      uStack_828._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[11];
      uStack_824._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[12];
      uStack_824._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[13];
      uStack_824._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[14];
      uStack_824._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[15];
      local_820._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[16];
      local_820._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[17];
      local_820._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[18];
      local_820._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[19];
      uStack_81c._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[20];
      uStack_81c._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[21];
      uStack_81c._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[22];
      uStack_81c._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[23];
      local_818._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[24];
      local_818._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[25];
      local_818._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[26];
      local_818._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[27];
      local_814._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[28];
      local_814._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[29];
      local_814._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[30];
      local_814._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[31];
      local_810._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[32];
      local_810._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[33];
      local_810._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[34];
      local_810._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[35];
      local_80c._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[36];
      local_80c._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[37];
      local_80c._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[38];
      local_80c._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[39];
      uStack_808._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[40];
      uStack_808._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[41];
      uStack_808._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[42];
      uStack_808._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[43];
      uStack_804._0_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[44];
      uStack_804._1_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[45];
      uStack_804._2_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[46];
      uStack_804._3_1_ = s_Enter_sleep_to_make_sure_power_r_000613fc[47];
      FUN_0002e584(3,&local_830,0);
    }
    FUN_00042138();
    sleep(1);
    FUN_000194f0();
    iVar4 = FUN_000195a8(param_1);
    if (iVar4 < 0) {
      if (DAT_0007eb9c < (undefined *)0x4) {
        return iVar4;
      }
      snprintf((char *)&local_830,0x800,"%s power iic error.\n",DAT_00019ab0);
      FUN_0002e584(3,&local_830,0);
      return iVar4;
    }
    FUN_00042100();
    sleep(1);
    dVar2 = DAT_00019aa8;
    dVar8 = DAT_00019aa0;
    dVar1 = DAT_00019a98;
    if (uVar3 - 0x75 < 4) {
      iVar4 = 3;
      do {
        sleep(1);
        dVar7 = (double)FUN_000192c8(0);
        if (dVar7 < 0.0) {
          if ((undefined *)0x3 < DAT_0007eb9c) {
            local_830._0_1_ = s_read_feedback_voltage_failed__0006146c[0];
            local_830._1_1_ = s_read_feedback_voltage_failed__0006146c[1];
            local_830._2_1_ = s_read_feedback_voltage_failed__0006146c[2];
            local_830._3_1_ = s_read_feedback_voltage_failed__0006146c[3];
            uStack_82c._0_1_ = s_read_feedback_voltage_failed__0006146c[4];
            uStack_82c._1_1_ = s_read_feedback_voltage_failed__0006146c[5];
            uStack_82c._2_1_ = s_read_feedback_voltage_failed__0006146c[6];
            uStack_82c._3_1_ = s_read_feedback_voltage_failed__0006146c[7];
            uStack_828._0_1_ = s_read_feedback_voltage_failed__0006146c[8];
            uStack_828._1_1_ = s_read_feedback_voltage_failed__0006146c[9];
            uStack_828._2_1_ = s_read_feedback_voltage_failed__0006146c[10];
            uStack_828._3_1_ = s_read_feedback_voltage_failed__0006146c[11];
            uStack_824._0_1_ = s_read_feedback_voltage_failed__0006146c[12];
            uStack_824._1_1_ = s_read_feedback_voltage_failed__0006146c[13];
            uStack_824._2_1_ = s_read_feedback_voltage_failed__0006146c[14];
            uStack_824._3_1_ = s_read_feedback_voltage_failed__0006146c[15];
            local_820._0_1_ = s_read_feedback_voltage_failed__0006146c[16];
            local_820._1_1_ = s_read_feedback_voltage_failed__0006146c[17];
            local_820._2_1_ = s_read_feedback_voltage_failed__0006146c[18];
            local_820._3_1_ = s_read_feedback_voltage_failed__0006146c[19];
            uStack_81c._0_1_ = s_read_feedback_voltage_failed__0006146c[20];
            uStack_81c._1_1_ = s_read_feedback_voltage_failed__0006146c[21];
            uStack_81c._2_1_ = s_read_feedback_voltage_failed__0006146c[22];
            uStack_81c._3_1_ = s_read_feedback_voltage_failed__0006146c[23];
            local_818._0_1_ = s_read_feedback_voltage_failed__0006146c[24];
            local_818._1_1_ = s_read_feedback_voltage_failed__0006146c[25];
            local_818._2_1_ = s_read_feedback_voltage_failed__0006146c[26];
            local_818._3_1_ = s_read_feedback_voltage_failed__0006146c[27];
            local_814._0_2_ = (short)ram0x00061488;
            FUN_0002e584(3,&local_830,0);
          }
          iVar4 = 0;
          FUN_00031d58(9,"power voltage read failed, pls check!");
          goto LAB_000197d8;
        }
        dVar7 = dVar7 * dVar1;
        dVar10 = (double)(longlong)param_1;
        dVar9 = dVar10 * dVar8;
        if ((dVar7 == dVar9 || dVar7 < dVar9 != (NAN(dVar7) || NAN(dVar9))) &&
           (dVar10 * dVar2 <= dVar7)) {
          iVar4 = 0;
          goto LAB_000197d8;
        }
        if ((undefined *)0x3 < DAT_0007eb9c) {
          dVar7 = dVar7 - dVar10;
          puVar6 = DAT_0007eb9c;
          if (dVar7 != 0.0 && dVar7 < 0.0 == NAN(dVar7)) {
            puVar6 = &UNK_000613b4;
          }
          if (dVar7 == 0.0 || dVar7 < 0.0 != NAN(dVar7)) {
            puVar6 = &UNK_000613bc;
          }
          snprintf((char *)&local_830,0x800,"chain avg vol %s from %d to %.2f",puVar6,param_1);
          FUN_0002e584(3,&local_830,0);
          if ((undefined *)0x3 < DAT_0007eb9c) {
            local_830._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[0];
            local_830._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[1];
            local_830._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[2];
            local_830._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[3];
            uStack_82c._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[4];
            uStack_82c._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[5];
            uStack_82c._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[6];
            uStack_82c._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[7];
            uStack_828._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[8];
            uStack_828._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[9];
            uStack_828._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[10];
            uStack_828._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[11];
            uStack_824._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[12];
            uStack_824._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[13];
            uStack_824._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[14];
            uStack_824._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[15];
            local_820._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[16];
            local_820._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[17];
            local_820._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[18];
            local_820._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[19];
            uStack_81c._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[20];
            uStack_81c._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[21];
            uStack_81c._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[22];
            uStack_81c._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[23];
            local_818._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[24];
            local_818._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[25];
            local_818._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[26];
            local_818._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[27];
            local_814._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[28];
            local_814._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[29];
            local_814._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[30];
            local_814._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[31];
            local_810._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[32];
            local_810._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[33];
            local_810._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[34];
            local_810._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[35];
            local_80c._0_2_ = (short)ram0x00061468;
            FUN_0002e584(3,&local_830,0);
          }
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar4 = -1;
LAB_000197d8:
      uVar3 = 0;
      do {
        iVar5 = FUN_00048b7c();
        uVar3 = uVar3 + 1;
        if (iVar5 == 0) {
          return iVar4;
        }
        if ((uVar3 % 5 == 0) && ((undefined *)0x3 < DAT_0007eb9c)) {
          local_830._0_1_ = s_bitmain_get_power_status_failed__000614d8[0];
          local_830._1_1_ = s_bitmain_get_power_status_failed__000614d8[1];
          local_830._2_1_ = s_bitmain_get_power_status_failed__000614d8[2];
          local_830._3_1_ = s_bitmain_get_power_status_failed__000614d8[3];
          uStack_82c._0_1_ = s_bitmain_get_power_status_failed__000614d8[4];
          uStack_82c._1_1_ = s_bitmain_get_power_status_failed__000614d8[5];
          uStack_82c._2_1_ = s_bitmain_get_power_status_failed__000614d8[6];
          uStack_82c._3_1_ = s_bitmain_get_power_status_failed__000614d8[7];
          uStack_828._0_1_ = s_bitmain_get_power_status_failed__000614d8[8];
          uStack_828._1_1_ = s_bitmain_get_power_status_failed__000614d8[9];
          uStack_828._2_1_ = s_bitmain_get_power_status_failed__000614d8[10];
          uStack_828._3_1_ = s_bitmain_get_power_status_failed__000614d8[11];
          uStack_824._0_1_ = s_bitmain_get_power_status_failed__000614d8[12];
          uStack_824._1_1_ = s_bitmain_get_power_status_failed__000614d8[13];
          uStack_824._2_1_ = s_bitmain_get_power_status_failed__000614d8[14];
          uStack_824._3_1_ = s_bitmain_get_power_status_failed__000614d8[15];
          local_820._0_1_ = s_bitmain_get_power_status_failed__000614d8[16];
          local_820._1_1_ = s_bitmain_get_power_status_failed__000614d8[17];
          local_820._2_1_ = s_bitmain_get_power_status_failed__000614d8[18];
          local_820._3_1_ = s_bitmain_get_power_status_failed__000614d8[19];
          uStack_81c._0_1_ = s_bitmain_get_power_status_failed__000614d8[20];
          uStack_81c._1_1_ = s_bitmain_get_power_status_failed__000614d8[21];
          uStack_81c._2_1_ = s_bitmain_get_power_status_failed__000614d8[22];
          uStack_81c._3_1_ = s_bitmain_get_power_status_failed__000614d8[23];
          local_818._0_1_ = s_bitmain_get_power_status_failed__000614d8[24];
          local_818._1_1_ = s_bitmain_get_power_status_failed__000614d8[25];
          local_818._2_1_ = s_bitmain_get_power_status_failed__000614d8[26];
          local_818._3_1_ = s_bitmain_get_power_status_failed__000614d8[27];
          local_814._0_1_ = s_bitmain_get_power_status_failed__000614d8[28];
          local_814._1_1_ = s_bitmain_get_power_status_failed__000614d8[29];
          local_814._2_1_ = s_bitmain_get_power_status_failed__000614d8[30];
          local_814._3_1_ = s_bitmain_get_power_status_failed__000614d8[31];
          local_810._0_1_ = (char)ram0x000614f8;
          FUN_0002e584(3,&local_830,0);
        }
        sleep(3);
      } while (uVar3 != 0x14);
    }
    else {
      iVar4 = 3;
      do {
        sleep(1);
        dVar8 = (double)FUN_000193f8();
        if (((double)(longlong)param_1 * 0.75) / dVar1 <= dVar8) {
          return 0;
        }
        if ((undefined *)0x3 < DAT_0007eb9c) {
          local_830._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[0];
          local_830._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[1];
          local_830._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[2];
          local_830._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[3];
          uStack_82c._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[4];
          uStack_82c._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[5];
          uStack_82c._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[6];
          uStack_82c._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[7];
          uStack_828._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[8];
          uStack_828._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[9];
          uStack_828._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[10];
          uStack_828._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[11];
          uStack_824._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[12];
          uStack_824._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[13];
          uStack_824._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[14];
          uStack_824._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[15];
          local_820._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[16];
          local_820._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[17];
          local_820._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[18];
          local_820._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[19];
          uStack_81c._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[20];
          uStack_81c._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[21];
          uStack_81c._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[22];
          uStack_81c._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[23];
          local_818._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[24];
          local_818._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[25];
          local_818._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[26];
          local_818._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[27];
          local_814._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[28];
          local_814._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[29];
          local_814._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[30];
          local_814._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[31];
          local_810._0_1_ = s_power_voltage_can_not_meet_the_t_00061444[32];
          local_810._1_1_ = s_power_voltage_can_not_meet_the_t_00061444[33];
          local_810._2_1_ = s_power_voltage_can_not_meet_the_t_00061444[34];
          local_810._3_1_ = s_power_voltage_can_not_meet_the_t_00061444[35];
          local_80c._0_2_ = (short)ram0x00061468;
          FUN_0002e584(3,&local_830,0);
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return -1;
}

