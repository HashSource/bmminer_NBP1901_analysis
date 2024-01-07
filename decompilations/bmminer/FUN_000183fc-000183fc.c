
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000183fc(int param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  char *__s1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 uStack_818;
  undefined local_814;
  
  if ((DAT_0007f814 == 0) || (*(char *)(DAT_0007f814 + 0x1c) == '\0')) {
    if (4 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"No work mode freq, chain = %d, mode = %d.\n",param_1,
               param_2);
      FUN_0002e584(4,&local_828,0);
      return 0xffffffff;
    }
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(DAT_0007f814 + param_1 * 4);
    puVar4 = &DAT_0007f81c;
    uVar6 = (uint)*(ushort *)(iVar2 + 0x23);
    uVar5 = (uint)*(ushort *)(iVar2 + 0x25);
    do {
      if ((puVar4[-1] != 0) && (*puVar4 == uVar5 && (*puVar4 != 0 && puVar4[-1] == uVar6))) {
        __s1 = (char *)FUN_0001e0c0();
        iVar2 = strcmp(__s1,"NBS2003");
        uVar3 = uVar5;
        if (iVar2 == 0) {
          local_82c = iVar2;
          local_828 = iVar2;
          local_824 = iVar2;
          local_820 = iVar2;
          local_81c = iVar2;
          FUN_00018360(param_1,&local_828,0x10);
          FUN_000182fc(param_1,&local_82c);
          if ((((local_828 == 0x30563146) && (local_824 == 0x43314235)) && ((char)local_820 == '1'))
             && (local_82c - 3U < 2)) {
            if (uVar5 == 0x28a && uVar6 == 0x500) {
              uVar3 = 600;
            }
            else {
              uVar3 = 0x271;
              if (uVar6 == 0x514 && uVar5 == 0x271) {
                uVar3 = 0x23f;
              }
              if (((uVar6 != 0x514 || uVar5 != 0x271) &&
                  (uVar3 = uVar5, uVar6 == 0x500 && uVar5 == 0x271)) &&
                 (uVar3 = 0x23f, uVar5 == 0x28a)) {
                uVar3 = 600;
              }
            }
          }
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar3;
          return 0;
        }
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != &DAT_0007f8bc);
    if (4 < DAT_0007eb9c) {
      local_828._0_1_ = s_freq_level_not_match_0006108c[0];
      local_828._1_1_ = s_freq_level_not_match_0006108c[1];
      local_828._2_1_ = s_freq_level_not_match_0006108c[2];
      local_828._3_1_ = s_freq_level_not_match_0006108c[3];
      local_824._0_1_ = s_freq_level_not_match_0006108c[4];
      local_824._1_1_ = s_freq_level_not_match_0006108c[5];
      local_824._2_1_ = s_freq_level_not_match_0006108c[6];
      local_824._3_1_ = s_freq_level_not_match_0006108c[7];
      local_820._0_1_ = s_freq_level_not_match_0006108c[8];
      local_820._1_1_ = s_freq_level_not_match_0006108c[9];
      local_820._2_1_ = s_freq_level_not_match_0006108c[10];
      local_820._3_1_ = s_freq_level_not_match_0006108c[11];
      local_81c._0_1_ = s_freq_level_not_match_0006108c[12];
      local_81c._1_1_ = s_freq_level_not_match_0006108c[13];
      local_81c._2_1_ = s_freq_level_not_match_0006108c[14];
      local_81c._3_1_ = s_freq_level_not_match_0006108c[15];
      uStack_818._0_1_ = s_freq_level_not_match_0006108c[16];
      uStack_818._1_1_ = s_freq_level_not_match_0006108c[17];
      uStack_818._2_1_ = s_freq_level_not_match_0006108c[18];
      uStack_818._3_1_ = s_freq_level_not_match_0006108c[19];
      local_814 = (undefined)ram0x000610a0;
      FUN_0002e584(4,&local_828,0);
      return 0xfffffffe;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

