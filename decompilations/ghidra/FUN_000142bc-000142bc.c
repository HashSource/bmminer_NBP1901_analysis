
int FUN_000142bc(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,byte *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_4 == 0) {
    iVar2 = 0;
    iVar3 = 2;
    do {
      FUN_0001427c(param_2,param_1);
      FUN_0001ecdc(0x98,param_3,0,0,param_2,param_1);
      usleep(1000);
      uVar1 = FUN_0001427c(param_2,param_1);
      usleep(1000);
      if ((uVar1 << 0x10) >> 0x18 == param_3) {
        if (iVar2 != 0) {
          return 0;
        }
        if ((uVar1 & 0xff) == 0) {
          return 0;
        }
        *param_5 = (byte)uVar1;
        return 1;
      }
      bVar4 = iVar3 != 1;
      iVar2 = 1;
      iVar3 = iVar2;
    } while (bVar4);
  }
  else {
    iVar3 = 0;
    iVar2 = 2;
    do {
      FUN_0001427c(param_2,param_1);
      FUN_0001ecdc(0x98,param_3,*param_5,1,param_2,param_1);
      FUN_0001427c(param_2,param_1);
      usleep(1000);
      FUN_0001427c(param_2,param_1);
      FUN_0001ecdc(0x98,param_3,0,0,param_2,param_1);
      uVar1 = FUN_0001427c(param_2,param_1);
      usleep(1000);
      if (((uVar1 << 0x10) >> 0x18 == param_3) || ((uVar1 & 0xff) == (uint)*param_5)) {
        if (iVar3 != 0) {
          return 0;
        }
        return param_4;
      }
      bVar4 = iVar2 != 1;
      iVar3 = 1;
      iVar2 = iVar3;
    } while (bVar4);
  }
  return 0;
}

