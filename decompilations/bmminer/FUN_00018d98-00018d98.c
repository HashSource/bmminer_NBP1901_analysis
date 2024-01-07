
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018d98(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined local_7cc;
  
  puVar3 = (uint *)FUN_00018c40(param_3);
  if (DAT_0007e298 == 2) {
    if ((param_2 & 7) == 0) {
      uVar6 = param_2 + 3;
      if (-1 < (int)param_2) {
        uVar6 = param_2;
      }
      iVar2 = (int)uVar6 >> 2;
      if (iVar2 < 2) {
        if (3 < DAT_0007eb9c) {
          local_828._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[0];
          local_828._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[1];
          local_828._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[2];
          local_828._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[3];
          uStack_824._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[4];
          uStack_824._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[5];
          uStack_824._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[6];
          uStack_824._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[7];
          uStack_820._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[8];
          uStack_820._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[9];
          uStack_820._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[10];
          uStack_820._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[11];
          uStack_81c._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[12];
          uStack_81c._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[13];
          uStack_81c._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[14];
          uStack_81c._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[15];
          local_818._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[16];
          local_818._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[17];
          local_818._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[18];
          local_818._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[19];
          uStack_814._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[20];
          uStack_814._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[21];
          uStack_814._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[22];
          uStack_814._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[23];
          uStack_810._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[24];
          uStack_810._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[25];
          uStack_810._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[26];
          uStack_810._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[27];
          uStack_80c._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[28];
          uStack_80c._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[29];
          uStack_80c._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[30];
          uStack_80c._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[31];
          local_808._0_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[32];
          local_808._1_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[33];
          local_808._2_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[34];
          local_808._3_1_ = s_XXTEA_decode_failes__N_<__1_foun_0006129c[35];
          FUN_0002e584(3,&local_828,0);
          return;
        }
      }
      else {
        iVar4 = FUN_0005faf8(0x34);
        uVar6 = (iVar4 + 6) * -0x61c88647;
        uVar9 = *param_1;
        iVar4 = iVar4 * 0x61c88647 + uVar6;
        do {
          uVar1 = uVar6 >> 2;
          uVar10 = iVar2 - 1;
          puVar7 = param_1 + iVar2 + 0x3fffffff;
          do {
            uVar5 = puVar7[-1];
            uVar11 = uVar1 ^ uVar10;
            uVar10 = uVar10 - 1;
            uVar9 = *puVar7 - ((uVar5 ^ puVar3[uVar11 & 3]) + (uVar6 ^ uVar9) ^
                              (uVar9 << 2 ^ uVar5 >> 5) + (uVar5 << 4 ^ uVar9 >> 3));
            *puVar7 = uVar9;
            puVar7 = puVar7 + -1;
          } while (uVar10 != 0);
          uVar10 = param_1[iVar2 + 0x3fffffff];
          uVar5 = uVar9 ^ uVar6;
          uVar6 = uVar6 + 0x61c88647;
          uVar9 = *param_1 -
                  ((uVar9 * 4 ^ uVar10 >> 5) + (uVar10 << 4 ^ uVar9 >> 3) ^
                  (uVar10 ^ puVar3[uVar1 & 3]) + uVar5);
          *param_1 = uVar9;
        } while (uVar6 != iVar4 + 0x4ab325aaU);
      }
      return;
    }
    if (DAT_0007eb9c < 4) {
      return;
    }
    local_808._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[0];
    local_808._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[1];
    local_808._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[2];
    local_808._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[3];
    uStack_804._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[4];
    uStack_804._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[5];
    uStack_804._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[6];
    uStack_804._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[7];
    uStack_800._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[8];
    uStack_800._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[9];
    uStack_800._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[10];
    uStack_800._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[11];
    uStack_7fc._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[12];
    uStack_7fc._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[13];
    uStack_7fc._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[14];
    uStack_7fc._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[15];
    local_7f8._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[16];
    local_7f8._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[17];
    local_7f8._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[18];
    local_7f8._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[19];
    uStack_7f4._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[20];
    uStack_7f4._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[21];
    uStack_7f4._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[22];
    uStack_7f4._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[23];
    uStack_7f0._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[24];
    uStack_7f0._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[25];
    uStack_7f0._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[26];
    uStack_7f0._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[27];
    uStack_7ec._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[28];
    uStack_7ec._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[29];
    uStack_7ec._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[30];
    uStack_7ec._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[31];
    local_7e8._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[32];
    local_7e8._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[33];
    local_7e8._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[34];
    local_7e8._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[35];
    uStack_7e4._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[36];
    uStack_7e4._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[37];
    uStack_7e4._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[38];
    uStack_7e4._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[39];
    uStack_7e0._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[40];
    uStack_7e0._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[41];
    uStack_7e0._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[42];
    uStack_7e0._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[43];
    uStack_7dc._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[44];
    uStack_7dc._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[45];
    uStack_7dc._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[46];
    uStack_7dc._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[47];
    local_7d8._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[48];
    local_7d8._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[49];
    local_7d8._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[50];
    local_7d8._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[51];
    uStack_7d4._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[52];
    uStack_7d4._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[53];
    uStack_7d4._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[54];
    uStack_7d4._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[55];
    uStack_7d0._0_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[56];
    uStack_7d0._1_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[57];
    uStack_7d0._2_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[58];
    uStack_7d0._3_1_ = s_XXTEA_requires_the_input_as_64_b_000611d0[59];
    local_7cc = (undefined)ram0x0006120c;
    FUN_0002e584(3,&local_808,0);
    return;
  }
  if (DAT_0007e298 != 3) {
    return;
  }
  if ((int)param_2 < 0) {
    param_2 = param_2 + 3;
  }
  if ((int)param_2 >> 2 < 1) {
    return;
  }
  puVar7 = param_1;
  do {
    puVar8 = puVar7 + 1;
    *puVar7 = *puVar3 ^ *puVar7;
    puVar7 = puVar8;
  } while (puVar8 != param_1 + ((int)param_2 >> 2));
  return;
}

