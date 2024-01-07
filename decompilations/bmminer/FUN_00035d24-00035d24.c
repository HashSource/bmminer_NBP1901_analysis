
int FUN_00035d24(int **param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int local_834;
  uint local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  
  if (3 < DAT_0007eb9c) {
    local_828 = CONCAT22(local_828._2_2_,10);
    FUN_0002ea54(3,&local_828,0);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,">>>> Get ideal hash rate, round %d.\n",param_3);
      FUN_0002e584(3,&local_828,0);
    }
  }
  iVar1 = FUN_00039fb4(param_2);
  if (iVar1 == 0) {
    FUN_00039a7c();
    piVar5 = *param_1;
    DAT_004fcb2c = *piVar5;
    if (piVar5[4] < DAT_004fcb2c) {
      *piVar5 = piVar5[4];
      DAT_004fcb2c = **param_1;
    }
    FUN_0001ad08((float)(longlong)DAT_0007edd0,DAT_004fcb28 + 0xc,DAT_00482a70,
                 *(undefined *)(*(int *)(DAT_004fcb28 + 8) + 8));
    iVar2 = FUN_00019ab4();
    if ((iVar2 != DAT_004fcb2c) && (iVar2 = FUN_000195a8(DAT_004fcb2c), iVar2 != 0)) {
      return iVar2;
    }
    uVar9 = 0xffffff;
    iVar2 = 0;
    do {
      iVar3 = FUN_0001e29c(iVar2);
      if ((iVar3 != 0) && (iVar3 = FUN_0001e0f0(), iVar3 != 0)) {
        puVar6 = (uint *)(DAT_004fcb28 + iVar2 * 0x400 + 8);
        do {
          puVar6 = puVar6 + 1;
          if (*puVar6 <= uVar9) {
            uVar9 = *puVar6;
          }
        } while (puVar6 != (uint *)(DAT_004fcb28 + 8 + (iVar3 + iVar2 * 0x100) * 4));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"chain = %d, freq_min = %d\n",0xff,uVar9);
      FUN_0002e584(3,&local_828,0);
    }
    uVar8 = 0;
    iVar2 = 0;
    do {
      iVar3 = FUN_0001e29c(iVar2);
      if ((iVar3 != 0) && (iVar3 = FUN_0001e0f0(), iVar3 != 0)) {
        puVar6 = (uint *)(DAT_004fcb28 + iVar2 * 0x400 + 8);
        do {
          puVar6 = puVar6 + 1;
          if (uVar8 < *puVar6) {
            uVar8 = *puVar6;
          }
        } while (puVar6 != (uint *)(DAT_004fcb28 + 8 + (iVar3 + iVar2 * 0x100) * 4));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"chain = %d, freq_max = %d\n",0xff,uVar8);
      FUN_0002e584(3,&local_828,0);
    }
    iVar2 = 0;
    local_82c = uVar8;
    FUN_000321b8(uVar9,DAT_0007eb58,0x14);
    do {
      iVar3 = FUN_0001e29c(iVar2);
      if (iVar3 != 0) {
        FUN_0003962c(iVar2,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    iVar3 = 0;
    FUN_0003a86c(&local_82c);
    iVar2 = FUN_000391f4();
    do {
      iVar4 = FUN_0001e29c(iVar3);
      if (iVar4 != 0) {
        FUN_0003a054(iVar3,iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    iVar3 = 0;
    local_834 = 0;
    do {
      iVar4 = FUN_0001e29c(iVar3);
      if (iVar4 != 0) {
        iVar4 = FUN_0001e0f0();
        uVar9 = DAT_0007eb9c;
        if (iVar4 != 0) {
          iVar7 = iVar4 + iVar3 * 0x100;
          iVar4 = 0;
          piVar5 = (int *)(DAT_004fcb28 + iVar3 * 0x400 + 8);
          piVar10 = (int *)(&DAT_00808ffc + iVar3 * 0x400 + iVar2);
          do {
            piVar5 = piVar5 + 1;
            piVar10 = piVar10 + 1;
            iVar4 = iVar4 + (uint)(*piVar10 * *piVar5) / 8000;
          } while ((int *)(DAT_004fcb28 + 8 + iVar7 * 4) != piVar5);
          local_834 = local_834 + iVar4;
        }
        *(int *)(DAT_004fcb28 + (iVar3 + 0x402) * 4 + 4) = iVar4;
        if (3 < uVar9) {
          snprintf((char *)&local_828,0x800,"chain = %d, ideal_hash_rate_GH = %d\n",iVar3,iVar4);
          FUN_0002e584(3,&local_828,0);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"hash_rate_total_GH = %d\n",local_834);
      FUN_0002e584(3,&local_828,0);
    }
  }
  else if (3 < DAT_0007eb9c) {
    local_828._0_1_ = s_Board_init_failed__00067448[0];
    local_828._1_1_ = s_Board_init_failed__00067448[1];
    local_828._2_1_ = s_Board_init_failed__00067448[2];
    local_828._3_1_ = s_Board_init_failed__00067448[3];
    uStack_824._0_1_ = s_Board_init_failed__00067448[4];
    uStack_824._1_1_ = s_Board_init_failed__00067448[5];
    uStack_824._2_1_ = s_Board_init_failed__00067448[6];
    uStack_824._3_1_ = s_Board_init_failed__00067448[7];
    uStack_820._0_1_ = s_Board_init_failed__00067448[8];
    uStack_820._1_1_ = s_Board_init_failed__00067448[9];
    uStack_820._2_1_ = s_Board_init_failed__00067448[10];
    uStack_820._3_1_ = s_Board_init_failed__00067448[11];
    uStack_81c._0_1_ = s_Board_init_failed__00067448[12];
    uStack_81c._1_1_ = s_Board_init_failed__00067448[13];
    uStack_81c._2_1_ = s_Board_init_failed__00067448[14];
    uStack_81c._3_1_ = s_Board_init_failed__00067448[15];
    local_818._0_1_ = s_Board_init_failed__00067448[16];
    local_818._1_1_ = s_Board_init_failed__00067448[17];
    local_818._2_1_ = s_Board_init_failed__00067448[18];
    local_818._3_1_ = s_Board_init_failed__00067448[19];
    FUN_0002e584(3,&local_828,0);
    return iVar1;
  }
  return iVar1;
}

