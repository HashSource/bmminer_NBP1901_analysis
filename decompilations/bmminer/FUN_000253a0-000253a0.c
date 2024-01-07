
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_000253a0(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  hostent *phVar6;
  int iVar7;
  ssize_t sVar8;
  long lVar9;
  char *__dest;
  uint uVar10;
  undefined4 local_2020;
  undefined4 local_201c;
  char acStack_2018 [1023];
  undefined auStack_1c19 [1025];
  undefined local_1818;
  undefined uStack_1817;
  undefined2 uStack_1816;
  undefined4 local_1814;
  undefined4 uStack_1810;
  undefined4 local_180c;
  undefined4 local_1808;
  undefined4 uStack_1804;
  undefined2 local_1800;
  char acStack_1018 [4096];
  
  memset(acStack_1018,0,0x1000);
  memset(acStack_2018,0,0x400);
  memset(auStack_1c19 + 1,0,0x400);
  if (param_1 == (char *)0x0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
      _local_1818 = s_url_is_null__00062f54._0_4_;
      local_1814._0_1_ = s_url_is_null__00062f54[4];
      local_1814._1_1_ = s_url_is_null__00062f54[5];
      local_1814._2_1_ = s_url_is_null__00062f54[6];
      local_1814._3_1_ = s_url_is_null__00062f54[7];
      uStack_1810._0_1_ = s_url_is_null__00062f54[8];
      uStack_1810._1_1_ = s_url_is_null__00062f54[9];
      uStack_1810._2_1_ = s_url_is_null__00062f54[10];
      uStack_1810._3_1_ = s_url_is_null__00062f54[11];
      local_180c._0_2_ = (short)ram0x00062f60;
      FUN_0002e584(5,(sockaddr *)&local_1818,0);
      return (char *)0x0;
    }
  }
  else {
    iVar2 = strncmp(param_1,"http://",7);
    if (iVar2 != 0) {
      if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 5)) {
        return (char *)0x0;
      }
      local_1818 = s_parse_url_failed__00062f6c[0];
      uStack_1817 = s_parse_url_failed__00062f6c[1];
      uStack_1816._0_1_ = s_parse_url_failed__00062f6c[2];
      uStack_1816._1_1_ = s_parse_url_failed__00062f6c[3];
      local_1814._0_1_ = s_parse_url_failed__00062f6c[4];
      local_1814._1_1_ = s_parse_url_failed__00062f6c[5];
      local_1814._2_1_ = s_parse_url_failed__00062f6c[6];
      local_1814._3_1_ = s_parse_url_failed__00062f6c[7];
      uStack_1810._0_1_ = s_parse_url_failed__00062f6c[8];
      uStack_1810._1_1_ = s_parse_url_failed__00062f6c[9];
      uStack_1810._2_1_ = s_parse_url_failed__00062f6c[10];
      uStack_1810._3_1_ = s_parse_url_failed__00062f6c[11];
      local_180c._0_1_ = s_parse_url_failed__00062f6c[12];
      local_180c._1_1_ = s_parse_url_failed__00062f6c[13];
      local_180c._2_1_ = s_parse_url_failed__00062f6c[14];
      local_180c._3_1_ = s_parse_url_failed__00062f6c[15];
      FUN_0002e584(5,(sockaddr *)&local_1818,0);
      return (char *)0x0;
    }
    param_1 = param_1 + 7;
    pcVar3 = strchr(param_1,0x2f);
    sVar4 = strlen(param_1);
    if (pcVar3 == (char *)0x0) {
      memcpy(acStack_2018,param_1,sVar4);
      acStack_2018[sVar4] = '\0';
    }
    else {
      sVar5 = strlen(pcVar3);
      memcpy(acStack_2018,param_1,sVar4 - sVar5);
      cVar1 = pcVar3[1];
      acStack_2018[sVar4 - sVar5] = '\0';
      if (cVar1 != '\0') {
        memcpy(auStack_1c19 + 1,pcVar3 + 1,sVar5 - 1);
        auStack_1c19[sVar5] = 0;
      }
    }
    pcVar3 = strchr(acStack_2018,0x3a);
    if (pcVar3 == (char *)0x0) {
      uVar10 = 0x50;
    }
    else {
      *pcVar3 = '\0';
      uVar10 = strtol(pcVar3 + 1,(char **)0x0,10);
    }
    phVar6 = gethostbyname(acStack_2018);
    if (phVar6 != (hostent *)0x0) {
      uStack_1816 = (ushort)((uVar10 & 0xff) << 8) | (ushort)(uVar10 >> 8) & 0xff;
      _local_1818 = 2;
      local_1814 = *(undefined4 *)*phVar6->h_addr_list;
      iVar2 = socket(2,1,0);
      if (iVar2 != -1) {
        local_2020 = 10;
        local_201c = 0;
        iVar7 = setsockopt(iVar2,1,0x15,&local_2020,8);
        if (((iVar7 == 0) && (iVar7 = setsockopt(iVar2,1,0x14,&local_2020,8), iVar7 == 0)) &&
           ((iVar7 = connect(iVar2,(sockaddr *)&local_1818,0x10), iVar7 != -1 && (-1 < iVar2)))) {
          sprintf(acStack_1018,"GET /%s HTTP/1.1\r\nHOST: %s:%d\r\nAccept: */*\r\n\r\n",
                  auStack_1c19 + 1,acStack_2018,uVar10);
          sVar4 = strlen(acStack_1018);
          iVar7 = 0;
          if (sVar4 != 0) {
            do {
              sVar8 = send(iVar2,acStack_1018 + iVar7,sVar4 - iVar7,0);
              iVar7 = iVar7 + sVar8;
              if (sVar8 == -1) {
                if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 5)) {
                  return (char *)0x0;
                }
                pcVar3 = "tcp client send failed\n";
                goto LAB_000255fc;
              }
            } while (iVar7 < (int)sVar4);
          }
          sVar8 = recv(iVar2,acStack_1018,0x1000,0);
          if (0 < sVar8) {
            close(iVar2);
            pcVar3 = strstr(acStack_1018,"HTTP/1.1");
            if (pcVar3 == (char *)0x0) {
              return (char *)0x0;
            }
            lVar9 = strtol(pcVar3 + 9,(char **)0x0,10);
            if (lVar9 != 200) {
              return (char *)0x0;
            }
            pcVar3 = strstr(acStack_1018,"\r\n\r\n");
            if (pcVar3 == (char *)0x0) {
              return (char *)0x0;
            }
            sVar4 = strlen(pcVar3);
            __dest = (char *)malloc(sVar4 + 1);
            if (__dest == (char *)0x0) {
              return (char *)0x0;
            }
            strcpy(__dest,pcVar3 + 4);
            return __dest;
          }
          if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 5)) {
            return (char *)0x0;
          }
          pcVar3 = "tcp client recv failed\n";
