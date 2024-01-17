
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00027a58(void)

{
  int iVar1;
  pthread_attr_t pStack_834;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined2 local_7fc;
  
  if (DAT_00080754 == (void *)0x0) {
    pthread_attr_init(&pStack_834);
    pthread_attr_setstacksize(&pStack_834,0x800000);
    DAT_00080754 = calloc(1,0x40);
    iVar1 = FUN_00030b10(DAT_00080754,&pStack_834,FUN_0002600c,DAT_00080754);
    if (iVar1 != 0) {
      if (3 < DAT_0007eb9c) {
        local_810._0_1_ = s_create_thread_failed_00063410[0];
        local_810._1_1_ = s_create_thread_failed_00063410[1];
        local_810._2_1_ = s_create_thread_failed_00063410[2];
        local_810._3_1_ = s_create_thread_failed_00063410[3];
        uStack_80c._0_1_ = s_create_thread_failed_00063410[4];
        uStack_80c._1_1_ = s_create_thread_failed_00063410[5];
        uStack_80c._2_1_ = s_create_thread_failed_00063410[6];
        uStack_80c._3_1_ = s_create_thread_failed_00063410[7];
        uStack_808._0_1_ = s_create_thread_failed_00063410[8];
        uStack_808._1_1_ = s_create_thread_failed_00063410[9];
        uStack_808._2_1_ = s_create_thread_failed_00063410[10];
        uStack_808._3_1_ = s_create_thread_failed_00063410[11];
        uStack_804._0_1_ = s_create_thread_failed_00063410[12];
        uStack_804._1_1_ = s_create_thread_failed_00063410[13];
        uStack_804._2_1_ = s_create_thread_failed_00063410[14];
        uStack_804._3_1_ = s_create_thread_failed_00063410[15];
        uStack_800._0_1_ = s_create_thread_failed_00063410[16];
        uStack_800._1_1_ = s_create_thread_failed_00063410[17];
        uStack_800._2_1_ = s_create_thread_failed_00063410[18];
        uStack_800._3_1_ = s_create_thread_failed_00063410[19];
        local_7fc = (undefined2)ram0x00063424;
        FUN_0002e584(3,&local_810,0);
        return 0xffffffff;
      }
      return 0xffffffff;
    }
    pthread_detach(*(pthread_t *)((int)DAT_00080754 + 0xc));
    if (3 < DAT_0007eb9c) {
      local_810._0_1_ = s_create_thread_00063428[0];
      local_810._1_1_ = s_create_thread_00063428[1];
      local_810._2_1_ = s_create_thread_00063428[2];
      local_810._3_1_ = s_create_thread_00063428[3];
      uStack_80c._0_1_ = s_create_thread_00063428[4];
      uStack_80c._1_1_ = s_create_thread_00063428[5];
      uStack_80c._2_1_ = s_create_thread_00063428[6];
      uStack_80c._3_1_ = s_create_thread_00063428[7];
      uStack_808._0_1_ = s_create_thread_00063428[8];
      uStack_808._1_1_ = s_create_thread_00063428[9];
      uStack_808._2_1_ = s_create_thread_00063428[10];
      uStack_808._3_1_ = s_create_thread_00063428[11];
      FUN_0002e584(3,&local_810,0);
      return 0;
    }
  }
  return 0;
}

