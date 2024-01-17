
undefined4 FUN_0004fcbc(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined4 local_1c;
  
  FUN_0004fa10();
  usleep(10000);
  if (param_2 == 0) {
    FUN_00051a20(1,param_1,param_3,0xb0,&local_1c);
  }
  else {
    FUN_00051a20(0,param_1,0,0xb0,&local_1c);
  }
  uVar2 = (undefined)local_1c;
  uVar4 = local_1c._2_1_;
  uVar3 = local_1c._1_1_;
  local_1c = (uint)(local_1c._3_1_ & 0x33 | 0x20) << 0x18;
  uVar1 = CONCAT31(local_1c._1_3_,uVar2) & 0xffffffb4;
  local_1c._3_1_ = (byte)(uVar1 >> 0x18);
  uVar1 = CONCAT13(local_1c._3_1_,CONCAT12(uVar4,(short)uVar1)) & 0xfffbffff;
  local_1c = CONCAT22((short)(uVar1 >> 0x10),CONCAT11(uVar3,(char)uVar1)) & 0xfffff0ff | 0x783143;
  FUN_0004fa10(param_1,param_2,param_3,0xb0,local_1c);
  usleep(10000);
  FUN_0004fa10(param_1,param_2,param_3,0xbc,param_4 & 7 | 0x1f8);
  usleep(10000);
  FUN_0004fa10(param_1,param_2,param_3,0xb0,local_1c);
  usleep(10000);
  return 0;
}

