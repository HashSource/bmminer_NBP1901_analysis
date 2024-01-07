
void FUN_0004c0cc(int param_1,int param_2,int param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char acStack_168 [159];
  undefined local_c9;
  char acStack_c8 [159];
  undefined local_29;
  
  if (param_1 == 0) {
    return;
  }
  vsnprintf(acStack_168,0xa0,param_4,&stack0x00000000);
  local_c9 = 0;
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
    pcVar1 = acStack_168;
    uVar3 = 0xffffffff;
    uVar4 = 0;
  }
  else {
    pcVar1 = (char *)FUN_0004d9c8(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      if (param_3 == 8) {
        param_3 = 6;
      }
      if (*(int *)(param_2 + 0x14) != -2) {
        snprintf(acStack_c8,0xa0,"%s near end of file",acStack_168);
        pcVar1 = acStack_c8;
        local_29 = 0;
        goto LAB_0004c160;
      }
    }
    else if (*(uint *)(param_2 + 0x2c) < 0x15) {
      snprintf(acStack_c8,0xa0,"%s near \'%s\'",acStack_168,pcVar1);
      pcVar1 = acStack_c8;
      local_29 = 0;
      goto LAB_0004c160;
    }
    pcVar1 = acStack_168;
  }
LAB_0004c160:
  FUN_0004f95c(param_1,uVar3,uVar2,uVar4,param_3,"%s",pcVar1);
  return;
}

