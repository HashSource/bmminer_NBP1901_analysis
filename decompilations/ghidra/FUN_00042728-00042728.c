
/* WARNING: Removing unreachable block (ram,0x000425a4) */
/* WARNING: Removing unreachable block (ram,0x000425b0) */
/* WARNING: Removing unreachable block (ram,0x000425c4) */
/* WARNING: Removing unreachable block (ram,0x000425ec) */
/* WARNING: Removing unreachable block (ram,0x000425cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00042728(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined2 local_804;
  
  iVar1 = FUN_00042388(1);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    local_818._0_1_ = s_unsuported_gpio_port_000694ec[0];
    local_818._1_1_ = s_unsuported_gpio_port_000694ec[1];
    local_818._2_1_ = s_unsuported_gpio_port_000694ec[2];
    local_818._3_1_ = s_unsuported_gpio_port_000694ec[3];
    local_814._0_1_ = s_unsuported_gpio_port_000694ec[4];
    local_814._1_1_ = s_unsuported_gpio_port_000694ec[5];
    local_814._2_1_ = s_unsuported_gpio_port_000694ec[6];
    local_814._3_1_ = s_unsuported_gpio_port_000694ec[7];
    local_810._0_1_ = s_unsuported_gpio_port_000694ec[8];
    local_810._1_1_ = s_unsuported_gpio_port_000694ec[9];
    local_810._2_1_ = s_unsuported_gpio_port_000694ec[10];
    local_810._3_1_ = s_unsuported_gpio_port_000694ec[11];
    uStack_80c._0_1_ = s_unsuported_gpio_port_000694ec[12];
    uStack_80c._1_1_ = s_unsuported_gpio_port_000694ec[13];
    uStack_80c._2_1_ = s_unsuported_gpio_port_000694ec[14];
    uStack_80c._3_1_ = s_unsuported_gpio_port_000694ec[15];
    local_808._0_1_ = s_unsuported_gpio_port_000694ec[16];
    local_808._1_1_ = s_unsuported_gpio_port_000694ec[17];
    local_808._2_1_ = s_unsuported_gpio_port_000694ec[18];
    local_808._3_1_ = s_unsuported_gpio_port_000694ec[19];
    local_804 = (undefined2)ram0x00069500;
    FUN_0002e584(0,&local_818,0);
  }
  else {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00504fec);
    if (iVar2 == 0) {
      FUN_00042180(iVar1,DAT_00505004);
      uVar3 = FUN_00040ed4(iVar1,1);
      pthread_mutex_unlock(DAT_00042690);
    }
    else {
      uVar3 = 0xffffffff;
      local_818._0_1_ = s_failed_to_api_lock_00068ffc[0];
      local_818._1_1_ = s_failed_to_api_lock_00068ffc[1];
      local_818._2_1_ = s_failed_to_api_lock_00068ffc[2];
      local_818._3_1_ = s_failed_to_api_lock_00068ffc[3];
      local_814._0_1_ = s_failed_to_api_lock_00068ffc[4];
      local_814._1_1_ = s_failed_to_api_lock_00068ffc[5];
      local_814._2_1_ = s_failed_to_api_lock_00068ffc[6];
      local_814._3_1_ = s_failed_to_api_lock_00068ffc[7];
      local_810._0_1_ = s_failed_to_api_lock_00068ffc[8];
      local_810._1_1_ = s_failed_to_api_lock_00068ffc[9];
      local_810._2_1_ = s_failed_to_api_lock_00068ffc[10];
      local_810._3_1_ = s_failed_to_api_lock_00068ffc[11];
      uStack_80c._0_1_ = s_failed_to_api_lock_00068ffc[12];
      uStack_80c._1_1_ = s_failed_to_api_lock_00068ffc[13];
      uStack_80c._2_1_ = s_failed_to_api_lock_00068ffc[14];
      uStack_80c._3_1_ = s_failed_to_api_lock_00068ffc[15];
      local_808._0_1_ = s_failed_to_api_lock_00068ffc[16];
      local_808._1_1_ = s_failed_to_api_lock_00068ffc[17];
      local_808._2_1_ = s_failed_to_api_lock_00068ffc[18];
      local_808._3_1_ = s_failed_to_api_lock_00068ffc[19];
      FUN_0002e584(0,&local_818);
    }
  }
  return uVar3;
}

