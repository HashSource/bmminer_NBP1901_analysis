
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001740c(int param_1,int param_2)

{
  byte bVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  void *__dest;
  char *__s;
  uint uVar6;
  uint __n;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  size_t __n_00;
  bool bVar10;
  int local_b6c;
  int local_b68;
  int local_b64;
  int local_b60;
  int local_b5c;
  int local_b58;
  int local_b54;
  int local_b50;
  int local_b4c;
  int local_b48;
  int local_b44;
  int local_b40;
  int local_b3c;
  int local_b38;
  int local_b34;
  int local_b30;
  undefined2 local_b28;
  undefined auStack_b26 [254];
  undefined local_a28 [7];
  undefined4 local_a21;
  undefined4 local_a1d;
  undefined4 local_a19;
  undefined local_a15;
  undefined2 local_a14;
  undefined4 local_a12;
  undefined4 local_a0e;
  undefined4 local_a0a;
  undefined local_a06;
  byte local_a05;
  undefined auStack_a04 [4];
  byte abStack_a00 [28];
  undefined4 local_9e4;
  undefined4 uStack_9e0;
  uint local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined4 local_91c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  
  memset(&local_b28,0,0x100);
  memset(local_a28,0,0x100);
  pbVar9 = *(byte **)(param_2 + param_1 * 4);
  iVar8 = 3;
  do {
    iVar3 = FUN_00044358(param_1,0,&local_b28,0x100);
    if (iVar3 != 0) {
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"Read configuration fail for chain %d.\n",param_1);
        FUN_0002e584(3,&local_828,0);
        return iVar3;
      }
      return iVar3;
    }
    FUN_00017244(param_1,&local_b28,0x100);
    memset(&local_928,0,0x100);
    __n = local_b28._1_1_ - 2;
    uVar6 = local_b28._1_1_ + 5 & 0xfffffff8;
    if ((__n & 0xff) < 0xfe && uVar6 < 0xff) {
      if ((byte)local_b28 >> 4 == 1 && ((byte)local_b28 & 0xf) == 1) {
        memcpy(&local_928,auStack_b26,uVar6);
        FUN_00018e48(&local_928,uVar6,0);
        local_a28._0_2_ = local_b28;
        memcpy(local_a28 + 2,&local_928,__n);
        bVar1 = (byte)((((uint)local_b28 << 0x18) >> 0x1c) << 4);
        *pbVar9 = *pbVar9 & 0xf | bVar1;
        *pbVar9 = bVar1 | local_a28[0] & 0xf;
        pbVar9[1] = local_a28[1];
        uVar6 = (uint)local_a28[2];
        pbVar9[2] = local_a28[2];
        if (uVar6 - 1 < 2) {
          local_b48 = 0x3d;
          local_b44 = 0x3e;
          local_b50 = 0x3b;
          local_b4c = 0x3c;
          __n_00 = 4;
          local_b58 = 0x37;
          local_b54 = 0x39;
          iVar8 = 0x28;
          local_b60 = 0x33;
          local_b5c = 0x35;
          local_b68 = 0x31;
          local_b64 = 0x32;
          local_b30 = 0x41;
          local_b40 = 0x2f;
          local_b3c = 0x2e;
          local_b6c = 0x30;
          local_b38 = 0x29;
          local_b34 = 0x2d;
        }
        else {
          if (uVar6 == 3) {
            local_b30 = 0x49;
          }
          else {
            if (uVar6 != 4) {
              if (DAT_0007eb9c < 4) {
                return -1;
              }
              local_828._0_1_ = s_This_FMT_is_not_supported_00060e68[0];
              local_828._1_1_ = s_This_FMT_is_not_supported_00060e68[1];
              local_828._2_1_ = s_This_FMT_is_not_supported_00060e68[2];
              local_828._3_1_ = s_This_FMT_is_not_supported_00060e68[3];
              uStack_824._0_1_ = s_This_FMT_is_not_supported_00060e68[4];
              uStack_824._1_1_ = s_This_FMT_is_not_supported_00060e68[5];
              uStack_824._2_1_ = s_This_FMT_is_not_supported_00060e68[6];
              uStack_824._3_1_ = s_This_FMT_is_not_supported_00060e68[7];
              uStack_820._0_1_ = s_This_FMT_is_not_supported_00060e68[8];
              uStack_820._1_1_ = s_This_FMT_is_not_supported_00060e68[9];
              uStack_820._2_1_ = s_This_FMT_is_not_supported_00060e68[10];
              uStack_820._3_1_ = s_This_FMT_is_not_supported_00060e68[11];
              uStack_81c._0_1_ = s_This_FMT_is_not_supported_00060e68[12];
              uStack_81c._1_1_ = s_This_FMT_is_not_supported_00060e68[13];
              uStack_81c._2_1_ = s_This_FMT_is_not_supported_00060e68[14];
              uStack_81c._3_1_ = s_This_FMT_is_not_supported_00060e68[15];
              local_818._0_1_ = s_This_FMT_is_not_supported_00060e68[16];
              local_818._1_1_ = s_This_FMT_is_not_supported_00060e68[17];
              local_818._2_1_ = s_This_FMT_is_not_supported_00060e68[18];
              local_818._3_1_ = s_This_FMT_is_not_supported_00060e68[19];
              local_814._0_1_ = s_This_FMT_is_not_supported_00060e68[20];
              local_814._1_1_ = s_This_FMT_is_not_supported_00060e68[21];
              local_814._2_1_ = s_This_FMT_is_not_supported_00060e68[22];
              local_814._3_1_ = s_This_FMT_is_not_supported_00060e68[23];
              local_810._0_3_ = (undefined3)ram0x00060e80;
              FUN_0002e584(3,&local_828,0);
              uVar6 = DAT_0007eb9c;
              break;
            }
            local_b30 = 0x51;
          }
          __n_00 = 9;
          local_b48 = 0x42;
          local_b44 = 0x43;
          local_b50 = 0x40;
          local_b4c = 0x41;
          local_b58 = 0x3c;
          local_b54 = 0x3e;
          local_b6c = 0x35;
          local_b60 = 0x38;
          local_b5c = 0x3a;
          iVar8 = 0x2d;
          local_b68 = 0x36;
          local_b64 = 0x37;
          local_b40 = 0x34;
          local_b3c = 0x33;
          local_b38 = 0x2e;
          local_b34 = 0x32;
        }
        puVar7 = (uint *)0x1;
        puVar4 = (undefined4 *)calloc(0x12,1);
        *(undefined4 **)(pbVar9 + 3) = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          if (DAT_0007eb9c < 4) {
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = (uint *)0x0;
            local_828._0_1_ = s_Decode_SN_OOM_00060e84[0];
            local_828._1_1_ = s_Decode_SN_OOM_00060e84[1];
            local_828._2_1_ = s_Decode_SN_OOM_00060e84[2];
            local_828._3_1_ = s_Decode_SN_OOM_00060e84[3];
            uStack_824._0_1_ = s_Decode_SN_OOM_00060e84[4];
            uStack_824._1_1_ = s_Decode_SN_OOM_00060e84[5];
            uStack_824._2_1_ = s_Decode_SN_OOM_00060e84[6];
            uStack_824._3_1_ = s_Decode_SN_OOM_00060e84[7];
            uStack_820._0_1_ = s_Decode_SN_OOM_00060e84[8];
            uStack_820._1_1_ = s_Decode_SN_OOM_00060e84[9];
            uStack_820._2_1_ = s_Decode_SN_OOM_00060e84[10];
            uStack_820._3_1_ = s_Decode_SN_OOM_00060e84[11];
            uStack_81c._0_3_ = (undefined3)ram0x00060e90;
            FUN_0002e584(3,&local_828,0);
            puVar4 = *(undefined4 **)(pbVar9 + 3);
          }
        }
        *puVar4 = local_a28._3_4_;
        puVar4[1] = local_a21;
        puVar4[2] = local_a1d;
        puVar4[3] = local_a19;
        *(undefined *)(puVar4 + 4) = local_a15;
        puVar5 = (undefined2 *)calloc(3,1);
        *(undefined2 **)(pbVar9 + 7) = puVar5;
        if (puVar5 == (undefined2 *)0x0) {
          if (DAT_0007eb9c < 4) {
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = (uint *)0x0;
            local_828._0_1_ = s_Decode_Chip_Die_OOM_00060e94[0];
            local_828._1_1_ = s_Decode_Chip_Die_OOM_00060e94[1];
            local_828._2_1_ = s_Decode_Chip_Die_OOM_00060e94[2];
            local_828._3_1_ = s_Decode_Chip_Die_OOM_00060e94[3];
            uStack_824._0_1_ = s_Decode_Chip_Die_OOM_00060e94[4];
            uStack_824._1_1_ = s_Decode_Chip_Die_OOM_00060e94[5];
            uStack_824._2_1_ = s_Decode_Chip_Die_OOM_00060e94[6];
            uStack_824._3_1_ = s_Decode_Chip_Die_OOM_00060e94[7];
            uStack_820._0_1_ = s_Decode_Chip_Die_OOM_00060e94[8];
            uStack_820._1_1_ = s_Decode_Chip_Die_OOM_00060e94[9];
            uStack_820._2_1_ = s_Decode_Chip_Die_OOM_00060e94[10];
            uStack_820._3_1_ = s_Decode_Chip_Die_OOM_00060e94[11];
            uStack_81c._0_1_ = s_Decode_Chip_Die_OOM_00060e94[12];
            uStack_81c._1_1_ = s_Decode_Chip_Die_OOM_00060e94[13];
            uStack_81c._2_1_ = s_Decode_Chip_Die_OOM_00060e94[14];
            uStack_81c._3_1_ = s_Decode_Chip_Die_OOM_00060e94[15];
            local_818._0_1_ = s_Decode_Chip_Die_OOM_00060e94[16];
            local_818._1_1_ = s_Decode_Chip_Die_OOM_00060e94[17];
            local_818._2_1_ = s_Decode_Chip_Die_OOM_00060e94[18];
            local_818._3_1_ = s_Decode_Chip_Die_OOM_00060e94[19];
            local_814._0_1_ = (char)ram0x00060ea8;
            FUN_0002e584(3,&local_828,0);
            puVar5 = *(undefined2 **)(pbVar9 + 7);
          }
        }
        *puVar5 = local_a14;
        puVar4 = (undefined4 *)calloc(0xe,1);
        *(undefined4 **)(pbVar9 + 0xb) = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          if (DAT_0007eb9c < 4) {
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = (uint *)0x0;
            local_828._0_1_ = s_Decode_Chip_Marking_OOM_00060eac[0];
            local_828._1_1_ = s_Decode_Chip_Marking_OOM_00060eac[1];
            local_828._2_1_ = s_Decode_Chip_Marking_OOM_00060eac[2];
            local_828._3_1_ = s_Decode_Chip_Marking_OOM_00060eac[3];
            uStack_824._0_1_ = s_Decode_Chip_Marking_OOM_00060eac[4];
            uStack_824._1_1_ = s_Decode_Chip_Marking_OOM_00060eac[5];
            uStack_824._2_1_ = s_Decode_Chip_Marking_OOM_00060eac[6];
            uStack_824._3_1_ = s_Decode_Chip_Marking_OOM_00060eac[7];
            uStack_820._0_1_ = s_Decode_Chip_Marking_OOM_00060eac[8];
            uStack_820._1_1_ = s_Decode_Chip_Marking_OOM_00060eac[9];
            uStack_820._2_1_ = s_Decode_Chip_Marking_OOM_00060eac[10];
            uStack_820._3_1_ = s_Decode_Chip_Marking_OOM_00060eac[11];
            uStack_81c._0_1_ = s_Decode_Chip_Marking_OOM_00060eac[12];
            uStack_81c._1_1_ = s_Decode_Chip_Marking_OOM_00060eac[13];
            uStack_81c._2_1_ = s_Decode_Chip_Marking_OOM_00060eac[14];
            uStack_81c._3_1_ = s_Decode_Chip_Marking_OOM_00060eac[15];
            local_818._0_1_ = s_Decode_Chip_Marking_OOM_00060eac[16];
            local_818._1_1_ = s_Decode_Chip_Marking_OOM_00060eac[17];
            local_818._2_1_ = s_Decode_Chip_Marking_OOM_00060eac[18];
            local_818._3_1_ = s_Decode_Chip_Marking_OOM_00060eac[19];
            local_814._0_1_ = s_Decode_Chip_Marking_OOM_00060eac[20];
            local_814._1_1_ = s_Decode_Chip_Marking_OOM_00060eac[21];
            local_814._2_1_ = s_Decode_Chip_Marking_OOM_00060eac[22];
            local_814._3_1_ = s_Decode_Chip_Marking_OOM_00060eac[23];
            local_810._0_1_ = (char)ram0x00060ec4;
            FUN_0002e584(3,&local_828,0);
            puVar4 = *(undefined4 **)(pbVar9 + 0xb);
          }
        }
        *puVar4 = local_a12;
        puVar4[2] = local_a0a;
        puVar4[1] = local_a0e;
        *(undefined *)(puVar4 + 3) = local_a06;
        pbVar9[0xf] = local_a05;
        if (pbVar9[2] - 1 < 2) {
          local_928 = 0;
          local_924 = 0;
          local_920 = 0;
          local_91c = 0;
          __s = (char *)calloc(__n_00 + 6,1);
          *(char **)(pbVar9 + 0x10) = __s;
          if (__s == (char *)0x0) {
            if (DAT_0007eb9c < 4) {
              puVar7 = (uint *)0x0;
            }
            else {
              local_828._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[0];
              local_828._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[1];
              local_828._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[2];
              local_828._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[3];
              uStack_824._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[4];
              uStack_824._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[5];
              uStack_824._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[6];
              uStack_824._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[7];
              uStack_820._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[8];
              uStack_820._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[9];
              uStack_820._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[10];
              uStack_820._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[11];
              uStack_81c._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[12];
              uStack_81c._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[13];
              uStack_81c._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[14];
              uStack_81c._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[15];
              local_818._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[16];
              local_818._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[17];
              local_818._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[18];
              local_818._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[19];
              local_814._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[20];
              local_814._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[21];
              local_814._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[22];
              local_814._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[23];
              local_810._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[24];
              local_810._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[25];
              local_810._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[26];
              local_810._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[27];
              local_80c._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[28];
              local_80c._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[29];
              local_80c._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[30];
              local_80c._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[31];
              local_808._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[32];
              local_808._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[33];
              local_808._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[34];
              local_808._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[35];
              FUN_0002e584(3,&local_828,0);
              __s = *(char **)(pbVar9 + 0x10);
              puVar7 = (uint *)0x0;
            }
          }
          memcpy(&local_928,auStack_a04,__n_00);
          snprintf(__s,__n_00 + 6,"F%dV%02dB%dC%d",local_928 & 0xff,local_928 >> 8 & 0xff,
                   local_928 >> 0x10 & 0xff,local_928 >> 0x18);
        }
        else {
          __dest = calloc(__n_00 + 1,1);
          *(void **)(pbVar9 + 0x10) = __dest;
          if (__dest == (void *)0x0) {
            if (DAT_0007eb9c < 4) {
              puVar7 = (uint *)0x0;
            }
            else {
              puVar7 = (uint *)0x0;
              local_828._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[0];
              local_828._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[1];
              local_828._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[2];
              local_828._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[3];
              uStack_824._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[4];
              uStack_824._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[5];
              uStack_824._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[6];
              uStack_824._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[7];
              uStack_820._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[8];
              uStack_820._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[9];
              uStack_820._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[10];
              uStack_820._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[11];
              uStack_81c._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[12];
              uStack_81c._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[13];
              uStack_81c._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[14];
              uStack_81c._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[15];
              local_818._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[16];
              local_818._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[17];
              local_818._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[18];
              local_818._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[19];
              local_814._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[20];
              local_814._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[21];
              local_814._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[22];
              local_814._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[23];
              local_810._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[24];
              local_810._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[25];
              local_810._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[26];
              local_810._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[27];
              local_80c._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[28];
              local_80c._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[29];
              local_80c._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[30];
              local_80c._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[31];
              local_808._0_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[32];
              local_808._1_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[33];
              local_808._2_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[34];
              local_808._3_1_ = s_Decode_Chip_FT_Program_Version_O_00060ec8[35];
              FUN_0002e584(3,&local_828,0);
              __dest = *(void **)(pbVar9 + 0x10);
            }
          }
          memcpy(__dest,auStack_a04,__n_00);
        }
        pbVar9[0x14] = pbVar9[0x14] & 0x80 | local_a28[iVar8] & 0x7f;
        pbVar9[0x14] = pbVar9[0x14] & 0x7f | local_a28[iVar8] & 0x80;
        puVar4 = (undefined4 *)calloc(5,1);
        *(undefined4 **)(pbVar9 + 0x15) = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          if (DAT_0007eb9c < 4) {
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = (uint *)0x0;
            local_828._0_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[0];
            local_828._1_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[1];
            local_828._2_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[2];
            local_828._3_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[3];
            uStack_824._0_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[4];
            uStack_824._1_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[5];
            uStack_824._2_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[6];
            uStack_824._3_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[7];
            uStack_820._0_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[8];
            uStack_820._1_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[9];
            uStack_820._2_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[10];
            uStack_820._3_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[11];
            uStack_81c._0_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[12];
            uStack_81c._1_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[13];
            uStack_81c._2_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[14];
            uStack_81c._3_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[15];
            local_818._0_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[16];
            local_818._1_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[17];
            local_818._2_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[18];
            local_818._3_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[19];
            local_814._0_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[20];
            local_814._1_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[21];
            local_814._2_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[22];
            local_814._3_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[23];
            local_810._0_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[24];
            local_810._1_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[25];
            local_810._2_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[26];
            local_810._3_1_ = s_Decode_asic_sendor_addr_OOM_00060efc[27];
            local_80c._0_1_ = (char)ram0x00060f18;
            FUN_0002e584(3,&local_828,0);
            puVar4 = *(undefined4 **)(pbVar9 + 0x15);
          }
        }
        *puVar4 = *(undefined4 *)(local_a28 + local_b38);
        pbVar9[0x19] = pbVar9[0x19] & 0x80 | local_a28[local_b34] & 0x7f;
        pbVar9[0x19] = pbVar9[0x19] & 0x7f | local_a28[local_b34] & 0x80;
        pbVar9[0x1a] = local_a28[local_b3c];
        pbVar9[0x1b] = local_a28[local_b40];
        pbVar9[0x1c] = local_a28[local_b6c];
        pbVar9[0x1d] = local_a28[local_b68];
        pbVar9[0x1e] = local_a28[local_b64];
        puVar5 = (undefined2 *)calloc(3,1);
        *(undefined2 **)(pbVar9 + 0x1f) = puVar5;
        if (puVar5 == (undefined2 *)0x0) {
          if (DAT_0007eb9c < 4) {
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = (uint *)0x0;
            local_828._0_1_ = s_Decode_Chip_Technology_OOM_00060f1c[0];
            local_828._1_1_ = s_Decode_Chip_Technology_OOM_00060f1c[1];
            local_828._2_1_ = s_Decode_Chip_Technology_OOM_00060f1c[2];
            local_828._3_1_ = s_Decode_Chip_Technology_OOM_00060f1c[3];
            uStack_824._0_1_ = s_Decode_Chip_Technology_OOM_00060f1c[4];
            uStack_824._1_1_ = s_Decode_Chip_Technology_OOM_00060f1c[5];
            uStack_824._2_1_ = s_Decode_Chip_Technology_OOM_00060f1c[6];
            uStack_824._3_1_ = s_Decode_Chip_Technology_OOM_00060f1c[7];
            uStack_820._0_1_ = s_Decode_Chip_Technology_OOM_00060f1c[8];
            uStack_820._1_1_ = s_Decode_Chip_Technology_OOM_00060f1c[9];
            uStack_820._2_1_ = s_Decode_Chip_Technology_OOM_00060f1c[10];
            uStack_820._3_1_ = s_Decode_Chip_Technology_OOM_00060f1c[11];
            uStack_81c._0_1_ = s_Decode_Chip_Technology_OOM_00060f1c[12];
            uStack_81c._1_1_ = s_Decode_Chip_Technology_OOM_00060f1c[13];
            uStack_81c._2_1_ = s_Decode_Chip_Technology_OOM_00060f1c[14];
            uStack_81c._3_1_ = s_Decode_Chip_Technology_OOM_00060f1c[15];
            local_818._0_1_ = s_Decode_Chip_Technology_OOM_00060f1c[16];
            local_818._1_1_ = s_Decode_Chip_Technology_OOM_00060f1c[17];
            local_818._2_1_ = s_Decode_Chip_Technology_OOM_00060f1c[18];
            local_818._3_1_ = s_Decode_Chip_Technology_OOM_00060f1c[19];
            local_814._0_1_ = s_Decode_Chip_Technology_OOM_00060f1c[20];
            local_814._1_1_ = s_Decode_Chip_Technology_OOM_00060f1c[21];
            local_814._2_1_ = s_Decode_Chip_Technology_OOM_00060f1c[22];
            local_814._3_1_ = s_Decode_Chip_Technology_OOM_00060f1c[23];
            local_810._0_1_ = s_Decode_Chip_Technology_OOM_00060f1c[24];
            local_810._1_1_ = s_Decode_Chip_Technology_OOM_00060f1c[25];
            local_810._2_1_ = s_Decode_Chip_Technology_OOM_00060f1c[26];
            local_810._3_1_ = s_Decode_Chip_Technology_OOM_00060f1c[27];
            FUN_0002e584(3,&local_828,0);
            puVar5 = *(undefined2 **)(pbVar9 + 0x1f);
          }
        }
        dVar2 = DAT_00017d48;
        *puVar5 = *(undefined2 *)(local_a28 + local_b60);
        *(ushort *)(pbVar9 + 0x23) =
             (ushort)((*(ushort *)(local_a28 + local_b5c) & 0xff) << 8) |
             *(ushort *)(local_a28 + local_b5c) >> 8;
        *(ushort *)(pbVar9 + 0x25) =
             (ushort)((*(ushort *)(local_a28 + local_b58) & 0xff) << 8) |
             *(ushort *)(local_a28 + local_b58) >> 8;
        *(float *)(pbVar9 + 0x27) =
             (float)((double)(longlong)
                             (int)((*(ushort *)(local_a28 + local_b54) & 0xff) << 8 |
                                  (uint)(*(ushort *)(local_a28 + local_b54) >> 8)) / dVar2);
        pbVar9[0x2b] = local_a28[local_b50];
        pbVar9[0x2c] = local_a28[local_b4c];
        pbVar9[0x2d] = local_a28[local_b48];
        pbVar9[0x2e] = local_a28[local_b44];
        puVar4 = (undefined4 *)calloc(9,1);
        *(undefined4 **)(pbVar9 + 0x2f) = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          puVar7 = &DAT_0007eb9c;
          puVar4 = (undefined4 *)0x0;
          if (3 < DAT_0007eb9c) {
            local_828._0_1_ = s_Decode_miner_type_OOM_00060f38[0];
            local_828._1_1_ = s_Decode_miner_type_OOM_00060f38[1];
            local_828._2_1_ = s_Decode_miner_type_OOM_00060f38[2];
            local_828._3_1_ = s_Decode_miner_type_OOM_00060f38[3];
            uStack_824._0_1_ = s_Decode_miner_type_OOM_00060f38[4];
            uStack_824._1_1_ = s_Decode_miner_type_OOM_00060f38[5];
            uStack_824._2_1_ = s_Decode_miner_type_OOM_00060f38[6];
            uStack_824._3_1_ = s_Decode_miner_type_OOM_00060f38[7];
            uStack_820._0_1_ = s_Decode_miner_type_OOM_00060f38[8];
            uStack_820._1_1_ = s_Decode_miner_type_OOM_00060f38[9];
            uStack_820._2_1_ = s_Decode_miner_type_OOM_00060f38[10];
            uStack_820._3_1_ = s_Decode_miner_type_OOM_00060f38[11];
            uStack_81c._0_1_ = s_Decode_miner_type_OOM_00060f38[12];
            uStack_81c._1_1_ = s_Decode_miner_type_OOM_00060f38[13];
            uStack_81c._2_1_ = s_Decode_miner_type_OOM_00060f38[14];
            uStack_81c._3_1_ = s_Decode_miner_type_OOM_00060f38[15];
            local_818._0_1_ = s_Decode_miner_type_OOM_00060f38[16];
            local_818._1_1_ = s_Decode_miner_type_OOM_00060f38[17];
            local_818._2_1_ = s_Decode_miner_type_OOM_00060f38[18];
            local_818._3_1_ = s_Decode_miner_type_OOM_00060f38[19];
            local_814._0_3_ = (undefined3)ram0x00060f4c;
            FUN_0002e584(3,&local_828,0);
            puVar4 = *(undefined4 **)(pbVar9 + 0x2f);
          }
          *puVar4 = local_9e4;
          puVar4[1] = uStack_9e0;
          pbVar9[0x37] = local_a28[local_b30];
        }
        else {
          bVar10 = puVar7 == (uint *)0x0;
          if (bVar10) {
            puVar7 = &DAT_0007eb9c;
          }
          bVar1 = local_a28[local_b30];
          *puVar4 = local_9e4;
          puVar4[1] = uStack_9e0;
          pbVar9[0x37] = bVar1;
          if (!bVar10) {
            uVar6 = FUN_000315ec(local_a28,(pbVar9[1] - 1) * 8);
            if (uVar6 == pbVar9[0x37]) {
              *(undefined *)(param_2 + param_1 + 0x10) = 1;
              return 0;
            }
            puVar7 = &DAT_0007eb9c;
            if (DAT_0007eb9c < 4) {
              return -1;
            }
            snprintf((char *)&local_828,0x800,
                     "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
                     (uint)pbVar9[0x37],(uint)pbVar9[1],uVar6);
            FUN_0002e584(3,&local_828,0);
          }
        }
        uVar6 = *puVar7;
        break;
      }
      if (3 < DAT_0007eb9c) {
        local_828._0_1_ = s_EEPROM_info_error____2_00060e30[0];
        local_828._1_1_ = s_EEPROM_info_error____2_00060e30[1];
        local_828._2_1_ = s_EEPROM_info_error____2_00060e30[2];
        local_828._3_1_ = s_EEPROM_info_error____2_00060e30[3];
        uStack_824._0_1_ = s_EEPROM_info_error____2_00060e30[4];
        uStack_824._1_1_ = s_EEPROM_info_error____2_00060e30[5];
        uStack_824._2_1_ = s_EEPROM_info_error____2_00060e30[6];
        uStack_824._3_1_ = s_EEPROM_info_error____2_00060e30[7];
        uStack_820._0_1_ = s_EEPROM_info_error____2_00060e30[8];
        uStack_820._1_1_ = s_EEPROM_info_error____2_00060e30[9];
        uStack_820._2_1_ = s_EEPROM_info_error____2_00060e30[10];
        uStack_820._3_1_ = s_EEPROM_info_error____2_00060e30[11];
        uStack_81c._0_1_ = s_EEPROM_info_error____2_00060e30[12];
        uStack_81c._1_1_ = s_EEPROM_info_error____2_00060e30[13];
        uStack_81c._2_1_ = s_EEPROM_info_error____2_00060e30[14];
        uStack_81c._3_1_ = s_EEPROM_info_error____2_00060e30[15];
        local_818._0_1_ = s_EEPROM_info_error____2_00060e30[16];
        local_818._1_1_ = s_EEPROM_info_error____2_00060e30[17];
        local_818._2_1_ = s_EEPROM_info_error____2_00060e30[18];
        local_818._3_1_ = s_EEPROM_info_error____2_00060e30[19];
        local_814._0_3_ = (undefined3)ram0x00060e44;
        FUN_0002e584(3,&local_828,0);
        goto LAB_000175b4;
      }
    }
    else if (3 < DAT_0007eb9c) {
      local_828._0_1_ = s_EEPROM_info_error____1_00060e18[0];
      local_828._1_1_ = s_EEPROM_info_error____1_00060e18[1];
      local_828._2_1_ = s_EEPROM_info_error____1_00060e18[2];
      local_828._3_1_ = s_EEPROM_info_error____1_00060e18[3];
      uStack_824._0_1_ = s_EEPROM_info_error____1_00060e18[4];
      uStack_824._1_1_ = s_EEPROM_info_error____1_00060e18[5];
      uStack_824._2_1_ = s_EEPROM_info_error____1_00060e18[6];
      uStack_824._3_1_ = s_EEPROM_info_error____1_00060e18[7];
      uStack_820._0_1_ = s_EEPROM_info_error____1_00060e18[8];
      uStack_820._1_1_ = s_EEPROM_info_error____1_00060e18[9];
      uStack_820._2_1_ = s_EEPROM_info_error____1_00060e18[10];
      uStack_820._3_1_ = s_EEPROM_info_error____1_00060e18[11];
      uStack_81c._0_1_ = s_EEPROM_info_error____1_00060e18[12];
      uStack_81c._1_1_ = s_EEPROM_info_error____1_00060e18[13];
      uStack_81c._2_1_ = s_EEPROM_info_error____1_00060e18[14];
      uStack_81c._3_1_ = s_EEPROM_info_error____1_00060e18[15];
      local_818._0_1_ = s_EEPROM_info_error____1_00060e18[16];
      local_818._1_1_ = s_EEPROM_info_error____1_00060e18[17];
      local_818._2_1_ = s_EEPROM_info_error____1_00060e18[18];
      local_818._3_1_ = s_EEPROM_info_error____1_00060e18[19];
      local_814._0_3_ = (undefined3)ram0x00060e2c;
      FUN_0002e584(3,&local_828,0);
LAB_000175b4:
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"Data decode fail for chain %d.\n",param_1);
        FUN_0002e584(3,&local_828,0);
      }
    }
    usleep(500000);
    iVar8 = iVar8 + -1;
    uVar6 = DAT_0007eb9c;
  } while (iVar8 != 0);
  if (uVar6 < 4) {
    return -1;
  }
  snprintf((char *)&local_828,0x800,"Data load fail for chain %d.\n",param_1);
  FUN_0002e584(3,&local_828,0);
  return -1;
}

