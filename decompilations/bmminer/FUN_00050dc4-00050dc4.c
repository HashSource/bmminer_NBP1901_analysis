
void FUN_00050dc4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  FUN_0004fa10(param_1,0,param_2,0x3c,param_3 & 3 | 0x80008104);
  usleep(10000);
  FUN_0004fa10(param_1,0,param_2,0x3c,param_3 & 3 | 0x80000204);
  return;
}

