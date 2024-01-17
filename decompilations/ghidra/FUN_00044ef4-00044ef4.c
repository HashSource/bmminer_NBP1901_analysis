
bool FUN_00044ef4(uint param_1)

{
  uint local_c;
  
  FUN_00040314(3,&local_c);
  return (local_c & 1 << (param_1 & 0xff)) != 0;
}

