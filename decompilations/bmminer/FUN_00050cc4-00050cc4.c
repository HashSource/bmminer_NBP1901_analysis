
void FUN_00050cc4(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint local_14;
  
  FUN_00051a20(1,param_1,param_2,0x18,&local_14);
  if (param_3 == 0) {
    local_14 = local_14 & 0xffbfffff | 0xf0000000;
  }
  else {
    local_14 = local_14 & 0xfffffff | 0x400000;
  }
  FUN_0004fa10(param_1,0,param_2,0x18,local_14);
  return;
}

