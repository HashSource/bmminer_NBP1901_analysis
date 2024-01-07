
undefined4 FUN_0004d38c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_68;
  undefined4 local_64;
  undefined *local_60;
  int *local_5c;
  undefined local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_24;
  
  FUN_0004f90c(param_3,"<string>");
  if (param_1 == 0) {
    FUN_0004c0cc(param_3,0,4,"wrong arguments");
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_60 = &LAB_0004c028;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_48 = 1;
    local_68 = param_1;
    local_5c = &local_68;
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

