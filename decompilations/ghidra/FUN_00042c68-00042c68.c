
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00042c68(char *param_1)

{
  int iVar1;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  
  if (DAT_00505028 == 0) {
    if (param_1 == (char *)0x0) {
      local_810 = s_bad_param_00068fa4._0_4_;
      uStack_80c = s_bad_param_00068fa4._4_4_;
      FUN_0002e584(0,&local_810,0);
      iVar1 = -3;
    }
    else {
      iVar1 = open64(param_1,0x802);
      DAT_0050502c = iVar1;
      if (iVar1 < 0) {
        local_810._0_1_ = s_open_lcd_failed____00069568[0];
        local_810._1_1_ = s_open_lcd_failed____00069568[1];
        local_810._2_1_ = s_open_lcd_failed____00069568[2];
        local_810._3_1_ = s_open_lcd_failed____00069568[3];
        uStack_80c._0_1_ = s_open_lcd_failed____00069568[4];
        uStack_80c._1_1_ = s_open_lcd_failed____00069568[5];
        uStack_80c._2_1_ = s_open_lcd_failed____00069568[6];
        uStack_80c._3_1_ = s_open_lcd_failed____00069568[7];
        uStack_808._0_1_ = s_open_lcd_failed____00069568[8];
        uStack_808._1_1_ = s_open_lcd_failed____00069568[9];
        uStack_808._2_1_ = s_open_lcd_failed____00069568[10];
        uStack_808._3_1_ = s_open_lcd_failed____00069568[11];
        uStack_804._0_1_ = s_open_lcd_failed____00069568[12];
        uStack_804._1_1_ = s_open_lcd_failed____00069568[13];
        uStack_804._2_1_ = s_open_lcd_failed____00069568[14];
        uStack_804._3_1_ = s_open_lcd_failed____00069568[15];
        local_800._0_1_ = s_open_lcd_failed____00069568[16];
        local_800._1_1_ = s_open_lcd_failed____00069568[17];
        local_800._2_1_ = s_open_lcd_failed____00069568[18];
        local_800._3_1_ = s_open_lcd_failed____00069568[19];
        FUN_0002e584(0,&local_810,0);
        iVar1 = -1;
      }
      else {
        DAT_00505028 = 1;
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

