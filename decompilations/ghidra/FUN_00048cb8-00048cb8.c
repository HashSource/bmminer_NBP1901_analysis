
int FUN_00048cb8(undefined4 param_1)

{
  int iVar1;
  char acStack_818 [2052];
  
  if ((DAT_00505180 == 0) && (iVar1 = FUN_00048abc(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_00048d34);
    FUN_0002e584(0,acStack_818,0);
  }
  else {
    iVar1 = FUN_00048834(DAT_0050517c,param_1);
  }
  return iVar1;
}

