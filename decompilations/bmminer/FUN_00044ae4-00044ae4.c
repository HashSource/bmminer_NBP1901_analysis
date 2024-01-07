
void FUN_00044ae4(void)

{
  uint local_c;
  
  local_c = 0;
  FUN_00040314(0xd,&local_c);
  FUN_00040390(0xd,~(~(local_c >> 0x10) << 0x10));
  sleep(3);
  FUN_00040314(0xd,&local_c);
  FUN_00040390(0xd,local_c & 0xffff0000);
  sleep(1);
  FUN_000444b8();
  return;
}

