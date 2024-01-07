
void FUN_00058238(int **param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *__ptr;
  int iVar4;
  
  piVar1 = *param_1;
  if (param_2 == 0 || piVar1 == (int *)0x0) {
    FUN_0005df98(2,"src/zc_hashtable.c",0xf0,"a_table[%p] or a_key[%p] is NULL, just do nothing",
                 piVar1,param_2);
  }
  else {
    uVar2 = (*(code *)piVar1[3])(param_2);
    FUN_0005fadc(uVar2,piVar1[2]);
    __ptr = *(undefined4 **)(piVar1[1] + extraout_r1 * 4);
    while( true ) {
      if (__ptr == (undefined4 *)0x0) {
        FUN_0005df98(2,"src/zc_hashtable.c",0xfb,"p[%p] not found in hashtable",0);
        return;
      }
      iVar3 = (*(code *)piVar1[4])(param_2,__ptr[1]);
      if (iVar3 != 0) break;
      __ptr = (undefined4 *)__ptr[4];
    }
    if ((code *)piVar1[5] != (code *)0x0) {
      (*(code *)piVar1[5])(__ptr[1]);
    }
    if ((code *)piVar1[6] != (code *)0x0) {
      (*(code *)piVar1[6])(__ptr[2]);
    }
    iVar4 = __ptr[4];
    iVar3 = __ptr[3];
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0xc) = iVar3;
      iVar3 = __ptr[3];
    }
    if (iVar3 == 0) {
      FUN_0005fadc(*__ptr,piVar1[2]);
      *(int *)(piVar1[1] + extraout_r1_00 * 4) = iVar4;
    }
    else {
      *(int *)(iVar3 + 0x10) = iVar4;
    }
    free(__ptr);
    *piVar1 = *piVar1 + -1;
  }
  return;
}