LAB_000255fc:
          _local_1818 = *(undefined4 *)pcVar3;
          local_1814 = *(undefined4 *)((int)pcVar3 + 4);
          uStack_1810 = *(undefined4 *)((int)pcVar3 + 8);
          local_180c = *(undefined4 *)((int)pcVar3 + 0xc);
          local_1808 = *(undefined4 *)((int)pcVar3 + 0x10);
          uStack_1804 = *(undefined4 *)((int)pcVar3 + 0x14);
          FUN_0002e584(5,(sockaddr *)&local_1818,0);
          return (char *)0x0;
        }
      }
    }
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
      local_1818 = s_tcp_client_create_failed_00062f80[0];
      uStack_1817 = s_tcp_client_create_failed_00062f80[1];
      uStack_1816._0_1_ = s_tcp_client_create_failed_00062f80[2];
      uStack_1816._1_1_ = s_tcp_client_create_failed_00062f80[3];
      local_1814._0_1_ = s_tcp_client_create_failed_00062f80[4];
      local_1814._1_1_ = s_tcp_client_create_failed_00062f80[5];
      local_1814._2_1_ = s_tcp_client_create_failed_00062f80[6];
      local_1814._3_1_ = s_tcp_client_create_failed_00062f80[7];
      uStack_1810._0_1_ = s_tcp_client_create_failed_00062f80[8];
      uStack_1810._1_1_ = s_tcp_client_create_failed_00062f80[9];
      uStack_1810._2_1_ = s_tcp_client_create_failed_00062f80[10];
      uStack_1810._3_1_ = s_tcp_client_create_failed_00062f80[11];
      local_180c._0_1_ = s_tcp_client_create_failed_00062f80[12];
      local_180c._1_1_ = s_tcp_client_create_failed_00062f80[13];
      local_180c._2_1_ = s_tcp_client_create_failed_00062f80[14];
      local_180c._3_1_ = s_tcp_client_create_failed_00062f80[15];
      local_1808._0_1_ = s_tcp_client_create_failed_00062f80[16];
      local_1808._1_1_ = s_tcp_client_create_failed_00062f80[17];
      local_1808._2_1_ = s_tcp_client_create_failed_00062f80[18];
      local_1808._3_1_ = s_tcp_client_create_failed_00062f80[19];
      uStack_1804._0_1_ = s_tcp_client_create_failed_00062f80[20];
      uStack_1804._1_1_ = s_tcp_client_create_failed_00062f80[21];
      uStack_1804._2_1_ = s_tcp_client_create_failed_00062f80[22];
      uStack_1804._3_1_ = s_tcp_client_create_failed_00062f80[23];
      local_1800 = (undefined2)ram0x00062f98;
      FUN_0002e584(5,(sockaddr *)&local_1818,0);
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}

