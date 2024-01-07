
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003388c(void)

{
  char local_810 [2052];
  
  _DAT_0007ede0 = CONCAT11((char)DAT_00080fa8,DAT_0007ede0);
  _DAT_0007ede0 = CONCAT22(CONCAT11(DAT_0007ede0_3,(char)DAT_00080fac),_DAT_0007ede0);
  if (3 < DAT_0007eb9c) {
    snprintf(local_810,0x800,"pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n",_DAT_0007ede0 & 0xff
             ,DAT_00080fac & 0xff,DAT_00080fa8 & 0xff);
    FUN_0002e584(3,local_810,0);
  }
  return _DAT_0007ede0 & 0xffffff;
}

