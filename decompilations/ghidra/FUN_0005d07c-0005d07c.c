
undefined4 *
FUN_0005d07c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)calloc(1,0x20);
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = __errno_location();
    FUN_0005df98(2,"src/thread.c",0x46,"calloc fail, errno[%d]",*piVar3);
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  iVar2 = FUN_00058008();
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_0005df98(2,"src/thread.c",0x4e,"zlog_mdc_new fail");
  }
  else {
    iVar2 = FUN_000573d8(param_4);
    puVar1[2] = iVar2;
    if (iVar2 == 0) {
      FUN_0005df98(2,"src/thread.c",0x54,"zlog_event_new fail");
    }
    else {
      iVar2 = FUN_0005e758(0x401,0x401,0);
      puVar1[3] = iVar2;
      if (iVar2 == 0) {
        FUN_0005df98(2,"src/thread.c",0x5a,"zlog_buf_new fail");
      }
      else {
        iVar2 = FUN_0005e758(0x401,0x401,0);
        puVar1[4] = iVar2;
        if (iVar2 == 0) {
          FUN_0005df98(2,"src/thread.c",0x60,"zlog_buf_new fail");
        }
        else {
          iVar2 = FUN_0005e758(0x401,0x401,0);
          puVar1[5] = iVar2;
          if (iVar2 == 0) {
            FUN_0005df98(2,"src/thread.c",0x66,"zlog_buf_new fail");
          }
          else {
            iVar2 = FUN_0005e758(param_2,param_3,"...\n");
            puVar1[6] = iVar2;
            if (iVar2 == 0) {
              FUN_0005df98(2,"src/thread.c",0x6c,"zlog_buf_new fail");
            }
            else {
              iVar2 = FUN_0005e758(param_2,param_3,"...\n");
              puVar1[7] = iVar2;
              if (iVar2 != 0) {
                return puVar1;
              }
              FUN_0005df98(2,"src/thread.c",0x72,"zlog_buf_new fail");
            }
          }
        }
      }
    }
  }
  FUN_0005cfa8(puVar1);
  return (undefined4 *)0x0;
}

