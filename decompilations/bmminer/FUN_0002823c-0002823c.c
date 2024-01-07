
undefined4 FUN_0002823c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_000282c0;
  puts("bmminer_socket_init");
  while (iVar2 = FUN_0005261c(uVar1,4), iVar2 != 0) {
    sleep(3);
  }
  puts("regist ..");
  while( true ) {
    FUN_00052930(s_bitmain_submit_nonce_0007e2f0);
    iVar2 = FUN_00052930(s_bitmain_api_status_0007e374);
    if (iVar2 == 0) break;
    sleep(3);
  }
  puts("regist done!");
  return 0;
}

