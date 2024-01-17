
void FUN_0002e92c(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    pthread_mutex_trylock((pthread_mutex_t *)&DAT_0059450c);
    FUN_0002e828(0x2a);
    (*DAT_0007ecc4)();
  }
  FUN_0002e8a4();
  printf("%s%s%s",param_1,param_2,"                    \n");
  FUN_0002e828(0x37);
  (*DAT_0007ecc4)();
  return;
}

