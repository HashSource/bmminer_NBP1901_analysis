
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00018c40(int param_1)

{
  int iVar1;
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
  undefined2 uStack_7dc;
  undefined local_7da;
  
  if ((param_1 == 3) && (3 < DAT_0007eb9c)) {
    local_808 = s_enc_dec_undefined_data_type__use_00061210._0_4_;
    uStack_804 = s_enc_dec_undefined_data_type__use_00061210._4_4_;
    uStack_800 = s_enc_dec_undefined_data_type__use_00061210._8_4_;
    uStack_7fc = s_enc_dec_undefined_data_type__use_00061210._12_4_;
    local_7f8 = s_enc_dec_undefined_data_type__use_00061210._16_4_;
    uStack_7f4 = s_enc_dec_undefined_data_type__use_00061210._20_4_;
    uStack_7f0 = s_enc_dec_undefined_data_type__use_00061210._24_4_;
    uStack_7ec = s_enc_dec_undefined_data_type__use_00061210._28_4_;
    local_7e8 = s_enc_dec_undefined_data_type__use_00061210._32_4_;
    uStack_7e4 = s_enc_dec_undefined_data_type__use_00061210._36_4_;
    uStack_7e0 = s_enc_dec_undefined_data_type__use_00061210._40_4_;
    uStack_7dc = (undefined2)ram0x0006123c;
    local_7da = (undefined)((uint)ram0x0006123c >> 0x10);
    FUN_0002e584(3,&local_808,0);
  }
  if (DAT_0007e298 == 2) {
    return param_1 * 0x10 + 0x7e2ac;
  }
  if (DAT_0007e298 == 3) {
    iVar1 = param_1 * 4 + 0x7e29c;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

