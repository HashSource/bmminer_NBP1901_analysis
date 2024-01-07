
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00056eb8(char *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *__s;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  __s = (char *)calloc(1,0x2450);
  if (__s == (char *)0x0) {
    piVar10 = __errno_location();
    FUN_0005df98(2,"src/conf.c",0x69,"calloc fail, errno[%d]",*piVar10);
    return (char *)0x0;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    pcVar6 = getenv("ZLOG_CONF_PATH");
    if (pcVar6 != (char *)0x0) {
      pcVar6 = getenv("ZLOG_CONF_PATH");
      uVar7 = snprintf(__s,0x401,"%s",pcVar6);
      goto joined_r0x00057148;
    }
    memset(__s,0,0x401);
    *(undefined4 *)(__s + 0x418) = 1;
    uVar5 = ram0x0006bf30;
    uVar4 = s__tmp_zlog_lock_0006bf24._8_4_;
    uVar3 = s__tmp_zlog_lock_0006bf24._4_4_;
    uVar2 = s__tmp_zlog_lock_0006bf24._0_4_;
    *(undefined4 *)(__s + 0x420) = 0x200000;
    *(undefined4 *)(__s + 0x41c) = 0x400;
    *(undefined4 *)(__s + 0x424) = uVar2;
    *(undefined4 *)(__s + 0x428) = uVar3;
    *(undefined4 *)(__s + 0x42c) = uVar4;
    *(short *)(__s + 0x430) = (short)uVar5;
    __s[0x432] = (char)((uint)uVar5 >> 0x10);
    bVar1 = false;
  }
  else {
    uVar7 = snprintf(__s,0x401,"%s",param_1);
joined_r0x00057148:
    if (0x400 < uVar7) {
      piVar10 = __errno_location();
      FUN_0005df98(2,"src/conf.c",0x78,"not enough space for path name, nwrite=[%d], errno[%d]",
                   uVar7,*piVar10);
      goto LAB_00057178;
    }
    *(undefined4 *)(__s + 0x418) = 1;
    *(undefined4 *)(__s + 0x41c) = 0x400;
    *(undefined4 *)(__s + 0x420) = 0x200000;
    bVar1 = true;
    strcpy(__s + 0x424,__s);
  }
  uVar4 = s_default_____D__V___p__F__L___m_n_0006bf6c._12_4_;
  uVar3 = s_default_____D__V___p__F__L___m_n_0006bf6c._8_4_;
  uVar2 = s_default_____D__V___p__F__L___m_n_0006bf6c._4_4_;
  *(undefined4 *)(__s + 0x142c) = s_default_____D__V___p__F__L___m_n_0006bf6c._0_4_;
  *(undefined4 *)(__s + 0x1430) = uVar2;
  *(undefined4 *)(__s + 0x1434) = uVar3;
  *(undefined4 *)(__s + 0x1438) = uVar4;
  uVar5 = ram0x0006bf8c;
  uVar4 = s_default_____D__V___p__F__L___m_n_0006bf6c._28_4_;
  uVar3 = s_default_____D__V___p__F__L___m_n_0006bf6c._24_4_;
  uVar2 = s_default_____D__V___p__F__L___m_n_0006bf6c._20_4_;
  *(undefined4 *)(__s + 0x143c) = s_default_____D__V___p__F__L___m_n_0006bf6c._16_4_;
  *(undefined4 *)(__s + 0x1440) = uVar2;
  *(undefined4 *)(__s + 0x1444) = uVar3;
  *(undefined4 *)(__s + 0x1448) = uVar4;
  *(short *)(__s + 0x144c) = (short)uVar5;
  *(undefined4 *)(__s + 0x2434) = 0x180;
  *(undefined4 *)(__s + 0x243c) = 0;
  *(undefined4 *)(__s + 0x2438) = 0;
  iVar8 = FUN_00057c30();
  *(int *)(__s + 0x2440) = iVar8;
  if (iVar8 == 0) {
    FUN_0005df98(2,"src/conf.c",0x8e,"zlog_level_list_new fail");
  }
  else {
    iVar8 = FUN_0005d4c0(FUN_0005766c);
    *(int *)(__s + 0x2444) = iVar8;
    if (iVar8 == 0) {
      FUN_0005df98(2,"src/conf.c",0x94,"zc_arraylist_new fail");
    }
    else {
      iVar8 = FUN_0005d4c0(FUN_0005a97c);
      *(int *)(__s + 0x2448) = iVar8;
      if (iVar8 == 0) {
        FUN_0005df98(2,"src/conf.c",0x9a,"init rule_list fail");
      }
      else if (bVar1) {
        iVar8 = FUN_00056030(__s);
        if (iVar8 == 0) {
LAB_00056ffc:
          FUN_00056b38(__s,0);
          return __s;
        }
        FUN_0005df98(2,"src/conf.c",0xa0,"zlog_conf_build_with_file fail");
      }
      else {
        iVar8 = FUN_000576e4(__s + 0x142c,__s + 0x244c);
        *(int *)(__s + 0x2430) = iVar8;
        if (iVar8 == 0) {
          FUN_0005df98(2,"src/conf.c",0xb7,"zlog_format_new fail");
        }
        else {
          iVar8 = FUN_00058834(__s + 0x424);
          *(int *)(__s + 0x1428) = iVar8;
          if (iVar8 == 0) {
            FUN_0005df98(2,"src/conf.c",0xbd,"zlog_rotater_new fail");
          }
          else {
            iVar8 = FUN_0005aa9c("*.*        >stdout",*(undefined4 *)(__s + 0x2440),
                                 *(undefined4 *)(__s + 0x2430),*(undefined4 *)(__s + 0x2444),
                                 *(undefined4 *)(__s + 0x2434),*(undefined4 *)(__s + 0x2438),
                                 __s + 0x244c);
            if (iVar8 == 0) {
              FUN_0005df98(2,"src/conf.c",0xca,"zlog_rule_new fail");
            }
            else {
              iVar9 = FUN_0005d694(*(undefined4 *)(__s + 0x2448),iVar8);
              if (iVar9 == 0) goto LAB_00056ffc;
              FUN_0005a97c(iVar8);
              FUN_0005df98(2,"src/conf.c",0xd1,"zc_arraylist_add fail");
            }
          }
        }
        FUN_0005df98(2,"src/conf.c",0xa5,"zlog_conf_build_without_file fail");
      }
    }
  }
LAB_00057178:
  FUN_00056e0c(__s);
  return (char *)0x0;
}

