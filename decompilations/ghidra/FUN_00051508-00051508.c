
undefined4 FUN_00051508(undefined4 param_1,undefined4 param_2)

{
  uint local_14 [2];
  
  FUN_00051a20(1,param_1,param_2,0xb0,local_14);
  local_14[0] = local_14[0] | 0x10;
  FUN_0004fa10(param_1,0,param_2,0xb0,local_14[0]);
  usleep(30000);
  return 0;
}

