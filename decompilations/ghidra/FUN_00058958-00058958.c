
undefined4
FUN_00058958(pthread_mutex_t *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
            undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  char *pcVar4;
  uint uVar5;
  size_t sVar6;
  void *__ptr;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  char **ppcVar11;
  bool bVar12;
  char *local_4b0;
  int local_49c;
  undefined auStack_498 [52];
  int iStack_464;
  glob64_t local_430 [28];
  
  if (param_2 == (char *)0x0) {
    FUN_0005df98(2,"src/rotater.c",0x218,"base_path is null or 0");
    return 0xffffffff;
  }
  local_430[0].gl_offs = 0;
  local_430[0].gl_flags = 0;
  local_430[0].gl_closedir = (_func_5031 *)0x0;
  local_430[0].gl_readdir = (_func_5032 *)0x0;
  local_430[0].gl_pathc = 1;
  iVar1 = pthread_mutex_trylock(param_1);
  if (iVar1 == 0x10) {
    FUN_0005df98(1,"src/rotater.c",0x1e1,
                 "pthread_mutex_trylock fail, as lock_mutex is locked by other threads");
LAB_00058a0c:
    FUN_0005df98(1,"src/rotater.c",0x21b,
                 "zlog_rotater_trylock fail, maybe lock by other process or threads");
    return 0;
  }
  if (iVar1 != 0) {
    FUN_0005df98(2,"src/rotater.c",0x1e4,"pthread_mutex_trylock fail, rc[%d]",iVar1);
    goto LAB_00058a0c;
  }
  iVar1 = fcntl(*(int *)((int)param_1 + 0x1c),0xd,local_430);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((*piVar2 - 0xbU & 0xfffffffd) == 0) {
      FUN_0005df98(1,"src/rotater.c",0x1ed,"fcntl lock fail, as file is lock by other process");
      iVar1 = pthread_mutex_unlock(param_1);
    }
    else {
      FUN_0005df98(2,"src/rotater.c",0x1ef,"lock fd[%d] fail, errno[%d]",
                   *(undefined4 *)((int)param_1 + 0x1c),*piVar2);
      iVar1 = pthread_mutex_unlock(param_1);
    }
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/rotater.c",0x1f2,"pthread_mutex_unlock fail, errno[%d]",*piVar2);
    }
    goto LAB_00058a0c;
  }
  sVar3 = __xstat64(3,param_2,(stat64 *)auStack_498);
  if (sVar3 == 0) {
    iVar1 = (int)param_5 >> 0x1f;
    iStack_464 = iStack_464 + (uint)CARRY4(auStack_498._48_4_,param_3);
    bVar12 = param_5 < auStack_498._48_4_ + param_3;
    uVar10 = 0;
    if ((int)(iVar1 - (iStack_464 + (uint)bVar12)) < 0 !=
        (SBORROW4(iVar1,iStack_464) != SBORROW4(iVar1 - iStack_464,(uint)bVar12))) {
      *(char **)((int)param_1 + 0x20) = param_2;
      *(char **)((int)param_1 + 0x24) = param_4;
      *(undefined4 *)((int)param_1 + 0x43c) = param_6;
      if (*param_4 == '\0') {
        uVar8 = snprintf((char *)((int)param_1 + 0x28),0x401,"%s.*",param_2);
        if (0x401 < uVar8) {
          piVar2 = __errno_location();
          FUN_0005df98(2,"src/rotater.c",0x168,"nwirte[%d], overflow or errno[%d]",uVar8,*piVar2);
          goto LAB_00059408;
        }
        pcVar4 = *(char **)((int)param_1 + 0x20);
        param_1[0x2d].__data.__lock = 1;
        *(undefined4 *)((int)param_1 + 0x434) = 0;
        sVar3 = strlen(pcVar4);
        *(size_t *)((int)param_1 + 0x42c) = sVar3 + 1;
        sVar3 = strlen(pcVar4);
        *(size_t *)((int)param_1 + 0x430) = sVar3 + 2;
LAB_00058ca0:
        local_4b0 = (char *)((int)param_1 + 0x28);
        iVar1 = FUN_0005d4c0(FUN_00058584);
        *(int *)((int)param_1 + 0x440) = iVar1;
        if (iVar1 == 0) {
          FUN_0005df98(2,"src/rotater.c",0xbf,"zc_arraylist_new fail");
LAB_00058e84:
          FUN_0005df98(2,"src/rotater.c",0x1bb,"zlog_rotater_add_archive_files fail");
        }
        else {
          iVar1 = glob64(local_4b0,7,(__errfunc *)0x0,local_430);
          if (iVar1 != 3) {
            if (iVar1 != 0) {
              piVar2 = __errno_location();
              FUN_0005df98(2,"src/rotater.c",200,"glob err, rc=[%d], errno[%d]",iVar1,*piVar2);
              goto LAB_00058e84;
            }
            if (local_430[0].gl_pathc != 0) {
              ppcVar11 = local_430[0].gl_pathv + -1;
              sVar3 = local_430[0].gl_pathc;
              do {
                sVar3 = sVar3 - 1;
                ppcVar11 = ppcVar11 + 1;
                pcVar4 = *ppcVar11;
                iVar1 = strcmp(*(char **)((int)param_1 + 0x20),pcVar4);
                if ((iVar1 == 0) || (sVar6 = strlen(pcVar4), pcVar4[sVar6 - 1] == '/')) {
LAB_00058de8:
                  FUN_0005df98(1,"src/rotater.c",0xd3,"not the expect pattern file");
                }
                else {
                  __ptr = calloc(1,0x408);
                  if (__ptr == (void *)0x0) {
                    piVar2 = __errno_location();
                    FUN_0005df98(2,"src/rotater.c",0x95,"calloc fail, errno[%d]",*piVar2);
                    goto LAB_00058de8;
                  }
                  uVar8 = snprintf((char *)((int)__ptr + 4),0x401,"%s",pcVar4);
                  if (0x400 < uVar8) {
                    piVar2 = __errno_location();
                    FUN_0005df98(2,"src/rotater.c",0x9b,
                                 "snprintf fail or overflow, nwrite=[%d], errno[%d]",uVar8,*piVar2);
LAB_00058e54:
                    free(__ptr);
                    goto LAB_00058de8;
                  }
                  local_49c = 0;
                  __isoc99_sscanf((char *)((int)__ptr + 4) + *(int *)((int)param_1 + 0x42c),
                                  &DAT_0006c96c,__ptr,&local_49c);
                  if ((*(int *)((int)param_1 + 0x434) != 0) &&
                     (local_49c < *(int *)((int)param_1 + 0x434))) {
                    FUN_0005df98(1,"src/rotater.c",0xa4,"aa.1.log is not expect, need aa.01.log");
                    goto LAB_00058e54;
                  }
                  iVar1 = FUN_0005d6a0(*(undefined4 *)((int)param_1 + 0x440),&LAB_0005856c,__ptr);
                  if (iVar1 != 0) {
                    FUN_0005df98(2,"src/rotater.c",0xdb,"zc_arraylist_sortadd fail");
                    globfree64(local_430);
                    goto LAB_00058e84;
                  }
                }
              } while (sVar3 != 0);
            }
          }
          globfree64(local_430);
          if (param_1[0x2d].__data.__lock == 1) {
            iVar1 = (*(int **)((int)param_1 + 0x440))[1] + -1;
            if (iVar1 < 0) {
LAB_000592c0:
              memset(local_430,0,0x401);
              uVar8 = snprintf((char *)local_430,0x401,"%.*s%0*d%s",
                               *(undefined4 *)((int)param_1 + 0x42c),local_4b0,
                               *(undefined4 *)((int)param_1 + 0x434),0,
                               local_4b0 + *(int *)((int)param_1 + 0x430));
              if (uVar8 < 0x401) {
                iVar1 = rename(*(char **)((int)param_1 + 0x20),(char *)local_430);
                if (iVar1 == 0) goto LAB_00058e20;
                piVar2 = __errno_location();
                FUN_0005df98(2,"src/rotater.c",0x154,"rename[%s]->[%s] fail, errno[%d]",
                             *(undefined4 *)((int)param_1 + 0x20),local_430,*piVar2);
              }
              else {
                piVar2 = __errno_location();
                FUN_0005df98(2,"src/rotater.c",0x14f,"nwirte[%d], overflow or errno[%d]",uVar8,
                             *piVar2);
              }
            }
            else {
              iVar7 = iVar1 * 4;
              iVar9 = *(int *)(**(int **)((int)param_1 + 0x440) + iVar1 * 4);
              while (iVar9 != 0) {
                iVar7 = iVar7 + -4;
                pcVar4 = (char *)(iVar9 + 4);
                if ((*(int *)((int)param_1 + 0x43c) < 1) ||
                   (iVar1 < *(int *)((int)param_1 + 0x43c) + -1)) {
                  memset(local_430,0,0x401);
                  uVar8 = snprintf((char *)local_430,0x401,"%.*s%0*d%s",
                                   *(undefined4 *)((int)param_1 + 0x42c),local_4b0,
                                   *(undefined4 *)((int)param_1 + 0x434),iVar1 + 1,
                                   local_4b0 + *(int *)((int)param_1 + 0x430));
                  if (0x400 < uVar8) {
                    piVar2 = __errno_location();
                    FUN_0005df98(2,"src/rotater.c",0x13e,"nwirte[%d], overflow or errno[%d]",uVar8,
                                 *piVar2);
                    goto LAB_00059050;
                  }
                  iVar9 = rename(pcVar4,(char *)local_430);
                  if (iVar9 != 0) {
                    piVar2 = __errno_location();
                    FUN_0005df98(2,"src/rotater.c",0x143,"rename[%s]->[%s] fail, errno[%d]",pcVar4,
                                 local_430,*piVar2);
                    goto LAB_00059050;
                  }
                }
                else {
                  iVar9 = unlink(pcVar4);
                  if (iVar9 != 0) {
                    piVar2 = __errno_location();
                    FUN_0005df98(2,"src/rotater.c",0x131,"unlink[%s] fail, errno[%d]",pcVar4,*piVar2
                                );
                    goto LAB_00059050;
                  }
                }
                bVar12 = iVar1 == 0;
                iVar1 = iVar1 + -1;
                if (bVar12) goto LAB_000592c0;
                if ((*(int **)((int)param_1 + 0x440))[1] <= iVar1) break;
                iVar9 = *(int *)(**(int **)((int)param_1 + 0x440) + iVar7);
              }
              FUN_0005df98(2,"src/rotater.c",0x129,"zc_arraylist_get fail");
            }
LAB_00059050:
            FUN_0005df98(2,"src/rotater.c",0x1c2,"zlog_rotater_roll_files fail");
          }
          else {
            if (param_1[0x2d].__data.__lock != 2) {
LAB_00058e20:
              FUN_000585e4(param_1);
              goto LAB_00058a74;
            }
            piVar2 = *(int **)((int)param_1 + 0x440);
            iVar1 = piVar2[1];
            if (iVar1 < 1) {
LAB_00059368:
              iVar7 = 0;
LAB_00059150:
              memset(local_430,0,0x401);
              uVar8 = snprintf((char *)local_430,0x401,"%.*s%0*d%s",
                               *(undefined4 *)((int)param_1 + 0x42c),local_4b0,
                               *(undefined4 *)((int)param_1 + 0x434),iVar7,
                               local_4b0 + *(int *)((int)param_1 + 0x430));
              if (uVar8 < 0x401) {
                iVar1 = rename(*(char **)((int)param_1 + 0x20),(char *)local_430);
                if (iVar1 == 0) goto LAB_00058e20;
                piVar2 = __errno_location();
                FUN_0005df98(2,"src/rotater.c",0x115,"rename[%s]->[%s] fail, errno[%d]",
                             *(undefined4 *)((int)param_1 + 0x20),local_430,*piVar2);
              }
              else {
                piVar2 = __errno_location();
                FUN_0005df98(2,"src/rotater.c",0x110,"nwirte[%d], overflow or errno[%d]",uVar8,
                             *piVar2);
              }
            }
            else {
              iVar7 = 0;
              do {
                if ((0 < *(int *)((int)param_1 + 0x43c)) &&
                   (iVar7 < iVar1 - *(int *)((int)param_1 + 0x43c))) {
                  pcVar4 = (char *)(*(int *)(*piVar2 + iVar7 * 4) + 4);
                  iVar1 = unlink(pcVar4);
                  if (iVar1 != 0) {
                    piVar2 = __errno_location();
                    FUN_0005df98(2,"src/rotater.c",0xf6,"unlink[%s] fail, errno[%d]",pcVar4,*piVar2)
                    ;
                    goto LAB_000591f0;
                  }
                  piVar2 = *(int **)((int)param_1 + 0x440);
                }
                iVar1 = piVar2[1];
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar1);
              if (iVar1 < 1) goto LAB_00059368;
              piVar2 = *(int **)(*piVar2 + (iVar1 + 0x3fffffff) * 4);
              if (piVar2 != (int *)0x0) {
                iVar9 = *piVar2;
                iVar7 = iVar1 + -1;
                if (iVar1 + -1 < iVar9) {
                  iVar7 = iVar9;
                }
                iVar7 = iVar7 + 1;
                goto LAB_00059150;
              }
              FUN_0005df98(2,"src/rotater.c",0x100,"zc_arraylist_get fail");
            }
LAB_000591f0:
            FUN_0005df98(2,"src/rotater.c",0x1c8,"zlog_rotater_seq_files fail");
          }
        }
      }
      else {
        pcVar4 = strchr(param_4,0x23);
        if (pcVar4 == (char *)0x0) {
          FUN_0005df98(2,"src/rotater.c",0x176,"no # in archive_path[%s]",param_4);
        }
        else {
          local_430[0].gl_pathc = sVar3;
          __isoc99_sscanf(pcVar4,"#%d%n",(int)param_1 + 0x434,local_430);
          if (local_430[0].gl_pathc == 0) {
            local_430[0].gl_pathc = 1;
          }
          if (pcVar4[local_430[0].gl_pathc] == 'r') {
            param_1[0x2d].__data.__lock = 1;
          }
          else {
            if (pcVar4[local_430[0].gl_pathc] != 's') {
              FUN_0005df98(2,"src/rotater.c",0x182,"#r or #s not found");
              goto LAB_00059408;
            }
            param_1[0x2d].__data.__lock = 2;
          }
          uVar8 = (int)pcVar4 - (int)*(void **)((int)param_1 + 0x24);
          if (uVar8 < 0x401) {
            memcpy((void *)((int)param_1 + 0x28),*(void **)((int)param_1 + 0x24),uVar8);
            uVar5 = snprintf((char *)((int)(void *)((int)param_1 + 0x28) + uVar8),0x401 - uVar8,
                             "*%s");
            if ((-1 < (int)uVar5) && (uVar5 <= 0x401 - uVar8)) {
              *(uint *)((int)param_1 + 0x42c) = uVar8;
              *(uint *)((int)param_1 + 0x430) = uVar8 + 1;
              goto LAB_00058ca0;
            }
            piVar2 = __errno_location();
            FUN_0005df98(2,"src/rotater.c",0x191,"nwirte[%d], overflow or errno[%d]",uVar5,*piVar2);
          }
          else {
            FUN_0005df98(2,"src/rotater.c",0x189,"sizeof glob_path not enough,len[%ld]",uVar8);
          }
        }
LAB_00059408:
        FUN_0005df98(2,"src/rotater.c",0x1b5,"zlog_rotater_parse_archive_path fail");
      }
      uVar10 = 0xffffffff;
      FUN_000585e4(param_1);
      FUN_0005df98(2,"src/rotater.c",0x230,"zlog_rotater_lsmv [%s] fail, return",param_2);
    }
  }
  else {
    piVar2 = __errno_location();
    uVar10 = 0xffffffff;
    FUN_0005df98(2,"src/rotater.c",0x221,"stat [%s] fail, errno[%d]",param_2,*piVar2);
  }
