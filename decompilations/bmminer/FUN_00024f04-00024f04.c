
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00024f04(void)

{
  int iVar1;
  socklen_t local_84c;
  sockaddr local_848;
  sockaddr sStack_838;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined2 local_7fc;
  undefined local_7fa;
  
  prctl(0xf,&DAT_00062e4c,0,0,0);
  do {
    DAT_0007e2ec = socket(2,1,6);
    if (DAT_0007e2ec < 0) {
      if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
        local_828._0_1_ = s_socket_creating_failed__try_agai_00062e54[0];
        local_828._1_1_ = s_socket_creating_failed__try_agai_00062e54[1];
        local_828._2_1_ = s_socket_creating_failed__try_agai_00062e54[2];
        local_828._3_1_ = s_socket_creating_failed__try_agai_00062e54[3];
        uStack_824._0_1_ = s_socket_creating_failed__try_agai_00062e54[4];
        uStack_824._1_1_ = s_socket_creating_failed__try_agai_00062e54[5];
        uStack_824._2_1_ = s_socket_creating_failed__try_agai_00062e54[6];
        uStack_824._3_1_ = s_socket_creating_failed__try_agai_00062e54[7];
        uStack_820._0_1_ = s_socket_creating_failed__try_agai_00062e54[8];
        uStack_820._1_1_ = s_socket_creating_failed__try_agai_00062e54[9];
        uStack_820._2_1_ = s_socket_creating_failed__try_agai_00062e54[10];
        uStack_820._3_1_ = s_socket_creating_failed__try_agai_00062e54[11];
        uStack_81c._0_1_ = s_socket_creating_failed__try_agai_00062e54[12];
        uStack_81c._1_1_ = s_socket_creating_failed__try_agai_00062e54[13];
        uStack_81c._2_1_ = s_socket_creating_failed__try_agai_00062e54[14];
        uStack_81c._3_1_ = s_socket_creating_failed__try_agai_00062e54[15];
        local_818._0_1_ = s_socket_creating_failed__try_agai_00062e54[16];
        local_818._1_1_ = s_socket_creating_failed__try_agai_00062e54[17];
        local_818._2_1_ = s_socket_creating_failed__try_agai_00062e54[18];
        local_818._3_1_ = s_socket_creating_failed__try_agai_00062e54[19];
        uStack_814._0_1_ = s_socket_creating_failed__try_agai_00062e54[20];
        uStack_814._1_1_ = s_socket_creating_failed__try_agai_00062e54[21];
        uStack_814._2_1_ = s_socket_creating_failed__try_agai_00062e54[22];
        uStack_814._3_1_ = s_socket_creating_failed__try_agai_00062e54[23];
        local_810._0_1_ = s_socket_creating_failed__try_agai_00062e54[24];
        local_810._1_1_ = s_socket_creating_failed__try_agai_00062e54[25];
        local_810._2_1_ = s_socket_creating_failed__try_agai_00062e54[26];
        local_810._3_1_ = s_socket_creating_failed__try_agai_00062e54[27];
        uStack_80c._0_1_ = s_socket_creating_failed__try_agai_00062e54[28];
        uStack_80c._1_1_ = s_socket_creating_failed__try_agai_00062e54[29];
        uStack_80c._2_1_ = s_socket_creating_failed__try_agai_00062e54[30];
        uStack_80c._3_1_ = s_socket_creating_failed__try_agai_00062e54[31];
        local_808._0_1_ = s_socket_creating_failed__try_agai_00062e54[32];
        local_808._1_1_ = s_socket_creating_failed__try_agai_00062e54[33];
        local_808._2_1_ = s_socket_creating_failed__try_agai_00062e54[34];
        local_808._3_1_ = s_socket_creating_failed__try_agai_00062e54[35];
        uStack_804._0_1_ = s_socket_creating_failed__try_agai_00062e54[36];
        uStack_804._1_1_ = s_socket_creating_failed__try_agai_00062e54[37];
        uStack_804._2_1_ = s_socket_creating_failed__try_agai_00062e54[38];
        uStack_804._3_1_ = s_socket_creating_failed__try_agai_00062e54[39];
        uStack_800._0_1_ = s_socket_creating_failed__try_agai_00062e54[40];
        uStack_800._1_1_ = s_socket_creating_failed__try_agai_00062e54[41];
        uStack_800._2_1_ = s_socket_creating_failed__try_agai_00062e54[42];
        uStack_800._3_1_ = s_socket_creating_failed__try_agai_00062e54[43];
        local_7fc = (undefined2)ram0x00062e80;
        local_7fa = (undefined)((uint)ram0x00062e80 >> 0x10);
        FUN_0002e584(5,&local_828,0);
      }
      sleep(10);
    }
    else {
      local_848.sa_data[6] = '\0';
      local_848.sa_data[7] = '\0';
      local_848.sa_data[8] = '\0';
      local_848.sa_data[9] = '\0';
      local_848.sa_data[10] = '\0';
      local_848.sa_data[11] = '\0';
      local_848.sa_data[12] = '\0';
      local_848.sa_data[13] = '\0';
      local_848.sa_family = 2;
      local_848.sa_data[0] = '\x17';
      local_848.sa_data[1] = -0x54;
      local_848.sa_data[2] = '\0';
      local_848.sa_data[3] = '\0';
      local_848.sa_data[4] = '\0';
      local_848.sa_data[5] = '\0';
      iVar1 = bind(DAT_0007e2ec,&local_848,0x10);
      if (iVar1 < 0) {
        if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
          local_828._0_1_ = s_http_port_bind_failed__try_again_00062e84[0];
          local_828._1_1_ = s_http_port_bind_failed__try_again_00062e84[1];
          local_828._2_1_ = s_http_port_bind_failed__try_again_00062e84[2];
          local_828._3_1_ = s_http_port_bind_failed__try_again_00062e84[3];
          uStack_824._0_1_ = s_http_port_bind_failed__try_again_00062e84[4];
          uStack_824._1_1_ = s_http_port_bind_failed__try_again_00062e84[5];
          uStack_824._2_1_ = s_http_port_bind_failed__try_again_00062e84[6];
          uStack_824._3_1_ = s_http_port_bind_failed__try_again_00062e84[7];
          uStack_820._0_1_ = s_http_port_bind_failed__try_again_00062e84[8];
          uStack_820._1_1_ = s_http_port_bind_failed__try_again_00062e84[9];
          uStack_820._2_1_ = s_http_port_bind_failed__try_again_00062e84[10];
          uStack_820._3_1_ = s_http_port_bind_failed__try_again_00062e84[11];
          uStack_81c._0_1_ = s_http_port_bind_failed__try_again_00062e84[12];
          uStack_81c._1_1_ = s_http_port_bind_failed__try_again_00062e84[13];
          uStack_81c._2_1_ = s_http_port_bind_failed__try_again_00062e84[14];
          uStack_81c._3_1_ = s_http_port_bind_failed__try_again_00062e84[15];
          local_818._0_1_ = s_http_port_bind_failed__try_again_00062e84[16];
          local_818._1_1_ = s_http_port_bind_failed__try_again_00062e84[17];
          local_818._2_1_ = s_http_port_bind_failed__try_again_00062e84[18];
          local_818._3_1_ = s_http_port_bind_failed__try_again_00062e84[19];
          uStack_814._0_1_ = s_http_port_bind_failed__try_again_00062e84[20];
          uStack_814._1_1_ = s_http_port_bind_failed__try_again_00062e84[21];
          uStack_814._2_1_ = s_http_port_bind_failed__try_again_00062e84[22];
          uStack_814._3_1_ = s_http_port_bind_failed__try_again_00062e84[23];
          local_810._0_1_ = s_http_port_bind_failed__try_again_00062e84[24];
          local_810._1_1_ = s_http_port_bind_failed__try_again_00062e84[25];
          local_810._2_1_ = s_http_port_bind_failed__try_again_00062e84[26];
          local_810._3_1_ = s_http_port_bind_failed__try_again_00062e84[27];
          uStack_80c._0_1_ = s_http_port_bind_failed__try_again_00062e84[28];
          uStack_80c._1_1_ = s_http_port_bind_failed__try_again_00062e84[29];
          uStack_80c._2_1_ = s_http_port_bind_failed__try_again_00062e84[30];
          uStack_80c._3_1_ = s_http_port_bind_failed__try_again_00062e84[31];
          local_808._0_1_ = s_http_port_bind_failed__try_again_00062e84[32];
          local_808._1_1_ = s_http_port_bind_failed__try_again_00062e84[33];
          local_808._2_1_ = s_http_port_bind_failed__try_again_00062e84[34];
          local_808._3_1_ = s_http_port_bind_failed__try_again_00062e84[35];
          uStack_804._0_1_ = s_http_port_bind_failed__try_again_00062e84[36];
          uStack_804._1_1_ = s_http_port_bind_failed__try_again_00062e84[37];
          uStack_804._2_1_ = s_http_port_bind_failed__try_again_00062e84[38];
          uStack_804._3_1_ = s_http_port_bind_failed__try_again_00062e84[39];
          uStack_800._0_1_ = s_http_port_bind_failed__try_again_00062e84[40];
          uStack_800._1_1_ = s_http_port_bind_failed__try_again_00062e84[41];
          uStack_800._2_1_ = s_http_port_bind_failed__try_again_00062e84[42];
          uStack_800._3_1_ = s_http_port_bind_failed__try_again_00062e84[43];
          local_7fc = (undefined2)ram0x00062eb0;
          FUN_0002e584(5,&local_828,0);
        }
      }
      else {
        iVar1 = listen(DAT_0007e2ec,100);
        if (-1 < iVar1) break;
        if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
          local_828._0_1_ = s_http_listen_failed__try_again_af_00062eb4[0];
          local_828._1_1_ = s_http_listen_failed__try_again_af_00062eb4[1];
          local_828._2_1_ = s_http_listen_failed__try_again_af_00062eb4[2];
          local_828._3_1_ = s_http_listen_failed__try_again_af_00062eb4[3];
          uStack_824._0_1_ = s_http_listen_failed__try_again_af_00062eb4[4];
          uStack_824._1_1_ = s_http_listen_failed__try_again_af_00062eb4[5];
          uStack_824._2_1_ = s_http_listen_failed__try_again_af_00062eb4[6];
          uStack_824._3_1_ = s_http_listen_failed__try_again_af_00062eb4[7];
          uStack_820._0_1_ = s_http_listen_failed__try_again_af_00062eb4[8];
          uStack_820._1_1_ = s_http_listen_failed__try_again_af_00062eb4[9];
          uStack_820._2_1_ = s_http_listen_failed__try_again_af_00062eb4[10];
          uStack_820._3_1_ = s_http_listen_failed__try_again_af_00062eb4[11];
          uStack_81c._0_1_ = s_http_listen_failed__try_again_af_00062eb4[12];
          uStack_81c._1_1_ = s_http_listen_failed__try_again_af_00062eb4[13];
          uStack_81c._2_1_ = s_http_listen_failed__try_again_af_00062eb4[14];
          uStack_81c._3_1_ = s_http_listen_failed__try_again_af_00062eb4[15];
          local_818._0_1_ = s_http_listen_failed__try_again_af_00062eb4[16];
          local_818._1_1_ = s_http_listen_failed__try_again_af_00062eb4[17];
          local_818._2_1_ = s_http_listen_failed__try_again_af_00062eb4[18];
          local_818._3_1_ = s_http_listen_failed__try_again_af_00062eb4[19];
          uStack_814._0_1_ = s_http_listen_failed__try_again_af_00062eb4[20];
          uStack_814._1_1_ = s_http_listen_failed__try_again_af_00062eb4[21];
          uStack_814._2_1_ = s_http_listen_failed__try_again_af_00062eb4[22];
          uStack_814._3_1_ = s_http_listen_failed__try_again_af_00062eb4[23];
          local_810._0_1_ = s_http_listen_failed__try_again_af_00062eb4[24];
          local_810._1_1_ = s_http_listen_failed__try_again_af_00062eb4[25];
          local_810._2_1_ = s_http_listen_failed__try_again_af_00062eb4[26];
          local_810._3_1_ = s_http_listen_failed__try_again_af_00062eb4[27];
          uStack_80c._0_1_ = s_http_listen_failed__try_again_af_00062eb4[28];
          uStack_80c._1_1_ = s_http_listen_failed__try_again_af_00062eb4[29];
          uStack_80c._2_1_ = s_http_listen_failed__try_again_af_00062eb4[30];
          uStack_80c._3_1_ = s_http_listen_failed__try_again_af_00062eb4[31];
          local_808._0_1_ = s_http_listen_failed__try_again_af_00062eb4[32];
          local_808._1_1_ = s_http_listen_failed__try_again_af_00062eb4[33];
          local_808._2_1_ = s_http_listen_failed__try_again_af_00062eb4[34];
          local_808._3_1_ = s_http_listen_failed__try_again_af_00062eb4[35];
          uStack_804._0_1_ = s_http_listen_failed__try_again_af_00062eb4[36];
          uStack_804._1_1_ = s_http_listen_failed__try_again_af_00062eb4[37];
          uStack_804._2_1_ = s_http_listen_failed__try_again_af_00062eb4[38];
          uStack_804._3_1_ = s_http_listen_failed__try_again_af_00062eb4[39];
          uStack_800._0_3_ = (undefined3)ram0x00062edc;
          FUN_0002e584(5,&local_828,0);
        }
      }
      close(DAT_0007e2ec);
      DAT_0007e2ec = -1;
      sleep(10);
    }
  } while (DAT_0007f9f8 == '\0');
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
    local_828._0_1_ = s_start_listen_on_6060_____00062ee0[0];
    local_828._1_1_ = s_start_listen_on_6060_____00062ee0[1];
    local_828._2_1_ = s_start_listen_on_6060_____00062ee0[2];
    local_828._3_1_ = s_start_listen_on_6060_____00062ee0[3];
    uStack_824._0_1_ = s_start_listen_on_6060_____00062ee0[4];
    uStack_824._1_1_ = s_start_listen_on_6060_____00062ee0[5];
    uStack_824._2_1_ = s_start_listen_on_6060_____00062ee0[6];
    uStack_824._3_1_ = s_start_listen_on_6060_____00062ee0[7];
    uStack_820._0_1_ = s_start_listen_on_6060_____00062ee0[8];
    uStack_820._1_1_ = s_start_listen_on_6060_____00062ee0[9];
    uStack_820._2_1_ = s_start_listen_on_6060_____00062ee0[10];
    uStack_820._3_1_ = s_start_listen_on_6060_____00062ee0[11];
    uStack_81c._0_1_ = s_start_listen_on_6060_____00062ee0[12];
    uStack_81c._1_1_ = s_start_listen_on_6060_____00062ee0[13];
    uStack_81c._2_1_ = s_start_listen_on_6060_____00062ee0[14];
    uStack_81c._3_1_ = s_start_listen_on_6060_____00062ee0[15];
    local_818._0_1_ = s_start_listen_on_6060_____00062ee0[16];
    local_818._1_1_ = s_start_listen_on_6060_____00062ee0[17];
    local_818._2_1_ = s_start_listen_on_6060_____00062ee0[18];
    local_818._3_1_ = s_start_listen_on_6060_____00062ee0[19];
    uStack_814._0_1_ = s_start_listen_on_6060_____00062ee0[20];
    uStack_814._1_1_ = s_start_listen_on_6060_____00062ee0[21];
    uStack_814._2_1_ = s_start_listen_on_6060_____00062ee0[22];
    uStack_814._3_1_ = s_start_listen_on_6060_____00062ee0[23];
    local_810._0_1_ = (char)ram0x00062ef8;
    FUN_0002e584(5,&local_828,0);
  }
  do {
    do {
      if (DAT_0007f9f8 != '\0') {
LAB_000250e4:
        close(DAT_0007e2ec);
        DAT_0007e2ec = 0xffffffff;
        return 0;
      }
      usleep(10000);
      local_84c = 0x10;
      iVar1 = accept(DAT_0007e2ec,&sStack_838,&local_84c);
    } while (iVar1 == -1);
    if (DAT_0007f9f8 != '\0') {
      close(iVar1);
      goto LAB_000250e4;
    }
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      snprintf((char *)&local_828,0x800,"one client connected sock=%d",iVar1);
      FUN_0002e584(7,&local_828,0);
    }
    FUN_00024398(iVar1);
  } while( true );
}

