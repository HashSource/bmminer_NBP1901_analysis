
void FUN_00019d70(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar3;
  
  iVar1 = FUN_0001e0f0();
  if (iVar1 < 1) {
    uVar5 = 0;
    uVar4 = 0xffffff;
    uVar7 = uVar5;
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    uVar4 = 0xffffff;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar6 = *puVar2;
      uVar5 = uVar5 + uVar6;
      if (uVar7 < uVar6) {
        uVar7 = uVar6;
      }
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      puVar2 = puVar3;
    } while (puVar3 != param_1 + iVar1);
  }
  *param_2 = uVar4;
  *param_3 = uVar7;
  *param_4 = uVar5;
  return;
}

