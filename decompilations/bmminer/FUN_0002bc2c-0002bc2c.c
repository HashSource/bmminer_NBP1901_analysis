
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002bc2c(int param_1,undefined4 param_2)

{
  int local_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined2 uStack_7e4;
  undefined local_7e2;
  
  local_80c = param_1;
  FUN_0003dc80(&DAT_0007e618,"Options for both config file and command line");
  FUN_0003dc80(DAT_0002bdc0,"Options for command line only");
  FUN_0003dd54(&local_80c,param_2,&DAT_000282e4);
  if (local_80c != 1) {
    local_808._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[0];
    local_808._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[1];
    local_808._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[2];
    local_808._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[3];
    uStack_804._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[4];
    uStack_804._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[5];
    uStack_804._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[6];
    uStack_804._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[7];
    uStack_800._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[8];
    uStack_800._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[9];
    uStack_800._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[10];
    uStack_800._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[11];
    uStack_7fc._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[12];
    uStack_7fc._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[13];
    uStack_7fc._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[14];
    uStack_7fc._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[15];
    local_7f8._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[16];
    local_7f8._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[17];
    local_7f8._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[18];
    local_7f8._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[19];
    uStack_7f4._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[20];
    uStack_7f4._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[21];
    uStack_7f4._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[22];
    uStack_7f4._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[23];
    uStack_7f0._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[24];
    uStack_7f0._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[25];
    uStack_7f0._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[26];
    uStack_7f0._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[27];
    uStack_7ec._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[28];
    uStack_7ec._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[29];
    uStack_7ec._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[30];
    uStack_7ec._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[31];
    uStack_7e8._0_1_ = s_Unexpected_extra_commandline_arg_00063d74[32];
    uStack_7e8._1_1_ = s_Unexpected_extra_commandline_arg_00063d74[33];
    uStack_7e8._2_1_ = s_Unexpected_extra_commandline_arg_00063d74[34];
    uStack_7e8._3_1_ = s_Unexpected_extra_commandline_arg_00063d74[35];
    uStack_7e4 = (undefined2)ram0x00063d98;
    local_7e2 = (undefined)((uint)ram0x00063d98 >> 0x10);
    FUN_0002e584(3,&local_808,1);
  }
  FUN_00029458();
  if (DAT_00080970 != 0) {
    FUN_0002a688();
  }
  if (DAT_00080968 != (char *)0x0) {
    DAT_00482130 = 1;
    strcpy(&DAT_00482158,DAT_00080968);
    if (DAT_0008096c == (char *)0x0) {
      DAT_00482138 = DAT_00063d9c;
      DAT_0048213a = DAT_00063d9e;
    }
    else {
      strcpy((char *)&DAT_00482138,DAT_0008096c);
    }
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf((char *)&local_808,0x800,"Log file path: %s Open flag: %s",&DAT_00482158,
               &DAT_00482138);
      FUN_0002e584(3,&local_808,0);
    }
  }
  return;
}

