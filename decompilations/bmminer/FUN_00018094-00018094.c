
undefined2 FUN_00018094(int param_1)

{
  int iVar1;
  char acStack_808 [2056];
  
  if ((DAT_0007f814 != 0) && (*(char *)(DAT_0007f814 + 0x1c) != '\0')) {
    iVar1 = *(int *)(DAT_0007f814 + param_1 * 4);
    return CONCAT11(*(undefined *)(iVar1 + 0x1b),*(undefined *)(iVar1 + 0x1c));
  }
  if (DAT_0007eb9c < 4) {
    return 0xffff;
  }
  snprintf(acStack_808,0x800,"No pcb version, chain = %d.\n",param_1);
  FUN_0002e584(3,acStack_808,0);
  return 0xffff;
}

