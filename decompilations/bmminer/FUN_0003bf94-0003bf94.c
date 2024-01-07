
void FUN_0003bf94(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 in_stack_fffff7e0;
  undefined8 uVar4;
  undefined2 local_818 [1026];
  
  if (3 < DAT_0007eb9c) {
    uVar4 = CONCAT44((int)((ulonglong)in_stack_fffff7e0 >> 0x20),*(undefined4 *)*DAT_004fcb44);
    snprintf((char *)local_818,0x800,"%-40s : %d\n","voltage",*(undefined4 *)*DAT_004fcb44);
    FUN_0002ea54(3,local_818,0);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_818,0x800,"%-40s : ","freq_base",uVar4);
      FUN_0002ea54(3,local_818,0);
    }
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar2);
    if ((iVar1 != 0) && (3 < DAT_0007eb9c)) {
      snprintf((char *)local_818,0x800,"[%d] = %d ",iVar2,
               *(undefined4 *)(*DAT_004fcb44 + iVar2 * 4 + 4));
      FUN_0002ea54(3,local_818,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  if (DAT_0007eb9c < 4) {
    return;
  }
  local_818[0] = 10;
  FUN_0002ea54(3,local_818,0);
  if (DAT_0007eb9c < 4) {
LAB_0003c204:
    if (DAT_0007eb9c < 4) goto LAB_0003c358;
    pcVar3 = "false";
    if (*(char *)(*DAT_004fcb44 + 0x24) != '\0') {
      pcVar3 = "true";
    }
    snprintf((char *)local_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol",pcVar3);
    FUN_0002ea54(3,local_818,0);
    if (DAT_0007eb9c < 4) {
      return;
    }
    pcVar3 = "false";
    if (*(char *)(*DAT_004fcb44 + 0x25) != '\0') {
      pcVar3 = "true";
    }
    snprintf((char *)local_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol_runtime",pcVar3);
    FUN_0002ea54(3,local_818,0);
  }
  else {
    snprintf((char *)local_818,0x800,"%-40s : %d\n","freq_threshold",
             *(undefined4 *)(*DAT_004fcb44 + 0x14));
    FUN_0002ea54(3,local_818,0);
    if (DAT_0007eb9c < 4) {
      return;
    }
    snprintf((char *)local_818,0x800,"%-40s : %d\n","freq_serial_threshold",
             *(undefined4 *)(*DAT_004fcb44 + 0x18));
    FUN_0002ea54(3,local_818,0);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_818,0x800,"%-40s : %d\n","freq_diff_threshold",
               *(undefined4 *)(*DAT_004fcb44 + 0x1c));
      FUN_0002ea54(3,local_818,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf((char *)local_818,0x800,"%-40s : %d\n","freq_step",
               *(undefined4 *)(*DAT_004fcb44 + 0x20));
      FUN_0002ea54(3,local_818,0);
      goto LAB_0003c204;
    }
  }
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf((char *)local_818,0x800,"%-40s : %d\n","is_board_init_with_power_off",
           *(undefined4 *)(*DAT_004fcb44 + 0x28));
  FUN_0002ea54(3,local_818,0);
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf((char *)local_818,0x800,"%-40s : %.4f\n","hw_threshold",
           (double)*(float *)(*DAT_004fcb44 + 0x2c));
  FUN_0002ea54(3,local_818,0);
LAB_0003c358:
  if (3 < DAT_0007eb9c) {
    snprintf((char *)local_818,0x800,"%-40s : %.2f\n","nonce_rate_threshold",
             (double)*(float *)(*DAT_004fcb44 + 0x30));
    FUN_0002ea54(3,local_818,0);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_818,0x800,"%-40s : %.2f\n","nonce_rate_dec_threshold",
               (double)*(float *)(*DAT_004fcb44 + 0x34));
      FUN_0002ea54(3,local_818,0);
      if (3 < DAT_0007eb9c) {
        snprintf((char *)local_818,0x800,"%-40s : %d\n","freq_tuning_fine_step",
                 *(undefined4 *)(*DAT_004fcb44 + 0x38));
        FUN_0002ea54(3,local_818,0);
        if (3 < DAT_0007eb9c) {
          snprintf((char *)local_818,0x800,"%-40s : %d\n","freq_tuning_fine_count",
                   *(undefined4 *)(*DAT_004fcb44 + 0x3c));
          FUN_0002ea54(3,local_818,0);
          return;
        }
      }
    }
  }
  return;
}

