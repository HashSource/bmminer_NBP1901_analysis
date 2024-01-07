
uint FUN_000316d8(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar3;
  byte *pbVar2;
  
  if (param_2 != 0) {
    uVar3 = 0xffffffff;
    pbVar2 = param_1;
    do {
      pbVar1 = pbVar2 + 1;
      uVar3 = *(uint *)(&DAT_00065fa4 + ((*pbVar2 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      pbVar2 = pbVar1;
    } while (pbVar1 != param_1 + param_2);
    return ~uVar3;
  }
  return 0;
}

