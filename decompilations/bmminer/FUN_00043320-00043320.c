
undefined4
FUN_00043320(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  int iVar4;
  void **ppvVar5;
  void **ppvVar6;
  void **ppvVar7;
  void **ppvVar8;
  void *local_28;
  void *local_24 [2];
  
  if (param_1 == (int *)0x0) {
    return 0x1f5;
  }
  ppvVar1 = (void **)*param_1;
  ppvVar2 = (void **)malloc(0x18);
  if (ppvVar2 == (void **)0x0) {
    return 2;
  }
  ppvVar5 = ppvVar1 + 1;
  *ppvVar2 = ppvVar5;
  ppvVar2[1] = ppvVar5;
  ppvVar2[3] = (void *)0x1;
  pvVar3 = (void *)FUN_00043fa4(param_2,param_3);
  ppvVar2[4] = pvVar3;
  if (param_4 == 0) {
    ppvVar2[5] = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_00043fa4(param_4,param_5);
    ppvVar2[5] = pvVar3;
  }
  ppvVar7 = (void **)*ppvVar1;
  if (ppvVar5 == (void **)*ppvVar1) {
    *ppvVar1 = ppvVar2;
    ppvVar2[2] = (void *)0x0;
    ppvVar5 = ppvVar2;
  }
  else {
    do {
      ppvVar6 = ppvVar7;
      FUN_00044000(ppvVar6[4],&local_28);
      FUN_00044000(ppvVar2[4],local_24);
      iVar4 = (*(code *)ppvVar1[9])(local_24[0],local_28);
      free(local_28);
      free(local_24[0]);
      if (iVar4 == 0) {
        return 0x191;
      }
      ppvVar8 = ppvVar6 + 1;
      if (iVar4 < 0) {
        ppvVar8 = ppvVar6;
      }
      ppvVar7 = (void **)*ppvVar8;
    } while (ppvVar5 != (void **)*ppvVar8);
    ppvVar2[2] = ppvVar6;
    FUN_00044000(ppvVar6[4],&local_28);
    FUN_00044000(ppvVar2[4],local_24);
    iVar4 = (*(code *)ppvVar1[9])(local_24[0],local_28);
    free(local_28);
    free(local_24[0]);
    ppvVar5 = (void **)*ppvVar1;
    if (iVar4 < 0) {
      *ppvVar6 = ppvVar2;
    }
    else {
      ppvVar6[1] = ppvVar2;
    }
LAB_000439bc:
    ppvVar7 = ppvVar2;
    if (ppvVar2 != ppvVar5) {
      while( true ) {
        ppvVar6 = (void **)ppvVar7[2];
        if (ppvVar6[3] != (void *)0x1) goto LAB_00043a1c;
        ppvVar2 = (void **)ppvVar6[2];
        ppvVar8 = (void **)*ppvVar2;
        if (ppvVar6 == ppvVar8) {
          pvVar3 = ppvVar2[1];
          if (*(int *)((int)pvVar3 + 0xc) == 1) {
            ppvVar6[3] = (void *)0x0;
            *(undefined4 *)((int)pvVar3 + 0xc) = 0;
            ppvVar2[3] = (void *)0x1;
          }
          else {
            if ((void **)ppvVar8[1] == ppvVar7) {
              FUN_0004348c(ppvVar1,ppvVar8);
              ppvVar8 = (void **)ppvVar8[2];
              ppvVar2 = (void **)ppvVar8[2];
              ppvVar7 = ppvVar6;
            }
            ppvVar8[3] = (void *)0x0;
            ppvVar2[3] = (void *)0x1;
            FUN_000434e0(ppvVar1,ppvVar2);
            ppvVar5 = (void **)*ppvVar1;
            ppvVar2 = ppvVar7;
          }
          goto LAB_000439bc;
        }
        if (ppvVar8[3] == (void *)0x1) break;
        ppvVar5 = ppvVar6;
        if (ppvVar7 == (void **)*ppvVar6) {
          FUN_000434e0(ppvVar1,ppvVar6);
          ppvVar5 = (void **)ppvVar6[2];
          ppvVar2 = (void **)ppvVar5[2];
          ppvVar7 = ppvVar6;
        }
        ppvVar5[3] = (void *)0x0;
        ppvVar2[3] = (void *)0x1;
        FUN_0004348c(ppvVar1,ppvVar2);
        ppvVar5 = (void **)*ppvVar1;
        if (ppvVar7 == ppvVar5) goto LAB_00043a1c;
      }
      ppvVar6[3] = (void *)0x0;
      ppvVar8[3] = (void *)0x0;
      ppvVar2[3] = (void *)0x1;
      goto LAB_000439bc;
    }
  }
LAB_00043a1c:
  ppvVar5[3] = (void *)0x0;
  FUN_0004372c(ppvVar1);
  return 0;
}

