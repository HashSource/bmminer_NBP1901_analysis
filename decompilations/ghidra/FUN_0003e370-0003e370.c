
char * FUN_0003e370(char *param_1,char *param_2)

{
  undefined2 uVar1;
  undefined uVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *__s;
  undefined2 *__s_00;
  undefined4 *puVar11;
  char **ppcVar12;
  char **ppcVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  bool bVar18;
  undefined2 *puVar19;
  char *pcVar20;
  int local_7c [20];
  undefined *local_2c;
  
  sVar3 = strlen(param_1);
  uVar16 = DAT_0099ee24;
  ppcVar13 = DAT_0099ee1c;
  sVar3 = DAT_0099ee18 + 0x14 + sVar3;
  if (param_2 == (char *)0x0) {
    if (DAT_0099ee24 == 0) {
      param_2 = "";
      goto LAB_0003e460;
    }
    uVar15 = 0;
    ppcVar12 = DAT_0099ee1c;
    do {
      uVar15 = uVar15 + 1;
      if ((ppcVar12[2] == &UNK_0003d5f0) && (param_2 = ppcVar12[5], param_2 != (char *)0x0)) {
        sVar4 = strlen(param_2);
        sVar3 = sVar3 + sVar4;
        goto LAB_0003e3cc;
      }
      ppcVar12 = ppcVar12 + 7;
    } while (uVar15 != DAT_0099ee24);
    param_2 = "";
  }
  else {
    sVar4 = strlen(param_2);
    sVar3 = sVar3 + sVar4;
    ppcVar13 = DAT_0099ee1c;
    if (uVar16 == 0) goto LAB_0003e460;
  }
LAB_0003e3cc:
  uVar15 = 0;
  do {
    while( true ) {
      pcVar17 = ppcVar13[6];
      if (ppcVar13[1] != (char *)0x8) break;
      uVar15 = uVar15 + 1;
      sVar4 = strlen(pcVar17);
      sVar3 = sVar4 + sVar3 + 3;
      ppcVar13 = ppcVar13 + 7;
      if (uVar16 <= uVar15) goto LAB_0003e460;
    }
    if (pcVar17 != &DAT_0099ee28) {
      sVar4 = strlen(*ppcVar13);
      sVar5 = strlen(pcVar17);
      iVar6 = sVar4 + sVar3 + 6 + sVar5;
      iVar10 = iVar6 + 0x76;
      if (ppcVar13[4] == (char *)0x0) {
        iVar10 = iVar6 + 0x15;
      }
      sVar3 = iVar10 + 1;
    }
    uVar15 = uVar15 + 1;
    ppcVar13 = ppcVar13 + 7;
  } while (uVar15 < uVar16);
LAB_0003e460:
  pcVar17 = (char *)malloc(sVar3);
  if (pcVar17 != (char *)0x0) {
    iVar6 = sprintf(pcVar17,"Usage: %s",param_1);
    pcVar14 = pcVar17 + iVar6;
    *(undefined4 *)(pcVar17 + iVar6) = DAT_00068bec;
    pcVar7 = (char *)FUN_0003db7c(local_7c);
    pcVar20 = pcVar14;
    if (pcVar7 != (char *)0x0) {
      iVar6 = 0;
      do {
        if (DAT_0099ee1c[local_7c[0] * 7 + 6] != &DAT_0099ee28) {
          pcVar14[iVar6 + 3] = *pcVar7;
          iVar6 = iVar6 + 1;
        }
        pcVar7 = (char *)FUN_0003dbdc(pcVar7,local_7c);
      } while (pcVar7 != (char *)0x0);
      if (iVar6 != 0) {
        pcVar20 = pcVar14 + iVar6 + 4;
        *(undefined2 *)(pcVar14 + iVar6 + 3) = DAT_0006bb38;
      }
    }
    iVar6 = sprintf(pcVar20," %s",param_2);
    puVar19 = (undefined2 *)0x6a02c;
    pcVar7 = pcVar20 + iVar6 + 1;
    bVar18 = DAT_0099ee24 != 0;
    *(undefined2 *)(pcVar20 + iVar6) = s__s__set_1704_flash_pointer_err__0006a00c._32_2_;
    if (bVar18) {
      iVar6 = 0;
      uVar16 = 0;
      pcVar20 = "                    ";
      do {
        puVar11 = (undefined4 *)((int)DAT_0099ee1c + iVar6);
        if ((undefined *)puVar11[6] != &DAT_0099ee28) {
          if (puVar11[1] == 8) {
            iVar10 = sprintf(pcVar7,"%s:\n");
            pcVar7 = pcVar7 + iVar10;
          }
          else {
            iVar10 = sprintf(pcVar7,"%s",*puVar11);
            puVar11 = (undefined4 *)(pcVar7 + iVar10);
            if (*(int *)((int)DAT_0099ee1c + iVar6 + 4) == 2) {
              __s = *(char **)((int)DAT_0099ee1c + iVar6);
              pcVar14 = strchr(__s,0x20);
              if ((pcVar14 == (char *)0x0) &&
                 (pcVar14 = strchr(__s,0x3d), uVar2 = DAT_00068bfe, uVar1 = DAT_00068bfc,
                 pcVar14 == (char *)0x0)) {
                iVar10 = iVar10 + 6;
                *puVar11 = DAT_00068bf8;
                *(undefined2 *)(puVar11 + 1) = uVar1;
                *(undefined *)((int)puVar11 + 6) = uVar2;
                puVar11 = (undefined4 *)(pcVar7 + iVar10);
              }
            }
            iVar8 = sprintf((char *)puVar11,"%.*s");
            iVar9 = sprintf(pcVar7 + iVar8 + iVar10,"%s",
                            *(undefined4 *)((int)DAT_0099ee1c + iVar6 + 0x18),
                            (int)DAT_0099ee1c + iVar6,puVar19,pcVar20);
            iVar9 = iVar9 + iVar8 + iVar10;
            __s_00 = (undefined2 *)(pcVar7 + iVar9);
            if (*(int *)((int)DAT_0099ee1c + iVar6 + 0x10) != 0) {
              local_2c = &DAT_002e2e2e;
              (**(code **)((int)DAT_0099ee1c + iVar6 + 0x10))
                        (local_7c,*(undefined4 *)((int)DAT_0099ee1c + iVar6 + 0x14));
              iVar10 = sprintf((char *)__s_00," (default: %s)",local_7c);
              __s_00 = (undefined2 *)(pcVar7 + iVar10 + iVar9);
            }
            pcVar7 = (char *)((int)__s_00 + 1);
            *__s_00 = *puVar19;
          }
        }
        uVar16 = uVar16 + 1;
        iVar6 = iVar6 + 0x1c;
      } while (uVar16 < DAT_0099ee24);
    }
    *pcVar7 = '\0';
  }
  return pcVar17;
}

