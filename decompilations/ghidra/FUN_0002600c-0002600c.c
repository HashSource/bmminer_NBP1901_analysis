
void FUN_0002600c(void)

{
  uint uVar1;
  uint uVar2;
  undefined auStack_20 [3];
  char local_1d;
  
  uVar1 = FUN_000452b0();
  FUN_000452d0(uVar1 | 0x10000);
  prctl(0xf,"nonce_reg_process",0,0,0);
  do {
    uVar1 = FUN_00044d3c();
    uVar1 = uVar1 >> 1;
    if (uVar1 != 0) {
      uVar2 = 0;
      do {
        while( true ) {
          FUN_00044d94(auStack_20);
          if (-1 < local_1d) break;
          uVar2 = uVar2 + 1;
          FUN_0002c5e8();
          if (uVar1 == uVar2) goto LAB_00026088;
        }
        uVar2 = uVar2 + 1;
        FUN_0002c96c(auStack_20);
      } while (uVar1 != uVar2);
    }
LAB_00026088:
    FUN_000304d4(1);
  } while( true );
}

