
/* WARNING: Removing unreachable block (ram,0x0004fc9c) */

undefined4 FUN_00051478(undefined4 param_1)

{
  undefined4 uStack_14;
  
  FUN_0004fa10();
  usleep(10000);
  FUN_00051a20(0,param_1,0,0xb0,&uStack_14);
  uStack_14 = 0x207c310b;
  FUN_0004fa10(param_1,1,0,0xb0,0x207c310b);
  usleep(10000);
  return 0;
}

