
void FUN_00032530(void)

{
  int iVar1;
  
  iVar1 = FUN_00036548();
  if (DAT_0007edc8 == 0) {
    if (iVar1 == 0) {
switchD_000325a0_caseD_11:
      FUN_00042728();
      FUN_00042784();
      return;
    }
    if (iVar1 == 1) {
      DAT_0007edd4 = DAT_0007edd4 ^ 1;
      if (DAT_0007edd4 == 0) {
        FUN_00042734();
      }
      else {
        FUN_00042728();
      }
    }
    else {
switchD_000325a0_caseD_2:
      FUN_00042734();
    }
    DAT_0007edd4 = DAT_0007edd4 ^ 1;
    if (DAT_0007edd4 != 0) {
      FUN_00042778();
      return;
    }
LAB_00032588:
    FUN_00042784();
    return;
  }
  switch(DAT_00482a64) {
  case 0:
  case 1:
    return;
  case 2:
    goto switchD_000325a0_caseD_2;
  default:
    DAT_0007edd4 = DAT_0007edd4 ^ 1;
    if (DAT_0007edd4 == 0) {
      FUN_00042734();
    }
    else {
      FUN_00042728();
    }
    goto LAB_00032588;
  case 0x11:
    goto switchD_000325a0_caseD_11;
  }
}

