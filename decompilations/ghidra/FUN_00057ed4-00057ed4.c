
void FUN_00057ed4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_0005df98(param_2,"src/mdc.c",0x16,"---mdc[%p]---",param_1);
    for (iVar1 = FUN_0005de60(*param_1); iVar1 != 0; iVar1 = FUN_0005dea8(*param_1,iVar1)) {
      iVar2 = *(int *)(iVar1 + 8);
      FUN_0005df98(param_2,"src/mdc.c",0x1c,"----mdc_kv[%p][%s]-[%s]----",iVar2,iVar2,iVar2 + 0x401)
      ;
    }
    return;
  }
  FUN_0005df98(2,"src/mdc.c",0x15,"a_mdc is null or 0");
  return;
}

