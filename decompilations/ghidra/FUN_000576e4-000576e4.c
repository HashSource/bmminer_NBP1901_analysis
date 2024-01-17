
byte * FUN_000576e4(char *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *__s;
  int iVar2;
  ushort **ppuVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  char *__s_00;
  byte *local_24 [2];
  
  if (param_1 == (char *)0x0) {
    FUN_0005df98(2,"src/format.c",0x41,"line is null or 0");
  }
  else {
    __s = (byte *)calloc(1,0x2008);
    if (__s == (byte *)0x0) {
      piVar6 = __errno_location();
      FUN_0005df98(2,"src/format.c",0x45,"calloc fail, errno[%d]",*piVar6);
    }
    else {
      memset(__s,0,0x1001);
      iVar2 = __isoc99_sscanf(param_1," %[^= \t] = %n",__s);
      if (iVar2 == 1) {
        if (*param_1 == '\"') {
          uVar8 = (uint)*__s;
          if (uVar8 != 0) {
            ppuVar3 = __ctype_b_loc();
            pbVar7 = __s;
            do {
              uVar9 = uVar8 - 0x5f;
              if (uVar9 != 0) {
                uVar9 = 1;
              }
              if ((uVar9 & ((*ppuVar3)[uVar8] ^ 8) >> 3) != 0) {
                FUN_0005df98(2,"src/format.c",0x5c,
                             "a_format->name[%s] character is not in [a-Z][0-9][_]",__s);
                goto LAB_000578a8;
              }
              pbVar7 = pbVar7 + 1;
              uVar8 = (uint)*pbVar7;
            } while (uVar8 != 0);
          }
          __s_00 = param_1 + 1;
          pcVar4 = strrchr(__s_00,0x22);
          if (pcVar4 == (char *)0x0) {
            FUN_0005df98(2,"src/format.c",100,"there is no \" at end of pattern, line[%s]",param_1);
          }
          else if ((uint)((int)pcVar4 - (int)__s_00) < 0x1001) {
            pbVar7 = __s + 0x1001;
            memset(pbVar7,0,0x1001);
            memcpy(pbVar7,__s_00,(int)pcVar4 - (int)__s_00);
            iVar2 = FUN_0005e310(pbVar7,0x1001);
            if (iVar2 == 0) {
              iVar2 = FUN_0005d4c0(FUN_0005c6f4);
              *(int *)(__s + 0x2004) = iVar2;
              if (iVar2 == 0) {
                FUN_0005df98(2,"src/format.c",0x77,"zc_arraylist_new fail");
              }
              else {
                bVar1 = __s[0x1001];
                while( true ) {
                  if (bVar1 == 0) {
                    FUN_000575fc(__s,0);
                    return __s;
                  }
                  iVar2 = FUN_0005c758(pbVar7,local_24,param_2);
                  if (iVar2 == 0) break;
                  iVar5 = FUN_0005d694(*(undefined4 *)(__s + 0x2004),iVar2);
                  if (iVar5 != 0) {
                    FUN_0005c6f4(iVar2);
                    FUN_0005df98(2,"src/format.c",0x84,"zc_arraylist_add fail");
                    goto LAB_000578a8;
                  }
                  bVar1 = *local_24[0];
                  pbVar7 = local_24[0];
                }
                FUN_0005df98(2,"src/format.c",0x7e,"zlog_spec_new fail");
              }
            }
            else {
              FUN_0005df98(2,"src/format.c",0x70,"zc_str_replace_env fail");
            }
          }
          else {
            FUN_0005df98(2,"src/format.c",0x69,"pattern is too long");
          }
        }
        else {
          FUN_0005df98(2,"src/format.c",0x56,"the 1st char of pattern is not \", line+nread[%s]",
                       param_1);
        }
      }
      else {
        FUN_0005df98(2,"src/format.c",0x51,"format[%s], syntax wrong",param_1);
      }
LAB_000578a8:
      FUN_0005766c(__s);
    }
  }
  return (byte *)0x0;
}

