
undefined4 FUN_000188a0(int param_1,undefined4 param_2,uint *param_3)

{
  char acStack_808 [2056];
  
  if ((DAT_0007f814 != 0) && (*(char *)(DAT_0007f814 + 0x1c) != '\0')) {
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)*(ushort *)(*(int *)(DAT_0007f814 + param_1 * 4) + 0x3c);
      return 0;
    }
    return 0;
  }
  if (DAT_0007eb9c < 4) {
    return 0xffff;
  }
  snprintf(acStack_808,0x800,"No work mode hash rate, chain = %d, mode = %d.\n",param_1,param_2);
  FUN_0002e584(3,acStack_808,0);
  return 0xffff;
}

