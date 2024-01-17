
int FUN_00046ca0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char *__format;
  int iVar4;
  undefined2 uVar5;
  uint uVar7;
  uint uVar8;
  undefined2 local_834;
  undefined2 local_830;
  undefined local_82e;
  undefined local_82d;
  undefined local_82c;
  undefined local_82b;
  undefined4 local_82a;
  undefined4 local_826;
  undefined4 local_822;
  undefined4 local_81e;
  undefined2 local_81a;
  char acStack_818 [2048];
  uint uVar6;
  
  uVar7 = 0x46ccc;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  local_82c = (undefined)param_2;
  iVar4 = param_5;
  if (0xf < param_5) {
    iVar4 = 0x10;
  }
  uVar2 = 0;
  uVar6 = param_3 + 0x3b + param_2 + (param_5 + 6U & 0xff);
  uVar5 = (undefined2)uVar6;
  local_82e = (undefined)(param_5 + 6U);
  local_82b = (undefined)param_3;
  local_830 = 0xaa55;
  if (0 < param_5) {
    uVar7 = 6;
  }
  local_826 = 0;
  local_822 = 0;
  local_81e = 0;
  local_81a = 0;
  local_82a = 0;
  local_834 = 0;
  local_82d = 0x3b;
  if (param_5 < 1) {
    uVar2 = 8;
    uVar6 = 7;
    uVar7 = 6;
  }
  else {
    do {
      uVar8 = uVar7;
      pbVar1 = (byte *)(param_4 + uVar2);
      uVar2 = uVar2 + 1 & 0xffff;
      uVar7 = uVar6 + *pbVar1;
      *(byte *)((int)&local_830 + uVar8) = *pbVar1;
      uVar6 = uVar7 & 0xffff;
      uVar5 = (undefined2)uVar7;
      uVar7 = uVar8 + 1 & 0xffff;
    } while ((int)uVar2 < iVar4);
    uVar2 = uVar8 + 3 & 0xffff;
    uVar6 = uVar8 + 2 & 0xffff;
  }
  *(char *)((int)&local_830 + uVar7) = (char)((ushort)uVar5 >> 8);
  *(char *)((int)&local_830 + uVar6) = (char)uVar5;
  uVar7 = FUN_0004966c(param_1,&local_830,uVar2);
  if (uVar7 == uVar2) {
    usleep(10000);
    iVar3 = FUN_000495e4(param_1,&local_834,2);
    if (iVar3 == 2) {
      if (((byte)local_834 != 0x3b) || (local_834._1_1_ != 1)) {
        snprintf(acStack_818,0x800,
                 "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                 "_pic_write_iic",(uint)(byte)local_834,(uint)local_834._1_1_);
        iVar4 = -0x7ffffe00;
        FUN_0002e584(0,acStack_818);
      }
      goto LAB_00046df4;
    }
    __format = "%s read iic err\n";
  }
  else {
    __format = "%s write iic err\n";
  }
  snprintf(acStack_818,0x800,__format,"_pic_write_iic");
  iVar4 = -0x7ffffe00;
  FUN_0002e584(0,acStack_818);
LAB_00046df4:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return iVar4;
}

