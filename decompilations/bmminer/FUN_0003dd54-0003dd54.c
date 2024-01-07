
bool FUN_0003dd54(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c [2];
  
  DAT_0099ee20 = *param_2;
  local_1c[0] = 0;
  do {
    iVar1 = FUN_0003dec0(param_1,param_2,local_1c,param_3);
  } while (iVar1 == 1);
  return iVar1 == 0;
}

