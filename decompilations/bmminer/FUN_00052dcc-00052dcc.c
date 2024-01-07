
undefined4 FUN_00052dcc(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0058de18 == 0) {
    iVar1 = pthread_key_create(&DAT_0058de08,FUN_0005cfa8);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/zlog.c",0x4c,"pthread_key_create fail, rc[%d]",iVar1);
      goto LAB_00052e88;
    }
    iVar1 = FUN_00060318(&LAB_00052d44);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/zlog.c",0x55,"atexit fail, rc[%d]",iVar1);
      goto LAB_00052e88;
    }
    DAT_0058de18 = 1;
  }
  DAT_0099eec8 = FUN_00056eb8(param_1);
  if (DAT_0099eec8 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x5d,"zlog_conf_new[%s] fail",param_1);
  }
  else {
    DAT_0058de0c = FUN_00055db8();
    if (DAT_0058de0c == 0) {
      FUN_0005df98(2,"src/zlog.c",99,"zlog_category_table_new fail");
    }
    else {
      DAT_0058de14 = FUN_00058500();
      if (DAT_0058de14 != 0) {
        return 0;
      }
      FUN_0005df98(2,"src/zlog.c",0x69,"zlog_record_table_new fail");
    }
  }
LAB_00052e88:
  FUN_00052d68();
  return 0xffffffff;
}

