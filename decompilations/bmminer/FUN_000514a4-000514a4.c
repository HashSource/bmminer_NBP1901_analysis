
undefined4 FUN_000514a4(undefined4 param_1)

{
  uint local_c;
  
  FUN_00051a20(0,param_1,0,0xb0,&local_c);
  local_c = local_c | 0x10;
  FUN_0004fa10(param_1,1,0,0xb0,local_c);
  usleep(30000);
  return 0;
}

