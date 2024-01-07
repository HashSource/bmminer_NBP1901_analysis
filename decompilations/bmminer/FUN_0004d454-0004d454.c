
undefined4 FUN_0004d454(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_6c;
  undefined4 local_68;
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
  
  FUN_0004f90c(param_4,"<buffer>");
  if (param_1 == 0) {
    FUN_0004c0cc(param_4,0,4,"wrong arguments");
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_5c = &local_6c;
    local_60 = &LAB_0004c04c;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0;
    local_3c = 0;
    local_48 = 1;
    local_6c = param_1;
    local_68 = param_2;
    iVar1 = FUN_0004d954(auStack_38);
    if (iVar1 == 0) {
      local_24 = 0xffffffff;
      local_2c = param_3;
      uVar2 = FUN_0004d288(&local_60,param_3,param_4);
      FUN_0004c1fc(&local_60);
    }
  }
  return uVar2;
}

