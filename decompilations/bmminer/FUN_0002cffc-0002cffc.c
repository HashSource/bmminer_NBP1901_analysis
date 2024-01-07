
void FUN_0002cffc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 local_820 [1024];
  
  if (DAT_0007eb9c < 4) {
    uVar1 = FUN_0001e120();
    uVar4 = DAT_0007eb9c;
  }
  else {
    snprintf((char *)local_820,0x800,"\n asic nonce number for chain[%d] asic[%d]...\n",param_1,
             param_2);
    FUN_0002ea54(3,local_820,0);
    uVar1 = FUN_0001e120();
    uVar4 = DAT_0007eb9c;
  }
  DAT_0007eb9c = uVar4;
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      while (uVar4 < 4) {
LAB_0002d05c:
        uVar2 = uVar2 + 1;
        if (uVar1 == uVar2) goto LAB_0002d0ec;
      }
      uVar3 = uVar2 + 1;
      snprintf((char *)local_820,0x800,"core[%03d]=%-8d",uVar2,
               (&DAT_00082128)[uVar2 + (param_2 + param_1 * 0x100) * 0x400]);
      FUN_0002ea54(3,local_820,0);
      uVar4 = DAT_0007eb9c;
      if ((uVar3 % 10 != 0) || (DAT_0007eb9c < 4)) goto LAB_0002d05c;
      local_820[0] = 10;
      FUN_0002ea54(3,local_820);
      uVar2 = uVar3;
      uVar4 = DAT_0007eb9c;
    } while (uVar1 != uVar3);
  }
LAB_0002d0ec:
  if (3 < uVar4) {
    local_820[0] = 10;
    FUN_0002ea54(3,local_820,0);
  }
  return;
}

