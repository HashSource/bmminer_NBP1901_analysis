
void FUN_00050a18(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_00051a20(1,param_1,param_2,0x18,&local_14);
  if (param_3 == 0) {
    bVar1 = (byte)local_14 & 0xfb;
  }
  else {
    bVar1 = (byte)local_14 | 4;
  }
  local_14 = CONCAT31(local_14._1_3_,bVar1);
  FUN_0004fa10(param_1,0,param_2,0x18,local_14);
  return;
}

