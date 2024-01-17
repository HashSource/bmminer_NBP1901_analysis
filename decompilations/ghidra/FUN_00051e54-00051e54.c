
undefined4 FUN_00051e54(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *unaff_r4;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = 0;
  local_24 = 0;
  if (param_3 != 0) {
    unaff_r4 = &local_24;
  }
  local_20 = 0;
  local_1c = 0;
  if (param_3 != 0) {
LAB_00051e80:
    do {
      iVar1 = 0;
      uVar3 = uVar4;
      while (uVar3 < param_3) {
        uVar3 = *unaff_r4;
        if (iVar1 == 0) {
          *unaff_r4 = uVar3 | (uint)*(byte *)(param_2 + uVar4) << 0x18;
        }
        else {
          uVar2 = (uint)*(byte *)(param_2 + uVar4 + iVar1);
          if (iVar1 == 1) {
            *unaff_r4 = uVar3 | uVar2 << 0x10;
          }
          else if (iVar1 == 2) {
            *unaff_r4 = uVar3 | uVar2 << 8;
          }
          else {
            *unaff_r4 = uVar2 | uVar3;
            if (iVar1 == 3) {
              uVar4 = uVar4 + 4;
              unaff_r4 = unaff_r4 + 1;
              if (param_3 <= uVar4) goto LAB_00051ecc;
              goto LAB_00051e80;
            }
          }
        }
        iVar1 = iVar1 + 1;
        uVar3 = uVar4 + iVar1;
      }
      uVar4 = uVar4 + 4;
      unaff_r4 = unaff_r4 + 1;
    } while (uVar4 < param_3);
  }
LAB_00051ecc:
  FUN_000457e0(&local_24,param_1);
  return 0;
}

