
int FUN_00048f00(void)

{
  uint uVar1;
  int iVar2;
  char acStack_810 [2048];
  
  if ((DAT_00505180 == 0) && (iVar2 = FUN_00048abc(), iVar2 < 0)) {
    snprintf(acStack_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_00048f98);
    FUN_0002e584(0,acStack_810,0);
    return iVar2;
  }
  uVar1 = FUN_00048d38();
  if (uVar1 < 0x100) {
    iVar2 = FUN_00048834(DAT_0050517c,uVar1 & 0xff);
  }
  else {
    iVar2 = -0x7ffffcff;
  }
  return iVar2;
}

