
undefined4 FUN_000506f8(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  
  if (param_3 < 4) {
    cVar1 = "ptx|find div fail, use default value"[param_3];
    FUN_00051a20(1,param_1,param_2,cVar1,&local_1c);
    bVar2 = (byte)local_1c & 0x30;
    bVar3 = local_1c._1_1_ & 0x30;
    uVar4 = FUN_0004fa10(param_1,0,param_2,cVar1,local_1c);
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

