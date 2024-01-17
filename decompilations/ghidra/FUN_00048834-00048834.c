
void FUN_00048834(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  ushort local_14;
  char local_12;
  undefined local_11;
  undefined4 local_10;
  undefined4 local_c;
  
  local_11 = (undefined)((uint)(param_2 + 0x89) >> 8);
  local_12 = (byte)param_2 + 0x89;
  local_18 = 0x8306aa55;
  local_10 = 0;
  local_14 = (ushort)(byte)param_2;
  local_c = 0;
  iVar1 = FUN_00048520(param_1,&local_18,8,&local_10,8);
  if (iVar1 != 0) {
    FUN_000487e8(iVar1);
  }
  return;
}

