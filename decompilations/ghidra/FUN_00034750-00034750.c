
void FUN_00034750(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0003388c();
  iVar2 = FUN_0001e29c(param_1);
  if (iVar2 != 0) {
    param_1 = param_1 & 0xff;
    iVar2 = FUN_0001e160();
    FUN_00050cc4(param_1,param_2 * iVar2,1);
    usleep(10000);
    iVar2 = FUN_0001e160();
    FUN_00050cc4(param_1,param_2 * iVar2,0);
    usleep(10000);
    iVar2 = FUN_0001e160();
    FUN_000515d0(param_1,param_2 * iVar2,uVar1 & 0xff,DAT_00482a70);
    usleep(10000);
    iVar2 = FUN_0001e160();
    FUN_00051668(param_1,param_2 * iVar2,(char)(uVar1 >> 8),(char)(uVar1 >> 0x10),0);
  }
  return;
}

