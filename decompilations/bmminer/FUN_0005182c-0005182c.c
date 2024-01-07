
void FUN_0005182c(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 local_14;
  
  FUN_00051a20(0,param_1,0,0x34,&local_14);
  if (param_2 == 0) {
    bVar1 = (byte)local_14 & 0xf7;
  }
  else {
    bVar1 = (byte)local_14 | 8;
  }
  local_14 = CONCAT31(local_14._1_3_,bVar1);
  FUN_0004fa10(param_1,1,0,0x34,local_14);
  return;
}

