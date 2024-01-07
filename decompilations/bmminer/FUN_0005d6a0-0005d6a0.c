
undefined4 FUN_0005d6a0(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1[1];
  if (iVar3 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = (*param_2)(*(undefined4 *)(*param_1 + iVar4 * 4),param_3);
      iVar3 = param_1[1];
      if (0 < iVar1) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar4 == iVar3) {
    uVar2 = FUN_0005d5f0(param_1,iVar4,param_3);
    return uVar2;
  }
  iVar5 = *param_1;
  iVar1 = iVar4 * 4;
  if (*(int *)(iVar5 + iVar4 * 4) != 0) {
    if (param_1[2] <= iVar3) {
      iVar3 = FUN_0005d428(param_1,param_1 + 2,0);
      if (iVar3 != 0) {
        FUN_0005df98(2,"src/zc_arraylist.c",0x6b,"expand_internal fail");
        return 0xffffffff;
      }
      iVar5 = *param_1;
      iVar3 = param_1[1];
    }
    memmove((void *)(iVar5 + iVar1 + 4),(void *)(iVar5 + iVar1),(iVar3 - iVar4) * 4);
    iVar3 = param_1[1];
    *(undefined4 *)(*param_1 + iVar1) = param_3;
    param_1[1] = iVar3 + 1;
    return 0;
  }
  *(undefined4 *)(iVar5 + iVar4 * 4) = param_3;
  return 0;
}

