
void FUN_0002a264(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  undefined4 uVar3;
  
  __mutex = (pthread_mutex_t *)(param_3 + 0xd4);
  iVar2 = FUN_000290b4();
  *param_2 = iVar2;
  uVar3 = *param_1;
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) {
    FUN_00029014(DAT_0002a3c0,0x58f);
  }
  uVar1 = DAT_0002a3c0;
  FUN_00028ee8((pthread_rwlock_t *)(param_3 + 0xec),DAT_0002a3c0,0x58f);
  param_7 = param_7 << 0x18 | (param_7 >> 8 & 0xff) << 0x10 | (param_7 >> 0x10 & 0xff) << 8 |
            param_7 >> 0x18;
  *(undefined4 *)(param_3 + 0x270) = param_5;
  *(undefined4 *)(param_3 + 0x274) = param_6;
  FUN_00030ea8(param_3 + 0x62c,&param_7,4,"bmminer.c",uVar1,0x592);
  iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_3 + 0xec));
  if (iVar2 == 0) {
    iVar2 = pthread_mutex_unlock(__mutex);
  }
  else {
    FUN_00028e18(uVar1,0x593);
    iVar2 = pthread_mutex_unlock(__mutex);
  }
  if (iVar2 != 0) {
    FUN_00028f5c(DAT_0002a3c0,0x593);
  }
  (*DAT_0007ecc4)();
  FUN_0002974c(param_3,*param_2);
  *(undefined4 *)(*param_2 + 0x104) = param_4;
  *(undefined4 *)(*param_2 + 0x100) = uVar3;
  *(undefined4 *)(*param_2 + 0x150) = 0;
  *(int *)(*(int *)(*param_2 + 0x104) + 0x44) = *(int *)(*(int *)(*param_2 + 0x104) + 0x44) + 1;
  *(undefined *)(*param_2 + 0x110) = 1;
  *(uint *)(*param_2 + 0x1bc) = param_7;
  return;
}

