
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004110c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined2 uStack_808;
  undefined local_806;
  
  if (param_1 < 3) {
    if (param_1 + -1 == 0) {
      if (99 < param_2) {
        param_2 = 100;
      }
      uVar2 = 100 - param_2 | param_2 << 0x10;
      FUN_00040390(0x13,uVar2);
      FUN_00040390(0x17,uVar2);
      return 0;
    }
    snprintf((char *)&local_810,0x800,"pwm type %d not supported\n",param_1 + -1);
    FUN_0002e584(0,&local_810);
    uVar1 = 0;
  }
  else {
    local_810 = s_bad_param_00068fa4._0_4_;
    uStack_80c = s_bad_param_00068fa4._4_4_;
    uStack_808 = (undefined2)ram0x00068fac;
    local_806 = (undefined)((uint)ram0x00068fac >> 0x10);
    FUN_0002e584(0,&local_810);
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}

