
uint FUN_000386bc(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uStack_13c;
  uint local_138 [3];
  undefined auStack_12c [16];
  uint local_11c;
  uint local_118 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined auStack_d0 [12];
  undefined auStack_c4 [180];
  
  memset(local_138,0,0x20);
  memset(local_118,0,0x20);
  if (param_1 == 0) {
    local_11c = 0;
  }
  else {
    local_f0 = *(undefined4 *)(param_1 + 0x14);
    uStack_ec = *(undefined4 *)(param_1 + 0x18);
    uStack_e8 = *(undefined4 *)(param_1 + 0x1c);
    uStack_e4 = *(undefined4 *)(param_1 + 0x20);
    local_e0 = *(undefined4 *)(param_1 + 0x24);
    uStack_dc = *(undefined4 *)(param_1 + 0x28);
    uStack_d8 = *(undefined4 *)(param_1 + 0x2c);
    uStack_d4 = *(undefined4 *)(param_1 + 0x30);
    FUN_00031268(&local_f0,0x20);
    local_138[0] = *(uint *)(param_1 + 8);
    local_f8 = 0x50;
    local_f4 = 0;
    local_138[1] = *(undefined4 *)(param_1 + 0xc);
    local_138[2] = *(undefined4 *)(param_1 + 0x10);
    FUN_00031268(local_138,0xc,local_138[2],auStack_12c);
    FUN_000316b0(auStack_d0,local_138,0xc);
    local_138[0] = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
                   param_2 >> 0x18;
    FUN_00031268(local_138,4);
    FUN_000316b0(auStack_c4,local_138,4);
    FUN_0002327c(&local_f8,local_138);
    memset(&local_f8,0,0xe8);
    FUN_00023430(local_138,0x20,local_118);
    puVar2 = &local_11c;
    puVar1 = &uStack_13c;
    do {
      puVar2 = puVar2 + 1;
      uVar3 = *puVar2;
      puVar1 = puVar1 + 1;
      *puVar1 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                uVar3 >> 0x18;
    } while (puVar2 != local_118 + 7);
    if (local_11c != 0) {
      local_11c = 1;
    }
  }
  return local_11c;
}

