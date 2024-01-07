
void FUN_00050c38(undefined4 param_1,int param_2)

{
  uint local_14 [2];
  
  FUN_00051a20(0,param_1,0,0x18,local_14);
  if (param_2 == 0) {
    local_14[0] = local_14[0] & 0xffbfffff | 0xf0000000;
  }
  else {
    local_14[0] = local_14[0] & 0xfffffff | 0x400000;
  }
  FUN_0004fa10(param_1,1,0,0x18,local_14[0]);
  return;
}

