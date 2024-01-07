
int FUN_000581b8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0005da58(*param_1);
  if (iVar1 != 0) {
    return iVar1 + 0x401;
  }
  FUN_0005df98(2,"src/mdc.c",0x79,"zc_hashtable_get fail");
  return 0;
}

