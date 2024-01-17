
undefined4 FUN_0004ffe8(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 < 0x2dc6c1) {
    cVar3 = FUN_0005f880(25000000,param_2 << 3);
    FUN_00051a20(0,param_1,0,0x18,&local_24);
    local_24._0_2_ = CONCAT11(local_24._1_1_ & 0xe0 | cVar3 - 1U & 0x1f,(undefined)local_24);
    local_24 = CONCAT13(local_24._3_1_ & 0xf0 | (byte)(cVar3 - 1U) >> 5,
                        CONCAT12(local_24._2_1_,(undefined2)local_24)) & 0xfffeffff;
  }
  else {
    cVar3 = FUN_0005f880(100000000,param_2 << 3);
    FUN_00051a20(0,param_1,0,0x68,&local_20);
    FUN_00051a20(0,param_1,0,0x28,&local_1c);
    uVar1 = local_20;
    local_20 = (uint)(local_20._3_1_ & 0xdf | 0x40) << 0x18;
    local_20 = CONCAT22(local_20._2_2_,(short)uVar1) & 0xf000c088 | 0x700111;
    FUN_0004fa10(param_1,1,0,0x68,local_20);
    usleep(10000);
    FUN_0004fa10(param_1,1,0,0x68,local_20);
    usleep(10000);
    uVar2 = local_1c >> 8;
    uVar1 = CONCAT13(local_1c._3_1_,0x3000f) & 0x30ffffff;
    local_1c._0_1_ = (undefined)uVar1;
    local_1c = CONCAT22((short)(uVar1 >> 0x10),
                        CONCAT11(~((byte)~(byte)((uVar2 << 0x19) >> 0x18) >> 1),(undefined)local_1c)
                       ) & 0xffff8fff | 0x6000000;
    FUN_0004fa10(param_1,1,0,0x28,local_1c);
    usleep(10000);
    FUN_00051a20(0,param_1,0,0x18,&local_24);
    local_24._0_2_ = CONCAT11(local_24._1_1_ & 0xe0 | cVar3 - 1U & 0x1f,(undefined)local_24);
    local_24 = CONCAT13(local_24._3_1_ & 0xf0 | (byte)(cVar3 - 1U) >> 5,
                        CONCAT12(local_24._2_1_,(undefined2)local_24)) | 0x10000;
  }
  FUN_0004fa10(param_1,1,0,0x18,local_24);
  usleep(50000);
  FUN_00045cbc(param_1,param_2);
  return 0;
}

