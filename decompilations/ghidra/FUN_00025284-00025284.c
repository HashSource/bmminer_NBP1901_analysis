
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025284(void)

{
  int iVar1;
  pthread_t pStack_830;
  pthread_attr_t pStack_82c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined local_7f4;
  
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
    local_808 = s_start_the_http_log__00062f1c._0_4_;
    uStack_804 = s_start_the_http_log__00062f1c._4_4_;
    uStack_800 = s_start_the_http_log__00062f1c._8_4_;
    uStack_7fc = s_start_the_http_log__00062f1c._12_4_;
    uStack_7f8 = s_start_the_http_log__00062f1c._16_4_;
    local_7f4 = (undefined)ram0x00062f30;
    FUN_0002e584(5,&local_808,0);
  }
  pthread_attr_init(&pStack_82c);
  pthread_attr_setstacksize(&pStack_82c,0x200000);
  iVar1 = pthread_create(&pStack_830,&pStack_82c,FUN_00024f04,(void *)0x0);
  if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 5)) {
    return;
  }
  snprintf((char *)&local_808,0x800,"httpListenThread start ret=%d",iVar1);
  FUN_0002e584(5,&local_808,0);
  return;
}

