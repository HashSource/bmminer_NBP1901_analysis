
void FUN_00026b80(void)

{
  prctl(0xf,"chk_status",0,0,0);
  do {
    do {
      FUN_00025db0();
      FUN_00026670();
      FUN_000304d4(1000);
    } while (DAT_0007f7e0 != 0);
    FUN_00013da4(400);
  } while( true );
}

