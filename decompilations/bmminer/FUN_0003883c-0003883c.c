
undefined4 FUN_0003883c(undefined4 *param_1)

{
  char acStack_810 [2052];
  
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"[DEBUG] Send work one chain, chain = %d.\n",*param_1);
    FUN_0002e584(4,acStack_810,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      FUN_000387f8();
      return 0;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_004fcb3c + 4) + 0x1c))(*param_1,param_1[2]);
    param_1[1] = 1;
  }
  return 0;
}

