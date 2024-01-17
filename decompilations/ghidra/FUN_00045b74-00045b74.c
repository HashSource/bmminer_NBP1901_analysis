
undefined4 FUN_00045b74(void)

{
  int iVar1;
  undefined auStack_54 [4];
  sysinfo sStack_50;
  
  DAT_00505108 = FUN_00040408();
  DAT_00505114 = DAT_00505108 + 0x210000;
  iVar1 = DAT_00505108 + 0x200000;
  DAT_0050510c = iVar1;
  sysinfo(&sStack_50);
  if (sStack_50.totalram < 0x3b9aca01) {
    if (sStack_50.totalram < 0x1dcd6501) {
      if (sStack_50.totalram < 0xbebc201) {
        DAT_00505118 = 0x7000000;
      }
      else {
        DAT_00505118 = 0xf000000;
      }
    }
    else {
      DAT_00505118 = 0x1f000000;
    }
  }
  else {
    DAT_00505118 = 0x3f000000;
  }
  DAT_00505110 = iVar1;
  FUN_00044c24();
  FUN_00040390(0x29,DAT_00505118 + 0x200000);
  FUN_00040314(0x29,auStack_54);
  FUN_00045acc();
  FUN_00045b34();
  return 0;
}

