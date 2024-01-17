
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018a14(void)

{
  int iVar1;
  uint __n;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined uStack_958;
  byte local_957;
  byte local_920;
  undefined auStack_910 [2];
  undefined auStack_90e [254];
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
  
  memset(auStack_910,0,0x100);
  __n = (uint)local_957;
  uVar3 = __n + 5 & 0xfffffff8;
  iVar4 = uVar3 + 2;
  if ((int)((((uint)local_920 - (0x39 - __n)) + 7 & 0xfffffff8) + (0x39 - __n) + iVar4) < 0x101) {
    memcpy(auStack_910,&uStack_958,__n);
    iVar2 = 0;
    FUN_00018e48(auStack_90e,uVar3,1);
    do {
      iVar1 = FUN_0001e29c(iVar2);
      if (iVar1 != 0) {
        FUN_00044200(iVar2,0,auStack_910,iVar4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    FUN_00017ef8();
    return;
  }
  if (DAT_0007eb9c < 4) {
    return;
  }
  local_810._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[0];
  local_810._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[1];
  local_810._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[2];
  local_810._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[3];
  uStack_80c._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[4];
  uStack_80c._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[5];
  uStack_80c._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[6];
  uStack_80c._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[7];
  uStack_808._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[8];
  uStack_808._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[9];
  uStack_808._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[10];
  uStack_808._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[11];
  uStack_804._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[12];
  uStack_804._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[13];
  uStack_804._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[14];
  uStack_804._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[15];
  local_800._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[16];
  local_800._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[17];
  local_800._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[18];
  local_800._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[19];
  uStack_7fc._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[20];
  uStack_7fc._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[21];
  uStack_7fc._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[22];
  uStack_7fc._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[23];
  uStack_7f8._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[24];
  uStack_7f8._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[25];
  uStack_7f8._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[26];
  uStack_7f8._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[27];
  uStack_7f4._0_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[28];
  uStack_7f4._1_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[29];
  uStack_7f4._2_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[30];
  uStack_7f4._3_1_ = s_EEPROM_does_not_have_enough_spac_0006116c[31];
  uStack_7f0 = (undefined2)ram0x0006118c;
  local_7ee = (undefined)((uint)ram0x0006118c >> 0x10);
  FUN_0002e584(3,&local_810,0);
  return;
}

