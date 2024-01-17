
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00049904(void)

{
  undefined4 uVar1;
  int local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined2 local_7f4;
  
  local_814 = -1;
  if (DAT_00504c90 == 0) {
    local_810 = s_please_init_platform_first___00069238._0_4_;
    local_80c = s_please_init_platform_first___00069238._4_4_;
    uStack_808 = s_please_init_platform_first___00069238._8_4_;
    uStack_804 = s_please_init_platform_first___00069238._12_4_;
    local_800 = s_please_init_platform_first___00069238._16_4_;
    uStack_7fc = s_please_init_platform_first___00069238._20_4_;
    uStack_7f8 = s_please_init_platform_first___00069238._24_4_;
    local_7f4 = (undefined2)ram0x00069254;
    FUN_0002e584(0,&local_810,0);
    local_814 = -2;
  }
  else {
    uVar1 = DAT_005051a4;
    if (DAT_005051a0 == 0) {
      uVar1 = FUN_000432d0(&LAB_00049834,0,0);
      DAT_005051a4 = uVar1;
      pthread_mutex_init((pthread_mutex_t *)&DAT_005051a8,(pthread_mutexattr_t *)0x0);
    }
    DAT_005051a0 = DAT_005051a0 + 1;
    local_810 = 0;
    local_80c = 0;
    local_814 = DAT_005051a0;
    FUN_00043320(uVar1,&local_814,4,&local_810,8);
  }
  return local_814;
}

