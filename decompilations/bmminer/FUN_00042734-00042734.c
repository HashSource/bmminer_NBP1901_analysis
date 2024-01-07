
/* WARNING: Removing unreachable block (ram,0x00042568) */
/* WARNING: Removing unreachable block (ram,0x00042570) */
/* WARNING: Removing unreachable block (ram,0x000425a4) */
/* WARNING: Removing unreachable block (ram,0x000425b0) */
/* WARNING: Removing unreachable block (ram,0x000425c4) */
/* WARNING: Removing unreachable block (ram,0x000425ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00042734(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined2 uStack_804;
  
  iVar1 = FUN_00042388(1);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    uStack_818._0_1_ = s_unsuported_gpio_port_000694ec[0];
    uStack_818._1_1_ = s_unsuported_gpio_port_000694ec[1];
    uStack_818._2_1_ = s_unsuported_gpio_port_000694ec[2];
    uStack_818._3_1_ = s_unsuported_gpio_port_000694ec[3];
    uStack_814._0_1_ = s_unsuported_gpio_port_000694ec[4];
    uStack_814._1_1_ = s_unsuported_gpio_port_000694ec[5];
    uStack_814._2_1_ = s_unsuported_gpio_port_000694ec[6];
    uStack_814._3_1_ = s_unsuported_gpio_port_000694ec[7];
    uStack_810._0_1_ = s_unsuported_gpio_port_000694ec[8];
    uStack_810._1_1_ = s_unsuported_gpio_port_000694ec[9];
    uStack_810._2_1_ = s_unsuported_gpio_port_000694ec[10];
    uStack_810._3_1_ = s_unsuported_gpio_port_000694ec[11];
    uStack_80c._0_1_ = s_unsuported_gpio_port_000694ec[12];
    uStack_80c._1_1_ = s_unsuported_gpio_port_000694ec[13];
    uStack_80c._2_1_ = s_unsuported_gpio_port_000694ec[14];
    uStack_80c._3_1_ = s_unsuported_gpio_port_000694ec[15];
    uStack_808._0_1_ = s_unsuported_gpio_port_000694ec[16];
    uStack_808._1_1_ = s_unsuported_gpio_port_000694ec[17];
    uStack_808._2_1_ = s_unsuported_gpio_port_000694ec[18];
    uStack_808._3_1_ = s_unsuported_gpio_port_000694ec[19];
    uStack_804 = (undefined2)ram0x00069500;
    FUN_0002e584(0,&uStack_818,0);
  }
  else {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00504fec);
    if (iVar2 == 0) {
      FUN_00042180(iVar1,DAT_00505004);
      uVar3 = FUN_00040ed4(iVar1,0);
      pthread_mutex_unlock(DAT_00042690);
    }
    else {
      uVar3 = 0xffffffff;
      uStack_818._0_1_ = s_failed_to_api_lock_00068ffc[0];
      uStack_818._1_1_ = s_failed_to_api_lock_00068ffc[1];
      uStack_818._2_1_ = s_failed_to_api_lock_00068ffc[2];
      uStack_818._3_1_ = s_failed_to_api_lock_00068ffc[3];
      uStack_814._0_1_ = s_failed_to_api_lock_00068ffc[4];
      uStack_814._1_1_ = s_failed_to_api_lock_00068ffc[5];
      uStack_814._2_1_ = s_failed_to_api_lock_00068ffc[6];
      uStack_814._3_1_ = s_failed_to_api_lock_00068ffc[7];
      uStack_810._0_1_ = s_failed_to_api_lock_00068ffc[8];
      uStack_810._1_1_ = s_failed_to_api_lock_00068ffc[9];
      uStack_810._2_1_ = s_failed_to_api_lock_00068ffc[10];
      uStack_810._3_1_ = s_failed_to_api_lock_00068ffc[11];
      uStack_80c._0_1_ = s_failed_to_api_lock_00068ffc[12];
      uStack_80c._1_1_ = s_failed_to_api_lock_00068ffc[13];
      uStack_80c._2_1_ = s_failed_to_api_lock_00068ffc[14];
      uStack_80c._3_1_ = s_failed_to_api_lock_00068ffc[15];
      uStack_808._0_1_ = s_failed_to_api_lock_00068ffc[16];
      uStack_808._1_1_ = s_failed_to_api_lock_00068ffc[17];
      uStack_808._2_1_ = s_failed_to_api_lock_00068ffc[18];
      uStack_808._3_1_ = s_failed_to_api_lock_00068ffc[19];
      FUN_0002e584(0,&uStack_818);
    }
  }
  return uVar3;
}

