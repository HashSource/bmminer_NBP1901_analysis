
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a054(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined8 in_stack_fffff7b8;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined local_820;
  
  uVar2 = (undefined4)((ulonglong)in_stack_fffff7b8 >> 0x20);
  if ((DAT_004fcb3c == (int *)0x0) || (DAT_004fcb3c[1] == 0)) {
    if (DAT_0007eb9c < 4) {
      return;
    }
    local_830 = s_Handle_is_NULL__00067bc8._0_4_;
    uStack_82c = s_Handle_is_NULL__00067bc8._4_4_;
    uStack_828 = s_Handle_is_NULL__00067bc8._8_4_;
    uStack_824 = s_Handle_is_NULL__00067bc8._12_4_;
    local_820 = (undefined)ram0x00067bd8;
    FUN_0002e584(3,&local_830,0);
    return;
  }
  if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
  snprintf((char *)&local_830,0x800,"chain %d stats:\n",param_1);
  FUN_0002ea54(3,&local_830,0);
  if (DAT_0007eb9c < 4) {
LAB_0003a4b8:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_top_check_fail",
               *(undefined4 *)(param_2 + (param_1 + 0x202a08) * 4));
      FUN_0002ea54(3,&local_830,0);
      if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
      uVar7 = *(undefined4 *)(param_2 + (param_1 + 0x202a0c) * 4);
      dVar8 = (double)CONCAT44(uVar2,uVar7);
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_crc_err",uVar7);
      FUN_0002ea54(3,&local_830,0);
      goto LAB_0003a550;
    }
LAB_0003a5e8:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_extra",
               *(undefined4 *)(param_2 + (param_1 + 0x202a18) * 4));
      FUN_0002ea54(3,&local_830,0);
      if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
      uVar7 = *(undefined4 *)(param_2 + (param_1 + 0x202a1c) * 4);
      dVar8 = (double)CONCAT44(uVar2,uVar7);
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_unknown_err",uVar7);
      FUN_0002ea54(3,&local_830,0);
      goto LAB_0003a680;
    }
LAB_0003a718:
    if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
    dVar8 = (double)*(float *)(param_2 + (param_1 + 0x202a24) * 4 + 4);
    snprintf((char *)&local_830,0x800,"%-30s : %.2f\n","stddev",dVar8);
    FUN_0002ea54(3,&local_830,0);
    if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
    local_830 = CONCAT22(local_830._2_2_,10);
    FUN_0002ea54(3,&local_830,0);
  }
  else {
    iVar1 = FUN_0001e130();
    iVar4 = FUN_0001e0f0();
    snprintf((char *)&local_830,0x800,"%-30s : %d\n","send_nonce_num",iVar4 * iVar1 * 8);
    FUN_0002ea54(3,&local_830,0);
    if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
    uVar7 = *(undefined4 *)(param_2 + (param_1 + 0x202800) * 4);
    dVar8 = (double)CONCAT44(uVar2,uVar7);
    snprintf((char *)&local_830,0x800,"%-30s : %d\n","recv_nonce_num",uVar7);
    FUN_0002ea54(3,&local_830,0);
    if (3 < DAT_0007eb9c) {
      uVar6 = *(uint *)(param_2 + (param_1 + 0x202800) * 4);
      iVar1 = FUN_0001e130();
      iVar4 = FUN_0001e0f0();
      dVar8 = (double)((float)(ulonglong)uVar6 / (float)(longlong)(iVar4 * iVar1 * 8));
      snprintf((char *)&local_830,0x800,"%-30s : %f\n","nonce_return_rate",dVar8);
      uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
      FUN_0002ea54(3,&local_830,0);
      if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_repeated",
               *(undefined4 *)(param_2 + (param_1 + 0x202a04) * 4));
      FUN_0002ea54(3,&local_830,0);
      goto LAB_0003a4b8;
    }
LAB_0003a550:
    if (3 < DAT_0007eb9c) {
      uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_invalid",
               *(undefined4 *)(param_2 + (param_1 + 0x202a10) * 4));
      FUN_0002ea54(3,&local_830,0);
      if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","nonce_num_hw",
               *(undefined4 *)(param_2 + (param_1 + 0x202a14) * 4));
      FUN_0002ea54(3,&local_830,0);
      goto LAB_0003a5e8;
    }
LAB_0003a680:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","invalid_asic_num",
               *(undefined4 *)(param_2 + (param_1 + 0x202a20) * 4 + 4));
      FUN_0002ea54(3,&local_830,0);
      if (DAT_0007eb9c < 4) goto LAB_0003a0a0;
      snprintf((char *)&local_830,0x800,"%-30s : %d\n","invalid_chain_num",
               *(undefined4 *)(&DAT_0080a880 + param_2));
      FUN_0002ea54(3,&local_830,0);
      goto LAB_0003a718;
    }
  }
  if (3 < DAT_0007eb9c) {
    snprintf((char *)&local_830,0x800,"Chain %d nonce:\n",param_1,dVar8);
    FUN_0002e584(3,&local_830,0);
  }
LAB_0003a0a0:
  iVar1 = FUN_0001e0f0();
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_830,0x800,"IC[%03d]:%04d ",iVar4,
                 *(undefined4 *)(&DAT_00809000 + param_2 + param_1 * 0x400 + iVar4 * 4));
        FUN_0002ea54(3,&local_830,0);
      }
      iVar4 = iVar4 + 1;
      uVar2 = FUN_0001e100();
      FUN_0005fadc(iVar4,uVar2);
      if ((extraout_r1 == 0) && (3 < DAT_0007eb9c)) {
        local_830 = CONCAT22(local_830._2_2_,10);
        FUN_0002ea54(3,&local_830);
      }
    } while (iVar4 != iVar1);
  }
  if (DAT_0007eb9c < 4) {
    if (*DAT_004fcb3c == 0xa1) {
      return;
    }
  }
  else {
    local_830 = CONCAT22(local_830._2_2_,10);
    FUN_0002ea54(3,&local_830,0);
    if (*DAT_004fcb3c == 0xa1) {
      return;
    }
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_830,0x800,"Chain %d domain:\n",param_1);
      FUN_0002ea54(3,&local_830,0);
    }
  }
  uVar6 = 0;
  iVar1 = FUN_0001e0e0();
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_0001e150();
      for (uVar5 = 0; uVar3 = FUN_0001e150(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
        if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_830,0x800,"D[%02d]:%04d ",uVar5 + uVar6 * iVar1,
                   *(undefined4 *)
                    (&DAT_0080a010 + param_2 + (param_1 * 0x40 + uVar6 * iVar1) * 4 + uVar5 * 4));
          FUN_0002ea54(3,&local_830,0);
        }
      }
      iVar1 = FUN_0001e150();
      if (iVar1 < 2) {
LAB_0003a2c0:
        if (3 < DAT_0007eb9c) {
          local_830 = CONCAT22(local_830._2_2_,10);
          FUN_0002ea54(3,&local_830,0);
        }
      }
      else if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_830,0x800,"D_BIG[%02d]:%05d",uVar6,
                 *(undefined4 *)(&DAT_0080a410 + param_2 + param_1 * 0x100 + uVar6 * 4));
        FUN_0002ea54(3,&local_830,0);
        goto LAB_0003a2c0;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_0001e0e0();
    } while (uVar6 < uVar5);
  }
  if (DAT_0007eb9c < 4) {
    return;
  }
  FUN_0002ea54(3,&local_830,0);
  return;
}

