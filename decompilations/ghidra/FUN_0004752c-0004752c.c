
uint FUN_0004752c(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *__format;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined2 local_84c;
  undefined2 local_848;
  undefined local_846;
  undefined local_845;
  undefined local_844;
  undefined local_843;
  undefined4 local_842;
  undefined4 local_83e;
  undefined4 local_83a;
  undefined4 local_836;
  undefined4 local_832;
  undefined4 local_82e;
  undefined2 local_82a;
  char acStack_828 [2052];
  uint uVar7;
  
  if (0xf < param_1) {
    snprintf(acStack_828,0x800,"%s: Bad pic param, input chain is %d\n",DAT_000477e8,param_1);
    FUN_0002e584(0,acStack_828);
    return 0x80000201;
  }
  if ((*(int *)(&DAT_0099ee4c + param_1 * 8) == 0) && (uVar10 = FUN_00046024(), (int)uVar10 < 0)) {
    snprintf(acStack_828,0x800,"%s: auto exec open_pic, but chain %d open eeprom failed\n",
             DAT_000477e8,param_1);
    FUN_0002e584(0,acStack_828,0);
    return uVar10;
  }
  uVar11 = *(undefined4 *)(&DAT_0099ee48 + param_1 * 8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
  uVar1 = DAT_000477e4;
  uVar10 = param_5;
  if (0xf < (int)param_5) {
    uVar10 = 0x10;
  }
  local_843 = (undefined)param_3;
  local_846 = (undefined)(param_5 + 6);
  local_844 = (undefined)param_2;
  uVar7 = (param_5 + 6 & 0xff) + param_3 + 0x35 + param_2;
  uVar6 = (undefined2)uVar7;
  local_848 = 0xaa55;
  local_84c = 0;
  local_842 = 0;
  local_83e = 0;
  local_83a = 0;
  local_836 = 0;
  local_832 = 0;
  local_82e = 0;
  local_82a = 0;
  local_845 = 0x35;
  if (0 < (int)param_5) {
    pbVar9 = (byte *)(param_4 + -1);
    uVar5 = 0;
    do {
      pbVar9 = pbVar9 + 1;
      uVar3 = (uint)*pbVar9;
      if (((uVar5 & 1) == 0) && (0x3f < uVar3)) {
        snprintf(acStack_828,0x800,"%s: the data[%d] must less than 0x3f\n",uVar1,uVar5);
        FUN_0002e584(0,acStack_828,0);
        uVar3 = (uint)*pbVar9;
      }
      uVar8 = uVar7 + uVar3;
      uVar4 = uVar5 + 1;
      *(char *)((int)&local_842 + uVar5) = (char)uVar3;
      uVar7 = uVar8 & 0xffff;
      uVar6 = (undefined2)uVar8;
      uVar5 = uVar4;
    } while ((int)uVar4 < (int)uVar10);
  }
  uVar7 = uVar10 & 0xffff;
  uVar5 = uVar7 + 8 & 0xffff;
  *(char *)((int)&local_848 + (uVar7 + 6 & 0xffff)) = (char)((ushort)uVar6 >> 8);
  *(char *)((int)&local_848 + (uVar7 + 7 & 0xffff)) = (char)uVar6;
  uVar7 = FUN_0004966c(uVar11,&local_848,uVar5);
  if (uVar7 == uVar5) {
    usleep(300000);
    iVar2 = FUN_000495e4(uVar11,&local_84c,2);
    if (iVar2 == 2) {
      if (((byte)local_84c != 0x35) || (local_84c._1_1_ != 1)) {
        uVar10 = 0;
        snprintf(acStack_828,0x800,
                 "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                 DAT_000477e4,(uint)(byte)local_84c,(uint)local_84c._1_1_);
        FUN_0002e584(0,acStack_828,0);
      }
      goto LAB_000476d0;
    }
    __format = "%s read iic 2 err\n";
  }
  else {
    __format = "%s write iic 2 err\n";
  }
  snprintf(acStack_828,0x800,__format,DAT_000477e4);
  uVar10 = 0;
  FUN_0002e584(0,acStack_828);
LAB_000476d0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
  return uVar10;
}

