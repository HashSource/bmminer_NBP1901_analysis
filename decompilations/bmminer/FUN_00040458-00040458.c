
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00040458(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_81c;
  undefined local_818 [13];
  undefined uStack_80b;
  undefined2 uStack_80a;
  undefined uStack_808;
  undefined uStack_807;
  undefined2 uStack_806;
  undefined uStack_804;
  undefined uStack_803;
  undefined2 uStack_802;
  undefined uStack_800;
  undefined uStack_7ff;
  undefined2 uStack_7fe;
  undefined2 uStack_7fc;
  
  local_81c = param_1;
  if (param_2 == 0) {
    local_818._0_4_ = s_bad_param_00068fa4._0_4_;
    local_818._4_4_ = s_bad_param_00068fa4._4_4_;
    local_818._8_2_ = (undefined2)ram0x00068fac;
    local_818[10] = (undefined)((uint)ram0x00068fac >> 0x10);
    FUN_0002e584(0,(pthread_attr_t *)local_818,0);
    uVar2 = 0xffffffff;
  }
  else {
    if (DAT_00504ca8 == 0) {
      pthread_mutex_init((pthread_mutex_t *)&DAT_00504cac,(pthread_mutexattr_t *)0x0);
      DAT_00504cc4 = FUN_000432d0(&LAB_0004043c,0,0);
      pthread_mutex_init((pthread_mutex_t *)&DAT_00504cc8,(pthread_mutexattr_t *)0x0);
      DAT_00504ce0 = 1;
      pthread_attr_init((pthread_attr_t *)local_818);
      pthread_attr_setstacksize((pthread_attr_t *)local_818,0x200000);
      pthread_create((pthread_t *)&DAT_00504ce4,(pthread_attr_t *)local_818,FUN_00040d90,(void *)0x0
                    );
      DAT_00504ca8 = 1;
    }
    iVar1 = pthread_mutex_lock(DAT_000405c8);
    if (iVar1 == 0) {
      iVar1 = FUN_00043338(DAT_00504cc4,&local_81c);
      if (iVar1 == 0) {
        local_818._4_4_ = 0xffffffff;
        local_818._0_4_ = param_2;
        FUN_00043320(DAT_00504cc4,&local_81c,4,(pthread_attr_t *)local_818,8);
      }
      pthread_mutex_unlock(DAT_000405c8);
      uVar2 = 0;
    }
    else {
      local_818[12] = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[12];
      uStack_80b = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[13];
      uStack_80a._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[14];
      uStack_80a._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[15];
      uStack_808 = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[16];
      uStack_807 = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[17];
      uStack_806._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[18];
      uStack_806._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[19];
      uStack_804 = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[20];
      uStack_803 = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[21];
      uStack_802._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[22];
      uStack_802._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[23];
      uStack_800 = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[24];
      uStack_7ff = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[25];
      uStack_7fe._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[26];
      uStack_7fe._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[27];
      uStack_7fc = (undefined2)ram0x00068fcc;
      FUN_0002e584(0,(pthread_attr_t *)local_818);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

