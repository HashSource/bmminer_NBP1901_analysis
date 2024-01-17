
void FUN_00055ba0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/category.c",0xc2,"a_category is null or 0");
    return;
  }
  if (*(int *)(param_1 + 0x44c) == 0) {
    FUN_0005df98(1,"src/category.c",0xc4,"a_category->fit_rules_backup in NULL, never update before"
                );
    return;
  }
  if (*(int *)(param_1 + 0x448) == 0) {
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x44c);
    *(undefined4 *)(param_1 + 0x44c) = 0;
  }
  else {
    FUN_0005d580();
    uVar1 = *(undefined4 *)(param_1 + 0x44c);
    *(undefined4 *)(param_1 + 0x44c) = 0;
    *(undefined4 *)(param_1 + 0x448) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x42c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x430);
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x434);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 0x438);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_1 + 0x43c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_1 + 0x444);
  memset((undefined4 *)(param_1 + 0x428),0,0x20);
  return;
}

