
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00042e88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int __whence;
  uint in_stack_fffff7ec;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  
  if (DAT_00505028 == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (DAT_0050502c == param_1) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00505030);
    if (iVar1 == 0) {
      memset(&DAT_00505048,0x20,0x40);
      iVar1 = DAT_0050502c;
      lseek64(DAT_0050502c,(ulonglong)in_stack_fffff7ec << 0x20,__whence);
      write(iVar1,&DAT_00505048,0x40);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505030);
      uVar2 = 0;
    }
    else {
      local_810._0_1_ = s_failed_to_lcd_lock_0006957c[0];
      local_810._1_1_ = s_failed_to_lcd_lock_0006957c[1];
      local_810._2_1_ = s_failed_to_lcd_lock_0006957c[2];
      local_810._3_1_ = s_failed_to_lcd_lock_0006957c[3];
      uStack_80c._0_1_ = s_failed_to_lcd_lock_0006957c[4];
      uStack_80c._1_1_ = s_failed_to_lcd_lock_0006957c[5];
      uStack_80c._2_1_ = s_failed_to_lcd_lock_0006957c[6];
      uStack_80c._3_1_ = s_failed_to_lcd_lock_0006957c[7];
      uStack_808._0_1_ = s_failed_to_lcd_lock_0006957c[8];
      uStack_808._1_1_ = s_failed_to_lcd_lock_0006957c[9];
      uStack_808._2_1_ = s_failed_to_lcd_lock_0006957c[10];
      uStack_808._3_1_ = s_failed_to_lcd_lock_0006957c[11];
      uStack_804._0_1_ = s_failed_to_lcd_lock_0006957c[12];
      uStack_804._1_1_ = s_failed_to_lcd_lock_0006957c[13];
      uStack_804._2_1_ = s_failed_to_lcd_lock_0006957c[14];
      uStack_804._3_1_ = s_failed_to_lcd_lock_0006957c[15];
      local_800._0_1_ = s_failed_to_lcd_lock_0006957c[16];
      local_800._1_1_ = s_failed_to_lcd_lock_0006957c[17];
      local_800._2_1_ = s_failed_to_lcd_lock_0006957c[18];
      local_800._3_1_ = s_failed_to_lcd_lock_0006957c[19];
      FUN_0002e584(0,&local_810);
      uVar2 = 0xfffffffc;
    }
  }
  else {
    local_810 = s_bad_param_00068fa4._0_4_;
    uStack_80c = s_bad_param_00068fa4._4_4_;
    FUN_0002e584(1,&local_810,0);
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

