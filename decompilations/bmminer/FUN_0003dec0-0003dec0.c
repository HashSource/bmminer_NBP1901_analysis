
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0003dec0(undefined4 param_1,undefined4 *param_2,int *param_3,code *param_4)

{
  char cVar1;
  char **ppcVar2;
  char *pcVar3;
  char *pcVar4;
  void *__ptr;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  char **ppcVar9;
  size_t sVar10;
  int iVar11;
  char *local_38;
  int local_30;
  size_t local_2c [2];
  
  pcVar3 = getenv("POSIXLY_CORRECT");
  pcVar4 = (char *)param_2[1];
  if (pcVar3 == (char *)0x0) {
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    if (*pcVar4 == '-') {
      ppcVar9 = (char **)(param_2 + 1);
      iVar8 = 1;
    }
    else {
      iVar8 = 1;
      ppcVar2 = (char **)(param_2 + 2);
      do {
        ppcVar9 = ppcVar2;
        pcVar4 = *ppcVar9;
        iVar8 = iVar8 + 1;
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
        ppcVar2 = ppcVar9 + 1;
      } while (*pcVar4 != '-');
    }
    cVar1 = pcVar4[1];
  }
  else {
    ppcVar9 = (char **)(param_2 + 1);
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    if (*pcVar4 != '-') {
      return 0;
    }
    cVar1 = pcVar4[1];
    iVar8 = 1;
  }
  if (cVar1 == '-') {
    if (pcVar4[2] == '\0') {
      FUN_0003de88(param_1,param_2,iVar8);
      return 0;
    }
    if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("*offset == 0","ccan/opt/parse.c",0x3b,"parse_one");
    }
    pcVar4 = (char *)FUN_0003dacc(&local_30,local_2c);
    sVar6 = local_2c[0];
    while (pcVar4 != (char *)0x0) {
      pcVar3 = *ppcVar9;
      local_2c[0] = sVar6;
      iVar5 = strncmp(pcVar3 + 2,pcVar4,sVar6);
      if (iVar5 == 0) {
        sVar10 = sVar6 + 2;
        if (pcVar3[sVar10] == '=') {
          iVar5 = local_30 * 0x1c;
          pcVar3 = pcVar3 + sVar6 + 3;
          local_38 = pcVar4 + -2;
          iVar7 = DAT_0099ee1c + iVar5;
          if (*(int *)(iVar7 + 4) == 1) {
            local_2c[0] = sVar10;
            if (pcVar3 != (char *)0x0) {
              (*param_4)("%s: %.*s: %s",*param_2,sVar10,local_38,"doesn\'t allow an argument");
              return 0xffffffff;
            }
            goto LAB_0003e170;
          }
          local_2c[0] = sVar10;
          if (pcVar3 != (char *)0x0) goto LAB_0003dff8;
        }
        else {
          if (pcVar3[sVar10] != '\0') goto LAB_0003e120;
          local_38 = pcVar4 + -2;
          iVar7 = DAT_0099ee1c + local_30 * 0x1c;
          local_2c[0] = sVar10;
          if (*(int *)(iVar7 + 4) == 1) goto LAB_0003e170;
        }
        local_38 = pcVar4 + -2;
        iVar5 = local_30 * 0x1c;
        iVar11 = *param_3;
        local_2c[0] = sVar10;
        goto LAB_0003dfe0;
      }
LAB_0003e120:
      pcVar4 = (char *)FUN_0003db24(pcVar4,&local_30,local_2c);
      sVar6 = local_2c[0];
    }
  }
  else {
    local_38 = (char *)FUN_0003db7c(&local_30);
    if (local_38 != (char *)0x0) {
      iVar11 = *param_3 + 1;
      if (*local_38 != (*ppcVar9)[iVar11]) {
        do {
          local_38 = (char *)FUN_0003dbdc(local_38,&local_30);
          if (local_38 == (char *)0x0) goto LAB_0003e138;
          iVar11 = *param_3 + 1;
        } while ((*ppcVar9)[iVar11] != *local_38);
      }
      local_38 = local_38 + -1;
      *param_3 = iVar11;
      local_2c[0] = 2;
      iVar5 = local_30 * 0x1c;
      iVar7 = DAT_0099ee1c + iVar5;
      if (*(int *)(iVar7 + 4) == 1) {
LAB_0003e170:
        pcVar3 = (char *)0x0;
        __ptr = (void *)(**(code **)(iVar7 + 8))(*(undefined4 *)(iVar7 + 0x14));
      }
      else {
LAB_0003dfe0:
        if ((iVar11 == 0) || (pcVar3 = *ppcVar9 + iVar11 + 1, (*ppcVar9)[iVar11 + 1] == '\0')) {
          pcVar3 = (char *)param_2[iVar8 + 1];
          if (pcVar3 == (char *)0x0) {
            (*param_4)("%s: %.*s: %s",*param_2,local_2c[0],local_38,"requires an argument");
            return 0xffffffff;
          }
        }
        else {
          *param_3 = 0;
        }
LAB_0003dff8:
        if (*(int *)(DAT_0099ee1c + iVar5 + 4) == 4) {
          FUN_0003d3d4(pcVar3,*(undefined4 *)(DAT_0099ee1c + iVar5 + 0x14));
        }
        iVar5 = DAT_0099ee1c + local_30 * 0x1c;
        __ptr = (void *)(**(code **)(iVar5 + 0xc))(pcVar3,*(undefined4 *)(iVar5 + 0x14));
      }
      if (__ptr != (void *)0x0) {
        (*param_4)("%s: %.*s: %s",*param_2,local_2c[0],local_38,__ptr);
        free(__ptr);
        return 0xffffffff;
      }
      if (*param_3 != 0) {
        if ((*ppcVar9)[*param_3 + 1] != '\0') {
          return 1;
        }
        *param_3 = 0;
      }
      FUN_0003de88(param_1,param_2,iVar8);
      if ((pcVar3 != (char *)0x0) && (*ppcVar9 == pcVar3)) {
        FUN_0003de88(param_1,param_2,iVar8);
      }
      return 1;
    }
  }
LAB_0003e138:
  pcVar4 = *ppcVar9;
  sVar6 = strlen(pcVar4);
  (*param_4)("%s: %.*s: %s",*param_2,sVar6,pcVar4,"unrecognized option");
  return 0xffffffff;
}

