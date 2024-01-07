
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000294b8(undefined4 param_1)

{
  void *__ptr;
  double in_d0;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined2 uStack_814;
  undefined local_812;
  
  if (in_d0 == 0.0) {
    if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
      local_850 = 0;
      local_848 = 0;
      local_840 = 0;
      uVar3 = 0xffff0000;
    }
    else {
      uVar3 = 0xffff0000;
      local_830 = s_Diff_zero_passed_to_set_target_00063934._0_4_;
      uStack_82c = s_Diff_zero_passed_to_set_target_00063934._4_4_;
      uStack_828 = s_Diff_zero_passed_to_set_target_00063934._8_4_;
      uStack_824 = s_Diff_zero_passed_to_set_target_00063934._12_4_;
      local_820 = s_Diff_zero_passed_to_set_target_00063934._16_4_;
      uStack_81c = s_Diff_zero_passed_to_set_target_00063934._20_4_;
      uStack_818 = s_Diff_zero_passed_to_set_target_00063934._24_4_;
      uStack_814 = (undefined2)ram0x00063950;
      local_812 = (undefined)((uint)ram0x00063950 >> 0x10);
      FUN_0002e584(3,&local_830,0);
      local_850 = 0;
      local_848 = 0;
      local_840 = 0;
    }
  }
  else {
    dVar2 = DAT_00029710 / in_d0;
    dVar1 = dVar2 * DAT_00029718;
    uVar3 = FUN_00060180(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_000600b4();
    dVar2 = dVar2 - dVar1 * DAT_00029720;
    dVar1 = dVar2 * DAT_00029728;
    local_840 = FUN_00060180(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_000600b4();
    dVar2 = dVar2 - dVar1 * DAT_00029730;
    dVar1 = dVar2 * DAT_00029738;
    local_848 = FUN_00060180(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)FUN_000600b4();
    dVar2 = dVar2 - dVar1 * DAT_00029740;
    local_850 = FUN_00060180(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  }
  local_838 = uVar3;
  if (DAT_00482a5d != '\0') {
    __ptr = (void *)FUN_0002f670(&local_850,0x20);
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      snprintf((char *)&local_830,0x800,"Generated target %s",__ptr);
      FUN_0002e584(7,&local_830,0);
    }
    free(__ptr);
  }
  FUN_00030ea8(param_1,&local_850,0x20,"bmminer.c",DAT_00029748,0x464);
  return;
}

