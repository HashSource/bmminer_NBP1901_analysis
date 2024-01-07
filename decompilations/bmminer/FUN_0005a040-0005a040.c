
undefined4 FUN_0005a040(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00057a1c(*(undefined4 *)(param_1 + 0x1878));
  if (iVar1 == 0) {
    iVar1 = FUN_00057d70(*(undefined4 *)(DAT_0099eec8 + 0x2440),
                         *(undefined4 *)(*(int *)(param_2 + 8) + 0x124));
    **(undefined **)(*(int *)(param_2 + 0x1c) + 4) = 0;
    syslog(*(uint *)(param_1 + 0x1874) | *(uint *)(iVar1 + 0x80c),"%s",
           **(undefined4 **)(param_2 + 0x1c));
    uVar2 = 0;
  }
  else {
    FUN_0005df98(2,"src/rule.c",0x16c,"zlog_format_gen_msg fail");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

