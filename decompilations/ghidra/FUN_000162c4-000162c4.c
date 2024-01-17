
void FUN_000162c4(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined local_19 [5];
  
  if (param_2 == 0) {
    local_19[0] = 4;
  }
  else {
    local_19[0] = 0x44;
  }
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_00014434();
    if (iVar3 <= iVar4) break;
    cVar1 = FUN_0001e180(iVar4);
    cVar2 = FUN_0001e160();
    FUN_000142bc(param_1,cVar1 * cVar2,9,1,local_19);
    iVar4 = iVar4 + 1;
  }
  return;
}

