
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002f724(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined2 local_7fc;
  
  if (*param_2 == 0) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else if (param_3 != 0) {
    if (param_2[1] == 0) {
LAB_0002f83c:
      if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
        local_810._0_1_ = s_hex2bin_str_truncated_0006647c[0];
        local_810._1_1_ = s_hex2bin_str_truncated_0006647c[1];
        local_810._2_1_ = s_hex2bin_str_truncated_0006647c[2];
        local_810._3_1_ = s_hex2bin_str_truncated_0006647c[3];
        uStack_80c._0_1_ = s_hex2bin_str_truncated_0006647c[4];
        uStack_80c._1_1_ = s_hex2bin_str_truncated_0006647c[5];
        uStack_80c._2_1_ = s_hex2bin_str_truncated_0006647c[6];
        uStack_80c._3_1_ = s_hex2bin_str_truncated_0006647c[7];
        uStack_808._0_1_ = s_hex2bin_str_truncated_0006647c[8];
        uStack_808._1_1_ = s_hex2bin_str_truncated_0006647c[9];
        uStack_808._2_1_ = s_hex2bin_str_truncated_0006647c[10];
        uStack_808._3_1_ = s_hex2bin_str_truncated_0006647c[11];
        uStack_804._0_1_ = s_hex2bin_str_truncated_0006647c[12];
        uStack_804._1_1_ = s_hex2bin_str_truncated_0006647c[13];
        uStack_804._2_1_ = s_hex2bin_str_truncated_0006647c[14];
        uStack_804._3_1_ = s_hex2bin_str_truncated_0006647c[15];
        local_800._0_1_ = s_hex2bin_str_truncated_0006647c[16];
        local_800._1_1_ = s_hex2bin_str_truncated_0006647c[17];
        local_800._2_1_ = s_hex2bin_str_truncated_0006647c[18];
        local_800._3_1_ = s_hex2bin_str_truncated_0006647c[19];
        local_7fc = (undefined2)ram0x00066490;
        FUN_0002e584(3,&local_810,0);
      }
    }
    else {
      uVar3 = *(uint *)(&DAT_0006551c + (uint)param_2[1] * 4);
      uVar4 = *(uint *)(&DAT_0006551c + (uint)*param_2 * 4);
      if (-1 < (int)(uVar3 | uVar4)) {
        param_2 = param_2 + 4;
        do {
          param_3 = param_3 + -1;
          *param_1 = (byte)uVar3 | (byte)(uVar4 << 4);
          pbVar1 = param_2 + -2;
          if (*pbVar1 == 0) {
            if (param_3 != 0) {
              return 0;
            }
            return 1;
          }
          if (param_3 == 0) {
            return 0;
          }
          pbVar2 = param_2 + -1;
          param_2 = param_2 + 2;
          if (*pbVar2 == 0) goto LAB_0002f83c;
          uVar4 = *(uint *)(&DAT_0006551c + (uint)*pbVar1 * 4);
          uVar3 = *(uint *)(&DAT_0006551c + (uint)*pbVar2 * 4);
          param_1 = param_1 + 1;
        } while (-1 < (int)(uVar4 | uVar3));
      }
      if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
        local_810._0_1_ = s_hex2bin_scan_failed_00066494[0];
        local_810._1_1_ = s_hex2bin_scan_failed_00066494[1];
        local_810._2_1_ = s_hex2bin_scan_failed_00066494[2];
        local_810._3_1_ = s_hex2bin_scan_failed_00066494[3];
        uStack_80c._0_1_ = s_hex2bin_scan_failed_00066494[4];
        uStack_80c._1_1_ = s_hex2bin_scan_failed_00066494[5];
        uStack_80c._2_1_ = s_hex2bin_scan_failed_00066494[6];
        uStack_80c._3_1_ = s_hex2bin_scan_failed_00066494[7];
        uStack_808._0_1_ = s_hex2bin_scan_failed_00066494[8];
        uStack_808._1_1_ = s_hex2bin_scan_failed_00066494[9];
        uStack_808._2_1_ = s_hex2bin_scan_failed_00066494[10];
        uStack_808._3_1_ = s_hex2bin_scan_failed_00066494[11];
        uStack_804._0_1_ = s_hex2bin_scan_failed_00066494[12];
        uStack_804._1_1_ = s_hex2bin_scan_failed_00066494[13];
        uStack_804._2_1_ = s_hex2bin_scan_failed_00066494[14];
        uStack_804._3_1_ = s_hex2bin_scan_failed_00066494[15];
        local_800._0_1_ = s_hex2bin_scan_failed_00066494[16];
        local_800._1_1_ = s_hex2bin_scan_failed_00066494[17];
        local_800._2_1_ = s_hex2bin_scan_failed_00066494[18];
        local_800._3_1_ = s_hex2bin_scan_failed_00066494[19];
        FUN_0002e584(3,&local_810,0);
        return 0;
      }
    }
    return 0;
  }
  return 0;
}

