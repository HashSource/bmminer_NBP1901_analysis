
void FUN_0004bf2c(uint param_1)

{
  bool bVar1;
  char cVar2;
  int __fd;
  ssize_t sVar3;
  undefined8 local_20;
  
  cVar2 = DAT_005051c4;
  if (DAT_005051c0 != 0) {
    return;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x5051c4);
  } while (!bVar1);
  DAT_005051c4 = 1;
  if (cVar2 != '\0') {
    do {
      sched_yield();
      DataMemoryBarrier(0xb);
    } while (DAT_005051c0 == 0);
    return;
  }
  if (param_1 != 0) goto LAB_0004bf7c;
  __fd = open64("/dev/urandom",0);
  if (__fd == -1) {
LAB_0004c000:
    gettimeofday((timeval *)&local_20,(__timezone_ptr_t)0x0);
    param_1 = getpid();
    param_1 = param_1 ^ local_20._4_4_ ^ (uint)local_20;
  }
  else {
    sVar3 = read(__fd,&local_20,4);
    close(__fd);
    if (sVar3 != 4) goto LAB_0004c000;
    param_1 = CONCAT31(CONCAT21(CONCAT11((undefined)local_20,local_20._1_1_),local_20._2_1_),
                       local_20._3_1_);
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
LAB_0004bf7c:
  DataMemoryBarrier(0xb);
  DAT_005051c0 = param_1;
  return;
}

