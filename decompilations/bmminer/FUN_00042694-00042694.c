
undefined4 FUN_00042694(void)

{
  undefined4 uVar1;
  
  if (DAT_00505020 == 0) {
    FUN_00042368();
    FUN_00040794();
    uVar1 = FUN_00042368();
    FUN_00040ad8(uVar1,1);
    FUN_00042388(2);
    FUN_00040794();
    uVar1 = FUN_00042388(2);
    FUN_00040ad8(uVar1,1);
    FUN_00042388(0x100);
    FUN_00040794();
    uVar1 = FUN_00042388(0x100);
    FUN_00040ad8(uVar1,0);
    FUN_00042388(0x101);
    FUN_00040794();
    uVar1 = FUN_00042388(0x101);
    FUN_00040ad8(uVar1,0);
    DAT_00505020 = 1;
  }
  return 0;
}

