
void FUN_00058638(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x43c);
    iVar13 = param_1 + 0x28;
    uVar4 = *(undefined4 *)(param_1 + 0x438);
    uVar5 = *(undefined4 *)(param_1 + 0x434);
    uVar6 = *(undefined4 *)(param_1 + 0x430);
    uVar7 = *(undefined4 *)(param_1 + 0x42c);
    uVar8 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x1c);
    uVar11 = *(undefined4 *)(param_1 + 0x18);
    FUN_0005df98(param_2,"src/rotater.c",0x32,"--rotater[%p][%p,%s,%d][%s,%s,%s,%ld,%ld,%d,%d,%d]--"
                 ,param_1,param_1,uVar11,uVar10,uVar9,uVar8,iVar13,uVar7,uVar6,uVar5,uVar4,uVar1);
    piVar2 = *(int **)(param_1 + 0x440);
    if ((piVar2 != (int *)0x0) && (0 < piVar2[1])) {
      iVar3 = 0;
      do {
        puVar12 = *(undefined4 **)(*piVar2 + iVar3 * 4);
        iVar3 = iVar3 + 1;
        FUN_0005df98(param_2,"src/rotater.c",0x37,"[%s,%d]->",puVar12 + 1,*puVar12,uVar11,uVar10,
                     uVar9,uVar8,iVar13,uVar7,uVar6,uVar5,uVar4,uVar1);
        piVar2 = *(int **)(param_1 + 0x440);
      } while (iVar3 < piVar2[1]);
    }
    return;
  }
  FUN_0005df98(2,"src/rotater.c",0x22,"a_rotater is null or 0");
  return;
}

