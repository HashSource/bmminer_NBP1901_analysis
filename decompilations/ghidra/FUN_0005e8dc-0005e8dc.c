
undefined4 FUN_0005e8dc(int *param_1,char *param_2,__gnuc_va_list param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint __maxlen;
  undefined4 uVar5;
  size_t sVar6;
  
  if (*param_1 == 0) {
    FUN_0005df98(2,"src/buf.c",0xd6,"pre-use of zlog_buf_resize fail, so can\'t convert");
    uVar5 = 0xffffffff;
  }
  else {
    __maxlen = param_1[3] - (int)(char *)param_1[1];
    uVar1 = vsnprintf((char *)param_1[1],__maxlen,param_2,param_3);
    uVar2 = ~uVar1 >> 0x1f;
    if (__maxlen <= uVar1) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      param_1[1] = param_1[1] + uVar1;
      return 0;
    }
    if ((int)uVar1 < 0) {
      piVar4 = __errno_location();
      FUN_0005df98(2,"src/buf.c",0xe2,"vsnprintf fail, errno[%d]",*piVar4);
      uVar5 = 0xffffffff;
      FUN_0005df98(2,"src/buf.c",0xe3,"nwrite[%d], size_left[%ld], format[%s]",uVar1,__maxlen,
                   param_2);
    }
    else if (uVar1 < __maxlen) {
      uVar5 = 0;
    }
    else {
      iVar3 = FUN_0005e558(param_1,(1 - __maxlen) + uVar1);
      if (iVar3 < 1) {
        if (iVar3 == 0) {
          sVar6 = param_1[3] - (int)(char *)param_1[1];
          iVar3 = vsnprintf((char *)param_1[1],sVar6,param_2,param_3);
          if (-1 < iVar3) {
            param_1[1] = param_1[1] + iVar3;
            return 0;
          }
          piVar4 = __errno_location();
          FUN_0005df98(2,"src/buf.c",0xfc,"vsnprintf fail, errno[%d]",*piVar4);
          uVar5 = 0xffffffff;
          FUN_0005df98(2,"src/buf.c",0xfd,"nwrite[%d], size_left[%ld], format[%s]",iVar3,sVar6,
                       param_2);
        }
        else {
          FUN_0005df98(2,"src/buf.c",0xf3,"zlog_buf_resize fail");
          uVar5 = 0xffffffff;
        }
      }
      else {
        FUN_0005df98(2,"src/buf.c",0xea,"conf limit to %ld, can\'t extend, so truncate",param_1[5]);
        sVar6 = param_1[3] - (int)(char *)param_1[1];
        vsnprintf((char *)param_1[1],sVar6,param_2,param_3);
        param_1[1] = param_1[1] + (sVar6 - 1);
        if (*(char *)(param_1 + 7) == '\0') {
          uVar5 = 1;
        }
        else {
          uVar5 = 1;
          FUN_0005e680(param_1);
        }
      }
    }
  }
  return uVar5;
}

