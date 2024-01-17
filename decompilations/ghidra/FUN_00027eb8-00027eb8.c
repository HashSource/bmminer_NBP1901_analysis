
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00027eb8(void)

{
  pthread_t pVar1;
  void *pvVar2;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined2 uStack_804;
  undefined local_802;
  
  pvVar2 = DAT_00080750;
  if ((DAT_00080750 != (void *)0x0) &&
     (pVar1 = pthread_self(), *(pthread_t *)((int)pvVar2 + 0xc) != pVar1)) {
    if (3 < DAT_0007eb9c) {
      local_810._0_1_ = s_cancel_thread_00063438[0];
      local_810._1_1_ = s_cancel_thread_00063438[1];
      local_810._2_1_ = s_cancel_thread_00063438[2];
      local_810._3_1_ = s_cancel_thread_00063438[3];
      uStack_80c._0_1_ = s_cancel_thread_00063438[4];
      uStack_80c._1_1_ = s_cancel_thread_00063438[5];
      uStack_80c._2_1_ = s_cancel_thread_00063438[6];
      uStack_80c._3_1_ = s_cancel_thread_00063438[7];
      uStack_808._0_1_ = s_cancel_thread_00063438[8];
      uStack_808._1_1_ = s_cancel_thread_00063438[9];
      uStack_808._2_1_ = s_cancel_thread_00063438[10];
      uStack_808._3_1_ = s_cancel_thread_00063438[11];
      uStack_804 = (undefined2)ram0x00063444;
      local_802 = (undefined)((uint)ram0x00063444 >> 0x10);
      FUN_0002e584(3,&local_810,0);
      pvVar2 = DAT_00080750;
    }
    FUN_0002fe84(pvVar2);
    free(DAT_00080750);
    DAT_00080750 = (void *)0x0;
  }
  return;
}

