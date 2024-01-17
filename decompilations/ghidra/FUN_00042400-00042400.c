
void FUN_00042400(void)

{
  pthread_attr_t pStack_34;
  
  pthread_mutex_init((pthread_mutex_t *)&DAT_00504fec,(pthread_mutexattr_t *)0x0);
  DAT_00505008 = 0;
  DAT_0050500c = 0;
  DAT_00505010 = 0;
  DAT_00505014 = 0;
  DAT_00505018 = 0;
  DAT_00505004 = FUN_000432d0(&LAB_00042170,0,0);
  pthread_attr_init(&pStack_34);
  pthread_attr_setstacksize(&pStack_34,0x200000);
  pthread_create((pthread_t *)&DAT_0050501c,&pStack_34,FUN_000421c4,(void *)0x0);
  DAT_00504fe8 = 1;
  return;
}

