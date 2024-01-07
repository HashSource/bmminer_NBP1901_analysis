
void FUN_000231a4(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  size_t __n;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = *param_1;
  bVar6 = CARRY4(uVar2,param_3);
  uVar1 = uVar2 + param_3;
  uVar5 = uVar2 & 0x3f;
  if (bVar6) {
    uVar2 = param_1[1];
  }
  __n = 0x40 - uVar5;
  *param_1 = uVar1;
  if (bVar6) {
    param_1[1] = uVar2 + 1;
  }
  if (uVar5 != 0 && (int)__n <= (int)param_3) {
    param_3 = param_3 - __n;
    memcpy((void *)((int)(param_1 + 10) + uVar5),param_2,__n);
    param_2 = (void *)((int)param_2 + __n);
    uVar5 = 0;
    FUN_00020d44(param_1,param_1 + 10);
  }
  if (0x3f < (int)param_3) {
    uVar1 = param_3 - 0x40 >> 6;
    pvVar4 = (void *)((int)param_2 + (uVar1 + 1) * 0x40);
    pvVar3 = param_2;
    do {
      param_2 = (void *)((int)pvVar3 + 0x40);
      FUN_00020d44(param_1,pvVar3);
      pvVar3 = param_2;
    } while (param_2 != pvVar4);
    param_3 = (param_3 - 0x40) + uVar1 * -0x40;
  }
  if (0 < (int)param_3) {
    memcpy((void *)((int)param_1 + uVar5 + 0x28),param_2,param_3);
    return;
  }
  return;
}

