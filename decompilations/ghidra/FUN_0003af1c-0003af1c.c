
void FUN_0003af1c(void)

{
  char *pcVar1;
  char acStack_818 [2052];
  
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf(acStack_818,0x800,"%-40s : %d\n","voltage",*(undefined4 *)*DAT_004fcb40);
  FUN_0002ea54(3,acStack_818,0);
  if (DAT_0007eb9c < 4) {
LAB_0003b0ac:
    if (DAT_0007eb9c < 4) goto LAB_0003b1f8;
    pcVar1 = "false";
    if (*(char *)(*DAT_004fcb40 + 0x14) != '\0') {
      pcVar1 = "true";
    }
    snprintf(acStack_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol",pcVar1);
    FUN_0002ea54(3,acStack_818,0);
    if (DAT_0007eb9c < 4) {
      return;
    }
    pcVar1 = "false";
    if (*(char *)(*DAT_004fcb40 + 0x15) != '\0') {
      pcVar1 = "true";
    }
    snprintf(acStack_818,0x800,"%-40s : %s\n","is_inc_freq_with_high_vol_runtime",pcVar1);
    FUN_0002ea54(3,acStack_818,0);
  }
  else {
    snprintf(acStack_818,0x800,"%-40s : %d\n","freq_base",*(undefined4 *)(*DAT_004fcb40 + 4));
    FUN_0002ea54(3,acStack_818,0);
    if (DAT_0007eb9c < 4) {
      return;
    }
    snprintf(acStack_818,0x800,"%-40s : %d\n","freq_threshold",*(undefined4 *)(*DAT_004fcb40 + 8));
    FUN_0002ea54(3,acStack_818,0);
    if (3 < DAT_0007eb9c) {
      snprintf(acStack_818,0x800,"%-40s : %d\n","freq_serial_threshold",
               *(undefined4 *)(*DAT_004fcb40 + 0xc));
      FUN_0002ea54(3,acStack_818,0);
      if (DAT_0007eb9c < 4) {
        return;
      }
      snprintf(acStack_818,0x800,"%-40s : %d\n","freq_step",*(undefined4 *)(*DAT_004fcb40 + 0x10));
      FUN_0002ea54(3,acStack_818,0);
      goto LAB_0003b0ac;
    }
  }
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf(acStack_818,0x800,"%-40s : %d\n","is_board_init_with_power_off",
           *(undefined4 *)(*DAT_004fcb40 + 0x18));
  FUN_0002ea54(3,acStack_818,0);
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf(acStack_818,0x800,"%-40s : %.4f\n","hw_threshold",
           (double)*(float *)(*DAT_004fcb40 + 0x1c));
  FUN_0002ea54(3,acStack_818,0);
LAB_0003b1f8:
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_818,0x800,"%-40s : %.2f\n","nonce_rate_threshold",
             (double)*(float *)(*DAT_004fcb40 + 0x20));
    FUN_0002ea54(3,acStack_818,0);
    if (3 < DAT_0007eb9c) {
      snprintf(acStack_818,0x800,"%-40s : %.2f\n","nonce_rate_dec_threshold",
               (double)*(float *)(*DAT_004fcb40 + 0x24));
      FUN_0002ea54(3,acStack_818,0);
      return;
    }
  }
  return;
}

