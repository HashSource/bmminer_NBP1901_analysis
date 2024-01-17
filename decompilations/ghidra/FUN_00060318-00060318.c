
void FUN_00060318(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_0006032c + 0x60320 + DAT_00060330);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
  }
  (*(code *)PTR___cxa_atexit_0007e184)(param_1,0,piVar1);
  return;
}

