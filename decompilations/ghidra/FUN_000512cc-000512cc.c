
void FUN_000512cc(undefined4 param_1,uint param_2)

{
  undefined4 local_14;
  
  FUN_00051a20(0,param_1,0,0x18,&local_14);
  local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xf7 | (byte)((param_2 & 1) << 3));
  FUN_0004fa10(param_1,1,0,0x18,local_14);
  return;
}

