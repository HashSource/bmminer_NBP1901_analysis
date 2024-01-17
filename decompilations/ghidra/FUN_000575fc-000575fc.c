
void FUN_000575fc(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_0005df98(param_2,"src/format.c",0x1d,"---format[%p][%s = %s(%p)]---",param_1,param_1,
                 param_1 + 0x1001,*(undefined4 *)(param_1 + 0x2004));
    return;
  }
  FUN_0005df98(2,"src/format.c",0x18,"a_format is null or 0");
  return;
}

