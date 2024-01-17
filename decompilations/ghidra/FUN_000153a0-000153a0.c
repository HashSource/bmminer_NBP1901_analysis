
/* WARNING: Removing unreachable block (ram,0x00014d0c) */
/* WARNING: Removing unreachable block (ram,0x00014d18) */

int FUN_000153a0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_0001e170();
  if (iVar2 == 0) {
    iVar2 = FUN_000152f0(param_1,param_2);
    if (iVar2 != 0xff) {
      return (int)(short)((short)iVar2 + 0xf);
    }
    return 0xff;
  }
  iVar2 = FUN_0001e170();
  if ((((iVar2 != 0) && (iVar2 = FUN_00014434(), param_2 < iVar2)) && (DAT_0007f7bc != 0)) &&
     (DAT_0007f7b8 != 0)) {
    pthread_mutex_lock(DAT_00014d5c);
    sVar1 = *(short *)(*(int *)(*(int *)(DAT_0007f7b8 + param_1 * 4) + 8) + param_2 * 6 + 2);
    pthread_mutex_unlock(DAT_00014d5c);
    return (int)sVar1;
  }
  return 0xff;
}

