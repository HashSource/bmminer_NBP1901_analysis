
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00024398(int param_1)

{
  char *__s;
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  ssize_t sVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined2 local_5850;
  undefined local_584e;
  socklen_t local_584c;
  undefined4 local_5848;
  undefined local_5844;
  undefined4 local_5840;
  undefined4 local_583c;
  sockaddr sStack_5838;
  undefined4 local_5828;
  undefined4 uStack_5824;
  undefined4 uStack_5820;
  undefined4 uStack_581c;
  undefined4 local_5818;
  undefined4 uStack_5814;
  undefined4 local_5810;
  undefined4 uStack_580c;
  undefined4 local_5808;
  undefined4 uStack_5804;
  undefined4 local_5800;
  undefined4 local_57fc;
  undefined4 local_57f8;
  char local_5028 [10240];
  undefined4 local_2828;
  undefined4 uStack_2824;
  undefined4 uStack_2820;
  undefined4 uStack_281c;
  undefined4 local_2818;
  undefined4 local_2814;
  undefined4 local_2810;
  undefined4 local_280c;
  undefined4 local_2808;
  undefined4 uStack_2804;
  undefined4 uStack_2800;
  undefined local_27fc;
  
  iVar8 = 0;
  local_5840 = 3;
  local_583c = 0;
  __s = (char *)calloc(1,0x6000);
  pcVar10 = local_5028;
  local_5850 = 0xa0d;
  local_584c = 0;
  local_584e = 0;
  local_5844 = 0;
  local_5848 = 0xa0d0a0d;
  memset(pcVar10,0,0x2800);
  do {
    if (DAT_0007f9f8 != '\0') goto LAB_00024478;
    sVar6 = recvfrom(param_1,pcVar10,0x27ff - iVar8,0,&sStack_5838,&local_584c);
    iVar8 = iVar8 + sVar6;
    if (sVar6 < 1) {
      close(param_1);
      if ((DAT_00482a5d != '\0') &&
         (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
        local_2828._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[0];
        local_2828._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[1];
        local_2828._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[2];
        local_2828._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[3];
        uStack_2824._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[4];
        uStack_2824._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[5];
        uStack_2824._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[6];
        uStack_2824._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[7];
        uStack_2820._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[8];
        uStack_2820._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[9];
        uStack_2820._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[10];
        uStack_2820._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[11];
        uStack_281c._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[12];
        uStack_281c._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[13];
        uStack_281c._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[14];
        uStack_281c._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[15];
        local_2818._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[16];
        local_2818._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[17];
        local_2818._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[18];
        local_2818._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[19];
        local_2814._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[20];
        local_2814._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[21];
        local_2814._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[22];
        local_2814._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[23];
        local_2810._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[24];
        local_2810._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[25];
        local_2810._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[26];
        local_2810._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[27];
        local_280c._0_1_ = s__statusServiceThread_recvfrom<_0_00062b94[28];
        local_280c._1_1_ = s__statusServiceThread_recvfrom<_0_00062b94[29];
        local_280c._2_1_ = s__statusServiceThread_recvfrom<_0_00062b94[30];
        local_280c._3_1_ = s__statusServiceThread_recvfrom<_0_00062b94[31];
        local_2808._0_1_ = (char)ram0x00062bb4;
        FUN_0002e584(7,&local_2828,0);
      }
      goto LAB_0002458c;
    }
    pcVar10 = local_5028 + iVar8;
    if (0x27fe < iVar8) {
      close(param_1);
      if ((DAT_00482a5d != '\0') &&
         (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
        local_2828._0_1_ = s_BUFSIZE_is_too_small__00062bb8[0];
        local_2828._1_1_ = s_BUFSIZE_is_too_small__00062bb8[1];
        local_2828._2_1_ = s_BUFSIZE_is_too_small__00062bb8[2];
        local_2828._3_1_ = s_BUFSIZE_is_too_small__00062bb8[3];
        uStack_2824._0_1_ = s_BUFSIZE_is_too_small__00062bb8[4];
        uStack_2824._1_1_ = s_BUFSIZE_is_too_small__00062bb8[5];
        uStack_2824._2_1_ = s_BUFSIZE_is_too_small__00062bb8[6];
        uStack_2824._3_1_ = s_BUFSIZE_is_too_small__00062bb8[7];
        uStack_2820._0_1_ = s_BUFSIZE_is_too_small__00062bb8[8];
        uStack_2820._1_1_ = s_BUFSIZE_is_too_small__00062bb8[9];
        uStack_2820._2_1_ = s_BUFSIZE_is_too_small__00062bb8[10];
        uStack_2820._3_1_ = s_BUFSIZE_is_too_small__00062bb8[11];
        uStack_281c._0_1_ = s_BUFSIZE_is_too_small__00062bb8[12];
        uStack_281c._1_1_ = s_BUFSIZE_is_too_small__00062bb8[13];
        uStack_281c._2_1_ = s_BUFSIZE_is_too_small__00062bb8[14];
        uStack_281c._3_1_ = s_BUFSIZE_is_too_small__00062bb8[15];
        local_2818._0_1_ = s_BUFSIZE_is_too_small__00062bb8[16];
        local_2818._1_1_ = s_BUFSIZE_is_too_small__00062bb8[17];
        local_2818._2_1_ = s_BUFSIZE_is_too_small__00062bb8[18];
        local_2818._3_1_ = s_BUFSIZE_is_too_small__00062bb8[19];
        local_2814._0_2_ = (short)ram0x00062bcc;
        FUN_0002e584(7,&local_2828,0);
      }
      goto LAB_0002458c;
    }
    pcVar1 = strstr(local_5028,(char *)&local_5848);
  } while (pcVar1 == (char *)0x0);
  if (DAT_00482a5d != '\0') {
    if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 7)) {
LAB_000244a0:
      if ((DAT_00482a5c != '\0') || (6 < DAT_0007eba0)) {
LAB_000244c0:
        snprintf((char *)&local_2828,0x800,"get http=%s",local_5028);
        FUN_0002e584(7,&local_2828,0);
      }
    }
    else {
      local_2828._0_1_ = s_find_http_request_end_flag__00062bd0[0];
      local_2828._1_1_ = s_find_http_request_end_flag__00062bd0[1];
      local_2828._2_1_ = s_find_http_request_end_flag__00062bd0[2];
      local_2828._3_1_ = s_find_http_request_end_flag__00062bd0[3];
      uStack_2824._0_1_ = s_find_http_request_end_flag__00062bd0[4];
      uStack_2824._1_1_ = s_find_http_request_end_flag__00062bd0[5];
      uStack_2824._2_1_ = s_find_http_request_end_flag__00062bd0[6];
      uStack_2824._3_1_ = s_find_http_request_end_flag__00062bd0[7];
      uStack_2820._0_1_ = s_find_http_request_end_flag__00062bd0[8];
      uStack_2820._1_1_ = s_find_http_request_end_flag__00062bd0[9];
      uStack_2820._2_1_ = s_find_http_request_end_flag__00062bd0[10];
      uStack_2820._3_1_ = s_find_http_request_end_flag__00062bd0[11];
      uStack_281c._0_1_ = s_find_http_request_end_flag__00062bd0[12];
      uStack_281c._1_1_ = s_find_http_request_end_flag__00062bd0[13];
      uStack_281c._2_1_ = s_find_http_request_end_flag__00062bd0[14];
      uStack_281c._3_1_ = s_find_http_request_end_flag__00062bd0[15];
      local_2818._0_1_ = s_find_http_request_end_flag__00062bd0[16];
      local_2818._1_1_ = s_find_http_request_end_flag__00062bd0[17];
      local_2818._2_1_ = s_find_http_request_end_flag__00062bd0[18];
      local_2818._3_1_ = s_find_http_request_end_flag__00062bd0[19];
      local_2814._0_1_ = s_find_http_request_end_flag__00062bd0[20];
      local_2814._1_1_ = s_find_http_request_end_flag__00062bd0[21];
      local_2814._2_1_ = s_find_http_request_end_flag__00062bd0[22];
      local_2814._3_1_ = s_find_http_request_end_flag__00062bd0[23];
      local_2810._0_1_ = s_find_http_request_end_flag__00062bd0[24];
      local_2810._1_1_ = s_find_http_request_end_flag__00062bd0[25];
      local_2810._2_1_ = s_find_http_request_end_flag__00062bd0[26];
      local_2810._3_1_ = s_find_http_request_end_flag__00062bd0[27];
      FUN_0002e584(7,&local_2828,0);
LAB_00024478:
      if (DAT_00482a5d != '\0') {
        if (DAT_00590404 == '\0') goto LAB_000244a0;
        goto LAB_000244c0;
      }
    }
  }
  if ((((local_5028[0] != 'G') || (local_5028[1] != 'E')) || (local_5028[2] != 'T')) ||
     (local_5028[3] != ' ')) {
    close(param_1);
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      local_2828._0_1_ = s_statusServiceThread_not_support_h_00062bf8[0];
      local_2828._1_1_ = s_statusServiceThread_not_support_h_00062bf8[1];
      local_2828._2_1_ = s_statusServiceThread_not_support_h_00062bf8[2];
      local_2828._3_1_ = s_statusServiceThread_not_support_h_00062bf8[3];
      uStack_2824._0_1_ = s_statusServiceThread_not_support_h_00062bf8[4];
      uStack_2824._1_1_ = s_statusServiceThread_not_support_h_00062bf8[5];
      uStack_2824._2_1_ = s_statusServiceThread_not_support_h_00062bf8[6];
      uStack_2824._3_1_ = s_statusServiceThread_not_support_h_00062bf8[7];
      uStack_2820._0_1_ = s_statusServiceThread_not_support_h_00062bf8[8];
      uStack_2820._1_1_ = s_statusServiceThread_not_support_h_00062bf8[9];
      uStack_2820._2_1_ = s_statusServiceThread_not_support_h_00062bf8[10];
      uStack_2820._3_1_ = s_statusServiceThread_not_support_h_00062bf8[11];
      uStack_281c._0_1_ = s_statusServiceThread_not_support_h_00062bf8[12];
      uStack_281c._1_1_ = s_statusServiceThread_not_support_h_00062bf8[13];
      uStack_281c._2_1_ = s_statusServiceThread_not_support_h_00062bf8[14];
      uStack_281c._3_1_ = s_statusServiceThread_not_support_h_00062bf8[15];
      local_2818._0_1_ = s_statusServiceThread_not_support_h_00062bf8[16];
      local_2818._1_1_ = s_statusServiceThread_not_support_h_00062bf8[17];
      local_2818._2_1_ = s_statusServiceThread_not_support_h_00062bf8[18];
      local_2818._3_1_ = s_statusServiceThread_not_support_h_00062bf8[19];
      local_2814._0_1_ = s_statusServiceThread_not_support_h_00062bf8[20];
      local_2814._1_1_ = s_statusServiceThread_not_support_h_00062bf8[21];
      local_2814._2_1_ = s_statusServiceThread_not_support_h_00062bf8[22];
      local_2814._3_1_ = s_statusServiceThread_not_support_h_00062bf8[23];
      local_2810._0_1_ = s_statusServiceThread_not_support_h_00062bf8[24];
      local_2810._1_1_ = s_statusServiceThread_not_support_h_00062bf8[25];
      local_2810._2_1_ = s_statusServiceThread_not_support_h_00062bf8[26];
      local_2810._3_1_ = s_statusServiceThread_not_support_h_00062bf8[27];
      local_280c._0_1_ = s_statusServiceThread_not_support_h_00062bf8[28];
      local_280c._1_1_ = s_statusServiceThread_not_support_h_00062bf8[29];
      local_280c._2_1_ = s_statusServiceThread_not_support_h_00062bf8[30];
      local_280c._3_1_ = s_statusServiceThread_not_support_h_00062bf8[31];
      local_2808._0_1_ = s_statusServiceThread_not_support_h_00062bf8[32];
      local_2808._1_1_ = s_statusServiceThread_not_support_h_00062bf8[33];
      local_2808._2_1_ = s_statusServiceThread_not_support_h_00062bf8[34];
      local_2808._3_1_ = s_statusServiceThread_not_support_h_00062bf8[35];
      uStack_2804._0_1_ = s_statusServiceThread_not_support_h_00062bf8[36];
      uStack_2804._1_1_ = s_statusServiceThread_not_support_h_00062bf8[37];
      uStack_2804._2_1_ = s_statusServiceThread_not_support_h_00062bf8[38];
      uStack_2804._3_1_ = s_statusServiceThread_not_support_h_00062bf8[39];
      uStack_2800._0_1_ = s_statusServiceThread_not_support_h_00062bf8[40];
      uStack_2800._1_1_ = s_statusServiceThread_not_support_h_00062bf8[41];
      uStack_2800._2_1_ = s_statusServiceThread_not_support_h_00062bf8[42];
      uStack_2800._3_1_ = s_statusServiceThread_not_support_h_00062bf8[43];
      local_27fc = (undefined)ram0x00062c24;
      FUN_0002e584(7,&local_2828,0);
    }
    goto LAB_0002458c;
  }
  iVar8 = setsockopt(param_1,1,0x15,&local_5840,8);
  if (iVar8 == 0) {
    iVar8 = setsockopt(param_1,1,0x14,&local_5840,8);
    if (iVar8 == 0) {
      if (DAT_0007f9fc == (code *)0x0) {
        if ((DAT_00482a5d != '\0') &&
           (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
          local_2828._0_1_ = s_No_6060_test_case_found__00062c68[0];
          local_2828._1_1_ = s_No_6060_test_case_found__00062c68[1];
          local_2828._2_1_ = s_No_6060_test_case_found__00062c68[2];
          local_2828._3_1_ = s_No_6060_test_case_found__00062c68[3];
          uStack_2824._0_1_ = s_No_6060_test_case_found__00062c68[4];
          uStack_2824._1_1_ = s_No_6060_test_case_found__00062c68[5];
          uStack_2824._2_1_ = s_No_6060_test_case_found__00062c68[6];
          uStack_2824._3_1_ = s_No_6060_test_case_found__00062c68[7];
          uStack_2820._0_1_ = s_No_6060_test_case_found__00062c68[8];
          uStack_2820._1_1_ = s_No_6060_test_case_found__00062c68[9];
          uStack_2820._2_1_ = s_No_6060_test_case_found__00062c68[10];
          uStack_2820._3_1_ = s_No_6060_test_case_found__00062c68[11];
          uStack_281c._0_1_ = s_No_6060_test_case_found__00062c68[12];
          uStack_281c._1_1_ = s_No_6060_test_case_found__00062c68[13];
          uStack_281c._2_1_ = s_No_6060_test_case_found__00062c68[14];
          uStack_281c._3_1_ = s_No_6060_test_case_found__00062c68[15];
          local_2818._0_1_ = s_No_6060_test_case_found__00062c68[16];
          local_2818._1_1_ = s_No_6060_test_case_found__00062c68[17];
          local_2818._2_1_ = s_No_6060_test_case_found__00062c68[18];
          local_2818._3_1_ = s_No_6060_test_case_found__00062c68[19];
          local_2814._0_1_ = s_No_6060_test_case_found__00062c68[20];
          local_2814._1_1_ = s_No_6060_test_case_found__00062c68[21];
          local_2814._2_1_ = s_No_6060_test_case_found__00062c68[22];
          local_2814._3_1_ = s_No_6060_test_case_found__00062c68[23];
          local_2810._0_1_ = (char)ram0x00062c80;
          FUN_0002e584(7,&local_2828,0);
        }
      }
      else {
        iVar8 = (*DAT_0007f9fc)(local_5028,__s,0x6000);
        if (iVar8 != 0) {
          close(param_1);
          if ((DAT_00482a5d != '\0') &&
             (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
            local_2828._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[0];
            local_2828._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[1];
            local_2828._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[2];
            local_2828._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[3];
            uStack_2824._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[4];
            uStack_2824._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[5];
            uStack_2824._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[6];
            uStack_2824._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[7];
            uStack_2820._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[8];
            uStack_2820._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[9];
            uStack_2820._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[10];
            uStack_2820._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[11];
            uStack_281c._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[12];
            uStack_281c._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[13];
            uStack_281c._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[14];
            uStack_281c._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[15];
            local_2818._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[16];
            local_2818._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[17];
            local_2818._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[18];
            local_2818._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[19];
            local_2814._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[20];
            local_2814._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[21];
            local_2814._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[22];
            local_2814._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[23];
            local_2810._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[24];
            local_2810._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[25];
            local_2810._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[26];
            local_2810._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[27];
            local_280c._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[28];
            local_280c._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[29];
            local_280c._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[30];
            local_280c._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[31];
            local_2808._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[32];
            local_2808._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[33];
            local_2808._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[34];
            local_2808._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[35];
            uStack_2804._0_1_ = s_statusServiceThread_exit_for_Err_00062c84[36];
            uStack_2804._1_1_ = s_statusServiceThread_exit_for_Err_00062c84[37];
            uStack_2804._2_1_ = s_statusServiceThread_exit_for_Err_00062c84[38];
            uStack_2804._3_1_ = s_statusServiceThread_exit_for_Err_00062c84[39];
            FUN_0002e584(7,&local_2828,0);
          }
          goto LAB_0002458c;
        }
      }
      sVar2 = strlen(__s);
      iVar8 = sprintf((char *)&local_2828,"HTTP/1.0  200  OK%s",&local_5850);
      iVar3 = sprintf((char *)((int)&local_2828 + iVar8),"Server: SearchFreqServer%s",&local_5850);
      iVar4 = sprintf((char *)((int)&local_2828 + iVar8 + iVar3),"Cache-Control: no-cache%s",
                      &local_5850);
      iVar4 = iVar8 + iVar3 + iVar4;
      iVar8 = sprintf((char *)((int)&local_2828 + iVar4),"Pragma: no-cache%s",&local_5850);
      iVar4 = iVar4 + iVar8;
      iVar8 = sprintf((char *)((int)&local_2828 + iVar4),"Content-Type: text/plain%s",&local_5850);
      iVar4 = iVar4 + iVar8;
      iVar8 = sprintf((char *)((int)&local_2828 + iVar4),"Content-Length: %d%s",sVar2,&local_5850);
      sprintf((char *)((int)&local_2828 + iVar4 + iVar8),"Connection: Keep-Alive%s",&local_5848);
      if (DAT_00482a5d == '\0') {
        if (DAT_0007f9f8 == '\0') goto LAB_0002496c;
      }
      else {
        if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 7)) {
          if (DAT_0007f9f8 == '\0') {
LAB_0002496c:
            sVar5 = strlen((char *)&local_2828);
            uVar9 = 0;
            do {
              sVar6 = send(param_1,(char *)((int)&local_2828 + uVar9),sVar5 - uVar9,0);
              if (sVar6 == -1) {
                piVar7 = __errno_location();
                if (*piVar7 != 0xb) {
LAB_000249f0:
                  close(param_1);
                  if ((DAT_00482a5d != '\0') &&
                     (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
                    local_5828._0_1_ = s_statusServiceThread_send_http_re_00062da8[0];
                    local_5828._1_1_ = s_statusServiceThread_send_http_re_00062da8[1];
                    local_5828._2_1_ = s_statusServiceThread_send_http_re_00062da8[2];
                    local_5828._3_1_ = s_statusServiceThread_send_http_re_00062da8[3];
                    uStack_5824._0_1_ = s_statusServiceThread_send_http_re_00062da8[4];
                    uStack_5824._1_1_ = s_statusServiceThread_send_http_re_00062da8[5];
                    uStack_5824._2_1_ = s_statusServiceThread_send_http_re_00062da8[6];
                    uStack_5824._3_1_ = s_statusServiceThread_send_http_re_00062da8[7];
                    uStack_5820._0_1_ = s_statusServiceThread_send_http_re_00062da8[8];
                    uStack_5820._1_1_ = s_statusServiceThread_send_http_re_00062da8[9];
                    uStack_5820._2_1_ = s_statusServiceThread_send_http_re_00062da8[10];
                    uStack_5820._3_1_ = s_statusServiceThread_send_http_re_00062da8[11];
                    uStack_581c._0_1_ = s_statusServiceThread_send_http_re_00062da8[12];
                    uStack_581c._1_1_ = s_statusServiceThread_send_http_re_00062da8[13];
                    uStack_581c._2_1_ = s_statusServiceThread_send_http_re_00062da8[14];
                    uStack_581c._3_1_ = s_statusServiceThread_send_http_re_00062da8[15];
                    local_5818._0_1_ = s_statusServiceThread_send_http_re_00062da8[16];
                    local_5818._1_1_ = s_statusServiceThread_send_http_re_00062da8[17];
                    local_5818._2_1_ = s_statusServiceThread_send_http_re_00062da8[18];
                    local_5818._3_1_ = s_statusServiceThread_send_http_re_00062da8[19];
                    uStack_5814._0_1_ = s_statusServiceThread_send_http_re_00062da8[20];
                    uStack_5814._1_1_ = s_statusServiceThread_send_http_re_00062da8[21];
                    uStack_5814._2_1_ = s_statusServiceThread_send_http_re_00062da8[22];
                    uStack_5814._3_1_ = s_statusServiceThread_send_http_re_00062da8[23];
                    local_5810._0_1_ = s_statusServiceThread_send_http_re_00062da8[24];
                    local_5810._1_1_ = s_statusServiceThread_send_http_re_00062da8[25];
                    local_5810._2_1_ = s_statusServiceThread_send_http_re_00062da8[26];
                    local_5810._3_1_ = s_statusServiceThread_send_http_re_00062da8[27];
                    uStack_580c._0_1_ = s_statusServiceThread_send_http_re_00062da8[28];
                    uStack_580c._1_1_ = s_statusServiceThread_send_http_re_00062da8[29];
                    uStack_580c._2_1_ = s_statusServiceThread_send_http_re_00062da8[30];
                    uStack_580c._3_1_ = s_statusServiceThread_send_http_re_00062da8[31];
                    local_5808._0_1_ = s_statusServiceThread_send_http_re_00062da8[32];
                    local_5808._1_1_ = s_statusServiceThread_send_http_re_00062da8[33];
                    local_5808._2_1_ = s_statusServiceThread_send_http_re_00062da8[34];
                    local_5808._3_1_ = s_statusServiceThread_send_http_re_00062da8[35];
                    uStack_5804._0_1_ = s_statusServiceThread_send_http_re_00062da8[36];
                    uStack_5804._1_1_ = s_statusServiceThread_send_http_re_00062da8[37];
                    uStack_5804._2_1_ = s_statusServiceThread_send_http_re_00062da8[38];
                    uStack_5804._3_1_ = s_statusServiceThread_send_http_re_00062da8[39];
                    local_5800._0_1_ = s_statusServiceThread_send_http_re_00062da8[40];
                    local_5800._1_1_ = s_statusServiceThread_send_http_re_00062da8[41];
                    local_5800._2_1_ = s_statusServiceThread_send_http_re_00062da8[42];
                    local_5800._3_1_ = s_statusServiceThread_send_http_re_00062da8[43];
                    local_57fc._0_1_ = (char)ram0x00062dd4;
                    FUN_0002e584(7,&local_5828,0);
                  }
                  goto LAB_00024594;
                }
                if ((DAT_00482a5d != '\0') &&
                   (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
                  local_5828._0_1_ = s_statusServiceThread_send_http_ti_00062d74[0];
                  local_5828._1_1_ = s_statusServiceThread_send_http_ti_00062d74[1];
                  local_5828._2_1_ = s_statusServiceThread_send_http_ti_00062d74[2];
                  local_5828._3_1_ = s_statusServiceThread_send_http_ti_00062d74[3];
                  uStack_5824._0_1_ = s_statusServiceThread_send_http_ti_00062d74[4];
                  uStack_5824._1_1_ = s_statusServiceThread_send_http_ti_00062d74[5];
                  uStack_5824._2_1_ = s_statusServiceThread_send_http_ti_00062d74[6];
                  uStack_5824._3_1_ = s_statusServiceThread_send_http_ti_00062d74[7];
                  uStack_5820._0_1_ = s_statusServiceThread_send_http_ti_00062d74[8];
                  uStack_5820._1_1_ = s_statusServiceThread_send_http_ti_00062d74[9];
                  uStack_5820._2_1_ = s_statusServiceThread_send_http_ti_00062d74[10];
                  uStack_5820._3_1_ = s_statusServiceThread_send_http_ti_00062d74[11];
                  uStack_581c._0_1_ = s_statusServiceThread_send_http_ti_00062d74[12];
                  uStack_581c._1_1_ = s_statusServiceThread_send_http_ti_00062d74[13];
                  uStack_581c._2_1_ = s_statusServiceThread_send_http_ti_00062d74[14];
                  uStack_581c._3_1_ = s_statusServiceThread_send_http_ti_00062d74[15];
                  local_5818._0_1_ = s_statusServiceThread_send_http_ti_00062d74[16];
                  local_5818._1_1_ = s_statusServiceThread_send_http_ti_00062d74[17];
                  local_5818._2_1_ = s_statusServiceThread_send_http_ti_00062d74[18];
                  local_5818._3_1_ = s_statusServiceThread_send_http_ti_00062d74[19];
                  uStack_5814._0_1_ = s_statusServiceThread_send_http_ti_00062d74[20];
                  uStack_5814._1_1_ = s_statusServiceThread_send_http_ti_00062d74[21];
                  uStack_5814._2_1_ = s_statusServiceThread_send_http_ti_00062d74[22];
                  uStack_5814._3_1_ = s_statusServiceThread_send_http_ti_00062d74[23];
                  local_5810._0_1_ = s_statusServiceThread_send_http_ti_00062d74[24];
                  local_5810._1_1_ = s_statusServiceThread_send_http_ti_00062d74[25];
                  local_5810._2_1_ = s_statusServiceThread_send_http_ti_00062d74[26];
                  local_5810._3_1_ = s_statusServiceThread_send_http_ti_00062d74[27];
                  uStack_580c._0_1_ = s_statusServiceThread_send_http_ti_00062d74[28];
                  uStack_580c._1_1_ = s_statusServiceThread_send_http_ti_00062d74[29];
                  uStack_580c._2_1_ = s_statusServiceThread_send_http_ti_00062d74[30];
                  uStack_580c._3_1_ = s_statusServiceThread_send_http_ti_00062d74[31];
                  local_5808._0_1_ = s_statusServiceThread_send_http_ti_00062d74[32];
                  local_5808._1_1_ = s_statusServiceThread_send_http_ti_00062d74[33];
                  local_5808._2_1_ = s_statusServiceThread_send_http_ti_00062d74[34];
                  local_5808._3_1_ = s_statusServiceThread_send_http_ti_00062d74[35];
                  uStack_5804._0_1_ = s_statusServiceThread_send_http_ti_00062d74[36];
                  uStack_5804._1_1_ = s_statusServiceThread_send_http_ti_00062d74[37];
                  uStack_5804._2_1_ = s_statusServiceThread_send_http_ti_00062d74[38];
                  uStack_5804._3_1_ = s_statusServiceThread_send_http_ti_00062d74[39];
                  local_5800._0_1_ = s_statusServiceThread_send_http_ti_00062d74[40];
                  local_5800._1_1_ = s_statusServiceThread_send_http_ti_00062d74[41];
                  local_5800._2_1_ = s_statusServiceThread_send_http_ti_00062d74[42];
                  local_5800._3_1_ = s_statusServiceThread_send_http_ti_00062d74[43];
                  local_57fc._0_1_ = s_statusServiceThread_send_http_ti_00062d74[44];
                  local_57fc._1_1_ = s_statusServiceThread_send_http_ti_00062d74[45];
                  local_57fc._2_1_ = s_statusServiceThread_send_http_ti_00062d74[46];
                  local_57fc._3_1_ = s_statusServiceThread_send_http_ti_00062d74[47];
                  local_57f8._0_1_ = s_statusServiceThread_send_http_ti_00062d74[48];
                  local_57f8._1_1_ = s_statusServiceThread_send_http_ti_00062d74[49];
                  local_57f8._2_1_ = s_statusServiceThread_send_http_ti_00062d74[50];
                  local_57f8._3_1_ = s_statusServiceThread_send_http_ti_00062d74[51];
                  FUN_0002e584(7,&local_5828,0);
                }
                usleep(100000);
              }
              else {
                if (sVar6 < 1) goto LAB_000249f0;
                uVar9 = uVar9 + sVar6;
              }
              sVar5 = strlen((char *)&local_2828);
            } while ((uVar9 < sVar5) && (DAT_0007f9f8 == '\0'));
            goto LAB_00024ac0;
          }
        }
        else {
          local_5828._0_1_ = s_send_http_response____00062d5c[0];
          local_5828._1_1_ = s_send_http_response____00062d5c[1];
          local_5828._2_1_ = s_send_http_response____00062d5c[2];
          local_5828._3_1_ = s_send_http_response____00062d5c[3];
          uStack_5824._0_1_ = s_send_http_response____00062d5c[4];
          uStack_5824._1_1_ = s_send_http_response____00062d5c[5];
          uStack_5824._2_1_ = s_send_http_response____00062d5c[6];
          uStack_5824._3_1_ = s_send_http_response____00062d5c[7];
          uStack_5820._0_1_ = s_send_http_response____00062d5c[8];
          uStack_5820._1_1_ = s_send_http_response____00062d5c[9];
          uStack_5820._2_1_ = s_send_http_response____00062d5c[10];
          uStack_5820._3_1_ = s_send_http_response____00062d5c[11];
          uStack_581c._0_1_ = s_send_http_response____00062d5c[12];
          uStack_581c._1_1_ = s_send_http_response____00062d5c[13];
          uStack_581c._2_1_ = s_send_http_response____00062d5c[14];
          uStack_581c._3_1_ = s_send_http_response____00062d5c[15];
          local_5818._0_1_ = s_send_http_response____00062d5c[16];
          local_5818._1_1_ = s_send_http_response____00062d5c[17];
          local_5818._2_1_ = s_send_http_response____00062d5c[18];
          local_5818._3_1_ = s_send_http_response____00062d5c[19];
          uStack_5814._0_3_ = (undefined3)ram0x00062d70;
          FUN_0002e584(7,&local_5828,0);
          if (DAT_0007f9f8 == '\0') goto LAB_0002496c;
LAB_00024ac0:
          if (DAT_00482a5d == '\0') goto LAB_00024ad4;
        }
        if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)) {
          local_5828._0_1_ = s_send_http_data____00062dd8[0];
          local_5828._1_1_ = s_send_http_data____00062dd8[1];
          local_5828._2_1_ = s_send_http_data____00062dd8[2];
          local_5828._3_1_ = s_send_http_data____00062dd8[3];
          uStack_5824._0_1_ = s_send_http_data____00062dd8[4];
          uStack_5824._1_1_ = s_send_http_data____00062dd8[5];
          uStack_5824._2_1_ = s_send_http_data____00062dd8[6];
          uStack_5824._3_1_ = s_send_http_data____00062dd8[7];
          uStack_5820._0_1_ = s_send_http_data____00062dd8[8];
          uStack_5820._1_1_ = s_send_http_data____00062dd8[9];
          uStack_5820._2_1_ = s_send_http_data____00062dd8[10];
          uStack_5820._3_1_ = s_send_http_data____00062dd8[11];
          uStack_581c._0_1_ = s_send_http_data____00062dd8[12];
          uStack_581c._1_1_ = s_send_http_data____00062dd8[13];
          uStack_581c._2_1_ = s_send_http_data____00062dd8[14];
          uStack_581c._3_1_ = s_send_http_data____00062dd8[15];
          local_5818._0_2_ = (short)ram0x00062de8;
          FUN_0002e584(7,&local_5828,0);
        }
      }
LAB_00024ad4:
      iVar8 = 0;
      while( true ) {
        sVar6 = send(param_1,__s + iVar8,sVar2 - iVar8,0);
        if ((DAT_00482a5d != '\0') &&
           (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
          snprintf((char *)&local_5828,0x800,"send http data ret=%d",sVar6);
          FUN_0002e584(7,&local_5828,0);
        }
        if (sVar6 < 1) break;
        iVar8 = iVar8 + sVar6;
        if (((int)sVar2 <= iVar8) || (DAT_0007f9f8 != '\0')) goto LAB_00024c14;
      }
      if (DAT_00482a5d == '\0') goto LAB_00024c8c;
      if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 7))
      goto LAB_00024c3c;
      local_5828._0_1_ = s_statusServiceThread_send_http_da_00062e04[0];
      local_5828._1_1_ = s_statusServiceThread_send_http_da_00062e04[1];
      local_5828._2_1_ = s_statusServiceThread_send_http_da_00062e04[2];
      local_5828._3_1_ = s_statusServiceThread_send_http_da_00062e04[3];
      uStack_5824._0_1_ = s_statusServiceThread_send_http_da_00062e04[4];
      uStack_5824._1_1_ = s_statusServiceThread_send_http_da_00062e04[5];
      uStack_5824._2_1_ = s_statusServiceThread_send_http_da_00062e04[6];
      uStack_5824._3_1_ = s_statusServiceThread_send_http_da_00062e04[7];
      uStack_5820._0_1_ = s_statusServiceThread_send_http_da_00062e04[8];
      uStack_5820._1_1_ = s_statusServiceThread_send_http_da_00062e04[9];
      uStack_5820._2_1_ = s_statusServiceThread_send_http_da_00062e04[10];
      uStack_5820._3_1_ = s_statusServiceThread_send_http_da_00062e04[11];
      uStack_581c._0_1_ = s_statusServiceThread_send_http_da_00062e04[12];
      uStack_581c._1_1_ = s_statusServiceThread_send_http_da_00062e04[13];
      uStack_581c._2_1_ = s_statusServiceThread_send_http_da_00062e04[14];
      uStack_581c._3_1_ = s_statusServiceThread_send_http_da_00062e04[15];
      local_5818._0_1_ = s_statusServiceThread_send_http_da_00062e04[16];
      local_5818._1_1_ = s_statusServiceThread_send_http_da_00062e04[17];
      local_5818._2_1_ = s_statusServiceThread_send_http_da_00062e04[18];
      local_5818._3_1_ = s_statusServiceThread_send_http_da_00062e04[19];
      uStack_5814._0_1_ = s_statusServiceThread_send_http_da_00062e04[20];
      uStack_5814._1_1_ = s_statusServiceThread_send_http_da_00062e04[21];
      uStack_5814._2_1_ = s_statusServiceThread_send_http_da_00062e04[22];
      uStack_5814._3_1_ = s_statusServiceThread_send_http_da_00062e04[23];
      local_5810._0_1_ = s_statusServiceThread_send_http_da_00062e04[24];
      local_5810._1_1_ = s_statusServiceThread_send_http_da_00062e04[25];
      local_5810._2_1_ = s_statusServiceThread_send_http_da_00062e04[26];
      local_5810._3_1_ = s_statusServiceThread_send_http_da_00062e04[27];
      uStack_580c._0_1_ = s_statusServiceThread_send_http_da_00062e04[28];
      uStack_580c._1_1_ = s_statusServiceThread_send_http_da_00062e04[29];
      uStack_580c._2_1_ = s_statusServiceThread_send_http_da_00062e04[30];
      uStack_580c._3_1_ = s_statusServiceThread_send_http_da_00062e04[31];
      local_5808._0_1_ = s_statusServiceThread_send_http_da_00062e04[32];
      local_5808._1_1_ = s_statusServiceThread_send_http_da_00062e04[33];
      local_5808._2_1_ = s_statusServiceThread_send_http_da_00062e04[34];
      local_5808._3_1_ = s_statusServiceThread_send_http_da_00062e04[35];
      uStack_5804._0_1_ = s_statusServiceThread_send_http_da_00062e04[36];
      uStack_5804._1_1_ = s_statusServiceThread_send_http_da_00062e04[37];
      uStack_5804._2_1_ = s_statusServiceThread_send_http_da_00062e04[38];
      uStack_5804._3_1_ = s_statusServiceThread_send_http_da_00062e04[39];
      local_5800._0_1_ = (char)ram0x00062e2c;
      FUN_0002e584(7,&local_5828,0);
LAB_00024c14:
      if (DAT_00482a5d != '\0') {
        if (DAT_00590404 == '\0') {
LAB_00024c3c:
          if ((DAT_00482a5c == '\0') && (DAT_0007eba0 < 7)) goto LAB_00024c8c;
        }
        local_5828._0_1_ = s_one_client_disconnected__00062e30[0];
        local_5828._1_1_ = s_one_client_disconnected__00062e30[1];
        local_5828._2_1_ = s_one_client_disconnected__00062e30[2];
        local_5828._3_1_ = s_one_client_disconnected__00062e30[3];
        uStack_5824._0_1_ = s_one_client_disconnected__00062e30[4];
        uStack_5824._1_1_ = s_one_client_disconnected__00062e30[5];
        uStack_5824._2_1_ = s_one_client_disconnected__00062e30[6];
        uStack_5824._3_1_ = s_one_client_disconnected__00062e30[7];
        uStack_5820._0_1_ = s_one_client_disconnected__00062e30[8];
        uStack_5820._1_1_ = s_one_client_disconnected__00062e30[9];
        uStack_5820._2_1_ = s_one_client_disconnected__00062e30[10];
        uStack_5820._3_1_ = s_one_client_disconnected__00062e30[11];
        uStack_581c._0_1_ = s_one_client_disconnected__00062e30[12];
        uStack_581c._1_1_ = s_one_client_disconnected__00062e30[13];
        uStack_581c._2_1_ = s_one_client_disconnected__00062e30[14];
        uStack_581c._3_1_ = s_one_client_disconnected__00062e30[15];
        local_5818._0_1_ = s_one_client_disconnected__00062e30[16];
        local_5818._1_1_ = s_one_client_disconnected__00062e30[17];
        local_5818._2_1_ = s_one_client_disconnected__00062e30[18];
        local_5818._3_1_ = s_one_client_disconnected__00062e30[19];
        uStack_5814._0_1_ = s_one_client_disconnected__00062e30[20];
        uStack_5814._1_1_ = s_one_client_disconnected__00062e30[21];
        uStack_5814._2_1_ = s_one_client_disconnected__00062e30[22];
        uStack_5814._3_1_ = s_one_client_disconnected__00062e30[23];
        local_5810._0_1_ = (char)ram0x00062e48;
        FUN_0002e584(7,&local_5828,0);
      }
LAB_00024c8c:
      close(param_1);
      free(__s);
      return iVar8;
    }
    close(param_1);
    if ((DAT_00482a5d == '\0') ||
       (((DAT_00590404 == '\0' && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 7))))
    goto LAB_0002458c;
    pcVar10 = "setsockopt SO_RCVTIMEO failed";
  }
  else {
    close(param_1);
    if ((DAT_00482a5d == '\0') ||
       (((DAT_00590404 == '\0' && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 7))))
    goto LAB_0002458c;
    pcVar10 = "setsockopt SO_SNDTIMEO failed";
  }
  local_2828 = *(undefined4 *)pcVar10;
  uStack_2824 = *(undefined4 *)((int)pcVar10 + 4);
  uStack_2820 = *(undefined4 *)((int)pcVar10 + 8);
  uStack_281c = *(undefined4 *)((int)pcVar10 + 0xc);
  local_2818 = *(undefined4 *)((int)pcVar10 + 0x10);
  local_2814 = *(undefined4 *)((int)pcVar10 + 0x14);
  local_2810 = *(undefined4 *)((int)pcVar10 + 0x18);
  local_280c._0_2_ = (short)*(undefined4 *)((int)pcVar10 + 0x1c);
  FUN_0002e584(7,&local_2828,0);
LAB_0002458c:
  if (__s != (char *)0x0) {
LAB_00024594:
    free(__s);
  }
  return 0;
}

