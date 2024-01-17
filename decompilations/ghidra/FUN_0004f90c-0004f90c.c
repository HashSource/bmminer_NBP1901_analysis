
void FUN_0004f90c(undefined4 *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *(undefined *)(param_1 + 0x17) = 0;
  param_1[2] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  if (param_2 == (char *)0x0) {
    *(undefined *)(param_1 + 3) = 0;
    return;
  }
  sVar2 = strlen(param_2);
  cVar1 = s_do_not_read_temp_anymore____000607d4[26];
  if (0x4f < sVar2) {
    *(undefined2 *)(param_1 + 3) = s_do_not_read_temp_anymore____000607d4._24_2_;
    *(char *)((int)param_1 + 0xe) = cVar1;
    strncpy((char *)((int)param_1 + 0xf),param_2 + (sVar2 - 0x4c),0x4d);
    return;
  }
  strncpy((char *)(param_1 + 3),param_2,sVar2 + 1);
  return;
}

