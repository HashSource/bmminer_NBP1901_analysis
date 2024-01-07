
void FUN_00050fdc(undefined4 param_1)

{
  uint local_c;
  
  FUN_00051a20(0,param_1,0,0x90,&local_c);
  local_c = local_c & 0xfffff7ff | 0x800008a;
  FUN_0004fa10(param_1,1,0,0x90,local_c);
  return;
}

