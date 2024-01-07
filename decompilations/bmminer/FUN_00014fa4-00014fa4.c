
void FUN_00014fa4(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void **ppvVar5;
  void *pvVar6;
  undefined4 uVar7;
  size_t __size;
  void **ppvVar8;
  void **ppvVar9;
  void *pvVar10;
  pthread_attr_t apStack_820 [57];
  
  iVar2 = FUN_00014434();
  iVar3 = FUN_0001e19c();
  if (iVar3 < iVar2) {
    iVar2 = FUN_00014434();
  }
  else {
    iVar2 = FUN_0001e19c();
  }
  if (3 < DAT_0007eb9c) {
    snprintf(apStack_820[0].__size,0x800,"max sensor num = %d",iVar2);
    FUN_0002e584(3,apStack_820,0);
  }
  pvVar4 = malloc(0x10);
  DAT_0007f7b8 = pvVar4;
  ppvVar5 = (void **)malloc(0x30);
  pvVar6 = calloc(iVar2 * 0x48,1);
  iVar3 = iVar2 * 6;
  ppvVar8 = (void **)((int)pvVar4 + -4);
  ppvVar9 = ppvVar5 + 0xc;
  pvVar4 = pvVar6;
  do {
    ppvVar8 = ppvVar8 + 1;
    *ppvVar8 = ppvVar5;
    pvVar10 = (void *)(iVar3 + (int)(void *)(iVar3 + (int)pvVar4));
    *ppvVar5 = pvVar4;
    ppvVar5[1] = (void *)(iVar3 + (int)pvVar4);
    ppvVar5[2] = pvVar10;
    ppvVar5 = ppvVar5 + 3;
    pvVar4 = (void *)(iVar3 + (int)pvVar10);
  } while (ppvVar9 != ppvVar5);
  DAT_0007f7d8 = (void *)((int)pvVar6 + iVar2 * 0x48);
  iVar2 = FUN_00014434();
  DAT_0007f7b4 = malloc(iVar2 << 2);
  for (iVar2 = 0; iVar3 = FUN_00014434(), pvVar4 = DAT_0007f7b4, iVar2 < iVar3; iVar2 = iVar2 + 1) {
    uVar7 = FUN_0001e180(iVar2);
    *(undefined4 *)((int)pvVar4 + iVar2 * 4) = uVar7;
  }
  __size = FUN_0001e19c();
  DAT_0007f7dc = malloc(__size);
  for (iVar2 = 0; iVar3 = FUN_0001e19c(), iVar2 < iVar3; iVar2 = iVar2 + 1) {
    uVar1 = FUN_0001e1ac(iVar2);
    *(undefined *)((int)DAT_0007f7dc + iVar2) = uVar1;
  }
  pthread_attr_init(apStack_820);
  pthread_attr_setstacksize(apStack_820,0x100000);
  DAT_0007f7e0 = 1;
  pthread_create(DAT_0001514c,apStack_820,FUN_0001585c,(void *)0x0);
  pthread_detach(DAT_0007f7e4);
  return;
}

