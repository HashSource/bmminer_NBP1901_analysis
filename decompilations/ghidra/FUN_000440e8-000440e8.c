
void FUN_000440e8(uint param_1)

{
  int iVar1;
  uint local_18;
  undefined2 local_14;
  undefined local_12;
  undefined local_11;
  
  if (param_1 < 0x10) {
    if ((*(int *)(&DAT_00505088 + param_1 * 8) == 0) || (*(int *)(&DAT_0050508c + param_1 * 8) == 0)
       ) {
      local_14 = 0;
      local_12 = 10;
      local_11 = (undefined)param_1;
      local_18 = param_1;
      iVar1 = FUN_000493d0(&local_18);
      if (-1 < iVar1) {
        *(int *)(&DAT_00505088 + param_1 * 8) = iVar1;
        *(undefined4 *)(&DAT_0050508c + param_1 * 8) = 1;
      }
    }
  }
  else {
    FUN_00044098();
  }
  return;
}

