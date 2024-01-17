
undefined4 FUN_000596b0(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  uint uVar4;
  void *__buf;
  char *__filename;
  undefined4 uVar5;
  int local_90;
  int iStack_8c;
  int local_30;
  int iStack_2c;
  
  iVar1 = FUN_00057a1c(*(undefined4 *)(param_1 + 0x1878));
  if (iVar1 != 0) {
    FUN_0005df98(2,"src/rule.c",0x54,"zlog_format_gen_msg fail");
    return 0xffffffff;
  }
  __filename = (char *)(param_1 + 0x1030);
  iVar1 = __xstat64(3,__filename,(stat64 *)&local_90);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1438);
    if ((iStack_2c == *(int *)(param_1 + 0x144c) && local_30 == *(int *)(param_1 + 0x1448)) &&
       (iStack_8c == *(int *)(param_1 + 0x1444) && local_90 == *(int *)(param_1 + 0x1440)))
    goto LAB_00059750;
    close(iVar1);
    iVar1 = open64(__filename,*(uint *)(param_1 + 0x102c) | 0x441,*(undefined4 *)(param_1 + 0x1028))
    ;
    *(int *)(param_1 + 0x1438) = iVar1;
    if (iVar1 < 0) {
      piVar3 = __errno_location();
      goto LAB_000598f4;
    }
  }
  else {
    piVar3 = __errno_location();
    if (*piVar3 != 2) {
      FUN_0005df98(2,"src/rule.c",0x5b,"stat fail on [%s], errno[%d]",__filename,*piVar3);
      return 0xffffffff;
    }
    close(*(int *)(param_1 + 0x1438));
    iVar1 = open64(__filename,*(uint *)(param_1 + 0x102c) | 0x441,*(undefined4 *)(param_1 + 0x1028))
    ;
    *(int *)(param_1 + 0x1438) = iVar1;
    if (iVar1 < 0) {
LAB_000598f4:
      FUN_0005df98(2,"src/rule.c",0x6b,"open file[%s] fail, errno[%d]",__filename,*piVar3);
      return 0xffffffff;
    }
    iVar1 = __xstat64(3,__filename,(stat64 *)&local_90);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/rule.c",0x72,"stat fail on new file[%s], errno[%d]",__filename,*piVar3);
      return 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x1438);
  }
  *(int *)(param_1 + 0x1440) = local_90;
  *(int *)(param_1 + 0x1444) = iStack_8c;
  *(int *)(param_1 + 0x1448) = local_30;
  *(int *)(param_1 + 0x144c) = iStack_2c;
LAB_00059750:
  __buf = **(void ***)(param_2 + 0x1c);
  sVar2 = write(iVar1,__buf,(int)(*(void ***)(param_2 + 0x1c))[1] - (int)__buf);
  if (sVar2 < 0) {
    piVar3 = __errno_location();
    FUN_0005df98(2,"src/rule.c",0x7d,"write fail, errno[%d]",*piVar3);
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    if (*(uint *)(param_1 + 0x1868) != 0) {
      uVar4 = *(int *)(param_1 + 0x186c) + 1;
      if (uVar4 < *(uint *)(param_1 + 0x1868)) {
        *(uint *)(param_1 + 0x186c) = uVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0x186c) = 0;
        iVar1 = fsync(*(int *)(param_1 + 0x1438));
        if (iVar1 != 0) {
          piVar3 = __errno_location();
          FUN_0005df98(2,"src/rule.c",0x85,"fsync[%d] fail, errno[%d]",
                       *(undefined4 *)(param_1 + 0x1438),*piVar3);
        }
      }
    }
  }
  return uVar5;
}

