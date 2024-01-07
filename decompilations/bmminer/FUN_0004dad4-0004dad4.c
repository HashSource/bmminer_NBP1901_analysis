
undefined FUN_0004dad4(int *param_1)

{
  undefined uVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = param_1[1] + -1;
    param_1[1] = iVar2;
    uVar1 = *(undefined *)(*param_1 + iVar2);
    *(undefined *)(*param_1 + iVar2) = 0;
  }
  return uVar1;
}

