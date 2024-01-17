
void FUN_0002a3c4(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char acStack_808 [2048];
  
  if ((DAT_00482a5d != '\0') &&
     (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
    snprintf(acStack_808,0x800,"%s %d: invalid nonce - HW error",
             *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 8),
             *(undefined4 *)(*(int *)(param_1 + 0x24) + 8));
    FUN_0002e584(7,acStack_808,0);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_005944f4);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"bmminer.c"
             ,DAT_0002a56c,0x5a6);
    FUN_0002e584(3,acStack_808,1);
  }
  DAT_0058e348 = DAT_0058e348 + 1;
  *(int *)(*(int *)(param_1 + 0x24) + 0x2c) = *(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_005944f4);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,
             "bmminer.c",DAT_0002a56c,0x5a9);
    FUN_0002e584(3,acStack_808,1);
  }
  (*DAT_0007ecc4)();
  pcVar3 = *(code **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x54);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  return;
}

