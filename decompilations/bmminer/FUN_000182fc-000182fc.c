
undefined4 FUN_000182fc(int param_1,uint *param_2)

{
  char acStack_808 [2056];
  
  if ((DAT_0007f814 != 0) && (*(char *)(DAT_0007f814 + 0x1c) != '\0')) {
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)*(byte *)(*(int *)(DAT_0007f814 + param_1 * 4) + 0xf);
      return 0;
    }
    return 0xfffffffe;
  }
  if (DAT_0007eb9c < 4) {
    return 0xffffffff;
  }
  snprintf(acStack_808,0x800,"No chip bin, chain = %d\n",param_1);
  FUN_0002e584(3,acStack_808,0);
  return 0xffffffff;
}

