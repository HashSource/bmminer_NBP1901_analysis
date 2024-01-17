
int FUN_00055f6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/category_table.c",0x69,"categories is null or 0");
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_0005da58();
    iVar2 = iVar1;
    if (iVar1 == 0) {
      iVar2 = FUN_000558e4(param_2,param_3);
      if (iVar2 == 0) {
        FUN_0005df98(2,"src/category_table.c",0x72,"zc_category_new fail");
        iVar2 = iVar1;
      }
      else {
        iVar3 = FUN_0005dac0(param_1,iVar2,iVar2);
        if (iVar3 != 0) {
          FUN_0005df98(2,"src/category_table.c",0x77,"zc_hashtable_put fail");
          FUN_00055870(iVar2);
          iVar2 = iVar1;
        }
      }
    }
  }
  return iVar2;
}

