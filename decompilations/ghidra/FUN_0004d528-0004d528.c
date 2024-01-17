
undefined4 FUN_0004d528(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *local_60;
  int local_5c;
  undefined local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_24;
  
  pcVar3 = "<stdin>";
  if (stdin != param_1) {
    pcVar3 = "<stream>";
  }
  FUN_0004f90c(param_3,pcVar3);
  if (param_1 == 0) {
    FUN_0004c0cc(param_3,0,4,"wrong arguments");
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_60 = fgetc;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_48 = 1;
    local_5c = param_1;
    iVar1 = FUN_0004d954(auStack_38);
    if (iVar1 == 0) {
      local_24 = 0xffffffff;
      local_2c = param_2;
      uVar2 = FUN_0004d288(&local_60,param_2,param_3);
      FUN_0004c1fc(&local_60);
    }
  }
  return uVar2;
}

