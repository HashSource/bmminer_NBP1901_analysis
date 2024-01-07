
void FUN_00030b10(int param_1,pthread_attr_t *param_2,__start_routine *param_3,void *param_4)

{
  FUN_00030a94(param_1 + 0x10,"util.c",DAT_00030b54,0x4a7);
  pthread_create((pthread_t *)(param_1 + 0xc),param_2,param_3,param_4);
  return;
}

