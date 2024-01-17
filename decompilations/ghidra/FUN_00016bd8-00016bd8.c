
void FUN_00016bd8(byte *param_1)

{
  byte *pbVar1;
  undefined2 local_810 [1026];
  
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf((char *)local_810,0x800,"%-30s : 0x%04x\n","key_version",*param_1 & 0xf);
  FUN_0002e584(3,local_810,0);
  if (DAT_0007eb9c < 4) {
LAB_00016d44:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : %s\n","chip_technology",
               *(undefined4 *)(param_1 + 0x1f));
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_810,0x800,"%-30s : 0x%02x\n","fixture_fmt_version",(uint)param_1[2]);
      FUN_0002e584(3,local_810,0);
      goto LAB_00016dc4;
    }
LAB_00016e4c:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : 0x%02x-%02x\n",&DAT_00060cb8,(uint)param_1[0x1d],
               (uint)param_1[0x1e]);
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_810,0x800,"%-30s : %u\n","hash_board_voltage",
               (uint)*(ushort *)(param_1 + 0x23));
      FUN_0002e584(3,local_810,0);
      goto LAB_00016ed4;
    }
LAB_00016f5c:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : %u\n","inlet_temperature",(uint)param_1[0x2b]);
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_810,0x800,"%-30s : %u\n","outlet_temperature",(uint)param_1[0x2c]);
      FUN_0002e584(3,local_810,0);
      goto LAB_00016fdc;
    }
LAB_00017084:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : 0x%02x-%02x\n","pic sensor",
               (uint)(param_1[0x19] >> 7),param_1[0x19] & 0x7f);
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_810,0x800,"%-30s : 0x%02x\n","pic sensor addr",(uint)param_1[0x1a]);
      FUN_0002e584(3,local_810,0);
      goto LAB_00017110;
    }
  }
  else {
    snprintf((char *)local_810,0x800,"%-30s : 0x%04x\n","algorithm_code",(uint)(*param_1 >> 4));
    FUN_0002e584(3,local_810,0);
    if (DAT_0007eb9c < 4) {
      return;
    }
    snprintf((char *)local_810,0x800,"%-30s : 0x%04x\n","fixture_info_len",(uint)param_1[1]);
    FUN_0002e584(3,local_810,0);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : 0x%04x\n","fixture_standard",(uint)param_1[0x2d]);
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_810,0x800,"%-30s : 0x%04x\n","test_standard",(uint)param_1[0x2e]);
      FUN_0002e584(3,local_810,0);
      goto LAB_00016d44;
    }
LAB_00016dc4:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : %s\n",&DAT_00060c9c,*(undefined4 *)(param_1 + 3));
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_810,0x800,"%-30s : 0x%02x-%02x\n",&DAT_00060830,(uint)param_1[0x1b],
               (uint)param_1[0x1c]);
      FUN_0002e584(3,local_810,0);
      goto LAB_00016e4c;
    }
LAB_00016ed4:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : %u\n","hash_board_freq",
               (uint)*(ushort *)(param_1 + 0x25));
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_810,0x800,"%-30s : %.2f\n","nonce_response_rate",
               (double)*(float *)(param_1 + 0x27));
      FUN_0002e584(3,local_810,0);
      goto LAB_00016f5c;
    }
LAB_00016fdc:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_810,0x800,"%-30s : 0x%02x-%02x\n","asic sensor",
               (uint)(param_1[0x14] >> 7),param_1[0x14] & 0x7f);
      FUN_0002e584(3,local_810,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      pbVar1 = *(byte **)(param_1 + 0x15);
      snprintf((char *)local_810,0x800,"%-30s : 0x%02x-%02x-%02x-%02x\n","asic sensor addr",
               (uint)*pbVar1,(uint)pbVar1[1],(uint)pbVar1[2],(uint)pbVar1[3]);
      FUN_0002e584(3,local_810,0);
      goto LAB_00017084;
    }
LAB_00017110:
    if (DAT_0007eb9c < 4) goto LAB_00017210;
    snprintf((char *)local_810,0x800,"%-30s : bin%d\n","chip_bin",(uint)param_1[0xf]);
    FUN_0002e584(3,local_810,0);
    if (DAT_0007eb9c < 4) {
      return;
    }
    snprintf((char *)local_810,0x800,"%-30s : %s\n",&DAT_00060db0,*(undefined4 *)(param_1 + 0x10));
    FUN_0002e584(3,local_810,0);
  }
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf((char *)local_810,0x800,"%-30s : %s\n","chip_die",*(undefined4 *)(param_1 + 7));
  FUN_0002e584(3,local_810,0);
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf((char *)local_810,0x800,"%-30s : %s\n","chip_marking",*(undefined4 *)(param_1 + 0xb));
  FUN_0002e584(3,local_810,0);
LAB_00017210:
  if (DAT_0007eb9c < 4) {
    return;
  }
  local_810[0] = 10;
  FUN_0002e584(3,local_810,0);
  return;
}

