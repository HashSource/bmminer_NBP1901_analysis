
void FUN_0004c1fc(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0x100) {
    FUN_0004d988(param_1 + 0x28);
    return;
  }
  FUN_0004d898(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_0004d988(param_1 + 0x28);
  return;
}

