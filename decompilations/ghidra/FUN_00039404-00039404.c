
void FUN_00039404(float param_1,int param_2)

{
  char acStack_818 [2052];
  
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_818,0x800,
             "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n"
             ,param_2,(double)param_1);
    FUN_0002e584(4,acStack_818,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      FUN_000388f4(DAT_004fcb3c);
      return;
    }
  }
  else if (*(float *)(DAT_004fcb3c + param_2 * 4 + 0x30) < param_1) {
    *(undefined *)(DAT_004fcb3c + param_2 + 0x1c) = 1;
  }
  return;
}

