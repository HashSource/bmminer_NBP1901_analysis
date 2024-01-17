
void FUN_0002932c(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = sscanf(param_1,"%d-%d",param_2);
  if (iVar1 == 1) {
    *param_3 = *param_2;
  }
  return;
}

