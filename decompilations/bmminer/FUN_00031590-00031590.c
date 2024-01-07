
uint FUN_00031590(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar2 = 0xff;
    pbVar1 = (byte *)(param_1 + -1);
    uVar4 = 0xff;
    do {
      pbVar1 = pbVar1 + 1;
      uVar3 = uVar2 ^ *pbVar1;
      uVar2 = (byte)(&DAT_00065da4)[uVar3] ^ uVar4;
      uVar4 = (uint)(byte)(&DAT_00065ea4)[uVar3];
    } while ((byte *)(param_1 + (param_2 - 1U & 0xffff)) != pbVar1);
    return uVar2 | uVar4 << 8;
  }
  return 0xffff;
}

