
void FUN_00058240(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_0005df98(param_2,"src/record.c",0xf,"--record:[%p][%s:%p]--",param_1,param_1,
                 *(undefined4 *)(param_1 + 0x404));
    return;
  }
  FUN_0005df98(2,"src/record.c",0xe,"a_record is null or 0");
  return;
}

