
void FUN_0001ecdc(uint param_1,uint param_2,undefined4 param_3,int param_4,undefined param_5,
                 undefined param_6)

{
  if (param_4 != 0) {
    FUN_0004fa10(param_6,0,param_5,0x1c);
    return;
  }
  FUN_0004fa10(param_6,0,param_5,0x1c,
               (param_2 & 0xff) << 8 | (param_1 >> 1 & 0x7f) << 0x11 | 0x1000000);
  return;
}

