
undefined4 FUN_00018654(int param_1,undefined4 param_2,uint *param_3)

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
  undefined4 uStack_814;
  
  if ((DAT_0007f814 == 0) || (*(char *)(DAT_0007f814 + 0x1c) == '\0')) {
    if (4 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"No work mode voltage, chain = %d, mode = %d.\n",param_1,
               param_2);
      FUN_0002e584(4,&local_828,0);
      return 0xffffffff;
    }
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(DAT_0007f814 + param_1 * 4);
    puVar4 = &DAT_0007f81c;
    uVar5 = (uint)*(ushort *)(iVar2 + 0x23);
    uVar6 = (uint)*(ushort *)(iVar2 + 0x25);
    do {
      if ((puVar4[-1] != 0) && (*puVar4 == uVar6 && (*puVar4 != 0 && puVar4[-1] == uVar5))) {
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
          if (((((local_828 == 0x30563146) && (local_824 == 0x43314235)) && ((char)local_820 == '1')
               ) && ((local_82c - 3U < 2 &&
                     ((uVar6 == 0x28a && uVar5 == 0x500 ||
                      (uVar6 == 0x271 && (uVar5 == 0x514 || uVar5 == 0x500))))))) &&
             (uVar3 = 0x4ec, local_82c != 3)) {
            uVar3 = 0x4d8;
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
      local_828._0_1_ = s_voltage_level_not_match_000610d4[0];
      local_828._1_1_ = s_voltage_level_not_match_000610d4[1];
      local_828._2_1_ = s_voltage_level_not_match_000610d4[2];
      local_828._3_1_ = s_voltage_level_not_match_000610d4[3];
      local_824._0_1_ = s_voltage_level_not_match_000610d4[4];
      local_824._1_1_ = s_voltage_level_not_match_000610d4[5];
      local_824._2_1_ = s_voltage_level_not_match_000610d4[6];
      local_824._3_1_ = s_voltage_level_not_match_000610d4[7];
      local_820._0_1_ = s_voltage_level_not_match_000610d4[8];
      local_820._1_1_ = s_voltage_level_not_match_000610d4[9];
      local_820._2_1_ = s_voltage_level_not_match_000610d4[10];
      local_820._3_1_ = s_voltage_level_not_match_000610d4[11];
      local_81c._0_1_ = s_voltage_level_not_match_000610d4[12];
      local_81c._1_1_ = s_voltage_level_not_match_000610d4[13];
      local_81c._2_1_ = s_voltage_level_not_match_000610d4[14];
      local_81c._3_1_ = s_voltage_level_not_match_000610d4[15];
      uStack_818._0_1_ = s_voltage_level_not_match_000610d4[16];
      uStack_818._1_1_ = s_voltage_level_not_match_000610d4[17];
      uStack_818._2_1_ = s_voltage_level_not_match_000610d4[18];
      uStack_818._3_1_ = s_voltage_level_not_match_000610d4[19];
      uStack_814._0_1_ = s_voltage_level_not_match_000610d4[20];
      uStack_814._1_1_ = s_voltage_level_not_match_000610d4[21];
      uStack_814._2_1_ = s_voltage_level_not_match_000610d4[22];
      uStack_814._3_1_ = s_voltage_level_not_match_000610d4[23];
      FUN_0002e584(4,&local_828,0);
      return 0xfffffffe;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

