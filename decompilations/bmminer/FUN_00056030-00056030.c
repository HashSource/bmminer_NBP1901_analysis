
undefined4 FUN_00056030(char *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  size_t sVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  byte bVar11;
  byte *pbVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar18;
  uint local_60e8;
  undefined4 local_60e4;
  int local_60d8;
  tm tStack_60d4;
  stat64 sStack_60a8;
  byte local_6040 [4100];
  char acStack_503c [4100];
  char acStack_4038 [4100];
  char local_3034;
  char local_3033;
  char local_3032;
  char local_3031;
  char acStack_2030 [4100];
  char acStack_102c [4104];
  
  iVar3 = __lxstat64(3,param_1,&sStack_60a8);
  if (iVar3 == 0) {
    localtime_r(&sStack_60a8.st_mtim.tv_sec,&tStack_60d4);
    strftime(param_1 + 0x401,0x15,(char *)&DAT_0006bacc,&tStack_60d4);
    __stream = fopen64(param_1,"r");
    if (__stream != (FILE *)0x0) {
      memset(local_6040,0,0x1001);
      pcVar13 = param_1 + 0x244c;
      iVar3 = 0;
      iVar16 = 0;
      local_60e8 = 0;
      pbVar15 = local_6040;
LAB_000560d8:
      do {
        do {
          pcVar4 = fgets((char *)pbVar15,0x1001 - iVar16,__stream);
          local_60e4 = 0;
          if (pcVar4 == (char *)0x0) {
LAB_000562fc:
            fclose(__stream);
            return local_60e4;
          }
          iVar3 = iVar3 + 1;
          sVar5 = strlen((char *)pbVar15);
          if (pbVar15[sVar5 - 1] == 10) {
            pbVar15[sVar5 - 1] = 0;
          }
          uVar18 = (uint)*pbVar15;
        } while (uVar18 == 0);
        ppuVar6 = __ctype_b_loc();
        puVar17 = *ppuVar6;
        pbVar12 = pbVar15;
        while (uVar14 = puVar17[uVar18] & 0x2000, (puVar17[uVar18] & 0x2000) != 0) {
          pbVar12 = pbVar12 + 1;
          uVar18 = (uint)*pbVar12;
          if (uVar18 == 0) goto LAB_000560d8;
        }
        if (uVar18 == 0x23) goto LAB_000560d8;
        bVar11 = *pbVar12;
        pbVar7 = pbVar15;
        if (bVar11 != 0) {
          pbVar7 = pbVar15 + -1;
          do {
            pbVar7 = pbVar7 + 1;
            *pbVar7 = bVar11;
            uVar14 = uVar14 + 1;
            pbVar12 = pbVar12 + 1;
            bVar11 = *pbVar12;
          } while (bVar11 != 0);
          pbVar7 = pbVar15 + uVar14;
        }
        *pbVar7 = 0;
        sVar5 = strlen((char *)pbVar15);
        pbVar15 = pbVar15 + (sVar5 - 1);
        do {
          pbVar12 = pbVar15;
          pbVar15 = pbVar12 + -1;
        } while ((puVar17[*pbVar12] & 0x2000) != 0);
        if ((*pbVar12 != 0x5c) || (0xfe2 < (int)pbVar12 - (int)local_6040)) {
          bVar2 = false;
          pbVar12[1] = 0;
          pbVar15 = local_6040;
          bVar11 = local_6040[0];
          if (local_6040[0] == 0) {
            sVar5 = strlen((char *)local_6040);
            if (0x1000 < sVar5) goto LAB_000568d8;
LAB_00056270:
            switch(local_60e8) {
            case 1:
              memset(acStack_503c,0,0x1001);
              memset(acStack_102c,0,0x1001);
              iVar16 = __isoc99_sscanf(local_6040," %[^=]= %s ",acStack_503c,acStack_102c);
              if (iVar16 == 2) {
                memset(acStack_4038,0,0x1001);
                memset(&local_3034,0,0x1001);
                memset(acStack_2030,0,0x1001);
                local_60d8 = 0;
                __isoc99_sscanf(acStack_503c,"%s%n%s%s",acStack_4038,&local_60d8,&local_3034,
                                acStack_2030);
                iVar16 = strcmp(acStack_4038,"strict");
                if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"init"), iVar16 == 0)) {
                  iVar16 = strcasecmp(acStack_102c,"false");
                  if ((iVar16 == 0) && (pcVar4 = getenv("ZLOG_STRICT_INIT"), pcVar4 == (char *)0x0))
                  {
                    *(undefined4 *)(param_1 + 0x418) = 0;
                    iVar16 = 0;
                    pbVar15 = local_6040;
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x418) = 1;
                    iVar16 = 0;
                    pbVar15 = local_6040;
                  }
                  goto LAB_000560d8;
                }
                iVar16 = strcmp(acStack_4038,"buffer");
                if ((iVar16 == 0) && (local_3034 == 'm')) {
                  if (local_3033 == 'i') {
                    if ((local_3032 == 'n') && (local_3031 == '\0')) {
                      uVar9 = FUN_0005e140(acStack_102c);
                      *(undefined4 *)(param_1 + 0x41c) = uVar9;
                      iVar16 = 0;
                      pbVar15 = local_6040;
                      goto LAB_000560d8;
                    }
                  }
                  else if (((local_3033 == 'a') && (local_3032 == 'x')) && (local_3031 == '\0')) {
                    uVar9 = FUN_0005e140(acStack_102c);
                    *(undefined4 *)(param_1 + 0x420) = uVar9;
                    iVar16 = 0;
                    pbVar15 = local_6040;
                    goto LAB_000560d8;
                  }
                }
                iVar16 = strcmp(acStack_4038,"file");
                if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"perms"), iVar16 == 0)) {
                  __isoc99_sscanf(acStack_102c,&DAT_0006bca0,param_1 + 0x2434);
                  iVar16 = 0;
                  pbVar15 = local_6040;
                  goto LAB_000560d8;
                }
                iVar16 = strcmp(acStack_4038,"rotate");
                if (((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"lock"), iVar16 == 0)) &&
                   (iVar16 = strcmp(acStack_2030,"file"), iVar16 == 0)) {
                  iVar16 = strcmp(acStack_102c,"self");
                  if (iVar16 == 0) {
                    strcpy(param_1 + 0x424,param_1);
                    iVar16 = 0;
                    pbVar15 = local_6040;
                  }
                  else {
                    strcpy(param_1 + 0x424,acStack_102c);
                    iVar16 = 0;
                    pbVar15 = local_6040;
                  }
                  goto LAB_000560d8;
                }
                iVar16 = strcmp(acStack_4038,"default");
                if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"format"), iVar16 == 0)) {
                  strcpy(param_1 + 0x142c,(char *)(local_6040 + local_60d8));
                  iVar16 = 0;
                  pbVar15 = local_6040;
                  goto LAB_000560d8;
                }
                iVar16 = strcmp(acStack_4038,"reload");
                if (((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"conf"), iVar16 == 0)) &&
                   (iVar16 = strcmp(acStack_2030,"period"), iVar16 == 0)) {
                  uVar9 = FUN_0005e140(acStack_102c);
                  *(undefined4 *)(param_1 + 0x243c) = uVar9;
                  iVar16 = 0;
                  pbVar15 = local_6040;
                  goto LAB_000560d8;
                }
                iVar16 = strcmp(acStack_4038,"fsync");
                if ((iVar16 == 0) && (iVar16 = strcmp(&local_3034,"period"), iVar16 == 0)) {
                  uVar9 = FUN_0005e140(acStack_102c);
                  *(undefined4 *)(param_1 + 0x2438) = uVar9;
                  iVar16 = 0;
                  pbVar15 = local_6040;
                  goto LAB_000560d8;
                }
                FUN_0005df98(2,"src/conf.c",0x1c6,"name[%s] is not any one of global options",
                             acStack_503c);
                if (*(int *)(param_1 + 0x418) == 0) goto LAB_00056644;
              }
              else {
                FUN_0005df98(2,"src/conf.c",0x19c,"sscanf [%s] fail, name or value is null",
                             local_6040);
              }
              break;
            case 2:
              iVar16 = FUN_00057b80(*(undefined4 *)(param_1 + 0x2440),local_6040);
              if (iVar16 == 0) goto LAB_0005639c;
              FUN_0005df98(2,"src/conf.c",0x1cc,"zlog_level_list_set fail");
              if (*(int *)(param_1 + 0x418) == 0) {
                iVar16 = 0;
                pbVar15 = local_6040;
                goto LAB_000560d8;
              }
              break;
            case 3:
              iVar16 = FUN_000576e4(local_6040,pcVar13);
              if (iVar16 == 0) {
                FUN_0005df98(2,"src/conf.c",0x1d3,"zlog_format_new fail [%s]",local_6040);
                if (*(int *)(param_1 + 0x418) == 0) goto LAB_0005639c;
              }
              else {
                iVar8 = FUN_0005d694(*(undefined4 *)(param_1 + 0x2444),iVar16);
                if (iVar8 == 0) {
LAB_0005639c:
                  iVar16 = 0;
                  pbVar15 = local_6040;
                  goto LAB_000560d8;
                }
                FUN_0005766c(iVar16);
                FUN_0005df98(2,"src/conf.c",0x1d9,"zc_arraylist_add fail");
              }
              break;
            case 4:
              iVar16 = FUN_0005aa9c(local_6040,*(undefined4 *)(param_1 + 0x2440),
                                    *(undefined4 *)(param_1 + 0x2430),
                                    *(undefined4 *)(param_1 + 0x2444),
                                    *(undefined4 *)(param_1 + 0x2434),
                                    *(undefined4 *)(param_1 + 0x2438),pcVar13);
              if (iVar16 == 0) {
                FUN_0005df98(2,"src/conf.c",0x1e7,"zlog_rule_new fail [%s]",local_6040);
                if (*(int *)(param_1 + 0x418) == 0) goto LAB_0005635c;
              }
              else {
                iVar8 = FUN_0005d694(*(undefined4 *)(param_1 + 0x2448),iVar16);
                if (iVar8 == 0) {
LAB_0005635c:
                  local_60e8 = 4;
                  iVar16 = 0;
                  pbVar15 = local_6040;
                  goto LAB_000560d8;
                }
                FUN_0005a97c(iVar16);
                FUN_0005df98(2,"src/conf.c",0x1ed,"zc_arraylist_add fail");
              }
              break;
            default:
              FUN_0005df98(2,"src/conf.c",0x1f2,"not in any section");
            }
          }
          else {
            do {
              if (bVar11 != 0x22) {
                if ((bVar11 != 0x23) || (bVar2)) goto LAB_00056228;
                *pbVar15 = bVar2;
                break;
              }
              bVar2 = (bool)(bVar2 ^ 1);
LAB_00056228:
              bVar11 = pbVar15[1];
              pbVar15 = pbVar15 + 1;
            } while (bVar11 != 0);
            sVar5 = strlen((char *)local_6040);
            if (sVar5 < 0x1001) {
              if (local_6040[0] != 0x5b) goto LAB_00056270;
              __isoc99_sscanf(local_6040,&DAT_0006bb30,acStack_503c);
              iVar16 = strcmp(acStack_503c,"global");
              if (iVar16 != 0) {
                iVar16 = strcmp(acStack_503c,"levels");
                if (iVar16 == 0) {
                  if (local_60e8 < 2) {
                    local_60e8 = 2;
                    goto LAB_0005639c;
                  }
                }
                else {
                  iVar16 = strcmp(acStack_503c,"formats");
                  if (iVar16 != 0) {
                    iVar16 = strcmp(acStack_503c,"rules");
                    if (iVar16 == 0) {
                      if (local_60e8 == 4) goto LAB_00056a9c;
                      if ((*(uint *)(param_1 + 0x243c) != 0) &&
                         (*(uint *)(param_1 + 0x243c) <= *(uint *)(param_1 + 0x2438))) {
                        FUN_0005df98(1,"src/conf.c",0x17e,
                                     "fsync_period[%ld] >= reload_conf_period[%ld],set fsync_period to zero"
                                    );
                        *(undefined4 *)(param_1 + 0x2438) = 0;
                      }
                      iVar16 = FUN_00058834(param_1 + 0x424);
                      *(int *)(param_1 + 0x1428) = iVar16;
                      if (iVar16 == 0) {
                        FUN_0005df98(2,"src/conf.c",0x187,"zlog_rotater_new fail");
                      }
                      else {
                        iVar16 = FUN_000576e4(param_1 + 0x142c,pcVar13);
                        *(int *)(param_1 + 0x2430) = iVar16;
                        if (iVar16 != 0) goto LAB_0005635c;
                        FUN_0005df98(2,"src/conf.c",0x18e,"zlog_format_new fail");
                      }
                    }
                    else {
                      FUN_0005df98(2,"src/conf.c",0x16b,"wrong section name[%s]",acStack_503c);
                    }
                    goto LAB_000562b0;
                  }
                  if (local_60e8 < 3) {
                    local_60e8 = 3;
                    goto LAB_0005639c;
                  }
                }
LAB_00056a9c:
                FUN_0005df98(2,"src/conf.c",0x170,
                             "wrong sequence of section, must follow global->levels->formats->rules"
                            );
                goto LAB_000562b0;
              }
              if (local_60e8 != 0) goto LAB_00056a9c;
LAB_00056644:
              local_60e8 = 1;
              iVar16 = 0;
              pbVar15 = local_6040;
              goto LAB_000560d8;
            }
LAB_000568d8:
            FUN_0005df98(2,"src/conf.c",0x15a,
                         "line_len[%ld] > MAXLEN_CFG_LINE[%ld], may cause overflow",sVar5,0x1000);
          }
LAB_000562b0:
          FUN_0005df98(2,"src/conf.c",0x13a,"parse configure file[%s]line_no[%ld] fail",param_1,
                       iVar3);
          local_60e4 = 0xffffffff;
          FUN_0005df98(2,"src/conf.c",0x13b,"line[%s]",local_6040);
          goto LAB_000562fc;
        }
        uVar1 = puVar17[pbVar12[-1]];
        while ((uVar1 & 0x2000) != 0) {
          pbVar15 = pbVar15 + -1;
          uVar1 = puVar17[*pbVar15];
        }
        iVar16 = (int)(pbVar15 + 1) - (int)local_6040;
        pbVar15[1] = 0;
        pbVar15 = pbVar15 + 1;
      } while( true );
    }
    FUN_0005df98(2,"src/conf.c",0xf5,"open configure file[%s] fail",param_1);
  }
  else {
    piVar10 = __errno_location();
    FUN_0005df98(2,"src/conf.c",0xee,"lstat conf file[%s] fail, errno[%d]",param_1,*piVar10);
  }
  return 0xffffffff;
}

