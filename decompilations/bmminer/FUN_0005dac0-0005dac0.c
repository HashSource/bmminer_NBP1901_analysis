
undefined4 FUN_0005dac0(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  size_t __nmemb;
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  int *piVar10;
  
  uVar1 = (*(code *)param_1[3])(param_2);
  uVar8 = param_1[2];
  FUN_0005fadc(uVar1,uVar8);
  iVar7 = *(int *)(param_1[1] + extraout_r1 * 4);
  if (iVar7 != 0) {
    do {
      iVar2 = (*(code *)param_1[4])(param_2,*(undefined4 *)(iVar7 + 4));
      if (iVar2 != 0) {
        if ((code *)param_1[5] != (code *)0x0) {
          (*(code *)param_1[5])(*(undefined4 *)(iVar7 + 4));
        }
        if ((code *)param_1[6] != (code *)0x0) {
          (*(code *)param_1[6])(*(undefined4 *)(iVar7 + 8));
        }
        *(undefined4 *)(iVar7 + 4) = param_2;
        *(undefined4 *)(iVar7 + 8) = param_3;
        return 0;
      }
      iVar7 = *(int *)(iVar7 + 0x10);
    } while (iVar7 != 0);
    uVar8 = param_1[2];
  }
  dVar13 = (double)(ulonglong)uVar8 * DAT_0005dd20;
  dVar12 = (double)(ulonglong)*param_1;
  if (dVar12 != dVar13 && dVar12 < dVar13 == (NAN(dVar12) || NAN(dVar13))) {
    __nmemb = uVar8 << 1;
    pvVar3 = calloc(__nmemb,4);
    if (pvVar3 == (void *)0x0) {
      piVar5 = __errno_location();
      FUN_0005df98(2,"src/zc_hashtable.c",0x7e,"calloc fail, errno[%d]",*piVar5);
      FUN_0005df98(2,"src/zc_hashtable.c",0xcd,"rehash fail");
      return 0xffffffff;
    }
    piVar5 = (int *)param_1[1];
    if (uVar8 != 0) {
      piVar9 = piVar5;
      do {
        piVar10 = piVar9 + 1;
        puVar4 = (undefined4 *)*piVar9;
        while (puVar4 != (undefined4 *)0x0) {
          puVar11 = (undefined4 *)puVar4[4];
          puVar4[3] = 0;
          puVar4[4] = 0;
          FUN_0005fadc(*puVar4,__nmemb);
          iVar7 = *(int *)((int)pvVar3 + extraout_r1_00 * 4);
          if (iVar7 != 0) {
            *(undefined4 **)(iVar7 + 0xc) = puVar4;
            puVar4[4] = *(undefined4 *)((int)pvVar3 + extraout_r1_00 * 4);
          }
          *(undefined4 **)((int)pvVar3 + extraout_r1_00 * 4) = puVar4;
          puVar4 = puVar11;
        }
        piVar9 = piVar10;
      } while (piVar5 + uVar8 != piVar10);
    }
    free(piVar5);
    param_1[1] = (uint)pvVar3;
    param_1[2] = __nmemb;
  }
  puVar4 = (undefined4 *)calloc(1,0x14);
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = __errno_location();
    FUN_0005df98(2,"src/zc_hashtable.c",0xd4,"calloc fail, errno[%d]",*piVar5);
    return 0xffffffff;
  }
  uVar1 = (*(code *)param_1[3])(param_2);
  uVar8 = param_1[2];
  puVar4[4] = 0;
  puVar4[2] = param_3;
  puVar4[3] = 0;
  *puVar4 = uVar1;
  puVar4[1] = param_2;
  FUN_0005fadc(uVar1,uVar8);
  uVar8 = param_1[1];
  iVar7 = *(int *)(uVar8 + extraout_r1_01 * 4);
  if (iVar7 != 0) {
    *(undefined4 **)(iVar7 + 0xc) = puVar4;
    puVar4[4] = *(undefined4 *)(uVar8 + extraout_r1_01 * 4);
  }
  uVar6 = *param_1;
  *(undefined4 **)(uVar8 + extraout_r1_01 * 4) = puVar4;
  *param_1 = uVar6 + 1;
  return 0;
}

