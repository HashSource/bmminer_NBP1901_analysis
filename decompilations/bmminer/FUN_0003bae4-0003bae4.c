
undefined4 FUN_0003bae4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char acStack_818 [2048];
  
  uVar1 = FUN_0003b8a0(param_1,DAT_004fcb44 + 1);
  iVar2 = FUN_0003b94c(param_1,DAT_004fcb44 + 1);
  iVar3 = FUN_0003ba18(param_1,DAT_004fcb44 + 1);
  uVar4 = FUN_0003ba18(param_1,DAT_004fcb44 + 0x405);
  uVar5 = *(uint *)(*DAT_004fcb44 + 0x14);
  if (uVar1 < uVar5) {
    uVar1 = *(uint *)(*DAT_004fcb44 + 0x1c);
    if ((uint)(iVar3 - iVar2) < uVar1) {
      if (uVar4 <= uVar5) {
        return 0;
      }
      if (3 < DAT_0007eb9c) {
        snprintf(acStack_818,0x800,
                 "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n",param_1
                 ,uVar4,uVar5);
        goto LAB_0003bc2c;
      }
    }
    else if (3 < DAT_0007eb9c) {
      snprintf(acStack_818,0x800,
               "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n"
               ,param_1,iVar3,iVar2,iVar3 - iVar2,uVar1);
LAB_0003bc2c:
      FUN_0002e584(3,acStack_818,0);
      return 1;
    }
  }
  else if (3 < DAT_0007eb9c) {
    snprintf(acStack_818,0x800,"chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n",
             param_1,uVar1,uVar5);
    goto LAB_0003bc2c;
  }
  return 1;
}

