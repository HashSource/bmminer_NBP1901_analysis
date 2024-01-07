
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00016580(void)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *__s2;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined auStack_924 [252];
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined local_814;
  
  iVar10 = 0;
  do {
    iVar3 = FUN_0001e29c(iVar10);
    if (iVar3 != 0) {
      FUN_000440e8(iVar10);
      FUN_000304d4(10);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 4);
  memset(DAT_00016978,0,0xa0);
  piVar4 = (int *)FUN_0004d6e4("/etc/levels.json",0,auStack_924);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
    if (DAT_0007eb9c < 4) {
      return 0xffffffff;
    }
    snprintf((char *)&local_828,0x800,"load vol-freq config file %s failed\n","/etc/levels.json");
    FUN_0002e584(3,&local_828,0);
    return 0xffffffff;
  }
  piVar5 = (int *)FUN_0004e234(piVar4,"miner");
  if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
    if (DAT_0007eb9c < 5) {
      return 0xfffffffe;
    }
    pcVar8 = "failed to get miner type in %s\n";
LAB_000166cc:
    uVar11 = 0xfffffffe;
    snprintf((char *)&local_828,0x800,pcVar8,"/etc/levels.json");
    FUN_0002e584(4,&local_828,0);
  }
  else {
    if (4 < DAT_0007eb9c) {
      uVar11 = FUN_0004e768();
      snprintf((char *)&local_828,0x800,"miner type in %s is %s","/etc/levels.json",uVar11);
      FUN_0002e584(4,&local_828,0);
    }
    pcVar8 = (char *)FUN_0004e768(piVar5);
    pcVar8 = strstr(&DAT_00080ca0,pcVar8);
    if (pcVar8 != (char *)0x0) {
      __s2 = (char *)FUN_0004e768(piVar5);
      iVar10 = strcasecmp(pcVar8,__s2);
      if (iVar10 == 0) {
        uVar14 = FUN_0004e234(piVar4,"levels");
        piVar5 = (int *)uVar14;
        if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
          pcVar8 = (char *)((ulonglong)uVar14 >> 0x20);
          uVar12 = 0;
          iVar10 = 0;
          while( true ) {
            uVar6 = FUN_0004e5a0(piVar5,pcVar8);
            pvVar2 = DAT_00016978;
            uVar13 = uVar12 + 1;
            if (0x13 < iVar10 || uVar6 <= uVar12) break;
            uVar11 = FUN_0004e5bc(piVar5,uVar12);
            pcVar8 = "frequency";
            uVar12 = uVar13;
            if (*piVar4 == 0) {
              uVar14 = FUN_0004e234();
              pcVar8 = (char *)((ulonglong)uVar14 >> 0x20);
              if (((int *)uVar14 != (int *)0x0) && (*(int *)uVar14 == 3)) {
                uVar7 = FUN_0004e9c4();
                (&DAT_0007f81c)[iVar10 * 2] = uVar7;
                uVar14 = FUN_0004e234(uVar11,"voltage");
                pcVar8 = (char *)((ulonglong)uVar14 >> 0x20);
                if (((int *)uVar14 != (int *)0x0) && (*(int *)uVar14 == 3)) {
                  uVar14 = FUN_0004e9c4();
                  pcVar8 = (char *)((ulonglong)uVar14 >> 0x20);
                  (&DAT_0007f818)[iVar10 * 2] = (int)uVar14;
                  iVar10 = iVar10 + 1;
                }
              }
            }
          }
          iVar10 = 0;
          do {
            iVar9 = *(int *)((int)pvVar2 + iVar10 * 8);
            iVar3 = iVar10 * 8;
            iVar10 = iVar10 + 1;
            if (((iVar9 != 0) && (iVar3 = *(int *)((int)pvVar2 + iVar3 + 4), iVar3 != 0)) &&
               (4 < DAT_0007eb9c)) {
              snprintf((char *)&local_828,0x800,"level %d, voltage = %d frequency = %d",iVar10,iVar9
                       ,iVar3);
              FUN_0002e584(4,&local_828,0);
            }
          } while (iVar10 != 0x14);
          if (piVar4[1] == -1) {
            return 0;
          }
          piVar5 = piVar4 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar10 + -1;
          if (iVar10 + -1 != 0) {
            return 0;
          }
          FUN_0004eb6c(piVar4);
          return 0;
        }
        if (DAT_0007eb9c < 5) {
          return 0xfffffffe;
        }
        pcVar8 = "failed to get levels in %s\n";
        goto LAB_000166cc;
      }
    }
    if (DAT_0007eb9c < 4) {
      uVar11 = 0xfffffffd;
    }
    else {
      uVar11 = 0xfffffffd;
      local_828._0_1_ = s_miner_type_not_match_00060ac0[0];
      local_828._1_1_ = s_miner_type_not_match_00060ac0[1];
      local_828._2_1_ = s_miner_type_not_match_00060ac0[2];
      local_828._3_1_ = s_miner_type_not_match_00060ac0[3];
      uStack_824._0_1_ = s_miner_type_not_match_00060ac0[4];
      uStack_824._1_1_ = s_miner_type_not_match_00060ac0[5];
      uStack_824._2_1_ = s_miner_type_not_match_00060ac0[6];
      uStack_824._3_1_ = s_miner_type_not_match_00060ac0[7];
      uStack_820._0_1_ = s_miner_type_not_match_00060ac0[8];
      uStack_820._1_1_ = s_miner_type_not_match_00060ac0[9];
      uStack_820._2_1_ = s_miner_type_not_match_00060ac0[10];
      uStack_820._3_1_ = s_miner_type_not_match_00060ac0[11];
      uStack_81c._0_1_ = s_miner_type_not_match_00060ac0[12];
      uStack_81c._1_1_ = s_miner_type_not_match_00060ac0[13];
      uStack_81c._2_1_ = s_miner_type_not_match_00060ac0[14];
      uStack_81c._3_1_ = s_miner_type_not_match_00060ac0[15];
      uStack_818._0_1_ = s_miner_type_not_match_00060ac0[16];
      uStack_818._1_1_ = s_miner_type_not_match_00060ac0[17];
      uStack_818._2_1_ = s_miner_type_not_match_00060ac0[18];
      uStack_818._3_1_ = s_miner_type_not_match_00060ac0[19];
      local_814 = (undefined)ram0x00060ad4;
      FUN_0002e584(3,&local_828,0);
    }
  }
  return uVar11;
}

