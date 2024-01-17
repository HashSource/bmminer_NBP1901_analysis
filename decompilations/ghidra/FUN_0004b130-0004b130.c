
undefined4 FUN_0004b130(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_34 [32];
  
  if ((((param_4 & 0x200) == 0) && ((param_1 == (uint *)0x0 || (1 < *param_1)))) ||
     (iVar1 = FUN_0004b91c(auStack_34), iVar1 != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0004a920(param_1,param_4,0,auStack_34,param_2,param_3);
    FUN_0004b998(auStack_34);
  }
  return uVar2;
}

