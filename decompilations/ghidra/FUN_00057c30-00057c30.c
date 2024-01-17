
int FUN_00057c30(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0005d4c0(FUN_0005f474);
  if (iVar1 == 0) {
    FUN_0005df98(2,"src/level_list.c",0x3e,"zc_arraylist_new fail");
  }
  else {
    iVar2 = FUN_00057b80(iVar1,"* = 0, LOG_INFO");
    if ((((((iVar2 != 0) || (iVar2 = FUN_00057b80(iVar1,"DEBUG = 20, LOG_DEBUG"), iVar2 != 0)) ||
          (iVar2 = FUN_00057b80(iVar1,"INFO = 40, LOG_INFO"), iVar2 != 0)) ||
         ((iVar2 = FUN_00057b80(iVar1,"NOTICE = 60, LOG_NOTICE"), iVar2 != 0 ||
          (iVar2 = FUN_00057b80(iVar1,"WARN = 80, LOG_WARNING"), iVar2 != 0)))) ||
        ((iVar2 = FUN_00057b80(iVar1,"ERROR = 100, LOG_ERR"), iVar2 != 0 ||
         ((iVar2 = FUN_00057b80(iVar1,"FATAL = 120, LOG_ALERT"), iVar2 != 0 ||
          (iVar2 = FUN_00057b80(iVar1,"UNKNOWN = 254, LOG_ERR"), iVar2 != 0)))))) ||
       (iVar2 = FUN_00057b80(iVar1,"! = 255, LOG_INFO"), iVar2 != 0)) {
      FUN_0005df98(2,"src/level_list.c",0x43,"zlog_level_set_default fail");
      FUN_0005d580(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

