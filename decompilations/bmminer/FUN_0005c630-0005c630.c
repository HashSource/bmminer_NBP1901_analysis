
void FUN_0005c630(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    pcVar1 = "true";
    if (param_1[0x906] == 0) {
      pcVar1 = "false";
    }
    FUN_0005df98(param_2,"src/spec.c",0x29,"----spec[%p][%.*s][%s|%d][%s,%ld,%ld,%s][%s]----",
                 param_1,param_1[1],*param_1,param_1 + 2,param_1[0x403],(int)param_1 + 0x1411,
                 param_1[0x907],param_1[0x908],pcVar1,param_1 + 0x404);
    return;
  }
  FUN_0005df98(2,"src/spec.c",0x22,"a_spec is null or 0");
  return;
}

