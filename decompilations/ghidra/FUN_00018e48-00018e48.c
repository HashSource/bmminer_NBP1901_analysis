
void FUN_00018e48(undefined4 param_1,uint param_2,int param_3)

{
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
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  
  if ((param_2 & 3) == 0) {
    if (param_3 == 0) {
      FUN_00018d98();
      return;
    }
    FUN_00018ce8(param_1,param_2,1);
    return;
  }
  if (DAT_0007eb9c < 4) {
    return;
  }
  local_808 = s_EEPROM_write_data_is_not_32_bit_a_00061240._0_4_;
  uStack_804 = s_EEPROM_write_data_is_not_32_bit_a_00061240._4_4_;
  uStack_800 = s_EEPROM_write_data_is_not_32_bit_a_00061240._8_4_;
  uStack_7fc = s_EEPROM_write_data_is_not_32_bit_a_00061240._12_4_;
  local_7f8 = s_EEPROM_write_data_is_not_32_bit_a_00061240._16_4_;
  uStack_7f4 = s_EEPROM_write_data_is_not_32_bit_a_00061240._20_4_;
  uStack_7f0 = s_EEPROM_write_data_is_not_32_bit_a_00061240._24_4_;
  uStack_7ec = s_EEPROM_write_data_is_not_32_bit_a_00061240._28_4_;
  local_7e8 = s_EEPROM_write_data_is_not_32_bit_a_00061240._32_4_;
  uStack_7e4 = s_EEPROM_write_data_is_not_32_bit_a_00061240._36_4_;
  uStack_7e0 = s_EEPROM_write_data_is_not_32_bit_a_00061240._40_4_;
  uStack_7dc = s_EEPROM_write_data_is_not_32_bit_a_00061240._44_4_;
  uStack_7d8 = s_EEPROM_write_data_is_not_32_bit_a_00061240._48_4_;
  uStack_7d4 = s_EEPROM_write_data_is_not_32_bit_a_00061240._52_4_;
  FUN_0002e584(3,&local_808,0);
  return;
}

