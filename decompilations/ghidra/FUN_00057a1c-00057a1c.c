
undefined4 FUN_00057a1c(int param_1,int param_2)

{
  int *piVar1;
  int unaff_r4;
  int unaff_r5;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x2004);
  iVar2 = piVar1[1];
  if (0 < iVar2) {
    unaff_r4 = 0;
    unaff_r5 = param_2;
  }
  (*(undefined4 **)(param_2 + 0x1c))[1] = **(undefined4 **)(param_2 + 0x1c);
  if (0 < iVar2) {
    do {
      iVar2 = *(int *)(*piVar1 + unaff_r4 * 4);
      unaff_r4 = unaff_r4 + 1;
      iVar2 = (**(code **)(iVar2 + 0x2428))(iVar2,unaff_r5);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      piVar1 = *(int **)(param_1 + 0x2004);
    } while (unaff_r4 < piVar1[1]);
  }
  return 0;
}

