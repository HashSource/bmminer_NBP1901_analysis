
undefined4 FUN_00026104(void)

{
  int iVar1;
  undefined4 uVar2;
  sysinfo local_48;
  
  iVar1 = sysinfo(&local_48);
  if (iVar1 != 0) {
    uVar2 = FUN_00026094();
    return uVar2;
  }
  return local_48.uptime;
}

