
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000522dc(int param_1)

{
  pthread_t __th;
  ssize_t sVar1;
  int iVar2;
  int *__arg;
  int iVar3;
  size_t sVar4;
  int iVar5;
  char *__s2;
  int __fd;
  undefined4 local_224;
  pthread_t pStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  pthread_attr_t pStack_1cc;
  undefined4 local_1a8;
  undefined auStack_1a4 [124];
  undefined4 local_128;
  undefined auStack_124 [256];
  
  __th = pthread_self();
  pthread_detach(__th);
  local_210 = 0;
  local_21c._0_1_ = s_ct_b_main_0006aee8[0];
  local_21c._1_1_ = s_ct_b_main_0006aee8[1];
  local_21c._2_1_ = s_ct_b_main_0006aee8[2];
  local_21c._3_1_ = s_ct_b_main_0006aee8[3];
  uStack_218._0_1_ = s_ct_b_main_0006aee8[4];
  uStack_218._1_1_ = s_ct_b_main_0006aee8[5];
  uStack_218._2_1_ = s_ct_b_main_0006aee8[6];
  uStack_218._3_1_ = s_ct_b_main_0006aee8[7];
  local_214 = ram0x0006aef0 & 0xffff;
  prctl(0xf,&local_21c);
  pthread_attr_init(&pStack_1cc);
  pthread_attr_setstacksize(&pStack_1cc,0x100000);
  __fd = *(int *)(param_1 + 8);
  do {
    while( true ) {
      while( true ) {
        local_1a8 = 0;
        memset(auStack_1a4,0,0x7c);
        sVar1 = recv(__fd,&local_1a8,0x80,0);
        if (sVar1 < 1) {
          return 0;
        }
        auStack_1a4[sVar1 + -4] = 0;
        local_20c = 0;
        local_208 = 0;
        local_1ec = 0;
        local_1e8 = 0;
        local_224 = 0;
        local_204 = 0;
        local_200 = 0;
        local_1fc = 0;
        local_1f8 = 0;
        local_1f4 = 0;
        local_1f0 = 0;
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1d4 = 0;
        local_1d0 = 0;
        __isoc99_sscanf(&local_1a8,"%x%s%s",&local_224,&local_1ec,&local_20c);
        iVar2 = strcmp((char *)&local_1ec,"regist");
        if (iVar2 == 0) break;
        iVar2 = DAT_005859e0 + 1;
        memcpy((void *)(DAT_005859e0 * 0x80 + 0x585a08),&local_1a8,0x80);
        DAT_005859e0 = iVar2;
      }
      __arg = (int *)calloc(0x98,1);
      iVar2 = DAT_005859e4;
      if (DAT_005859e4 != 0) break;
LAB_000525a0:
      local_128 = 0;
      memset(auStack_124,0,0xfc);
      sprintf((char *)&local_128,"%x %d %s %s %s",0x3f,0,"reg_resp","no_name",&local_20c);
      sVar4 = strlen((char *)&local_128);
      send(__fd,&local_128,sVar4 + 1,0);
      free(__arg);
    }
    iVar5 = 0;
    __s2 = DAT_00052618;
    do {
      iVar3 = strcmp((char *)&local_20c,__s2);
      __s2 = __s2 + 0x88;
      if (iVar3 == 0) {
        iVar3 = *(int *)(&DAT_00589a8c + iVar5 * 0x88);
        __arg[3] = *(int *)(&DAT_00589a08 + iVar5 * 0x88);
        __arg[0x25] = iVar3;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2);
    if (iVar2 == iVar5) goto LAB_000525a0;
    *__arg = DAT_0007f788;
    sVar4 = strlen((char *)&local_20c);
    memcpy(__arg + 4,&local_20c,sVar4 + 1);
    __arg[0x24] = 0;
    pthread_create(&pStack_220,&pStack_1cc,FUN_00052050,__arg);
    iVar2 = __arg[0x24];
    while (iVar2 == 0) {
      usleep(10000);
      iVar2 = __arg[0x24];
    }
    iVar2 = *__arg;
    local_128 = 0;
    if (iVar2 != DAT_0007f788) {
      DAT_0007f788 = iVar2;
    }
    memset(auStack_124,0,0xfc);
    sprintf((char *)&local_128,"%x %d %s %s %s",0x3f,iVar2,"reg_resp",&DAT_0006aee4,&local_20c);
    sVar4 = strlen((char *)&local_128);
    send(__fd,&local_128,sVar4 + 1,0);
    DAT_0007f788 = DAT_0007f788 + 1;
  } while( true );
}

