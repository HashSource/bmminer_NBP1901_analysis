
void FUN_00044b54(char *param_1,size_t param_2)

{
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_18 = 0;
  local_14[0] = 0;
  FUN_00040314(0x1f,&local_18);
  FUN_00040314(0x20,local_14);
  snprintf(param_1,param_2,"%08x%08x",local_14[0],local_18);
  return;
}

