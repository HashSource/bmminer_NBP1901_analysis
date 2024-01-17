
undefined4 * FUN_0002d67c(undefined4 *param_1)

{
  undefined uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char acStack_810 [2052];
  
  puVar2 = (undefined4 *)calloc(1,0x40);
  uVar3 = *param_1;
  if (puVar2 == (undefined4 *)0x0) {
    snprintf(acStack_810,0x800,"Failed to calloc store for %s in %s %s():%d",uVar3,"klist.c",
             DAT_0002d720,0x55);
    FUN_0002e584(3,acStack_810,1);
    FUN_0002a574(1);
    uVar3 = *param_1;
  }
  uVar4 = param_1[2];
  uVar1 = *(undefined *)(param_1 + 0xb);
  *puVar2 = uVar3;
  puVar2[2] = uVar4;
  *(undefined *)(puVar2 + 0xb) = uVar1;
  *(undefined *)(puVar2 + 1) = 1;
  return puVar2;
}

