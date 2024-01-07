
int FUN_00059cd4(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x2084) == 0) {
    FUN_0005df98(2,"src/rule.c",0x19d,"user defined record funcion for [%s] not set, no output",
                 param_1 + 0x1880);
    iVar3 = -1;
  }
  else {
    piVar4 = *(int **)(param_1 + 0x1434);
    puVar1 = (undefined *)**(undefined4 **)(param_2 + 0x10);
    iVar3 = piVar4[1];
    (*(undefined4 **)(param_2 + 0x10))[1] = puVar1;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(*piVar4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(iVar2 + 0x242c))(iVar2,param_2);
        if (iVar2 != 0) {
          FUN_0005df98(2,"src/rule.c",0x1a1,"zlog_spec_gen_path fail");
          return -1;
        }
        piVar4 = *(int **)(param_1 + 0x1434);
      } while (iVar3 < piVar4[1]);
      puVar1 = *(undefined **)(*(int *)(param_2 + 0x10) + 4);
    }
    *puVar1 = 0;
    iVar3 = FUN_00057a1c(*(undefined4 *)(param_1 + 0x1878),param_2);
    if (iVar3 == 0) {
      **(undefined **)(*(int *)(param_2 + 0x1c) + 4) = 0;
      local_24 = **(int **)(param_2 + 0x1c);
      local_1c = **(undefined4 **)(param_2 + 0x10);
      local_20 = (*(int **)(param_2 + 0x1c))[1] - local_24;
      iVar3 = (**(code **)(param_1 + 0x2084))(&local_24);
      if (iVar3 != 0) {
        FUN_0005df98(2,"src/rule.c",0x1ae,"a_rule->record fail");
        iVar3 = -1;
      }
    }
    else {
      FUN_0005df98(2,"src/rule.c",0x1a4,"zlog_format_gen_msg fail");
      iVar3 = -1;
    }
  }
  return iVar3;
}

