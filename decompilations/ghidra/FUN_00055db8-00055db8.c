
int FUN_00055db8(void)

{
  int iVar1;
  
  iVar1 = FUN_0005d7b8(0x14,&LAB_0005df18,FUN_0005df44,0,FUN_00055870);
  if (iVar1 == 0) {
    FUN_0005df98(2,"src/category_table.c",0x31,"zc_hashtable_new fail");
  }
  else {
    FUN_00055ccc(iVar1,0);
  }
  return iVar1;
}

