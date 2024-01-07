
void FUN_0005729c(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_0005df98(param_2,"src/event.c",0x28,
                 "---event[%p][%s,%s][%s(%ld),%s(%ld),%ld,%d][%p,%s][%ld,%ld][%ld,%ld][%d]---",
                 param_1,*param_1,param_1 + 2,param_1[0x44],param_1[0x45],param_1[0x46],
                 param_1[0x47],param_1[0x48],param_1[0x49],param_1[0x4a],param_1[0x4c],param_1[0x4f]
                 ,param_1[0x50],param_1[0x5f],param_1[0x6a],param_1[0x5e]);
    return;
  }
  FUN_0005df98(2,"src/event.c",0x1e,"a_event is null or 0");
  return;
}

