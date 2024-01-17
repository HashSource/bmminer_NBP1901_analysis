
uint FUN_0004c23c(int *param_1)

{
  ssize_t sVar1;
  uint uVar2;
  byte abStack_9 [9];
  
  sVar1 = read(*param_1,abStack_9,1);
  if (sVar1 == 1) {
    uVar2 = (uint)abStack_9[0];
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

