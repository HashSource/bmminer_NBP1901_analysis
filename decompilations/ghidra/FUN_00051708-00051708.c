
void FUN_00051708(undefined4 param_1,uint param_2)

{
  if (param_2 != 0) {
    param_2 = 0x40;
  }
  FUN_0004fa10(param_1,1,0,0x3c,param_2 & 0xff | 0x80008d00);
  return;
}

