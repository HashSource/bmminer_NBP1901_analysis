
undefined4 FUN_00059a0c(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *__buf;
  uint __n;
  char *__file;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined auStack_88 [52];
  int iStack_54;
  
  iVar1 = FUN_00057a1c(*(undefined4 *)(param_1 + 0x1878));
  if (iVar1 == 0) {
    __file = (char *)(param_1 + 0x1030);
    iVar1 = open64(__file,*(uint *)(param_1 + 0x102c) | 0x441,*(undefined4 *)(param_1 + 0x1028));
    if (iVar1 < 0) {
      piVar4 = __errno_location();
      uVar7 = 0xffffffff;
      FUN_0005df98(2,"src/rule.c",0xae,"open file[%s] fail, errno[%d]",__file,*piVar4);
    }
    else {
      __buf = **(void ***)(param_2 + 0x1c);
      __n = (int)(*(void ***)(param_2 + 0x1c))[1] - (int)__buf;
      sVar2 = write(iVar1,__buf,__n);
      if (sVar2 < 0) {
        piVar4 = __errno_location();
        FUN_0005df98(2,"src/rule.c",0xb4,"write fail, errno[%d]",*piVar4);
        uVar7 = 0xffffffff;
        close(iVar1);
      }
      else {
        if (*(uint *)(param_1 + 0x1868) != 0) {
          uVar5 = *(int *)(param_1 + 0x186c) + 1;
          if (uVar5 < *(uint *)(param_1 + 0x1868)) {
            *(uint *)(param_1 + 0x186c) = uVar5;
          }
          else {
            *(undefined4 *)(param_1 + 0x186c) = 0;
            iVar3 = fsync(iVar1);
            if (iVar3 != 0) {
              piVar4 = __errno_location();
              FUN_0005df98(2,"src/rule.c",0xbb,"fsync[%d] fail, errno[%d]",iVar1,*piVar4);
            }
          }
        }
        iVar1 = close(iVar1);
        if (iVar1 < 0) {
          piVar4 = __errno_location();
          FUN_0005df98(2,"src/rule.c",0xbf,"close fail, maybe cause by write, errno[%d]",*piVar4);
          uVar7 = 0xffffffff;
        }
        else {
          if (*(uint *)(param_1 + 0x1450) < __n) {
            FUN_0005df98(0,"src/rule.c",0xc5,
                         "one msg\'s len[%ld] > archive_max_size[%ld], no rotate",__n,
                         *(uint *)(param_1 + 0x1450));
            return 0;
          }
          iVar1 = __xstat64(3,__file,(stat64 *)auStack_88);
          if (iVar1 != 0) {
            piVar4 = __errno_location();
            FUN_0005df98(1,"src/rule.c",0xca,"stat [%s] fail, errno[%d], maybe in rotating",__file,
                         *piVar4);
            return 0;
          }
          uVar5 = *(uint *)(param_1 + 0x1450);
          iVar1 = (int)uVar5 >> 0x1f;
          iStack_54 = iStack_54 + (uint)CARRY4(auStack_88._48_4_,__n);
          bVar8 = auStack_88._48_4_ + __n < uVar5;
          if ((int)(iStack_54 - (iVar1 + (uint)bVar8)) < 0 ==
              (SBORROW4(iStack_54,iVar1) != SBORROW4(iStack_54 - iVar1,(uint)bVar8))) {
            uVar6 = *(undefined4 *)(DAT_0099eec8 + 0x1428);
            uVar7 = FUN_00059954(param_1,param_2);
            iVar1 = FUN_00058958(uVar6,__file,__n,uVar7,*(undefined4 *)(param_1 + 0x1450),
                                 *(undefined4 *)(param_1 + 0x1454));
            if (iVar1 != 0) {
              FUN_0005df98(2,"src/rule.c",0xd6,"zlog_rotater_rotate fail");
              return 0xffffffff;
            }
          }
          uVar7 = 0;
        }
      }
    }
  }
  else {
    FUN_0005df98(2,"src/rule.c",0xa7,"zlog_format_gen_msg fail");
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

