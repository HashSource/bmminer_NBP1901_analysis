
undefined4 FUN_00055a28(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/category.c",0x96,"a_category is null or 0");
    return 0xffffffff;
  }
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x44c) != 0) {
      FUN_0005d580();
    }
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x408);
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x40c);
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_1 + 0x410);
    *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_1 + 0x414);
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x448);
    *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_1 + 0x418);
    *(undefined4 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 0x41c);
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x424);
    iVar1 = FUN_000555b0(param_1,param_2,param_2 + 4);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0005df98(2,"src/category.c",0xa3,"zlog_category_obtain_rules fail");
    *(undefined4 *)(param_1 + 0x448) = 0;
    return 0xffffffff;
  }
  FUN_0005df98(2,"src/category.c",0x97,"new_rules is null or 0");
  return 0xffffffff;
}

