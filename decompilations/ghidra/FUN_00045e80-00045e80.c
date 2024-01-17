
undefined4 FUN_00045e80(undefined4 param_1)

{
  char acStack_808 [2056];
  
  snprintf(acStack_808,0x800,"%s: Bad pic param, input chain is %d\n","open_pic",param_1);
  FUN_0002e584(0,acStack_808);
  return 0x80000201;
}

