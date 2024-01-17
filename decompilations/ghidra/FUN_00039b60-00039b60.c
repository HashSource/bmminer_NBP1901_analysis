
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00039b60(float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined local_820;
  
  iVar1 = FUN_000391f4();
  if (4 < DAT_0007eb9c) {
    snprintf((char *)&local_830,0x800,
             "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n"
             ,param_4,(double)param_1,(double)param_2,(double)param_3);
    FUN_0002e584(4,&local_830,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      local_830._0_1_ = s_Handle_is_NULL__00067bc8[0];
      local_830._1_1_ = s_Handle_is_NULL__00067bc8[1];
      local_830._2_1_ = s_Handle_is_NULL__00067bc8[2];
      local_830._3_1_ = s_Handle_is_NULL__00067bc8[3];
      uStack_82c._0_1_ = s_Handle_is_NULL__00067bc8[4];
      uStack_82c._1_1_ = s_Handle_is_NULL__00067bc8[5];
      uStack_82c._2_1_ = s_Handle_is_NULL__00067bc8[6];
      uStack_82c._3_1_ = s_Handle_is_NULL__00067bc8[7];
      uStack_828._0_1_ = s_Handle_is_NULL__00067bc8[8];
      uStack_828._1_1_ = s_Handle_is_NULL__00067bc8[9];
      uStack_828._2_1_ = s_Handle_is_NULL__00067bc8[10];
      uStack_828._3_1_ = s_Handle_is_NULL__00067bc8[11];
      uStack_824._0_1_ = s_Handle_is_NULL__00067bc8[12];
      uStack_824._1_1_ = s_Handle_is_NULL__00067bc8[13];
      uStack_824._2_1_ = s_Handle_is_NULL__00067bc8[14];
      uStack_824._3_1_ = s_Handle_is_NULL__00067bc8[15];
      local_820 = (undefined)ram0x00067bd8;
      FUN_0002e584(3,&local_830,0);
      return 1;
    }
  }
  else {
    iVar2 = FUN_0001e130();
    iVar3 = FUN_0001e0f0();
    iVar1 = iVar1 + param_4 * 4;
    param_1 = (float)(longlong)(iVar3 * iVar2 * 8) * param_1;
    uVar6 = (uint)(0.0 < param_1) * (int)param_1;
    if (*(uint *)(&DAT_0080a850 + iVar1) <= uVar6) {
      uVar7 = *(uint *)(&DAT_0080a000 + iVar1);
      iVar1 = FUN_0001e130();
      iVar2 = FUN_0001e0f0();
      uVar6 = DAT_0007eb9c;
      iVar3 = DAT_004fcb3c + param_4 * 4;
      fVar4 = *(float *)(iVar3 + 0x20);
      fVar5 = (float)(ulonglong)uVar7 / (float)(longlong)(iVar2 * iVar1 * 8);
      *(float *)(iVar3 + 0x20) = fVar5;
      if (*(float *)(iVar3 + 0x30) < fVar5) {
        *(float *)(iVar3 + 0x30) = fVar5;
      }
      if (3 < uVar6) {
        snprintf((char *)&local_830,0x800,
                 "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n"
                 ,param_4,(double)fVar5,(double)fVar4,(double)*(float *)(iVar3 + 0x30));
        FUN_0002e584(3,&local_830,0);
        return 0;
      }
      return 0;
    }
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_830,0x800,"chain = %d, hw = %d, hw_threshold = %d, too much hw.\n",
               param_4,*(uint *)(&DAT_0080a850 + iVar1),uVar6);
      FUN_0002e584(3,&local_830,0);
    }
  }
  return 1;
}

