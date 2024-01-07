
void FUN_00046fe8(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_820;
  
  pcVar4 = "read return data";
  iVar5 = param_1;
  snprintf((char *)&local_820,0x800,"Dumping %u %s bytes from %p:\n",param_2,"read return data",
           param_1);
  FUN_0002e584(2,&local_820,0);
  if ((int)param_2 < 1) {
    return;
  }
  do {
    uVar3 = 0;
    do {
      while (uVar3 < param_2) {
        pbVar1 = (byte *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        snprintf((char *)&local_820,0x800,"%02x ",(uint)*pbVar1,pcVar4,iVar5);
        FUN_0002e584(2,&local_820,0);
        if (uVar3 == 0x10) goto LAB_000470ac;
      }
      uVar3 = uVar3 + 1;
      local_820 = &DAT_00202020;
      FUN_0002e584(2,&local_820,0);
    } while (uVar3 != 0x10);
LAB_000470ac:
    uVar3 = 0;
    do {
      while (uVar3 < param_2) {
        uVar2 = (uint)*(byte *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        if (0x5e < uVar2 - 0x20) {
          uVar2 = 0x2e;
        }
        snprintf((char *)&local_820,0x800,"%c",uVar2);
        FUN_0002e584(2,&local_820,0);
        if (uVar3 == 0x10) goto LAB_00047124;
      }
      uVar3 = uVar3 + 1;
      local_820 = (undefined *)CONCAT22(local_820._2_2_,0x20);
      FUN_0002e584(2,&local_820,0);
    } while (uVar3 != 0x10);
LAB_00047124:
    local_820 = (undefined *)CONCAT22(local_820._2_2_,10);
    param_1 = param_1 + 0x10;
    FUN_0002e584(2,&local_820,0);
    if ((int)param_2 < 0x11) {
      return;
    }
    param_2 = param_2 - 0x10;
  } while( true );
}

