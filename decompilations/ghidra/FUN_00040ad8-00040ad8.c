
undefined4 FUN_00040ad8(undefined4 param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  char *__n;
  undefined *__buf;
  char acStack_858 [64];
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  
  iVar1 = pthread_mutex_lock(DAT_00040c24);
  if (iVar1 == 0) {
    __n = "/sys/class/gpio/gpio%d/direction";
    snprintf(acStack_858,0x40,"/sys/class/gpio/gpio%d/direction",param_1);
    iVar1 = open64(acStack_858,1);
    if (iVar1 < 0) {
      snprintf((char *)&local_818,0x800,"Failed to open gpio %d direction for writing!\n",param_1);
      FUN_0002e584(0,&local_818,0);
      pthread_mutex_unlock(DAT_00040c24);
      uVar3 = 0xfffffffe;
    }
    else {
      __buf = &DAT_00068f98;
      if (param_2 == 0) {
        __n = (char *)0x2;
      }
      if (param_2 != 0) {
        __n = (char *)0x3;
        __buf = &UNK_00068f9b;
      }
      sVar2 = write(iVar1,__buf,(size_t)__n);
      if (sVar2 < 0) {
        snprintf((char *)&local_818,0x800,"Failed to set gpio %d direction %s !\n",param_1,__buf);
        FUN_0002e584(0,&local_818,0);
        close(iVar1);
        pthread_mutex_unlock(DAT_00040c24);
        uVar3 = 0xfffffffd;
      }
      else {
        close(iVar1);
        pthread_mutex_unlock(DAT_00040c24);
        uVar3 = 0;
      }
    }
  }
  else {
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
    FUN_0002e584(0,&local_818);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