LAB_00058a74:
  local_430[0].gl_offs = 0;
  local_430[0].gl_flags = 0;
  local_430[0].gl_closedir = (_func_5031 *)0x0;
  local_430[0].gl_readdir = (_func_5032 *)0x0;
  local_430[0].gl_pathc = 2;
  iVar1 = fcntl(*(int *)((int)param_1 + 0x1c),0xd,local_430);
  if (iVar1 == 0) {
    iVar1 = pthread_mutex_unlock(param_1);
    if (iVar1 == 0) {
      return uVar10;
    }
    piVar2 = __errno_location();
  }
  else {
    piVar2 = __errno_location();
    iVar7 = *(int *)((int)param_1 + 0x1c);
    FUN_0005df98(2,"src/rotater.c",0x206,"unlock fd[%s] fail, errno[%d]",iVar7,*piVar2);
    iVar1 = pthread_mutex_unlock(param_1);
    if (iVar1 == 0) goto LAB_00058b90;
  }
  iVar7 = *piVar2;
  FUN_0005df98(2,"src/rotater.c",0x20b,"pthread_mutext_unlock fail, errno[%d]",iVar7);
LAB_00058b90:
  FUN_0005df98(2,"src/rotater.c",0x239,"zlog_rotater_unlock fail",iVar7);
  return uVar10;
}

