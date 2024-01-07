
uint FUN_0004c3b8(code **param_1,undefined4 param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code **ppcVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  ppcVar5 = (code **)((int)param_1 + (int)param_1[4]);
  if (*(char *)(ppcVar5 + 2) == '\0') {
    iVar2 = (**param_1)(param_1[1]);
    if (iVar2 == -1) {
      param_1[5] = (code *)0xffffffff;
      return 0xffffffff;
    }
    param_1[4] = (code *)0x0;
    *(char *)(param_1 + 2) = (char)iVar2;
    if (iVar2 - 0x80U < 0x80) {
      uVar6 = FUN_0004de1c();
      if (uVar6 != 0) {
        if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("count >= 2","load.c",0xbd,DAT_0004c53c);
        }
        puVar7 = (undefined *)((int)param_1 + 9);
        do {
          uVar1 = (**param_1)(param_1[1]);
          puVar8 = puVar7 + 1;
          *puVar7 = uVar1;
          puVar7 = puVar8;
        } while ((undefined *)((int)(param_1 + 2) + uVar6) != puVar8);
        iVar3 = FUN_0004de88(param_1 + 2,uVar6,0);
        if (iVar3 != 0) {
          *(undefined *)((int)param_1 + uVar6 + 8) = 0;
          pcVar4 = param_1[4] + 1;
          ppcVar5 = (code **)((int)param_1 + (int)param_1[4]);
          goto LAB_0004c420;
        }
      }
      param_1[5] = (code *)0xfffffffe;
      FUN_0004c0cc(param_2,param_1,5,"unable to decode byte 0x%x",iVar2);
      return 0xfffffffe;
    }
    pcVar4 = (code *)0x1;
    *(undefined *)((int)param_1 + 9) = 0;
    ppcVar5 = param_1;
  }
  else {
    pcVar4 = param_1[4] + 1;
  }
LAB_0004c420:
  param_1[4] = pcVar4;
  uVar6 = (uint)*(byte *)(ppcVar5 + 2);
  param_1[9] = param_1[9] + 1;
  if (uVar6 != 10) {
    iVar2 = FUN_0004de1c(uVar6);
    if (iVar2 != 0) {
      param_1[7] = param_1[7] + 1;
    }
    return uVar6;
  }
  pcVar4 = param_1[7];
  param_1[7] = (code *)0x0;
  param_1[6] = param_1[6] + 1;
  param_1[8] = pcVar4;
  return 10;
}

