
void FUN_00044074(void **param_1)

{
  if (param_1 == (void **)0x0) {
    return;
  }
  free(*param_1);
  free(param_1);
  return;
}

