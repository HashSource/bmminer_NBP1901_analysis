
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018ce8(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
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
  
  puVar2 = (uint *)FUN_00018c40(param_3);
  if (DAT_0007e298 == 2) {
    if ((param_2 & 7) == 0) {
      uVar8 = param_2 + 3;
      if (-1 < (int)param_2) {
        uVar8 = param_2;
      }
      iVar1 = (int)uVar8 >> 2;
      if (iVar1 < 2) {
        if (3 < DAT_0007eb9c) {
          local_828._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[0];
          local_828._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[1];
          local_828._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[2];
          local_828._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[3];
          uStack_824._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[4];
          uStack_824._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[5];
          uStack_824._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[6];
          uStack_824._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[7];
          uStack_820._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[8];
          uStack_820._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[9];
          uStack_820._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[10];
          uStack_820._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[11];
          uStack_81c._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[12];
          uStack_81c._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[13];
          uStack_81c._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[14];
          uStack_81c._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[15];
          local_818._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[16];
          local_818._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[17];
          local_818._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[18];
          local_818._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[19];
          uStack_814._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[20];
          uStack_814._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[21];
          uStack_814._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[22];
          uStack_814._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[23];
          uStack_810._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[24];
          uStack_810._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[25];
          uStack_810._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[26];
          uStack_810._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[27];
          uStack_80c._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[28];
          uStack_80c._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[29];
          uStack_80c._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[30];
          uStack_80c._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[31];
          local_808._0_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[32];
          local_808._1_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[33];
          local_808._2_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[34];
          local_808._3_1_ = s_XXTEA_encode_failes__N_<__1_foun_00061278[35];
          FUN_0002e584(3,&local_828,0);
          return;
        }
      }
      else {
        uVar8 = param_1[iVar1 + 0x3fffffff];
        iVar3 = FUN_0005faf8(0x34);
        uVar9 = 0;
        do {
          uVar10 = 0;
          uVar9 = uVar9 + 0x9e3779b9;
          puVar5 = param_1;
          do {
            uVar4 = puVar5[1];
            uVar7 = uVar9 >> 2 ^ uVar10;
            uVar10 = uVar10 + 1;
            uVar8 = ((puVar2[uVar7 & 3] ^ uVar8) + (uVar9 ^ uVar4) ^
                    (uVar4 << 2 ^ uVar8 >> 5) + (uVar8 << 4 ^ uVar4 >> 3)) + *puVar5;
            *puVar5 = uVar8;
            puVar5 = puVar5 + 1;
          } while (uVar10 != iVar1 - 1U);
          uVar10 = *param_1;
          uVar8 = ((uVar8 ^ puVar2[(uVar9 >> 2 ^ iVar1 - 1U) & 3]) + (uVar9 ^ uVar10) ^
                  (uVar10 << 2 ^ uVar8 >> 5) + (uVar8 * 0x10 ^ uVar10 >> 3)) +
                  param_1[iVar1 + 0x3fffffff];
          param_1[iVar1 + 0x3fffffff] = uVar8;
        } while (uVar9 != iVar3 * -0x61c88647 + 0xb54cda56U);
      }
      return;
    }
    if (DAT_0007eb9c < 4) {
      return;
    }
    local_808._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[0];
    local_808._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[1];
    local_808._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[2];
    local_808._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[3];
    uStack_804._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[4];
    uStack_804._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[5];
    uStack_804._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[6];
    uStack_804._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[7];
    uStack_800._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[8];
    uStack_800._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[9];
    uStack_800._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[10];
    uStack_800._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[11];
    uStack_7fc._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[12];
    uStack_7fc._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[13];
    uStack_7fc._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[14];
    uStack_7fc._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[15];
    local_7f8._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[16];
    local_7f8._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[17];
    local_7f8._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[18];
    local_7f8._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[19];
    uStack_7f4._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[20];
    uStack_7f4._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[21];
    uStack_7f4._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[22];
    uStack_7f4._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[23];
    uStack_7f0._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[24];
    uStack_7f0._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[25];
    uStack_7f0._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[26];
    uStack_7f0._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[27];
    uStack_7ec._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[28];
    uStack_7ec._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[29];
    uStack_7ec._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[30];
    uStack_7ec._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[31];
    local_7e8._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[32];
    local_7e8._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[33];
    local_7e8._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[34];
    local_7e8._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[35];
    uStack_7e4._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[36];
    uStack_7e4._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[37];
    uStack_7e4._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[38];
    uStack_7e4._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[39];
    uStack_7e0._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[40];
    uStack_7e0._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[41];
    uStack_7e0._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[42];
    uStack_7e0._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[43];
    uStack_7dc._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[44];
    uStack_7dc._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[45];
    uStack_7dc._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[46];
    uStack_7dc._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[47];
    local_7d8._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[48];
    local_7d8._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[49];
    local_7d8._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[50];
    local_7d8._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[51];
    uStack_7d4._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[52];
    uStack_7d4._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[53];
    uStack_7d4._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[54];
    uStack_7d4._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[55];
    uStack_7d0._0_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[56];
    uStack_7d0._1_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[57];
    uStack_7d0._2_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[58];
    uStack_7d0._3_1_ = s_XXTEA_requires_the_input_as_64_b_00061190[59];
    local_7cc = (undefined)ram0x000611cc;
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
  puVar5 = param_1;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = *puVar2 ^ *puVar5;
    puVar5 = puVar6;
  } while (puVar6 != param_1 + ((int)param_2 >> 2));
  return;
}

