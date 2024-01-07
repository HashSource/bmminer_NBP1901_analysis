
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00042d2c(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *__src;
  uint uVar3;
  size_t __n;
  bool bVar4;
  bool bVar5;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  
  if (DAT_00505028 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    if (DAT_0050502c == param_1) {
      bVar5 = 0x3f < param_4;
      bVar4 = param_4 == 0x40;
      if (param_4 < 0x41) {
        bVar5 = 2 < (param_2 & 0xff);
        bVar4 = (param_2 & 0xff) == 3;
      }
      if (!bVar5 || bVar4) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00505030);
        if (iVar1 == 0) {
          iVar1 = 0;
          do {
            uVar3 = param_2 + 1;
            __n = param_4;
            if (0xf < param_4) {
              __n = 0x10;
            }
            __src = (void *)(param_3 + iVar1);
            iVar1 = iVar1 + __n;
            memcpy(&DAT_00505048 + param_2 * 0x10,__src,__n);
            param_4 = param_4 - __n;
            param_2 = (uint)(char)uVar3;
          } while ((uVar3 & 0xff) < 4 && param_4 != 0);
          write(DAT_0050502c,DAT_00042e78,0x40);
          pthread_mutex_unlock(DAT_00042e7c);
          return 0;
        }
        local_828._0_1_ = s_failed_to_lcd_lock_0006957c[0];
        local_828._1_1_ = s_failed_to_lcd_lock_0006957c[1];
        local_828._2_1_ = s_failed_to_lcd_lock_0006957c[2];
        local_828._3_1_ = s_failed_to_lcd_lock_0006957c[3];
        uStack_824._0_1_ = s_failed_to_lcd_lock_0006957c[4];
        uStack_824._1_1_ = s_failed_to_lcd_lock_0006957c[5];
        uStack_824._2_1_ = s_failed_to_lcd_lock_0006957c[6];
        uStack_824._3_1_ = s_failed_to_lcd_lock_0006957c[7];
        uStack_820._0_1_ = s_failed_to_lcd_lock_0006957c[8];
        uStack_820._1_1_ = s_failed_to_lcd_lock_0006957c[9];
        uStack_820._2_1_ = s_failed_to_lcd_lock_0006957c[10];
        uStack_820._3_1_ = s_failed_to_lcd_lock_0006957c[11];
        uStack_81c._0_1_ = s_failed_to_lcd_lock_0006957c[12];
        uStack_81c._1_1_ = s_failed_to_lcd_lock_0006957c[13];
        uStack_81c._2_1_ = s_failed_to_lcd_lock_0006957c[14];
        uStack_81c._3_1_ = s_failed_to_lcd_lock_0006957c[15];
        local_818._0_1_ = s_failed_to_lcd_lock_0006957c[16];
        local_818._1_1_ = s_failed_to_lcd_lock_0006957c[17];
        local_818._2_1_ = s_failed_to_lcd_lock_0006957c[18];
        local_818._3_1_ = s_failed_to_lcd_lock_0006957c[19];
        FUN_0002e584(0,&local_828,0);
        return 0xfffffffc;
      }
    }
    local_828 = s_bad_param_00068fa4._0_4_;
    uStack_824 = s_bad_param_00068fa4._4_4_;
    FUN_0002e584(1,&local_828,0);
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

