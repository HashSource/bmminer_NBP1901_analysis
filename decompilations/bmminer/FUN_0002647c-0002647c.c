
void FUN_0002647c(void)

{
  char *__s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  prctl(0xf,"chk_sys",0,0,0);
  __s1 = (char *)FUN_0001e0c0();
  iVar1 = strcmp(__s1,"BHB28601");
  if (iVar1 != 0) {
    FUN_0001e0c0();
  }
  iVar1 = FUN_00026104();
  do {
    iVar2 = FUN_00031d38();
    if (iVar2 == 2) {
      iVar2 = FUN_00026104();
      if (((DAT_0099ee08 | DAT_0099ee0c) != 0) || (0x708 < (uint)(iVar2 - iVar1))) {
        DAT_0007fa08 = FUN_00026104();
        uVar4 = 1;
        DAT_0007fa38 = DAT_0007fa08;
        DAT_0007fa3c = DAT_0007fa08;
        DAT_0007fa40 = DAT_0007fa08;
        pthread_setcancelstate(1,(int *)0x0);
        do {
          do {
            iVar1 = pthread_mutex_trylock((pthread_mutex_t *)&DAT_0007fa44);
            if (iVar1 == 0) {
              if (DAT_0007eb78 != '\0') {
                FUN_000350e8();
              }
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0007fa44);
            }
            uVar4 = uVar4 + 1;
            pthread_setcancelstate(0,(int *)0x0);
            pthread_testcancel();
            FUN_000304d4(1000);
            pthread_setcancelstate(1,(int *)0x0);
          } while (uVar4 + (((uint)((ulonglong)uVar4 * 0x88888889 >> 0x20) & 0xfffffff0) -
                           uVar4 / 0x1e) * -2 != 0);
          iVar2 = FUN_0001e29c(0);
          iVar1 = 0;
          while( true ) {
            if (iVar2 != 0) {
              uVar3 = FUN_0001e160();
              FUN_0003eff0(iVar1,uVar3);
            }
            iVar1 = iVar1 + 1;
            if (iVar1 == 4) break;
            iVar2 = FUN_0001e29c(iVar1);
          }
        } while( true );
      }
    }
    FUN_000304d4(10);
  } while( true );
}

