
undefined4 FUN_000451c0(int param_1)

{
  uint local_10;
  undefined auStack_c [4];
  
  FUN_00040314(0x24,&local_10);
  FUN_00040390(0x24,local_10 & 0xffff00ff | param_1 << 8);
  FUN_00040314(0x24,auStack_c);
  return 0;
}

