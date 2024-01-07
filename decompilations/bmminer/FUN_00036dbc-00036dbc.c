
void FUN_00036dbc(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  char acStack_828 [2064];
  
  bVar2 = param_1[2];
  uVar11 = *param_1 & 0xf;
  uVar4 = FUN_0001e160();
  if (uVar11 < 4) {
    bVar3 = param_1[1];
    iVar5 = FUN_0001e29c(uVar11);
    if (iVar5 != 0) {
      uVar6 = FUN_0005faf8(bVar2,uVar4);
      uVar7 = FUN_0001e0f0();
      if (uVar6 < uVar7) {
        if (bVar3 == 0x90) {
          if ((*(uint *)(param_1 + 4) & 0x88) == 0) {
            return;
          }
          *(undefined *)(*(int *)(DAT_004fcb34 + 4) + uVar11 * 0x100 + uVar6) = 1;
          return;
        }
        if (bVar3 == 0xe0) {
          iVar9 = DAT_004fcb34 + 8;
          uVar1 = *(uint *)(param_1 + 4) >> 0x10;
          iVar10 = iVar9 + (uVar11 * 0x100 + uVar6) * 4;
          piVar8 = (int *)(&DAT_00809000 + iVar10);
          uVar13 = *(uint *)(param_1 + 4) & 0xffff;
          iVar12 = *(int *)(DAT_004fcb34 + 4);
          *piVar8 = *piVar8 + uVar1;
          uVar17 = FUN_0001e130();
          iVar5 = (int)((ulonglong)uVar17 >> 0x20);
          uVar7 = (int)uVar17 * 8;
          bVar16 = SBORROW4(uVar1,uVar7);
          bVar14 = (int)(uVar1 + (int)uVar17 * -8) < 0;
          bVar15 = uVar1 == uVar7;
          if (bVar15 || bVar14 != bVar16) {
            piVar8 = (int *)(iVar9 + uVar11 * 4);
          }
          iVar9 = iVar9 + uVar11 * 4;
          if (bVar15 || bVar14 != bVar16) {
            piVar8 = piVar8 + 0x200000;
          }
          if (bVar15 || bVar14 != bVar16) {
            piVar8 = piVar8 + 0x2800;
          }
          if (bVar15 || bVar14 != bVar16) {
            iVar5 = *piVar8;
          }
          if (bVar15 || bVar14 != bVar16) {
            iVar5 = iVar5 + uVar1;
          }
          if (bVar15 || bVar14 != bVar16) {
            *piVar8 = iVar5;
          }
          *(uint *)(&DAT_0080a860 + iVar9) = *(int *)(&DAT_0080a860 + iVar9) + (uVar13 - uVar1);
          *(undefined *)(iVar12 + uVar11 * 0x100 + uVar6) = 1;
          iVar5 = FUN_0001e130();
          if ((uVar1 != iVar5 * 8 && (int)(uVar1 + iVar5 * -8) < 0 == SBORROW4(uVar1,iVar5 * 8)) &&
             (3 < DAT_0007eb9c)) {
            snprintf(acStack_828,0x800,
                     "Nonce counter overflow: chain = %d, asic = %d, nonce_return = %d, nonce_match = %d, nonce_accumulate = %d\n"
                     ,uVar11,uVar6,uVar13,uVar1,*(undefined4 *)(&DAT_00809000 + iVar10));
            FUN_0002e584(3,acStack_828,0);
            return;
          }
          return;
        }
      }
    }
  }
  FUN_000390b0(param_1);
  return;
}

