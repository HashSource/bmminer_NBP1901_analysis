
undefined4 FUN_0005a66c(int param_1,char *param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t __n;
  char *pcVar5;
  undefined4 uVar6;
  char *local_1c;
  
  pcVar5 = (char *)(param_1 + 1);
  local_1c = strrchr(pcVar5,0x22);
  if (local_1c == (char *)0x0) {
    uVar6 = 0xffffffff;
    FUN_0005df98(2,"src/rule.c",0x204,"matching \" not found in conf line[%s]",param_1);
  }
  else {
    __n = (int)local_1c - (int)pcVar5;
    if (__n < 0x401) {
      memcpy(param_2,pcVar5,__n);
      iVar2 = FUN_0005e310(param_2,0x401);
      if (iVar2 == 0) {
        pcVar5 = strchr(param_2,0x25);
        uVar6 = 0;
        if (pcVar5 != (char *)0x0) {
          iVar2 = FUN_0005d4c0(FUN_0005c6f4);
          cVar1 = *param_2;
          while( true ) {
            if (cVar1 == '\0') {
              *param_3 = iVar2;
              return 0;
            }
            iVar4 = FUN_0005c758(param_2,&local_1c,param_4);
            if (iVar4 == 0) break;
            iVar3 = FUN_0005d694(iVar2,iVar4);
            if (iVar3 != 0) {
              FUN_0005df98(2,"src/rule.c",0x227,"zc_arraylist_add fail");
              if (iVar2 != 0) {
                FUN_0005d580(iVar2);
              }
              FUN_0005c6f4(iVar4);
              return 0xffffffff;
            }
            cVar1 = *local_1c;
            param_2 = local_1c;
          }
          FUN_0005df98(2,"src/rule.c",0x222,"zlog_spec_new fail");
          if (iVar2 == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = 0xffffffff;
            FUN_0005d580(iVar2);
          }
        }
      }
      else {
        FUN_0005df98(2,"src/rule.c",0x210,"zc_str_replace_env fail");
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 0xffffffff;
      FUN_0005df98(2,"src/rule.c",0x209,"file_path too long %ld > %ld",__n,0x400);
    }
  }
  return uVar6;
}

