
void FUN_0003d8f4(char **param_1)

{
  size_t sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *in_r12;
  undefined4 *puVar7;
  bool bVar8;
  size_t local_1c;
  
  pcVar5 = param_1[1];
  bVar8 = (char *)0x3 < pcVar5;
  if (pcVar5 != (char *)0x4) {
    bVar8 = pcVar5 != (char *)0x1;
  }
  if (!bVar8 || (pcVar5 == (char *)0x4 || pcVar5 == (char *)0x2)) {
    if (param_1[6] != (char *)0x0) {
      if (**param_1 == '-') {
        pcVar5 = *param_1 + 1;
        local_1c = strcspn(pcVar5,"|= ");
        while (*pcVar5 == '-') {
          sVar1 = local_1c;
          if (local_1c == 1) goto LAB_0003da28;
          in_r12 = param_1[1];
          DAT_0099ee14 = DAT_0099ee14 + 1;
LAB_0003d98c:
          if ((in_r12 == (char *)0x1) &&
             (sVar1 = local_1c, pcVar5[local_1c] == '=' || pcVar5[local_1c] == ' '))
          goto LAB_0003da0c;
          pcVar5 = (char *)FUN_0003d7f4(pcVar5,&local_1c);
          if (pcVar5 == (char *)0x0) {
            return;
          }
        }
        if (local_1c == 1) {
          in_r12 = param_1[1];
          DAT_0099ee18 = DAT_0099ee18 + 1;
          if (((uint)(in_r12 + -2) & 0xfffffffd) == 0) {
            iRam0099ee10 = iRam0099ee10 + 1;
          }
          goto LAB_0003d98c;
        }
        pcVar5 = pcVar5 + -1;
        sVar1 = errx(1,"Option %s: invalid short option \'%.*s\'",*param_1,local_1c + 1,pcVar5);
LAB_0003da0c:
        sVar1 = errx(in_r12,"Option %s: does not take arguments \'%s\'",*param_1,pcVar5 + sVar1 + 1)
        ;
LAB_0003da28:
        errx(sVar1,"Option %s: invalid long option \'--\'",*param_1);
      }
      errx(1,"Option %s: does not begin with \'-\'");
    }
    errx(1,"Option %s: description cannot be NULL");
  }
  puVar2 = (undefined4 *)errx(1,"Option %s: unknown entry type %u");
  DAT_0099ee1c = realloc(DAT_0099ee1c,(DAT_0099ee24 + 1) * 0x1c);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar6 = puVar2[3];
  puVar7 = (undefined4 *)((int)DAT_0099ee1c + DAT_0099ee24 * 0x1c);
  DAT_0099ee24 = DAT_0099ee24 + 1;
  *puVar7 = *puVar2;
  puVar7[1] = uVar3;
  puVar7[2] = uVar4;
  puVar7[3] = uVar6;
  uVar3 = puVar2[5];
  uVar4 = puVar2[6];
  puVar7[4] = puVar2[4];
  puVar7[5] = uVar3;
  puVar7[6] = uVar4;
  return;
}

