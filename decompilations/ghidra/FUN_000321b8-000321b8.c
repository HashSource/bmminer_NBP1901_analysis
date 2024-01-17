
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000321b8(int param_1,int param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined2 uStack_7f0;
  undefined local_7ee;
  
  if (((param_1 == 0) || (iVar1 = FUN_0001e160(), iVar1 == 0)) ||
     (iVar1 = FUN_0001e120(), iVar1 == 0)) {
    if (3 < DAT_0007eb9c) {
      local_820._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[0];
      local_820._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[1];
      local_820._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[2];
      local_820._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[3];
      uStack_81c._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[4];
      uStack_81c._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[5];
      uStack_81c._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[6];
      uStack_81c._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[7];
      uStack_818._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[8];
      uStack_818._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[9];
      uStack_818._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[10];
      uStack_818._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[11];
      uStack_814._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[12];
      uStack_814._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[13];
      uStack_814._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[14];
      uStack_814._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[15];
      local_810._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[16];
      local_810._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[17];
      local_810._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[18];
      local_810._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[19];
      uStack_80c._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[20];
      uStack_80c._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[21];
      uStack_80c._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[22];
      uStack_80c._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[23];
      uStack_808._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[24];
      uStack_808._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[25];
      uStack_808._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[26];
      uStack_808._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[27];
      uStack_804._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[28];
      uStack_804._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[29];
      uStack_804._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[30];
      uStack_804._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[31];
      local_800._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[32];
      local_800._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[33];
      local_800._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[34];
      local_800._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[35];
      uStack_7fc._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[36];
      uStack_7fc._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[37];
      uStack_7fc._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[38];
      uStack_7fc._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[39];
      uStack_7f8._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[40];
      uStack_7f8._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[41];
      uStack_7f8._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[42];
      uStack_7f8._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[43];
      uStack_7f4._0_1_ = s_Note__addrInterval_or_corenum_is_0006690c[44];
      uStack_7f4._1_1_ = s_Note__addrInterval_or_corenum_is_0006690c[45];
      uStack_7f4._2_1_ = s_Note__addrInterval_or_corenum_is_0006690c[46];
      uStack_7f4._3_1_ = s_Note__addrInterval_or_corenum_is_0006690c[47];
      uStack_7f0 = (undefined2)ram0x0006693c;
      local_7ee = (undefined)((uint)ram0x0006693c >> 0x10);
      FUN_0002e584(3,&local_820,0);
    }
    DAT_0099eddc = 0x1ffff;
    return;
  }
  iVar1 = FUN_0001e160();
  uVar2 = FUN_0001e130();
  if (uVar2 != 0) {
    iVar1 = iVar1 << 0x18;
    if (uVar2 != 1) {
      uVar4 = 1;
      do {
        uVar4 = uVar4 * 2;
      } while (uVar4 < uVar2);
      iVar1 = FUN_0005faf8();
    }
    iVar1 = param_3 * iVar1 * param_2;
    iVar3 = FUN_0005faf8(iVar1 / 100,param_1,iVar1 * 0x51eb851f);
    DAT_0099eddc = iVar3;
    iVar1 = FUN_0001e160();
    uVar2 = FUN_0001e130();
    if (uVar2 != 0) {
      iVar1 = iVar1 << 0x18;
      if (uVar2 != 1) {
        uVar4 = 1;
        do {
          uVar4 = uVar4 * 2;
        } while (uVar4 < uVar2);
        iVar1 = FUN_0005faf8(iVar1);
      }
      if ((((byte)DAT_0099edbc & 4) != 0) && (DAT_0099edc8._2_2_ != 0)) {
        DAT_0099eddc = (uint)DAT_0099edc8._2_1_ * 1000 + (uint)DAT_0099edc8._3_1_;
      }
      FUN_00044c84(iVar3);
      if (DAT_0007eb9c < 4) {
        return;
      }
      iVar1 = FUN_0005faf8(iVar1 * 0x19,param_1);
      snprintf((char *)&local_820,0x800,"freq = %d, percent = %d, hcn = %d, timeout = %d\n",param_1,
               param_3,param_2 * iVar1,iVar3);
      FUN_0002e584(3,&local_820,0);
      return;
    }
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)software_udf(0,0x323a0);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

