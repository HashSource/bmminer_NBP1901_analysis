
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00042f88(int param_1)

{
  int iVar1;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined local_7f4;
  
  if (DAT_00505028 != 0) {
    iVar1 = close(param_1);
    if (iVar1 != 0) {
      local_808._0_1_ = s_lcd_close_failed____00069590[0];
      local_808._1_1_ = s_lcd_close_failed____00069590[1];
      local_808._2_1_ = s_lcd_close_failed____00069590[2];
      local_808._3_1_ = s_lcd_close_failed____00069590[3];
      uStack_804._0_1_ = s_lcd_close_failed____00069590[4];
      uStack_804._1_1_ = s_lcd_close_failed____00069590[5];
      uStack_804._2_1_ = s_lcd_close_failed____00069590[6];
      uStack_804._3_1_ = s_lcd_close_failed____00069590[7];
      uStack_800._0_1_ = s_lcd_close_failed____00069590[8];
      uStack_800._1_1_ = s_lcd_close_failed____00069590[9];
      uStack_800._2_1_ = s_lcd_close_failed____00069590[10];
      uStack_800._3_1_ = s_lcd_close_failed____00069590[11];
      uStack_7fc._0_1_ = s_lcd_close_failed____00069590[12];
      uStack_7fc._1_1_ = s_lcd_close_failed____00069590[13];
      uStack_7fc._2_1_ = s_lcd_close_failed____00069590[14];
      uStack_7fc._3_1_ = s_lcd_close_failed____00069590[15];
      uStack_7f8._0_1_ = s_lcd_close_failed____00069590[16];
      uStack_7f8._1_1_ = s_lcd_close_failed____00069590[17];
      uStack_7f8._2_1_ = s_lcd_close_failed____00069590[18];
      uStack_7f8._3_1_ = s_lcd_close_failed____00069590[19];
      local_7f4 = (undefined)ram0x000695a4;
      FUN_0002e584(0,&local_808);
      iVar1 = -1;
    }
    DAT_00505028 = 0;
    return iVar1;
  }
  return 0;
}

