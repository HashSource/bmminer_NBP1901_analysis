
void FUN_0002d340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  size_t __nmemb;
  char acStack_818 [2048];
  
  if (*(char *)(param_1 + 1) != '\0') {
    snprintf(acStack_818,0x800,"List %s store can\'t %s() - from %s %s() line %d in %s %s():%d",
             *param_1,"k_alloc_items",param_2,param_3,param_4,"klist.c","k_alloc_items",0x13);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  iVar6 = param_1[10];
  if (iVar6 < 1) {
    __nmemb = param_1[9];
  }
  else {
    iVar5 = param_1[6];
    if (iVar6 <= iVar5) {
      return;
    }
    __nmemb = param_1[9];
    if (iVar6 < (int)(iVar5 + __nmemb)) {
      __nmemb = iVar6 - iVar5;
    }
  }
  iVar6 = param_1[0xc];
  param_1[0xc] = iVar6 + 1;
  pvVar2 = realloc((void *)param_1[0xd],(iVar6 + 1) * 4);
  param_1[0xd] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    snprintf(acStack_818,0x800,"List %s item_memory failed to realloc count=%d in %s %s():%d",
             *param_1,param_1[0xc],"klist.c","k_alloc_items",0x21);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  puVar3 = (undefined4 *)calloc(__nmemb,0x10);
  if (puVar3 == (undefined4 *)0x0) {
    snprintf(acStack_818,0x800,
             "List %s failed to calloc %d new items - total was %d, limit was %d in %s %s():%d",
             *param_1,__nmemb,param_1[6],param_1[10],"klist.c","k_alloc_items",0x26);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  *(undefined4 **)(param_1[0xd] + (param_1[0xc] + 0x3fffffff) * 4) = puVar3;
  uVar4 = *param_1;
  param_1[7] = __nmemb;
  param_1[8] = __nmemb;
  param_1[6] = param_1[6] + __nmemb;
  *puVar3 = uVar4;
  puVar3[1] = 0;
  puVar3[2] = puVar3 + 4;
  if (2 < (int)__nmemb) {
    puVar7 = puVar3 + 8;
    do {
      puVar7[-4] = uVar4;
      puVar7[-3] = puVar7 + -8;
      puVar7[-2] = puVar7;
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar3 + __nmemb * 4);
  }
  iVar6 = __nmemb + 0xfffffff;
  cVar1 = *(char *)(param_1 + 0xb);
  puVar3[iVar6 * 4] = uVar4;
  param_1[3] = puVar3;
  puVar7 = puVar3 + iVar6 * 4;
  puVar7[1] = puVar3 + iVar6 * 4 + -4;
  puVar7[2] = 0;
  if (cVar1 != '\0') {
    param_1[4] = puVar7;
  }
  do {
    iVar6 = param_1[0xe];
    param_1[0xe] = iVar6 + 1;
    pvVar2 = realloc((void *)param_1[0xf],(iVar6 + 1) * 4);
    param_1[0xf] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      snprintf(acStack_818,0x800,"List %s data_memory failed to realloc count=%d in %s %s():%d",
               *param_1,param_1[0xe],"klist.c","k_alloc_items",0x45);
      FUN_0002e584(3,acStack_818,1);
      FUN_0002a574(1);
    }
    pvVar2 = calloc(1,param_1[5]);
    puVar3[3] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      snprintf(acStack_818,0x800,"List %s failed to calloc item data in %s %s():%d",*param_1,
               "klist.c","k_alloc_items",0x49);
      FUN_0002e584(3,acStack_818,1);
      FUN_0002a574(1);
      pvVar2 = (void *)puVar3[3];
    }
    *(void **)(param_1[0xf] + (param_1[0xe] + 0x3fffffff) * 4) = pvVar2;
    puVar3 = (undefined4 *)puVar3[2];
  } while (puVar3 != (undefined4 *)0x0);
  return;
}

