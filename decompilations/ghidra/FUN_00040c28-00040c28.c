
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00040c28(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_85c;
  char acStack_858 [64];
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined2 uStack_804;
  undefined local_802;
  
  local_85c = 0;
  iVar1 = pthread_mutex_lock(DAT_00040d8c);
  if (iVar1 == 0) {
    snprintf(acStack_858,0x40,"/sys/class/gpio/gpio%d/value",param_1);
    iVar1 = open64(acStack_858,0);
    if (iVar1 < 0) {
      snprintf((char *)&local_818,0x800,"Failed to open gpio %d value for reading!\n",param_1);
      uVar4 = 0xfffffffe;
      FUN_0002e584(0,&local_818,0);
      pthread_mutex_unlock(DAT_00040d8c);
    }
    else {
      sVar2 = read(iVar1,&local_85c,4);
      if (sVar2 < 0) {
        local_818._0_1_ = s_Failed_to_read_value__000691e0[0];
        local_818._1_1_ = s_Failed_to_read_value__000691e0[1];
        local_818._2_1_ = s_Failed_to_read_value__000691e0[2];
        local_818._3_1_ = s_Failed_to_read_value__000691e0[3];
        uStack_814._0_1_ = s_Failed_to_read_value__000691e0[4];
        uStack_814._1_1_ = s_Failed_to_read_value__000691e0[5];
        uStack_814._2_1_ = s_Failed_to_read_value__000691e0[6];
        uStack_814._3_1_ = s_Failed_to_read_value__000691e0[7];
        uStack_810._0_1_ = s_Failed_to_read_value__000691e0[8];
        uStack_810._1_1_ = s_Failed_to_read_value__000691e0[9];
        uStack_810._2_1_ = s_Failed_to_read_value__000691e0[10];
        uStack_810._3_1_ = s_Failed_to_read_value__000691e0[11];
        uStack_80c._0_1_ = s_Failed_to_read_value__000691e0[12];
        uStack_80c._1_1_ = s_Failed_to_read_value__000691e0[13];
        uStack_80c._2_1_ = s_Failed_to_read_value__000691e0[14];
        uStack_80c._3_1_ = s_Failed_to_read_value__000691e0[15];
        local_808._0_1_ = s_Failed_to_read_value__000691e0[16];
        local_808._1_1_ = s_Failed_to_read_value__000691e0[17];
        local_808._2_1_ = s_Failed_to_read_value__000691e0[18];
        local_808._3_1_ = s_Failed_to_read_value__000691e0[19];
        uStack_804 = (undefined2)ram0x000691f4;
        local_802 = (undefined)((uint)ram0x000691f4 >> 0x10);
        uVar4 = 0xfffffffd;
        FUN_0002e584(0,&local_818,0);
        close(iVar1);
        pthread_mutex_unlock(DAT_00040d8c);
      }
      else {
        close(iVar1);
        pthread_mutex_unlock(DAT_00040d8c);
        lVar3 = strtol((char *)&local_85c,(char **)0x0,10);
        *param_2 = (char)lVar3;
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0xffffffff;
    local_818._0_1_ = s_failed_to_api_lock_00068ffc[0];
    local_818._1_1_ = s_failed_to_api_lock_00068ffc[1];
    local_818._2_1_ = s_failed_to_api_lock_00068ffc[2];
    local_818._3_1_ = s_failed_to_api_lock_00068ffc[3];
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
    local_808._0_1_ = s_failed_to_api_lock_00068ffc[16];
    local_808._1_1_ = s_failed_to_api_lock_00068ffc[17];
    local_808._2_1_ = s_failed_to_api_lock_00068ffc[18];
    local_808._3_1_ = s_failed_to_api_lock_00068ffc[19];
    FUN_0002e584(0,&local_818,0);
  }
  return uVar4;
}

