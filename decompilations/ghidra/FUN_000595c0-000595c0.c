
int FUN_000595c0(int param_1,int param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x2084) == 0) {
    FUN_0005df98(2,"src/rule.c",0x182,"user defined record funcion for [%s] not set, no output",
                 param_1 + 0x1880);
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00057a1c(*(undefined4 *)(param_1 + 0x1878));
    if (iVar1 == 0) {
      local_14 = param_1 + 0x1c81;
      **(undefined **)(*(int *)(param_2 + 0x1c) + 4) = 0;
      local_1c = **(int **)(param_2 + 0x1c);
      local_18 = (*(int **)(param_2 + 0x1c))[1] - local_1c;
      iVar1 = (**(code **)(param_1 + 0x2084))(&local_1c);
      if (iVar1 != 0) {
        FUN_0005df98(2,"src/rule.c",0x191,"a_rule->record fail");
        iVar1 = -1;
      }
    }
    else {
      FUN_0005df98(2,"src/rule.c",0x187,"zlog_format_gen_msg fail");
      iVar1 = -1;
    }
  }
  return iVar1;
}

