
void FUN_00020a50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_810 [2052];
  
  iVar1 = DAT_0007f8f4;
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"error_code = %d\n",DAT_0007f8f4);
    FUN_0002e584(4,acStack_810,0);
  }
  uVar2 = FUN_0004e990(iVar1,iVar1 >> 0x1f);
  FUN_0004efd4(param_1,"error_code",uVar2);
  return;
}

