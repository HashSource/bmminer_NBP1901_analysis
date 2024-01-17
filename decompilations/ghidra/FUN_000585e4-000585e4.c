
void FUN_000585e4(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  memset((void *)(param_1 + 0x28),0,0x401);
  if (*(int *)(param_1 + 0x440) != 0) {
    FUN_0005d580();
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  return;
}

