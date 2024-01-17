
void FUN_00045ed0(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_818;
  
  pcVar4 = "read return data";
  iVar5 = param_1;
  snprintf((char *)&local_818,0x800,"Dumping %u %s bytes from %p:\n",param_2,"read return data",
           param_1);
  uVar3 = 0;
  FUN_0002e584(2,&local_818);
  do {
    while (param_2 <= uVar3) {
      uVar3 = uVar3 + 1;
      local_818 = &DAT_00202020;
      FUN_0002e584(2,&local_818,0);
      if (uVar3 == 0x10) goto LAB_00045f88;
    }
    pbVar1 = (byte *)(param_1 + uVar3);
    uVar3 = uVar3 + 1;
    snprintf((char *)&local_818,0x800,"%02x ",(uint)*pbVar1,pcVar4,iVar5);
    FUN_0002e584(2,&local_818,0);
  } while (uVar3 != 0x10);
LAB_00045f88:
  uVar3 = 0;
  do {
    while (param_2 <= uVar3) {
      uVar3 = uVar3 + 1;
      local_818 = (undefined *)CONCAT22(local_818._2_2_,0x20);
      FUN_0002e584(2,&local_818,0);
      if (uVar3 == 0x10) goto LAB_00046000;
    }
    uVar2 = (uint)*(byte *)(param_1 + uVar3);
    uVar3 = uVar3 + 1;
    if (0x5e < uVar2 - 0x20) {
      uVar2 = 0x2e;
    }
    snprintf((char *)&local_818,0x800,"%c",uVar2);
    FUN_0002e584(2,&local_818,0);
  } while (uVar3 != 0x10);
LAB_00046000:
  local_818 = (undefined *)CONCAT22(local_818._2_2_,10);
  FUN_0002e584(2,&local_818,0);
  return;
}

