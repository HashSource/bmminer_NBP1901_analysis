
void FUN_0002f100(int *param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  
  uVar3 = param_1[1];
  piVar5 = param_1 + 2;
  bVar11 = (uVar3 & 0x3f) < 0x38;
  if (bVar11) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = 0x80;
  }
  if (bVar11) {
    iVar4 = 0x3c;
  }
  else {
    iVar4 = 0x7c;
  }
  iVar1 = (uVar3 + *param_1) * 8;
  if (bVar11) {
    iVar7 = 0x3d;
    iVar8 = 0x3e;
    iVar9 = 0x3f;
    uVar10 = 1;
  }
  else {
    iVar7 = 0x7d;
    iVar8 = 0x7e;
    iVar9 = 0x7f;
    uVar10 = 2;
  }
  memset((void *)((int)piVar5 + uVar3),0,iVar2 - uVar3);
  *(undefined *)((int)param_1 + param_1[1] + 8) = 0x80;
  *(char *)((int)piVar5 + iVar9) = (char)iVar1;
  *(char *)((int)piVar5 + iVar8) = (char)((uint)iVar1 >> 8);
  *(char *)((int)piVar5 + iVar7) = (char)((uint)iVar1 >> 0x10);
  *(char *)((int)piVar5 + iVar4) = (char)((uint)iVar1 >> 0x18);
  FUN_0002ee28(param_1,piVar5,uVar10);
  piVar5 = param_1 + 0x22;
  do {
    param_2[3] = (char)*piVar5;
    piVar6 = piVar5 + 1;
    param_2[2] = (char)((uint)*piVar5 >> 8);
    param_2[1] = (char)*(undefined2 *)((int)piVar5 + 2);
    *param_2 = *(undefined *)((int)piVar5 + 3);
    piVar5 = piVar6;
    param_2 = param_2 + 4;
  } while (param_1 + 0x2a != piVar6);
  return;
}

