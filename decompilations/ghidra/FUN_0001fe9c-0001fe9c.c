
void FUN_0001fe9c(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined auStack_a10 [512];
  char acStack_810 [2052];
  
  memset(auStack_a10,0,0x200);
  if (param_1 != 0 && param_2 < 4) {
    FUN_0001e894(param_2,auStack_a10);
    uVar1 = FUN_0004e744(auStack_a10);
    FUN_0004efd4(param_1,&DAT_00061c3c,uVar1);
    return;
  }
  if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
    return;
  }
  snprintf(acStack_810,0x800,"%s: input bad param\n",DAT_0001ff8c);
  FUN_0002e584(3,acStack_810,0);
  return;
}

