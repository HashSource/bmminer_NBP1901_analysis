
uint FUN_0004b2f4(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar6 = param_3 + -0x21524111 + param_2;
  uVar2 = uVar6;
  uVar4 = uVar6;
  if (((uint)param_1 & 3) != 0) {
    if (((uint)param_1 & 1) != 0) {
      if (0xc < param_2) {
        puVar1 = param_1 + 3;
        do {
          param_1 = puVar1;
          param_2 = param_2 - 0xc;
          uVar6 = (uint)*(byte *)((int)param_1 + -2) * 0x10000 +
                  (uint)*(byte *)((int)param_1 + -3) * 0x100 + (uint)*(byte *)(param_1 + -1) +
                  (uint)*(byte *)((int)param_1 + -1) * 0x1000000 + uVar6;
          uVar8 = (((uint)*(byte *)((int)param_1 + -10) * 0x10000 +
                    (uint)*(byte *)((int)param_1 + -0xb) * 0x100 + (uint)*(byte *)(param_1 + -3) +
                   (uint)*(byte *)((int)param_1 + -9) * 0x1000000) - uVar6) + uVar2 ^
                  (uVar6 >> 0x1c | uVar6 * 0x10);
          iVar3 = (uint)*(byte *)((int)param_1 + -6) * 0x10000 +
                  (uint)*(byte *)((int)param_1 + -7) * 0x100 + (uint)*(byte *)(param_1 + -2) +
                  (uint)*(byte *)((int)param_1 + -5) * 0x1000000 + uVar4;
          iVar7 = iVar3 + uVar6;
          uVar2 = iVar3 - uVar8 ^ (uVar8 >> 0x1a | uVar8 << 6);
          iVar5 = uVar8 + iVar7;
          iVar9 = uVar2 + iVar5;
          uVar2 = iVar7 - uVar2 ^ (uVar2 >> 0x18 | uVar2 << 8);
          iVar3 = uVar2 + iVar9;
          uVar4 = iVar5 - uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = uVar4 + iVar3;
          uVar6 = iVar9 - uVar4 ^ (uVar4 >> 0xd | uVar4 << 0x13);
          uVar4 = uVar6 + uVar2;
          uVar6 = iVar3 - uVar6 ^ (uVar6 >> 0x1c | uVar6 << 4);
          puVar1 = param_1 + 3;
        } while (0xc < param_2);
      }
      switch(param_2) {
      case 1:
        break;
      case 0xc:
        uVar6 = uVar6 + (uint)*(byte *)((int)param_1 + 0xb) * 0x1000000;
      case 0xb:
        uVar6 = uVar6 + (uint)*(byte *)((int)param_1 + 10) * 0x10000;
      case 10:
        uVar6 = uVar6 + (uint)*(byte *)((int)param_1 + 9) * 0x100;
      case 9:
        uVar6 = uVar6 + *(byte *)(param_1 + 2);
      case 8:
        uVar4 = uVar4 + (uint)*(byte *)((int)param_1 + 7) * 0x1000000;
      case 7:
        uVar4 = uVar4 + (uint)*(byte *)((int)param_1 + 6) * 0x10000;
      case 6:
        uVar4 = uVar4 + (uint)*(byte *)((int)param_1 + 5) * 0x100;
      case 5:
        uVar4 = uVar4 + *(byte *)(param_1 + 1);
      case 4:
        uVar2 = uVar2 + (uint)*(byte *)((int)param_1 + 3) * 0x1000000;
      case 3:
        uVar2 = uVar2 + (uint)*(byte *)((int)param_1 + 2) * 0x10000;
      case 2:
        uVar2 = uVar2 + (uint)*(byte *)((int)param_1 + 1) * 0x100;
        break;
      default:
        goto switchD_0004b3a0_caseD_c;
      }
      goto switchD_0004b3a0_caseD_1;
    }
    if (0xc < param_2) {
      puVar1 = param_1 + 3;
      do {
        param_1 = puVar1;
        param_2 = param_2 - 0xc;
        uVar6 = (uint)*(ushort *)(param_1 + -1) + (uint)*(ushort *)((int)param_1 + -2) * 0x10000 +
                uVar6;
        uVar8 = (((uint)*(ushort *)(param_1 + -3) + (uint)*(ushort *)((int)param_1 + -10) * 0x10000)
                - uVar6) + uVar2 ^ (uVar6 >> 0x1c | uVar6 * 0x10);
        iVar3 = (uint)*(ushort *)(param_1 + -2) + (uint)*(ushort *)((int)param_1 + -6) * 0x10000 +
                uVar4;
        iVar7 = iVar3 + uVar6;
        uVar2 = iVar3 - uVar8 ^ (uVar8 >> 0x1a | uVar8 << 6);
        iVar5 = uVar8 + iVar7;
        iVar9 = uVar2 + iVar5;
        uVar2 = iVar7 - uVar2 ^ (uVar2 >> 0x18 | uVar2 << 8);
        iVar3 = uVar2 + iVar9;
        uVar4 = iVar5 - uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = uVar4 + iVar3;
        uVar6 = iVar9 - uVar4 ^ (uVar4 >> 0xd | uVar4 << 0x13);
        uVar4 = uVar6 + uVar2;
        uVar6 = iVar3 - uVar6 ^ (uVar6 >> 0x1c | uVar6 << 4);
        puVar1 = param_1 + 3;
      } while (0xc < param_2);
    }
    switch(param_2) {
    case 1:
switchD_0004b3a0_caseD_1:
      uVar2 = *(byte *)param_1 + uVar2;
      break;
    case 3:
      uVar2 = uVar2 + (uint)*(byte *)((int)param_1 + 2) * 0x10000;
    case 2:
switchD_0004b3a0_caseD_2:
      uVar2 = *(ushort *)param_1 + uVar2;
      break;
    case 5:
      uVar4 = uVar4 + *(byte *)(param_1 + 1);
    case 4:
      uVar2 = *(ushort *)param_1 + uVar2 + (uint)*(ushort *)((int)param_1 + 2) * 0x10000;
      break;
    case 7:
      uVar4 = uVar4 + (uint)*(byte *)((int)param_1 + 6) * 0x10000;
    case 6:
      uVar2 = *(ushort *)param_1 + uVar2 + (uint)*(ushort *)((int)param_1 + 2) * 0x10000;
      uVar4 = uVar4 + *(ushort *)(param_1 + 1);
      break;
    case 9:
      uVar6 = uVar6 + *(byte *)(param_1 + 2);
    case 8:
      uVar4 = *(ushort *)(param_1 + 1) + uVar4 + (uint)*(ushort *)((int)param_1 + 6) * 0x10000;
      uVar2 = *(ushort *)param_1 + uVar2 + (uint)*(ushort *)((int)param_1 + 2) * 0x10000;
      break;
    case 0xb:
      uVar6 = uVar6 + (uint)*(byte *)((int)param_1 + 10) * 0x10000;
    case 10:
      uVar4 = *(ushort *)(param_1 + 1) + uVar4 + (uint)*(ushort *)((int)param_1 + 6) * 0x10000;
      uVar2 = *(ushort *)param_1 + uVar2 + (uint)*(ushort *)((int)param_1 + 2) * 0x10000;
      uVar6 = uVar6 + *(ushort *)(param_1 + 2);
      break;
    case 0xc:
      uVar6 = *(ushort *)(param_1 + 2) + uVar6 + (uint)*(ushort *)((int)param_1 + 10) * 0x10000;
      uVar4 = *(ushort *)(param_1 + 1) + uVar4 + (uint)*(ushort *)((int)param_1 + 6) * 0x10000;
      uVar2 = *(ushort *)param_1 + uVar2 + (uint)*(ushort *)((int)param_1 + 2) * 0x10000;
      break;
    default:
      goto switchD_0004b3a0_caseD_c;
    }
    goto LAB_0004b644;
  }
  if (0xc < param_2) {
    puVar1 = param_1 + 3;
    do {
      param_1 = puVar1;
      param_2 = param_2 - 0xc;
      uVar6 = uVar6 + param_1[-1];
      uVar2 = (param_1[-3] - uVar6) + uVar2 ^ (uVar6 >> 0x1c | uVar6 * 0x10);
      iVar3 = uVar4 + param_1[-2] + uVar6;
      iVar5 = uVar2 + iVar3;
      uVar2 = (uVar4 + param_1[-2]) - uVar2 ^ (uVar2 >> 0x1a | uVar2 << 6);
      iVar7 = uVar2 + iVar5;
      uVar2 = iVar3 - uVar2 ^ (uVar2 >> 0x18 | uVar2 << 8);
      iVar3 = uVar2 + iVar7;
      uVar4 = iVar5 - uVar2 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
      uVar2 = uVar4 + iVar3;
      uVar6 = iVar7 - uVar4 ^ (uVar4 >> 0xd | uVar4 << 0x13);
      uVar4 = uVar6 + uVar2;
      uVar6 = iVar3 - uVar6 ^ (uVar6 >> 0x1c | uVar6 << 4);
      puVar1 = param_1 + 3;
    } while (0xc < param_2);
  }
  switch(param_2) {
  case 1:
    goto switchD_0004b3a0_caseD_1;
  case 2:
    goto switchD_0004b3a0_caseD_2;
  case 3:
    uVar2 = (*param_1 & 0xffffff) + uVar2;
    break;
  case 4:
    uVar2 = uVar2 + *param_1;
    break;
  case 5:
    uVar4 = uVar4 + *(byte *)(param_1 + 1);
    uVar2 = uVar2 + *param_1;
    break;
  case 6:
    uVar4 = uVar4 + *(ushort *)(param_1 + 1);
    uVar2 = uVar2 + *param_1;
    break;
  case 7:
    uVar2 = uVar2 + *param_1;
    uVar4 = uVar4 + (param_1[1] & 0xffffff);
    break;
  case 8:
    uVar4 = uVar4 + param_1[1];
    uVar2 = uVar2 + *param_1;
    break;
  case 9:
    uVar8 = (uint)*(byte *)(param_1 + 2);
    goto LAB_0004b6b4;
  case 10:
    uVar8 = (uint)*(ushort *)(param_1 + 2);
    goto LAB_0004b6b4;
  case 0xb:
    uVar6 = uVar6 + (param_1[2] & 0xffffff);
    uVar4 = uVar4 + param_1[1];
    uVar2 = uVar2 + *param_1;
    break;
  case 0xc:
    uVar8 = param_1[2];
LAB_0004b6b4:
    uVar6 = uVar6 + uVar8;
    uVar4 = uVar4 + param_1[1];
    uVar2 = uVar2 + *param_1;
    break;
  default:
    goto switchD_0004b3a0_caseD_c;
  }
LAB_0004b644:
  uVar6 = (uVar6 ^ uVar4) - (uVar4 >> 0x12 | uVar4 << 0xe);
  uVar8 = (uVar2 ^ uVar6) - (uVar6 >> 0x15 | uVar6 * 0x800);
  uVar10 = (uVar4 ^ uVar8) - (uVar8 >> 7 | uVar8 * 0x2000000);
  uVar2 = (uVar6 ^ uVar10) - (uVar10 >> 0x10 | uVar10 * 0x10000);
  uVar4 = (uVar8 ^ uVar2) - (uVar2 >> 0x1c | uVar2 * 0x10);
  uVar4 = (uVar10 ^ uVar4) - (uVar4 >> 0x12 | uVar4 * 0x4000);
  uVar6 = (uVar2 ^ uVar4) - (uVar4 >> 8 | uVar4 * 0x1000000);
switchD_0004b3a0_caseD_c:
  return uVar6;
}

