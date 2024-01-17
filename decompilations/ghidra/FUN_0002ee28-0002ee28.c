
void FUN_0002ee28(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  byte *local_164;
  int local_14c;
  int local_148 [7];
  uint local_12c;
  uint local_128 [65];
  int *piVar5;
  
  if (0 < param_3) {
    local_164 = param_2;
    do {
      puVar9 = &local_12c;
      pbVar1 = local_164;
      do {
        puVar9 = puVar9 + 1;
        *puVar9 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)pbVar1[3] |
                  (uint)*pbVar1 << 0x18;
        pbVar1 = pbVar1 + 4;
        puVar8 = local_128;
      } while (local_128 + 0xf != puVar9);
      do {
        uVar10 = puVar8[0xe];
        puVar9 = puVar8 + 1;
        uVar2 = *puVar9;
        puVar8[0x10] = ((uVar10 >> 0x13 | uVar10 << 0xd) ^ (uVar10 >> 0x11 | uVar10 << 0xf) ^
                       uVar10 >> 10) + puVar8[9] + *puVar8 +
                       ((uVar2 >> 0x12 | uVar2 << 0xe) ^ (uVar2 >> 7 | uVar2 << 0x19) ^ uVar2 >> 3);
        puVar8 = puVar9;
      } while (local_128 + 0x30 != puVar9);
      piVar3 = &local_14c;
      piVar4 = (int *)(param_1 + 0x88);
      piVar6 = piVar3;
      do {
        piVar5 = piVar4 + 1;
        piVar6 = piVar6 + 1;
        *piVar6 = *piVar4;
        piVar4 = piVar5;
      } while ((int *)(param_1 + 0xa8) != piVar5);
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        piVar4 = (int *)(param_1 + 0x88);
      } while (iVar7 != 0x40);
      do {
        piVar3 = piVar3 + 1;
        piVar6 = piVar4 + 1;
        *piVar4 = *piVar3 + *piVar4;
        piVar4 = piVar6;
      } while (piVar5 != piVar6);
      local_164 = local_164 + 0x40;
    } while (param_2 + param_3 * 0x40 != local_164);
    return;
  }
  return;
}

