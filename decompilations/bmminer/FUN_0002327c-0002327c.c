
void FUN_0002327c(uint *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  byte local_15;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  
  uVar5 = *param_1;
  uVar3 = uVar5 & 0x3f;
  iVar1 = uVar5 << 3;
  iVar2 = param_1[1] << 3;
  local_15 = (byte)(uVar5 >> 0x1d) | (byte)iVar2;
  local_11 = (undefined)iVar1;
  local_14 = (undefined)((uint)iVar1 >> 0x18);
  local_17 = (undefined)((uint)iVar2 >> 0x10);
  local_16 = (undefined)((uint)iVar2 >> 8);
  local_13 = (undefined)((uint)iVar1 >> 0x10);
  if (uVar3 < 0x38) {
    iVar4 = 0x38 - uVar3;
  }
  else {
    iVar4 = 0x78 - uVar3;
  }
  local_12 = (undefined)((uint)iVar1 >> 8);
  local_18 = (undefined)((uint)iVar2 >> 0x18);
  FUN_000231a4(param_1,&DAT_00062768,iVar4);
  FUN_000231a4(param_1,&local_18,8);
  *param_2 = *(undefined *)((int)param_1 + 0xb);
  param_2[1] = (char)*(undefined2 *)((int)param_1 + 10);
  param_2[2] = (char)(param_1[2] >> 8);
  param_2[3] = (char)param_1[2];
  param_2[4] = *(undefined *)((int)param_1 + 0xf);
  param_2[5] = (char)*(undefined2 *)((int)param_1 + 0xe);
  param_2[6] = (char)(param_1[3] >> 8);
  param_2[7] = (char)param_1[3];
  param_2[8] = *(undefined *)((int)param_1 + 0x13);
  param_2[9] = (char)*(undefined2 *)((int)param_1 + 0x12);
  param_2[10] = (char)(param_1[4] >> 8);
  param_2[0xb] = (char)param_1[4];
  param_2[0xc] = *(undefined *)((int)param_1 + 0x17);
  param_2[0xd] = (char)*(undefined2 *)((int)param_1 + 0x16);
  param_2[0xe] = (char)(param_1[5] >> 8);
  param_2[0xf] = (char)param_1[5];
  param_2[0x10] = *(undefined *)((int)param_1 + 0x1b);
  param_2[0x11] = (char)*(undefined2 *)((int)param_1 + 0x1a);
  param_2[0x12] = (char)(param_1[6] >> 8);
  param_2[0x13] = (char)param_1[6];
  param_2[0x14] = *(undefined *)((int)param_1 + 0x1f);
  param_2[0x15] = (char)*(undefined2 *)((int)param_1 + 0x1e);
  param_2[0x16] = (char)(param_1[7] >> 8);
  param_2[0x17] = (char)param_1[7];
  param_2[0x18] = *(undefined *)((int)param_1 + 0x23);
  param_2[0x19] = (char)*(undefined2 *)((int)param_1 + 0x22);
  param_2[0x1a] = (char)(param_1[8] >> 8);
  param_2[0x1b] = (char)param_1[8];
  param_2[0x1c] = *(undefined *)((int)param_1 + 0x27);
  param_2[0x1d] = (char)*(undefined2 *)((int)param_1 + 0x26);
  param_2[0x1e] = (char)(param_1[9] >> 8);
  param_2[0x1f] = (char)param_1[9];
  return;
}

