
int FUN_00057b80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0005f4d8(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0005df98(2,"src/level_list.c",0x55,"zlog_level_new fail");
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_0005d5f0(param_1,*puVar1,puVar1);
    if (iVar2 != 0) {
      FUN_0005df98(2,"src/level_list.c",0x5a,"zc_arraylist_set fail");
      FUN_0005df98(2,"src/level_list.c",0x60,"line[%s]",param_2);
      FUN_0005f474(puVar1);
      iVar2 = -1;
    }
  }
  return iVar2;
}

