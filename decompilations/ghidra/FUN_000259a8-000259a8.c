
void FUN_000259a8(void)

{
  double dVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int local_848 [4];
  char acStack_838 [2048];
  
  dVar1 = DAT_00025bf8;
  local_848[0] = 0;
  local_848[1] = 0;
  local_848[2] = 0;
  local_848[3] = 0;
  prctl(0xf,"heart_beat",0,0,0);
  dVar8 = -1.0;
  do {
    dVar7 = DAT_00025c00;
    uVar4 = 0;
    pthread_setcancelstate(1,(int *)0x0);
    do {
      iVar2 = FUN_0001e29c(uVar4);
      if (iVar2 != 0) {
        FUN_000304d4(10);
        iVar2 = FUN_000191fc(uVar4 & 0xff);
        if (iVar2 == 0) {
          iVar2 = local_848[uVar4];
          local_848[uVar4] = iVar2 + 1;
          if (1 < DAT_0007eb9c) {
            snprintf(acStack_838,0x800,"chain[%d] heart beat fail %d times.\n",uVar4,iVar2 + 1);
            FUN_0002e584(1,acStack_838,0);
          }
        }
        else {
          local_848[uVar4] = 0;
        }
        FUN_000304d4(10);
        dVar6 = (double)FUN_000192c8(uVar4);
        dVar7 = dVar7 + dVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 4);
    iVar2 = FUN_0001e28c();
    if (iVar2 != 0) {
      iVar2 = FUN_0001e28c();
      dVar7 = dVar7 / (double)(longlong)iVar2;
    }
    if (dVar8 < dVar1) {
      dVar8 = dVar7;
    }
    if (4 < DAT_0007eb9c) {
      snprintf(acStack_838,0x800,"last avg = %.2f, current voltage = %.2f",DAT_0007eb9c,dVar8,dVar7)
      ;
      FUN_0002e584(4,acStack_838,0);
    }
    dVar6 = (double)(longlong)(DAT_00482a8c / 100) * 0.75;
    if ((((dVar6 < dVar8) &&
         (dVar5 = dVar8 * 0.75, dVar5 != dVar7 && dVar5 < dVar7 == (NAN(dVar5) || NAN(dVar7)))) ||
        ((dVar6 < dVar7 &&
         (dVar6 = dVar7 * 0.75, dVar6 != dVar8 && dVar6 < dVar8 == (NAN(dVar6) || NAN(dVar8)))))) &&
       (3 < DAT_0007eb9c)) {
      dVar8 = dVar7 - dVar8;
      puVar3 = &UNK_000613bc;
      if (dVar8 != 0.0 && dVar8 < 0.0 == NAN(dVar8)) {
        puVar3 = &UNK_000613b4;
      }
      snprintf(acStack_838,0x800,"chain avg vol %s to %.2f",puVar3,dVar7);
      FUN_0002e584(3,acStack_838,0);
    }
    pthread_setcancelstate(0,(int *)0x0);
    pthread_testcancel();
    sleep(10);
    dVar8 = dVar7;
  } while( true );
}

