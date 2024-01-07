
void FUN_00050288(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80000000;
  }
  FUN_0004fa10(param_1,1,0,0xc,uVar1 | param_3 & 0xffff);
  return;
}

