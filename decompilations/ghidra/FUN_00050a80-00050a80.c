
void FUN_00050a80(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_00051a20(1,param_1,param_2,0x18,&local_14);
  if (param_3 == 0) {
    bVar1 = local_14._1_1_ & 0xdf;
  }
  else {
    bVar1 = local_14._1_1_ | 0x20;
  }
  FUN_0004fa10(param_1,0,param_2,0x18,local_14);
  return;
}

