
int FUN_00019e68(void)

{
  size_t __nmemb;
  int *__ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar7;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 local_810;
  int *piVar6;
  
  __nmemb = FUN_0001e0f0();
  __ptr = (int *)calloc(__nmemb,4);
  if (__ptr == (int *)0x0) {
    iVar3 = 0;
    if (3 < DAT_0007eb9c) {
      local_820._0_1_ = s_malloc_buf_failed__000615a4[0];
      local_820._1_1_ = s_malloc_buf_failed__000615a4[1];
      local_820._2_1_ = s_malloc_buf_failed__000615a4[2];
      local_820._3_1_ = s_malloc_buf_failed__000615a4[3];
      uStack_81c._0_1_ = s_malloc_buf_failed__000615a4[4];
      uStack_81c._1_1_ = s_malloc_buf_failed__000615a4[5];
      uStack_81c._2_1_ = s_malloc_buf_failed__000615a4[6];
      uStack_81c._3_1_ = s_malloc_buf_failed__000615a4[7];
      uStack_818._0_1_ = s_malloc_buf_failed__000615a4[8];
      uStack_818._1_1_ = s_malloc_buf_failed__000615a4[9];
      uStack_818._2_1_ = s_malloc_buf_failed__000615a4[10];
      uStack_818._3_1_ = s_malloc_buf_failed__000615a4[11];
      uStack_814._0_1_ = s_malloc_buf_failed__000615a4[12];
      uStack_814._1_1_ = s_malloc_buf_failed__000615a4[13];
      uStack_814._2_1_ = s_malloc_buf_failed__000615a4[14];
      uStack_814._3_1_ = s_malloc_buf_failed__000615a4[15];
      local_810._0_1_ = s_malloc_buf_failed__000615a4[16];
      local_810._1_1_ = s_malloc_buf_failed__000615a4[17];
      local_810._2_1_ = s_malloc_buf_failed__000615a4[18];
      local_810._3_1_ = s_malloc_buf_failed__000615a4[19];
      FUN_0002e584(3,&local_820,0);
    }
  }
  else {
    iVar3 = 0;
    if (DAT_0007edc8 == 2) {
      iVar4 = 0;
      iVar1 = FUN_0001e29c(0);
      while( true ) {
        if (iVar1 != 0) {
          iVar7 = (&DAT_0007f8c4)[iVar4];
          iVar1 = FUN_0001e0f0();
          iVar2 = FUN_0001e130();
          iVar3 = iVar2 * iVar1 * iVar7 + iVar3;
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 4) break;
        iVar1 = FUN_0001e29c(iVar4);
      }
    }
    else {
      iVar4 = 0;
      do {
        iVar1 = FUN_0001e29c(iVar4);
        if (iVar1 != 0) {
          FUN_000183fc(iVar4,(undefined)DAT_00080fb4,__ptr);
          iVar1 = FUN_0001e0f0();
          if (0 < iVar1) {
            piVar5 = __ptr;
            do {
              piVar6 = piVar5 + 1;
              iVar7 = *piVar5;
              iVar2 = FUN_0001e130();
              iVar3 = iVar7 * iVar2 + iVar3;
              piVar5 = piVar6;
            } while (piVar6 != __ptr + iVar1);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
    }
    DAT_0007f8d4 = iVar3 / 1000;
    if (4 < DAT_0007eb9c) {
      snprintf((char *)&local_820,0x800,"max_hash_rate = %d\n",DAT_0007f8d4);
      FUN_0002e584(4,&local_820,0);
    }
    iVar3 = DAT_0007f8d4;
    free(__ptr);
  }
  return iVar3;
}

