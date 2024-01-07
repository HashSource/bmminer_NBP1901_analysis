
float FUN_0003a828(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + (param_1 + 0x202800) * 4);
  iVar1 = FUN_0001e130();
  iVar2 = FUN_0001e0f0();
  return (float)(ulonglong)uVar3 / (float)(longlong)(iVar2 * iVar1 * 8);
}

