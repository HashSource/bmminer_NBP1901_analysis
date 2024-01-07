
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00016378(void)

{
  int iVar1;
  void *pvVar2;
  size_t __nmemb;
  int iVar3;
  void **ppvVar4;
  void *__ptr;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined local_7fc;
  
  if ((DAT_0007f814 == (void *)0x0) && (DAT_0007f814 = calloc(1,0x20), DAT_0007f814 == (void *)0x0))
  {
    if (3 < DAT_0007eb9c) {
      local_818._0_1_ = s_No_memory_for_configuraion__00060a00[0];
      local_818._1_1_ = s_No_memory_for_configuraion__00060a00[1];
      local_818._2_1_ = s_No_memory_for_configuraion__00060a00[2];
      local_818._3_1_ = s_No_memory_for_configuraion__00060a00[3];
      uStack_814._0_1_ = s_No_memory_for_configuraion__00060a00[4];
      uStack_814._1_1_ = s_No_memory_for_configuraion__00060a00[5];
      uStack_814._2_1_ = s_No_memory_for_configuraion__00060a00[6];
      uStack_814._3_1_ = s_No_memory_for_configuraion__00060a00[7];
      uStack_810._0_1_ = s_No_memory_for_configuraion__00060a00[8];
      uStack_810._1_1_ = s_No_memory_for_configuraion__00060a00[9];
      uStack_810._2_1_ = s_No_memory_for_configuraion__00060a00[10];
      uStack_810._3_1_ = s_No_memory_for_configuraion__00060a00[11];
      uStack_80c._0_1_ = s_No_memory_for_configuraion__00060a00[12];
      uStack_80c._1_1_ = s_No_memory_for_configuraion__00060a00[13];
      uStack_80c._2_1_ = s_No_memory_for_configuraion__00060a00[14];
      uStack_80c._3_1_ = s_No_memory_for_configuraion__00060a00[15];
      local_808._0_1_ = s_No_memory_for_configuraion__00060a00[16];
      local_808._1_1_ = s_No_memory_for_configuraion__00060a00[17];
      local_808._2_1_ = s_No_memory_for_configuraion__00060a00[18];
      local_808._3_1_ = s_No_memory_for_configuraion__00060a00[19];
      uStack_804._0_1_ = s_No_memory_for_configuraion__00060a00[20];
      uStack_804._1_1_ = s_No_memory_for_configuraion__00060a00[21];
      uStack_804._2_1_ = s_No_memory_for_configuraion__00060a00[22];
      uStack_804._3_1_ = s_No_memory_for_configuraion__00060a00[23];
      uStack_800._0_1_ = s_No_memory_for_configuraion__00060a00[24];
      uStack_800._1_1_ = s_No_memory_for_configuraion__00060a00[25];
      uStack_800._2_1_ = s_No_memory_for_configuraion__00060a00[26];
      uStack_800._3_1_ = s_No_memory_for_configuraion__00060a00[27];
      local_7fc = (undefined)ram0x00060a1c;
      FUN_0002e584(3,&local_818,0);
      __ptr = DAT_0007f814;
LAB_00016458:
      if (__ptr != (void *)0x0) {
        ppvVar4 = (void **)((int)__ptr + -4);
        do {
          ppvVar4 = ppvVar4 + 1;
          pvVar2 = *ppvVar4;
          if (pvVar2 != (void *)0x0) {
            if (*(void **)((int)pvVar2 + 0x3f) != (void *)0x0) {
              free(*(void **)((int)pvVar2 + 0x3f));
              pvVar2 = *ppvVar4;
              *(undefined *)((int)pvVar2 + 0x3f) = 0;
              *(undefined *)((int)pvVar2 + 0x40) = 0;
              *(undefined *)((int)pvVar2 + 0x41) = 0;
              *(undefined *)((int)pvVar2 + 0x42) = 0;
              pvVar2 = *ppvVar4;
            }
            free(pvVar2);
            *ppvVar4 = (void *)0x0;
          }
        } while (ppvVar4 != (void **)((int)__ptr + 0xc));
        free(__ptr);
        DAT_0007f814 = (void *)0x0;
        return 0xffffffff;
      }
    }
    return 0xffffffff;
  }
  iVar3 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar3);
    __ptr = DAT_0007f814;
    if ((iVar1 != 0) && (*(int *)((int)DAT_0007f814 + iVar3 * 4) == 0)) {
      pvVar2 = calloc(1,0x48);
      *(void **)((int)__ptr + iVar3 * 4) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_818,0x800,"No memory for configuraion for chain %d.\n",iVar3);
          FUN_0002e584(3,&local_818,0);
          __ptr = DAT_0007f814;
        }
        goto LAB_00016458;
      }
      __nmemb = FUN_0001e0f0();
      __ptr = DAT_0007f814;
      iVar1 = *(int *)((int)DAT_0007f814 + iVar3 * 4);
      pvVar2 = calloc(__nmemb,1);
      *(void **)(iVar1 + 0x3f) = pvVar2;
      if (*(int *)(*(int *)((int)__ptr + iVar3 * 4) + 0x3f) == 0) {
        if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_818,0x800,"No memory for configuraion for chain %d.\n",iVar3);
          FUN_0002e584(3,&local_818,0);
          __ptr = DAT_0007f814;
        }
        goto LAB_00016458;
      }
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 4) {
      return 0;
    }
  } while( true );
}

