
undefined4 FUN_000508e4(undefined4 param_1,int param_2,int param_3,undefined2 param_4)

{
  ushort uVar1;
  undefined uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 local_1c;
  
  FUN_00051a20(0,param_1,0,0xa4,&local_1c);
  if (param_2 == 0) {
    bVar4 = local_1c._3_1_ & 0x7f;
  }
  else {
    bVar4 = local_1c._3_1_ | 0x80;
  }
  local_1c = CONCAT13(bVar4,(undefined3)local_1c);
  uVar1 = (ushort)(local_1c >> 0x10);
  if (param_3 == 4) {
    local_1c._2_2_ = uVar1 & 0xcfff;
  }
  else if (param_3 == 8) {
    local_1c._2_2_ = uVar1 & 0xcfff | 0x1000;
  }
  else {
    if (param_3 != 0xc) {
      return 0xffffffff;
    }
    local_1c._2_2_ = (ushort)(CONCAT13(bVar4,(undefined3)local_1c) >> 0x10) & 0xcfff | 0x2000;
  }
  uVar2 = local_1c._3_1_;
  local_1c = CONCAT22(local_1c._2_2_,param_4);
  local_1c = CONCAT13(uVar2,(undefined3)local_1c) & 0xbfffffff;
  uVar3 = FUN_0004fa10(param_1,1,0,0xa4,local_1c);
  return uVar3;
}

