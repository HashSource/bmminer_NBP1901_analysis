
byte * FUN_0004df70(byte *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uStack_14;
  
  if (param_2 == 0) {
    return param_1;
  }
  uVar3 = (uint)*param_1;
  uVar4 = FUN_0004de1c(uVar3);
  uVar1 = (uint)uVar4;
  if ((uVar1 != 0) &&
     ((uVar1 == 1 ||
      ((uVar1 <= (uint)((ulonglong)uVar4 >> 0x20) &&
       (iVar2 = FUN_0004de88(param_1,uVar1,&uStack_14), uVar3 = uStack_14, iVar2 != 0)))))) {
    uStack_14 = uVar3;
    if (param_3 != (uint *)0x0) {
      *param_3 = uStack_14;
    }
    return param_1 + uVar1;
  }
  return (byte *)0x0;
}

