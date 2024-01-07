
char * FUN_0005aa9c(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char *__dest;
  int iVar2;
  ushort **ppuVar3;
  int iVar4;
  char *pcVar5;
  FILE *__stream;
  byte *pbVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  byte *pbVar10;
  size_t __n;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  char **ppcVar16;
  char *pcVar17;
  int local_70b4;
  undefined local_70b0 [96];
  undefined4 local_7050;
  undefined4 uStack_704c;
  undefined auStack_7044 [4100];
  byte local_6040;
  byte local_603f [4099];
  char local_503c;
  char acStack_503b [4099];
  char cStack_4038;
  char acStack_4037 [4099];
  char local_3034 [4100];
  byte local_2030;
  byte local_202f [4099];
  undefined auStack_102c [4104];
  
  local_70b4 = 0;
  if (param_1 == 0) {
    FUN_0005df98(2,"src/rule.c",0x250,"line is null or 0");
    return (char *)0x0;
  }
  if (param_3 == 0) {
    FUN_0005df98(2,"src/rule.c",0x251,"default_format is null or 0");
    return (char *)0x0;
  }
  if (param_4 == (int *)0x0) {
    FUN_0005df98(2,"src/rule.c",0x252,"formats is null or 0");
    return (char *)0x0;
  }
  __dest = (char *)calloc(1,0x2088);
  if (__dest == (char *)0x0) {
    piVar9 = __errno_location();
    FUN_0005df98(2,"src/rule.c",0x256,"calloc fail, errno[%d]",*piVar9);
    return (char *)0x0;
  }
  *(undefined4 *)(__dest + 0x1028) = param_5;
  *(undefined4 *)(__dest + 0x1868) = param_6;
  memset(auStack_7044,0,0x1001);
  iVar2 = __isoc99_sscanf(param_1,"%s %n",auStack_7044,&local_70b4);
  if (iVar2 != 1) {
    FUN_0005df98(2,"src/rule.c",0x264,"sscanf [%s] fail, selector",param_1);
    goto LAB_0005afdc;
  }
  param_1 = param_1 + local_70b4;
  memset(&local_6040,0,0x1001);
  memset(&local_503c,0,0x1001);
  iVar2 = __isoc99_sscanf(auStack_7044," %[^.].%s",&local_6040,&local_503c);
  if (iVar2 != 2) {
    FUN_0005df98(2,"src/rule.c",0x273,"sscanf [%s] fail, category or level is null",auStack_7044);
    goto LAB_0005afdc;
  }
  uVar12 = 0;
  uVar14 = (uint)local_6040;
  if (uVar14 != 0) {
    ppuVar3 = __ctype_b_loc();
    pbVar10 = &local_6040;
    do {
      if (uVar14 != 0x2d && uVar14 != 0x5f) {
        uVar12 = 1;
      }
      if (uVar14 == 0x2d || uVar14 == 0x5f) {
        uVar12 = 0;
      }
      if (uVar14 == 0x2a) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar12 & 1;
      }
      if (uVar14 == 0x21) {
        uVar12 = 0;
      }
      if ((uVar12 & ((*ppuVar3)[uVar14] ^ 8) >> 3) != 0) {
        FUN_0005df98(2,"src/rule.c",0x27a,"category name[%s] character is not in [a-Z][0-9][_!*-]",
                     &local_6040);
        goto LAB_0005afdc;
      }
      pbVar10 = pbVar10 + 1;
      uVar14 = (uint)*pbVar10;
      uVar12 = 0;
    } while (uVar14 != 0);
  }
  strcpy(__dest,(char *)&local_6040);
  if (local_503c == '*') {
    __dest[0x1001] = '*';
    pcVar17 = &local_503c;
  }
  else if ((local_503c == '=') || (local_503c == '!')) {
    __dest[0x1001] = local_503c;
    pcVar17 = acStack_503b;
  }
  else {
    pcVar17 = &local_503c;
    __dest[0x1001] = '.';
  }
  uVar12 = FUN_00057de4(param_2,pcVar17);
  *(uint *)(__dest + 0x1004) = uVar12;
  switch(__dest[0x1001]) {
  case '!':
    memset(__dest + 0x1008,0xff,0x20);
    uVar14 = uVar12 + 7;
    if (-1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    uVar11 = uVar12 & 7;
    if ((int)uVar12 < 1) {
      uVar11 = -(-uVar12 & 7);
    }
    __dest[((int)uVar14 >> 3) + 0x1008] =
         __dest[((int)uVar14 >> 3) + 0x1008] & ~(byte)(1 << (7 - uVar11 & 0xff));
    break;
  case '*':
    memset(__dest + 0x1008,0xff,0x20);
    break;
  case '.':
    memset(__dest + 0x1008,0,0x20);
    uVar14 = uVar12 + 7;
    if (-1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    iVar2 = (int)uVar14 >> 3;
    uVar14 = uVar12 & 7;
    if ((int)uVar12 < 1) {
      uVar14 = -(-uVar12 & 7);
    }
    __dest[iVar2 + 0x1008] = ~(byte)(0xff << (8 - uVar14 & 0xff)) | __dest[iVar2 + 0x1008];
    memset(__dest + 0x1008 + iVar2 + 1,0xff,0x1f - iVar2);
    break;
  case '=':
    memset(__dest + 0x1008,0,0x20);
    uVar14 = uVar12 + 7;
    if (-1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    uVar11 = uVar12 & 7;
    if ((int)uVar12 < 1) {
      uVar11 = -(-uVar12 & 7);
    }
    __dest[((int)uVar14 >> 3) + 0x1008] =
         __dest[((int)uVar14 >> 3) + 0x1008] | (byte)(1 << (7 - uVar11 & 0xff));
  }
  memset(&cStack_4038,0,0x1001);
  memset(local_3034,0,0x1001);
  iVar2 = __isoc99_sscanf(param_1," %[^;];%s",&cStack_4038,local_3034);
  if (iVar2 < 1) {
    FUN_0005df98(2,"src/rule.c",700,"sscanf [%s] fail",param_1);
    goto LAB_0005afdc;
  }
  if (local_3034[0] != '\0') {
    iVar2 = param_4[1];
    if (0 < iVar2) {
      ppcVar16 = (char **)(*param_4 + -4);
      iVar15 = 0;
      do {
        ppcVar16 = ppcVar16 + 1;
        pcVar17 = *ppcVar16;
        iVar15 = iVar15 + 1;
        iVar4 = strcmp(pcVar17,local_3034);
        if (iVar4 == 0) {
          *(char **)(__dest + 0x1878) = pcVar17;
          goto LAB_0005ade8;
        }
      } while (iVar15 != iVar2);
    }
    FUN_0005df98(2,"src/rule.c",0x2d2,"in conf file can\'t find format[%s], pls check",local_3034);
    goto LAB_0005afdc;
  }
  FUN_0005df98(0,"src/rule.c",0x2c2,"no format specified, use default");
  *(int *)(__dest + 0x1878) = param_3;
LAB_0005ade8:
  memset(&local_2030,0,0x1001);
  iVar2 = __isoc99_sscanf(&cStack_4038," %[^,],",&local_2030);
  if (iVar2 < 1) {
    FUN_0005df98(2,"src/rule.c",0x2de,"sscanf [%s] fail",param_1);
    goto LAB_0005afdc;
  }
  pbVar10 = (byte *)strchr(&cStack_4038,0x2c);
  if (pbVar10 == (byte *)0x0) {
    pbVar10 = (byte *)0x0;
    if (local_2030 == 0x2d) goto LAB_0005b254;
    if (0x2d < local_2030) {
      if (local_2030 != 0x3e) goto LAB_0005b110;
      iVar2 = strncmp((char *)local_202f,"syslog",6);
      if (iVar2 == 0) {
        FUN_0005df98(2,"src/rule.c",0x1dd,"facility is null or 0");
        *(undefined4 *)(__dest + 0x1874) = 0xffffff45;
        FUN_0005df98(2,"src/rule.c",0x355,"-187 get");
        goto LAB_0005afdc;
      }
LAB_0005b1b0:
      iVar2 = strncmp((char *)local_202f,"stdout",6);
      if (iVar2 == 0) {
        *(undefined **)(__dest + 0x187c) = &DAT_00059ef8;
        return __dest;
      }
      iVar2 = strncmp((char *)local_202f,"stderr",6);
      if (iVar2 == 0) {
        *(undefined **)(__dest + 0x187c) = &DAT_00059e54;
        return __dest;
      }
      FUN_0005df98(2,"src/rule.c",0x360,"[%s]the string after is not syslog, stdout or stderr",
                   &cStack_4038);
      goto LAB_0005afdc;
    }
    pbVar10 = (byte *)0x0;
    if (local_2030 != 0x22) {
      if (local_2030 != 0x24) goto LAB_0005b3b8;
      __isoc99_sscanf(local_202f,"%s",__dest + 0x1880);
LAB_0005aef4:
      pcVar17 = __dest + 0x1c81;
      iVar2 = FUN_0005e310(pcVar17,0x401);
      if (iVar2 == 0) {
        pcVar5 = strchr(pcVar17,0x25);
        if (pcVar5 == (char *)0x0) {
          *(code **)(__dest + 0x187c) = FUN_000595c0;
          return __dest;
        }
        *(code **)(__dest + 0x187c) = FUN_00059cd4;
        iVar2 = FUN_0005d4c0(FUN_0005c6f4);
        *(int *)(__dest + 0x1434) = iVar2;
        if (iVar2 == 0) {
          FUN_0005df98(2,"src/rule.c",0x38d,"zc_arraylist_new fail");
        }
        else {
          cVar1 = __dest[0x1c81];
          while( true ) {
            if (cVar1 == '\0') {
              return __dest;
            }
            iVar2 = FUN_0005c758(pcVar17,local_70b0,param_7);
            if (iVar2 == 0) break;
            iVar15 = FUN_0005d694(*(undefined4 *)(__dest + 0x1434),iVar2);
            if (iVar15 != 0) {
              FUN_0005c6f4(iVar2);
              FUN_0005df98(2,"src/rule.c",0x39a,"zc_arraylist_add fail");
              goto LAB_0005afdc;
            }
            cVar1 = *(char *)local_70b0._0_4_;
            pcVar17 = (char *)local_70b0._0_4_;
          }
          FUN_0005df98(2,"src/rule.c",0x393,"zlog_spec_new fail");
        }
      }
      else {
        FUN_0005df98(2,"src/rule.c",0x37f,"zc_str_replace_env fail");
      }
      goto LAB_0005afdc;
    }
LAB_0005b3e8:
    pbVar6 = &local_2030;
  }
  else {
    ppuVar3 = __ctype_b_loc();
    do {
      pbVar10 = pbVar10 + 1;
    } while (((*ppuVar3)[*pbVar10] & 0x2000) != 0);
    if (local_2030 != 0x2d) {
      if (local_2030 < 0x2e) {
        if (local_2030 == 0x22) goto LAB_0005b3e8;
        if (local_2030 == 0x24) {
          __isoc99_sscanf(local_202f,"%s",__dest + 0x1880);
          pcVar17 = strchr((char *)pbVar10,0x22);
          if (pcVar17 == (char *)0x0) {
            FUN_0005df98(2,"src/rule.c",0x36a,"record_path not start with \", [%s]",pbVar10);
            goto LAB_0005afdc;
          }
          pcVar17 = pcVar17 + 1;
          local_70b0._0_4_ = strrchr(pcVar17,0x22);
          if ((char *)local_70b0._0_4_ == (char *)0x0) {
            FUN_0005df98(2,"src/rule.c",0x371,"matching \" not found in conf line[%s]",pcVar17);
            goto LAB_0005afdc;
          }
          __n = local_70b0._0_4_ - (int)pcVar17;
          if (0x400 < __n) {
            FUN_0005df98(2,"src/rule.c",0x376,"record_path too long %ld > %ld",__n,0x400);
            goto LAB_0005afdc;
          }
          memcpy(__dest + 0x1c81,pcVar17,__n);
          goto LAB_0005aef4;
        }
      }
      else {
        if (local_2030 == 0x3e) {
          iVar2 = strncmp((char *)local_202f,"syslog",6);
          if (iVar2 == 0) {
            iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL0");
            if (iVar2 == 0) {
              *(undefined4 *)(__dest + 0x1874) = 0x80;
            }
            else {
              iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL1");
              if (iVar2 == 0) {
                *(undefined4 *)(__dest + 0x1874) = 0x88;
              }
              else {
                iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL2");
                if (iVar2 == 0) {
                  *(undefined4 *)(__dest + 0x1874) = 0x90;
                }
                else {
                  iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL3");
                  if (iVar2 == 0) {
                    *(undefined4 *)(__dest + 0x1874) = 0x98;
                  }
                  else {
                    iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL4");
                    if (iVar2 == 0) {
                      *(undefined4 *)(__dest + 0x1874) = 0xa0;
                    }
                    else {
                      iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL5");
                      if (iVar2 == 0) {
                        *(undefined4 *)(__dest + 0x1874) = 0xa8;
                      }
                      else {
                        iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL6");
                        if (iVar2 == 0) {
                          *(undefined4 *)(__dest + 0x1874) = 0xb0;
                        }
                        else {
                          iVar2 = strcasecmp((char *)pbVar10,"LOG_LOCAL7");
                          if (iVar2 == 0) {
                            *(undefined4 *)(__dest + 0x1874) = 0xb8;
                          }
                          else {
                            iVar2 = strcasecmp((char *)pbVar10,"LOG_USER");
                            if (iVar2 == 0) {
                              *(undefined4 *)(__dest + 0x1874) = 8;
                            }
                            else {
                              iVar2 = strcasecmp((char *)pbVar10,"LOG_AUTHPRIV");
                              if (iVar2 != 0) {
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_CRON");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0x48;
                                  goto LAB_0005b7c0;
                                }
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_DAEMON");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0x18;
                                  goto LAB_0005b7c0;
                                }
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_FTP");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0x58;
                                  goto LAB_0005b7c0;
                                }
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_KERN");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0;
                                  goto LAB_0005b7c0;
                                }
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_LPR");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0x30;
                                  goto LAB_0005b7c0;
                                }
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_MAIL");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0x10;
                                  goto LAB_0005b7c0;
                                }
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_NEWS");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0x38;
                                  goto LAB_0005b7c0;
                                }
                                iVar2 = strcasecmp((char *)pbVar10,"LOG_SYSLOG");
                                if (iVar2 == 0) {
                                  *(undefined4 *)(__dest + 0x1874) = 0x28;
                                  goto LAB_0005b7c0;
                                }
                              }
                              *(undefined4 *)(__dest + 0x1874) = 0x50;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_0005b7c0:
            *(code **)(__dest + 0x187c) = FUN_0005a040;
            openlog((char *)0x0,0x19,8);
            return __dest;
          }
          goto LAB_0005b1b0;
        }
LAB_0005b110:
        if (local_2030 == 0x7c) {
          __stream = popen(acStack_4037,"w");
          *(FILE **)(__dest + 0x1860) = __stream;
          if (__stream == (FILE *)0x0) {
            piVar9 = __errno_location();
            FUN_0005df98(2,"src/rule.c",0x347,"popen fail, errno[%d]",*piVar9);
          }
          else {
            iVar2 = fileno(__stream);
            *(int *)(__dest + 0x1864) = iVar2;
            if (-1 < iVar2) {
              *(code **)(__dest + 0x187c) = FUN_00059f9c;
              return __dest;
            }
            piVar9 = __errno_location();
            FUN_0005df98(2,"src/rule.c",0x34c,"fileno fail, errno[%d]",*piVar9);
          }
          goto LAB_0005afdc;
        }
      }
LAB_0005b3b8:
      FUN_0005df98(2,"src/rule.c",0x3a2,"the 1st char[%c] of file_path[%s] is wrong",local_2030,
                   &local_2030);
      goto LAB_0005afdc;
    }
LAB_0005b254:
    if (local_202f[0] != 0x22) {
      FUN_0005df98(2,"src/rule.c",0x2ef," - must set before a file output");
      goto LAB_0005afdc;
    }
    pbVar6 = local_202f;
    *(undefined **)(__dest + 0x102c) = &DAT_00101000;
    *(undefined4 *)(__dest + 0x1868) = 0;
  }
  pcVar17 = __dest + 0x1030;
  iVar2 = FUN_0005a66c(pbVar6,pcVar17,__dest + 0x1434,param_7);
  if (iVar2 != 0) {
    FUN_0005df98(2,"src/rule.c",0x2ff,"zlog_rule_parse_path fail");
    goto LAB_0005afdc;
  }
  if (pbVar10 != (byte *)0x0) {
    memset(auStack_102c,0,0x1001);
    iVar2 = __isoc99_sscanf(pbVar10," %[0-9MmKkBb] * %d ~",auStack_102c,__dest + 0x1454);
    if (iVar2 != 0) {
      uVar8 = FUN_0005e140(auStack_102c);
      *(undefined4 *)(__dest + 0x1450) = uVar8;
    }
    pcVar5 = strchr((char *)pbVar10,0x22);
    if (pcVar5 != (char *)0x0) {
      iVar2 = FUN_0005a66c(pcVar5,__dest + 0x1458,__dest + 0x185c,param_7);
      if (iVar2 != 0) {
        FUN_0005df98(2,"src/rule.c",0x310,"zlog_rule_parse_path fail");
        goto LAB_0005afdc;
      }
      pcVar5 = strchr(__dest + 0x1458,0x23);
      if ((pcVar5 == (char *)0x0) ||
         ((pcVar7 = strchr(pcVar5,0x72), pcVar7 == (char *)0x0 &&
          (pcVar5 = strchr(pcVar5,0x73), pcVar5 == (char *)0x0)))) {
        FUN_0005df98(2,"src/rule.c",0x316,"archive_path must contain #r or #s");
        goto LAB_0005afdc;
      }
    }
  }
  if (*(int *)(__dest + 0x1434) != 0) {
    if (*(int *)(__dest + 0x1450) < 1) {
      pcVar13 = FUN_0005a0d4;
    }
    else {
      pcVar13 = FUN_0005a30c;
    }
    *(code **)(__dest + 0x187c) = pcVar13;
    return __dest;
  }
  if (*(int *)(__dest + 0x1450) < 1) {
    pcVar13 = FUN_000596b0;
  }
  else {
    pcVar13 = FUN_00059a0c;
  }
  *(code **)(__dest + 0x187c) = pcVar13;
  iVar2 = open64(pcVar17,*(uint *)(__dest + 0x102c) | 0x441,*(undefined4 *)(__dest + 0x1028));
  *(int *)(__dest + 0x1438) = iVar2;
  if (iVar2 < 0) {
    piVar9 = __errno_location();
    FUN_0005df98(2,"src/rule.c",0x331,"open file[%s] fail, errno[%d]",pcVar17,*piVar9);
  }
  else {
    iVar2 = __fxstat64(3,iVar2,(stat64 *)local_70b0);
    if (iVar2 == 0) {
      if (0 < *(int *)(__dest + 0x1450)) {
        close(*(int *)(__dest + 0x1438));
        *(undefined4 *)(__dest + 0x1438) = 0xffffffff;
      }
      *(undefined4 *)(__dest + 0x1440) = local_70b0._0_4_;
      *(undefined4 *)(__dest + 0x1444) = local_70b0._4_4_;
      *(undefined4 *)(__dest + 0x1448) = local_7050;
      *(undefined4 *)(__dest + 0x144c) = uStack_704c;
      return __dest;
    }
    piVar9 = __errno_location();
    FUN_0005df98(2,"src/rule.c",0x337,"stat [%s] fail, errno[%d], failing to open static_fd",pcVar17
                 ,*piVar9);
  }
LAB_0005afdc:
  FUN_0005a97c(__dest);
  return (char *)0x0;
}

