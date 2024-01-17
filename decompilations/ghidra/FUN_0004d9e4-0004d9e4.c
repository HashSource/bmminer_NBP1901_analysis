
undefined4 FUN_0004d9e4(void **param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = param_1[2];
  pvVar1 = param_1[1];
  if (param_3 < (uint)((int)pvVar3 - (int)pvVar1)) {
    pvVar3 = *param_1;
LAB_0004da78:
    memcpy((void *)((int)pvVar3 + (int)pvVar1),param_2,param_3);
    pvVar1 = param_1[1];
    param_1[1] = (void *)(param_3 + (int)pvVar1);
    *(undefined *)((int)*param_1 + (int)(void *)(param_3 + (int)pvVar1)) = 0;
    return 0;
  }
  if ((((uint)(param_3 == 0xffffffff) | (uint)pvVar3 >> 0x1f) == 0) &&
     (pvVar1 <= (void *)(-2 - param_3))) {
    pvVar2 = (void *)(param_3 + 1 + (int)pvVar1);
    if (pvVar2 < (void *)((int)pvVar3 << 1)) {
      pvVar2 = (void *)((int)pvVar3 << 1);
    }
    pvVar3 = (void *)FUN_0004d880(pvVar2);
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar3,*param_1,(size_t)param_1[1]);
      FUN_0004d898(*param_1);
      pvVar1 = param_1[1];
      *param_1 = pvVar3;
      param_1[2] = pvVar2;
      goto LAB_0004da78;
    }
  }
  return 0xffffffff;
}

