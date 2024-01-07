
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00014454(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  byte local_821;
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
  undefined local_7f4;
  
  if (DAT_0007f7b0 == 0) {
    if (3 < DAT_0007eb9c) {
      local_820 = s_can_not_read_temp_by_asic_before_00060510._0_4_;
      uStack_81c = s_can_not_read_temp_by_asic_before_00060510._4_4_;
      uStack_818 = s_can_not_read_temp_by_asic_before_00060510._8_4_;
      uStack_814 = s_can_not_read_temp_by_asic_before_00060510._12_4_;
      local_810 = s_can_not_read_temp_by_asic_before_00060510._16_4_;
      uStack_80c = s_can_not_read_temp_by_asic_before_00060510._20_4_;
      uStack_808 = s_can_not_read_temp_by_asic_before_00060510._24_4_;
      uStack_804 = s_can_not_read_temp_by_asic_before_00060510._28_4_;
      local_800 = s_can_not_read_temp_by_asic_before_00060510._32_4_;
      uStack_7fc = s_can_not_read_temp_by_asic_before_00060510._36_4_;
      uStack_7f8 = s_can_not_read_temp_by_asic_before_00060510._40_4_;
      local_7f4 = (undefined)ram0x0006053c;
      FUN_0002e584(3,&local_820,0);
      return 0xff;
    }
  }
  else {
    iVar1 = FUN_0001e29c();
    if (iVar1 == 0) {
      if (4 < DAT_0007eb9c) {
        snprintf((char *)&local_820,0x800,"%s chain %d not pluged","read_sensor_on_asic",param_1);
        FUN_0002e584(4,&local_820,0);
        return 0xff;
      }
    }
    else {
      uVar2 = FUN_0001e170();
      if (uVar2 == 0) {
        if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_820,0x800,"%s chain %d ,index %d not connected",
                   "read_sensor_on_asic",param_1,param_2);
          FUN_0002e584(3,&local_820,0);
          return 0xff;
        }
      }
      else {
        iVar1 = FUN_00014434();
        if ((param_2 < iVar1) && (param_3 < 2)) {
          local_821 = 0xff;
          if (param_4 == 0) {
            uVar2 = (uint)(byte)(&UNK_000604a1)[param_3 * 0x10];
          }
          if (param_4 != 0) {
            uVar2 = (uint)(byte)(&UNK_000604a2)[param_3 * 0x10];
          }
          iVar1 = FUN_000142bc(param_1,(int)(short)*(undefined4 *)(DAT_0007f7b4 + param_2 * 4) *
                                       (int)(short)DAT_0007f7b0 & 0xff,uVar2,0,&local_821);
          if (iVar1 != 0) {
            return local_821 - 0x40;
          }
          if (3 < DAT_0007eb9c) {
            iVar1 = *(int *)(DAT_0007f7b4 + param_2 * 4);
            snprintf((char *)&local_820,0x800,
                     "read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n"
                     ,param_1,iVar1,DAT_0007f7b0 * iVar1,uVar2);
            FUN_0002e584(3,&local_820,0);
          }
        }
        else if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_820,0x800,
                   "%s invalid param. index = %d, type = %d, model = %d on chain %d",
                   "read_sensor_on_asic",param_2,param_4,param_3,param_1);
          FUN_0002e584(3,&local_820,0);
          return 0xff;
        }
      }
    }
  }
  return 0xff;
}

