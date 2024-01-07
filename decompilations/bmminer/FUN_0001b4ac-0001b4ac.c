
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001b4ac(void)

{
  int iVar1;
  bool bVar2;
  size_t __nmemb;
  size_t __nmemb_00;
  undefined2 uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  void *pvVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  void *pvVar22;
  undefined auStack_924 [252];
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined2 uStack_800;
  undefined local_7fe;
  
  piVar4 = (int *)FUN_0004d6e4("/etc/topol.conf",0,auStack_924);
  if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
    if (DAT_0007eb9c < 4) {
      return -1;
    }
    snprintf((char *)&local_828,0x800,"load topol config file %s failed\n","/etc/topol.conf");
    FUN_0002e584(3,&local_828,0);
    return -1;
  }
  piVar5 = (int *)FUN_0004e234(piVar4,"machine");
  if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
    if (3 < DAT_0007eb9c) {
      local_828._0_1_ = s_get_machine_failed_00061910[0];
      local_828._1_1_ = s_get_machine_failed_00061910[1];
      local_828._2_1_ = s_get_machine_failed_00061910[2];
      local_828._3_1_ = s_get_machine_failed_00061910[3];
      local_824._0_1_ = s_get_machine_failed_00061910[4];
      local_824._1_1_ = s_get_machine_failed_00061910[5];
      local_824._2_1_ = s_get_machine_failed_00061910[6];
      local_824._3_1_ = s_get_machine_failed_00061910[7];
      local_820._0_1_ = s_get_machine_failed_00061910[8];
      local_820._1_1_ = s_get_machine_failed_00061910[9];
      local_820._2_1_ = s_get_machine_failed_00061910[10];
      local_820._3_1_ = s_get_machine_failed_00061910[11];
      local_81c._0_1_ = s_get_machine_failed_00061910[12];
      local_81c._1_1_ = s_get_machine_failed_00061910[13];
      local_81c._2_1_ = s_get_machine_failed_00061910[14];
      local_81c._3_1_ = s_get_machine_failed_00061910[15];
      local_818._0_1_ = s_get_machine_failed_00061910[16];
      local_818._1_1_ = s_get_machine_failed_00061910[17];
      local_818._2_1_ = s_get_machine_failed_00061910[18];
      local_818._3_1_ = s_get_machine_failed_00061910[19];
      FUN_0002e584(3,&local_828,0);
LAB_0001b5fc:
      if (3 < DAT_0007eb9c) {
        iVar20 = -1;
        local_828._0_1_ = s_parse_machine_failed_000619e0[0];
        local_828._1_1_ = s_parse_machine_failed_000619e0[1];
        local_828._2_1_ = s_parse_machine_failed_000619e0[2];
        local_828._3_1_ = s_parse_machine_failed_000619e0[3];
        local_824._0_1_ = s_parse_machine_failed_000619e0[4];
        local_824._1_1_ = s_parse_machine_failed_000619e0[5];
        local_824._2_1_ = s_parse_machine_failed_000619e0[6];
        local_824._3_1_ = s_parse_machine_failed_000619e0[7];
        local_820._0_1_ = s_parse_machine_failed_000619e0[8];
        local_820._1_1_ = s_parse_machine_failed_000619e0[9];
        local_820._2_1_ = s_parse_machine_failed_000619e0[10];
        local_820._3_1_ = s_parse_machine_failed_000619e0[11];
        local_81c._0_1_ = s_parse_machine_failed_000619e0[12];
        local_81c._1_1_ = s_parse_machine_failed_000619e0[13];
        local_81c._2_1_ = s_parse_machine_failed_000619e0[14];
        local_81c._3_1_ = s_parse_machine_failed_000619e0[15];
        local_818._0_1_ = s_parse_machine_failed_000619e0[16];
        local_818._1_1_ = s_parse_machine_failed_000619e0[17];
        local_818._2_1_ = s_parse_machine_failed_000619e0[18];
        local_818._3_1_ = s_parse_machine_failed_000619e0[19];
                    /* WARNING: Ignoring partial resolution of indirect */
        local_814._0_2_ = (short)ram0x000619f4;
        FUN_0002e584(3,&local_828,0);
        goto LAB_0001b540;
      }
    }
  }
  else {
    if (3 < DAT_0007eb9c) {
      uVar10 = FUN_0004e768();
      snprintf((char *)&local_828,0x800,"load machine %s conf\n",uVar10);
      FUN_0002e584(3,&local_828,0);
    }
    pcVar6 = (char *)FUN_0004e768(piVar5);
    sVar7 = strlen(pcVar6);
    pcVar8 = (char *)calloc(sVar7 + 1,1);
    DAT_0058dfb8 = pcVar8;
    if (pcVar8 == (char *)0x0) {
      if (3 < DAT_0007eb9c) {
        local_828._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[0];
        local_828._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[1];
        local_828._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[2];
        local_828._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[3];
        local_824._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[4];
        local_824._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[5];
        local_824._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[6];
        local_824._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[7];
        local_820._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[8];
        local_820._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[9];
        local_820._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[10];
        local_820._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[11];
        local_81c._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[12];
        local_81c._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[13];
        local_81c._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[14];
        local_81c._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[15];
        local_818._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[16];
        local_818._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[17];
        local_818._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[18];
        local_818._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[19];
        local_814._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[20];
        local_814._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[21];
        local_814._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[22];
        local_814._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[23];
        local_810._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[24];
        local_810._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[25];
        local_810._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[26];
        local_810._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[27];
        local_80c._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[28];
        local_80c._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[29];
        local_80c._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[30];
        local_80c._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[31];
        local_808._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[32];
        local_808._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[33];
        local_808._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[34];
        local_808._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[35];
        uStack_804._0_1_ = s_get_machine_failed__Cannot_alloc_0006193c[36];
        uStack_804._1_1_ = s_get_machine_failed__Cannot_alloc_0006193c[37];
        uStack_804._2_1_ = s_get_machine_failed__Cannot_alloc_0006193c[38];
        uStack_804._3_1_ = s_get_machine_failed__Cannot_alloc_0006193c[39];
        uStack_800 = (undefined2)ram0x00061964;
        local_7fe = (undefined)((uint)ram0x00061964 >> 0x10);
        FUN_0002e584(3,&local_828,0);
        goto LAB_0001b5fc;
      }
    }
    else {
      strcpy(pcVar8,pcVar6);
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"machine : %s \n",pcVar8);
        FUN_0002e584(3,&local_828,0);
      }
      piVar5 = (int *)FUN_0004e234(piVar4,"hw_version");
      if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
        if (3 < DAT_0007eb9c) {
          pcVar6 = "get hw_version failed\n";
LAB_0001b6d0:
          local_828 = *(undefined4 *)pcVar6;
          local_824 = *(undefined4 *)((int)pcVar6 + 4);
          local_820 = *(undefined4 *)((int)pcVar6 + 8);
          local_81c = *(undefined4 *)((int)pcVar6 + 0xc);
          local_818 = *(undefined4 *)((int)pcVar6 + 0x10);
                    /* WARNING: Ignoring partial resolution of indirect */
          local_814._0_2_ = (short)*(undefined4 *)((int)pcVar6 + 0x14);
          FUN_0002e584(3,&local_828,0);
          goto LAB_0001b5fc;
        }
      }
      else {
        if (4 < DAT_0007eb9c) {
          uVar10 = FUN_0004e768();
          snprintf((char *)&local_828,0x800,"hw_version: %s\n",uVar10);
          FUN_0002e584(4,&local_828,0);
        }
        piVar5 = (int *)FUN_0004e234(piVar4,"sw_version");
        if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
          if (3 < DAT_0007eb9c) {
            pcVar6 = "get sw_version failed\n";
            goto LAB_0001b6d0;
          }
        }
        else {
          if (4 < DAT_0007eb9c) {
            FUN_0004e768();
            snprintf((char *)&local_828,0x800,"sw_version: %s\n");
            FUN_0002e584(4,&local_828,0);
          }
          piVar5 = (int *)FUN_0004e234(piVar4,"processor");
          if ((piVar5 == (int *)0x0) || (*piVar5 != 0)) {
            if (3 < DAT_0007eb9c) {
              local_828._0_1_ = s_get_processor_failed_00061a04[0];
              local_828._1_1_ = s_get_processor_failed_00061a04[1];
              local_828._2_1_ = s_get_processor_failed_00061a04[2];
              local_828._3_1_ = s_get_processor_failed_00061a04[3];
              local_824._0_1_ = s_get_processor_failed_00061a04[4];
              local_824._1_1_ = s_get_processor_failed_00061a04[5];
              local_824._2_1_ = s_get_processor_failed_00061a04[6];
              local_824._3_1_ = s_get_processor_failed_00061a04[7];
              local_820._0_1_ = s_get_processor_failed_00061a04[8];
              local_820._1_1_ = s_get_processor_failed_00061a04[9];
              local_820._2_1_ = s_get_processor_failed_00061a04[10];
              local_820._3_1_ = s_get_processor_failed_00061a04[11];
              local_81c._0_1_ = s_get_processor_failed_00061a04[12];
              local_81c._1_1_ = s_get_processor_failed_00061a04[13];
              local_81c._2_1_ = s_get_processor_failed_00061a04[14];
              local_81c._3_1_ = s_get_processor_failed_00061a04[15];
              local_818._0_1_ = s_get_processor_failed_00061a04[16];
              local_818._1_1_ = s_get_processor_failed_00061a04[17];
              local_818._2_1_ = s_get_processor_failed_00061a04[18];
              local_818._3_1_ = s_get_processor_failed_00061a04[19];
              local_814._0_2_ = (short)ram0x00061a18;
              FUN_0002e584(3,&local_828,0);
LAB_0001b8fc:
              if (3 < DAT_0007eb9c) {
                iVar20 = -1;
                local_828._0_1_ = s_parse_processor_failed_00061a48[0];
                local_828._1_1_ = s_parse_processor_failed_00061a48[1];
                local_828._2_1_ = s_parse_processor_failed_00061a48[2];
                local_828._3_1_ = s_parse_processor_failed_00061a48[3];
                local_824._0_1_ = s_parse_processor_failed_00061a48[4];
                local_824._1_1_ = s_parse_processor_failed_00061a48[5];
                local_824._2_1_ = s_parse_processor_failed_00061a48[6];
                local_824._3_1_ = s_parse_processor_failed_00061a48[7];
                local_820._0_1_ = s_parse_processor_failed_00061a48[8];
                local_820._1_1_ = s_parse_processor_failed_00061a48[9];
                local_820._2_1_ = s_parse_processor_failed_00061a48[10];
                local_820._3_1_ = s_parse_processor_failed_00061a48[11];
                local_81c._0_1_ = s_parse_processor_failed_00061a48[12];
                local_81c._1_1_ = s_parse_processor_failed_00061a48[13];
                local_81c._2_1_ = s_parse_processor_failed_00061a48[14];
                local_81c._3_1_ = s_parse_processor_failed_00061a48[15];
                local_818._0_1_ = s_parse_processor_failed_00061a48[16];
                local_818._1_1_ = s_parse_processor_failed_00061a48[17];
                local_818._2_1_ = s_parse_processor_failed_00061a48[18];
                local_818._3_1_ = s_parse_processor_failed_00061a48[19];
                local_814._0_1_ = s_parse_processor_failed_00061a48[20];
                local_814._1_1_ = s_parse_processor_failed_00061a48[21];
                local_814._2_1_ = s_parse_processor_failed_00061a48[22];
                local_814._3_1_ = s_parse_processor_failed_00061a48[23];
                FUN_0002e584(3,&local_828,0);
                goto LAB_0001b540;
              }
            }
          }
          else {
            if (4 < DAT_0007eb9c) {
              local_828._0_1_ = s_processor__00061a1c[0];
              local_828._1_1_ = s_processor__00061a1c[1];
              local_828._2_1_ = s_processor__00061a1c[2];
              local_828._3_1_ = s_processor__00061a1c[3];
              local_824._0_1_ = s_processor__00061a1c[4];
              local_824._1_1_ = s_processor__00061a1c[5];
              local_824._2_1_ = s_processor__00061a1c[6];
              local_824._3_1_ = s_processor__00061a1c[7];
              local_820._0_1_ = s_processor__00061a1c[8];
              local_820._1_1_ = s_processor__00061a1c[9];
              local_820._2_1_ = s_processor__00061a1c[10];
              local_820._3_1_ = s_processor__00061a1c[11];
              FUN_0002e584(4,&local_828,0);
            }
            piVar5 = (int *)FUN_0004e234(piVar5,"type");
            if ((piVar5 == (int *)0x0) || (*piVar5 != 2)) {
              if (3 < DAT_0007eb9c) {
                local_828._0_1_ = s_get_type_failed_00061a28[0];
                local_828._1_1_ = s_get_type_failed_00061a28[1];
                local_828._2_1_ = s_get_type_failed_00061a28[2];
                local_828._3_1_ = s_get_type_failed_00061a28[3];
                local_824._0_1_ = s_get_type_failed_00061a28[4];
                local_824._1_1_ = s_get_type_failed_00061a28[5];
                local_824._2_1_ = s_get_type_failed_00061a28[6];
                local_824._3_1_ = s_get_type_failed_00061a28[7];
                local_820._0_1_ = s_get_type_failed_00061a28[8];
                local_820._1_1_ = s_get_type_failed_00061a28[9];
                local_820._2_1_ = s_get_type_failed_00061a28[10];
                local_820._3_1_ = s_get_type_failed_00061a28[11];
                local_81c._0_1_ = s_get_type_failed_00061a28[12];
                local_81c._1_1_ = s_get_type_failed_00061a28[13];
                local_81c._2_1_ = s_get_type_failed_00061a28[14];
                local_81c._3_1_ = s_get_type_failed_00061a28[15];
                local_818._0_1_ = (char)ram0x00061a38;
                FUN_0002e584(3,&local_828,0);
                goto LAB_0001b8fc;
              }
            }
            else {
              if (4 < DAT_0007eb9c) {
                FUN_0004e768();
                snprintf((char *)&local_828,0x800,"type: %s\n");
                FUN_0002e584(4,&local_828,0);
              }
              piVar5 = (int *)FUN_0004e234(piVar4,"power");
              if ((piVar5 == (int *)0x0) || (*piVar5 != 0)) {
                if (3 < DAT_0007eb9c) {
                  local_828._0_1_ = s_get_power_failed_00061a60[0];
                  local_828._1_1_ = s_get_power_failed_00061a60[1];
                  local_828._2_1_ = s_get_power_failed_00061a60[2];
                  local_828._3_1_ = s_get_power_failed_00061a60[3];
                  local_824._0_1_ = s_get_power_failed_00061a60[4];
                  local_824._1_1_ = s_get_power_failed_00061a60[5];
                  local_824._2_1_ = s_get_power_failed_00061a60[6];
                  local_824._3_1_ = s_get_power_failed_00061a60[7];
                  local_820._0_1_ = s_get_power_failed_00061a60[8];
                  local_820._1_1_ = s_get_power_failed_00061a60[9];
                  local_820._2_1_ = s_get_power_failed_00061a60[10];
                  local_820._3_1_ = s_get_power_failed_00061a60[11];
                  local_81c._0_1_ = s_get_power_failed_00061a60[12];
                  local_81c._1_1_ = s_get_power_failed_00061a60[13];
                  local_81c._2_1_ = s_get_power_failed_00061a60[14];
                  local_81c._3_1_ = s_get_power_failed_00061a60[15];
                  local_818._0_2_ = (short)ram0x00061a70;
                  FUN_0002e584(3,&local_828,0);
LAB_0001ba70:
                  if (3 < DAT_0007eb9c) {
                    pcVar6 = "parse power failed\n";
LAB_0001ba88:
                    local_828 = *(undefined4 *)pcVar6;
                    local_824 = *(undefined4 *)((int)pcVar6 + 4);
                    local_820 = *(undefined4 *)((int)pcVar6 + 8);
                    local_81c = *(undefined4 *)((int)pcVar6 + 0xc);
                    iVar20 = -1;
                    local_818 = *(undefined4 *)((int)pcVar6 + 0x10);
                    FUN_0002e584(3,&local_828,0);
                    goto LAB_0001b540;
                  }
                }
              }
              else {
                if (4 < DAT_0007eb9c) {
                  local_828._0_1_ = s_power__00061a74[0];
                  local_828._1_1_ = s_power__00061a74[1];
                  local_828._2_1_ = s_power__00061a74[2];
                  local_828._3_1_ = s_power__00061a74[3];
                  local_824._0_1_ = s_power__00061a74[4];
                  local_824._1_1_ = s_power__00061a74[5];
                  local_824._2_1_ = s_power__00061a74[6];
                  local_824._3_1_ = s_power__00061a74[7];
                  FUN_0002e584(4,&local_828);
                }
                piVar9 = (int *)FUN_0004e234(piVar5,"type");
                if ((piVar9 == (int *)0x0) || (*piVar9 != 2)) {
                  if (3 < DAT_0007eb9c) {
                    pcVar6 = "get type failed\n";
LAB_0001ba4c:
                    local_828 = *(undefined4 *)pcVar6;
                    local_824 = *(undefined4 *)((int)pcVar6 + 4);
                    local_820 = *(undefined4 *)((int)pcVar6 + 8);
                    local_81c = *(undefined4 *)((int)pcVar6 + 0xc);
                    /* WARNING: Ignoring partial resolution of indirect */
                    local_818._0_1_ = (char)*(undefined4 *)((int)pcVar6 + 0x10);
                    FUN_0002e584(3,&local_828,0);
                    goto LAB_0001ba70;
                  }
                }
                else {
                  if (4 < DAT_0007eb9c) {
                    uVar10 = FUN_0004e768();
                    snprintf((char *)&local_828,0x800,"type: %s\n",uVar10);
                    FUN_0002e584(4,&local_828,0);
                  }
                  piVar9 = (int *)FUN_0004e234(piVar5,"version");
                  if ((piVar9 == (int *)0x0) || (*piVar9 != 1)) {
                    if (3 < DAT_0007eb9c) {
                      local_828._0_1_ = s_get_version_array_failed_00061a7c[0];
                      local_828._1_1_ = s_get_version_array_failed_00061a7c[1];
                      local_828._2_1_ = s_get_version_array_failed_00061a7c[2];
                      local_828._3_1_ = s_get_version_array_failed_00061a7c[3];
                      local_824._0_1_ = s_get_version_array_failed_00061a7c[4];
                      local_824._1_1_ = s_get_version_array_failed_00061a7c[5];
                      local_824._2_1_ = s_get_version_array_failed_00061a7c[6];
                      local_824._3_1_ = s_get_version_array_failed_00061a7c[7];
                      local_820._0_1_ = s_get_version_array_failed_00061a7c[8];
                      local_820._1_1_ = s_get_version_array_failed_00061a7c[9];
                      local_820._2_1_ = s_get_version_array_failed_00061a7c[10];
                      local_820._3_1_ = s_get_version_array_failed_00061a7c[11];
                      local_81c._0_1_ = s_get_version_array_failed_00061a7c[12];
                      local_81c._1_1_ = s_get_version_array_failed_00061a7c[13];
                      local_81c._2_1_ = s_get_version_array_failed_00061a7c[14];
                      local_81c._3_1_ = s_get_version_array_failed_00061a7c[15];
                      local_818._0_1_ = s_get_version_array_failed_00061a7c[16];
                      local_818._1_1_ = s_get_version_array_failed_00061a7c[17];
                      local_818._2_1_ = s_get_version_array_failed_00061a7c[18];
                      local_818._3_1_ = s_get_version_array_failed_00061a7c[19];
                      local_814._0_1_ = s_get_version_array_failed_00061a7c[20];
                      local_814._1_1_ = s_get_version_array_failed_00061a7c[21];
                      local_814._2_1_ = s_get_version_array_failed_00061a7c[22];
                      local_814._3_1_ = s_get_version_array_failed_00061a7c[23];
                      local_810._0_2_ = (short)ram0x00061a94;
                      FUN_0002e584(3,&local_828,0);
                      goto LAB_0001ba70;
                    }
                  }
                  else {
                    sVar7 = FUN_0004e5a0();
                    DAT_0058e038 = sVar7;
                    DAT_0058e03c = calloc(sVar7,2);
                    if (0 < (int)sVar7) {
                      iVar20 = 0;
                      do {
                        FUN_0004e5bc(piVar9,iVar20);
                        uVar3 = FUN_0004e9c4();
                        iVar16 = iVar20 * 2;
                        iVar20 = iVar20 + 1;
                        *(undefined2 *)((int)DAT_0058e03c + iVar16) = uVar3;
                        if (4 < DAT_0007eb9c) {
                          snprintf((char *)&local_828,0x800,"psu version = 0x%x",
                                   (uint)*(ushort *)((int)DAT_0058e03c + iVar16));
                          FUN_0002e584(4,&local_828,0);
                        }
                      } while (iVar20 < (int)DAT_0058e038);
                    }
                    piVar9 = (int *)FUN_0004e234(piVar5,"i2c_addr");
                    if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                      if (3 < DAT_0007eb9c) {
                        local_828._0_1_ = s_get_i2c_addr_failed_00061ab8[0];
                        local_828._1_1_ = s_get_i2c_addr_failed_00061ab8[1];
                        local_828._2_1_ = s_get_i2c_addr_failed_00061ab8[2];
                        local_828._3_1_ = s_get_i2c_addr_failed_00061ab8[3];
                        local_824._0_1_ = s_get_i2c_addr_failed_00061ab8[4];
                        local_824._1_1_ = s_get_i2c_addr_failed_00061ab8[5];
                        local_824._2_1_ = s_get_i2c_addr_failed_00061ab8[6];
                        local_824._3_1_ = s_get_i2c_addr_failed_00061ab8[7];
                        local_820._0_1_ = s_get_i2c_addr_failed_00061ab8[8];
                        local_820._1_1_ = s_get_i2c_addr_failed_00061ab8[9];
                        local_820._2_1_ = s_get_i2c_addr_failed_00061ab8[10];
                        local_820._3_1_ = s_get_i2c_addr_failed_00061ab8[11];
                        local_81c._0_1_ = s_get_i2c_addr_failed_00061ab8[12];
                        local_81c._1_1_ = s_get_i2c_addr_failed_00061ab8[13];
                        local_81c._2_1_ = s_get_i2c_addr_failed_00061ab8[14];
                        local_81c._3_1_ = s_get_i2c_addr_failed_00061ab8[15];
                        local_818._0_1_ = s_get_i2c_addr_failed_00061ab8[16];
                        local_818._1_1_ = s_get_i2c_addr_failed_00061ab8[17];
                        local_818._2_1_ = s_get_i2c_addr_failed_00061ab8[18];
                        local_818._3_1_ = s_get_i2c_addr_failed_00061ab8[19];
                        local_814._0_1_ = (char)ram0x00061acc;
                        FUN_0002e584(3,&local_828,0);
                        goto LAB_0001ba70;
                      }
                    }
                    else {
                      if (4 < DAT_0007eb9c) {
                        uVar10 = FUN_0004e9c4();
                        snprintf((char *)&local_828,0x800,"i2c_addr: %d\n",uVar10);
                        FUN_0002e584(4,&local_828,0);
                      }
                      piVar5 = (int *)FUN_0004e234(piVar5,&DAT_00061ae0);
                      if ((piVar5 == (int *)0x0) || (*piVar5 != 3)) {
                        if (3 < DAT_0007eb9c) {
                          pcVar6 = "get gpio failed\n";
                          goto LAB_0001ba4c;
                        }
                      }
                      else {
                        if (4 < DAT_0007eb9c) {
                          FUN_0004e9c4();
                          snprintf((char *)&local_828,0x800,"gpio: %d\n");
                          FUN_0002e584(4,&local_828,0);
                        }
                        piVar5 = (int *)FUN_0004e234(piVar4,&DAT_00061b1c);
                        if ((piVar5 == (int *)0x0) || (*piVar5 != 1)) {
                          if (3 < DAT_0007eb9c) {
                            local_828._0_1_ = s_get_fan_failed_00061b20[0];
                            local_828._1_1_ = s_get_fan_failed_00061b20[1];
                            local_828._2_1_ = s_get_fan_failed_00061b20[2];
                            local_828._3_1_ = s_get_fan_failed_00061b20[3];
                            local_824._0_1_ = s_get_fan_failed_00061b20[4];
                            local_824._1_1_ = s_get_fan_failed_00061b20[5];
                            local_824._2_1_ = s_get_fan_failed_00061b20[6];
                            local_824._3_1_ = s_get_fan_failed_00061b20[7];
                            local_820._0_1_ = s_get_fan_failed_00061b20[8];
                            local_820._1_1_ = s_get_fan_failed_00061b20[9];
                            local_820._2_1_ = s_get_fan_failed_00061b20[10];
                            local_820._3_1_ = s_get_fan_failed_00061b20[11];
                            local_81c._0_1_ = s_get_fan_failed_00061b20[12];
                            local_81c._1_1_ = s_get_fan_failed_00061b20[13];
                            local_81c._2_1_ = s_get_fan_failed_00061b20[14];
                            local_81c._3_1_ = s_get_fan_failed_00061b20[15];
                            FUN_0002e584(3,&local_828,0);
LAB_0001bdac:
                            if (3 < DAT_0007eb9c) {
                              iVar20 = -1;
                              local_828._0_1_ = s_parse_fan_failed_00061c28[0];
                              local_828._1_1_ = s_parse_fan_failed_00061c28[1];
                              local_828._2_1_ = s_parse_fan_failed_00061c28[2];
                              local_828._3_1_ = s_parse_fan_failed_00061c28[3];
                              local_824._0_1_ = s_parse_fan_failed_00061c28[4];
                              local_824._1_1_ = s_parse_fan_failed_00061c28[5];
                              local_824._2_1_ = s_parse_fan_failed_00061c28[6];
                              local_824._3_1_ = s_parse_fan_failed_00061c28[7];
                              local_820._0_1_ = s_parse_fan_failed_00061c28[8];
                              local_820._1_1_ = s_parse_fan_failed_00061c28[9];
                              local_820._2_1_ = s_parse_fan_failed_00061c28[10];
                              local_820._3_1_ = s_parse_fan_failed_00061c28[11];
                              local_81c._0_1_ = s_parse_fan_failed_00061c28[12];
                              local_81c._1_1_ = s_parse_fan_failed_00061c28[13];
                              local_81c._2_1_ = s_parse_fan_failed_00061c28[14];
                              local_81c._3_1_ = s_parse_fan_failed_00061c28[15];
                              local_818._0_2_ = (short)ram0x00061c38;
                              FUN_0002e584(3,&local_828,0);
                              goto LAB_0001b540;
                            }
                          }
                        }
                        else {
                          if (4 < DAT_0007eb9c) {
                            local_828._0_1_ = (char)DAT_00061b30;
                            local_828._1_1_ = DAT_00061b30._1_1_;
                            local_828._2_1_ = DAT_00061b30._2_1_;
                            local_828._3_1_ = DAT_00061b30._3_1_;
                            local_824._0_2_ = (short)DAT_00061b34;
                            FUN_0002e584(4,&local_828,0);
                          }
                          pcVar8 = (char *)0x0;
                          pcVar6 = (char *)0x0;
                          for (uVar21 = 0; uVar11 = FUN_0004e5a0(piVar5), uVar21 < uVar11;
                              uVar21 = uVar21 + 1) {
                            piVar9 = (int *)FUN_0004e5bc(piVar5,uVar21);
                            if ((piVar9 == (int *)0x0) || (*piVar9 != 0)) {
                              if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                              pcVar6 = "get array %d failed\n";
LAB_0001bfdc:
                              snprintf((char *)&local_828,0x800,pcVar6,uVar21);
                              FUN_0002e584(3,&local_828,0);
                              goto LAB_0001bdac;
                            }
                            piVar12 = (int *)FUN_0004e234(piVar9,&DAT_00061b50);
                            if ((piVar12 == (int *)0x0) || (*piVar12 != 3)) {
                              if (3 < DAT_0007eb9c) {
                                pcVar6 = "get arrya %d id failed\n";
                                goto LAB_0001bfdc;
                              }
                              goto LAB_0001b53c;
                            }
                            if (4 < DAT_0007eb9c) {
                              uVar10 = FUN_0004e9c4();
                              snprintf((char *)&local_828,0x800,"id: %d\n",uVar10);
                              FUN_0002e584(4,&local_828,0);
                            }
                            piVar12 = (int *)FUN_0004e234(piVar9,"position");
                            if ((piVar12 == (int *)0x0) || (*piVar12 != 2)) {
                              if (3 < DAT_0007eb9c) {
                                pcVar6 = "get arrya %d position failed\n";
                                goto LAB_0001bfdc;
                              }
                              goto LAB_0001b53c;
                            }
                            if (4 < DAT_0007eb9c) {
                              uVar10 = FUN_0004e768();
                              snprintf((char *)&local_828,0x800,"position: %s\n",uVar10);
                              FUN_0002e584(4,&local_828,0);
                            }
                            pcVar6 = (char *)FUN_0004e768(piVar12);
                            piVar9 = (int *)FUN_0004e234(piVar9,"direction");
                            if ((piVar9 == (int *)0x0) || (*piVar9 != 2)) {
                              if (3 < DAT_0007eb9c) {
                                pcVar6 = "get arrya%d direction failed\n";
                                goto LAB_0001bfdc;
                              }
                              goto LAB_0001b53c;
                            }
                            if (4 < DAT_0007eb9c) {
                              uVar10 = FUN_0004e768();
                              snprintf((char *)&local_828,0x800,"direction: %s\n",uVar10);
                              FUN_0002e584(4,&local_828,0);
                            }
                            pcVar8 = (char *)FUN_0004e768(piVar9);
                            DAT_0058e004 = DAT_0058e004 + 1;
                          }
                          iVar20 = strncmp(pcVar6,"right",5);
                          if (iVar20 == 0) {
                            iVar20 = strncmp(pcVar8,"in",2);
                            if (iVar20 == 0) {
LAB_0001c3f4:
                              DAT_0058e000 = 0;
                            }
                            else {
                              iVar20 = strncmp(pcVar6,"left",4);
                              if (iVar20 == 0) {
                                iVar20 = strncmp(pcVar8,"out",2);
                                if (iVar20 != 0) goto LAB_0001c0e4;
                                goto LAB_0001c3f4;
                              }
                              iVar20 = strncmp(pcVar8,"out",2);
joined_r0x0001c174:
                              if (iVar20 != 0) goto LAB_0001c0e4;
                              DAT_0058e000 = 1;
                            }
                            piVar5 = (int *)FUN_0004e234(piVar4,&DAT_00061c3c);
                            if ((piVar5 == (int *)0x0) || (*piVar5 != 0)) {
                              if (3 < DAT_0007eb9c) {
                                local_828._0_1_ = s_get_asic_failed_00061c44[0];
                                local_828._1_1_ = s_get_asic_failed_00061c44[1];
                                local_828._2_1_ = s_get_asic_failed_00061c44[2];
                                local_828._3_1_ = s_get_asic_failed_00061c44[3];
                                local_824._0_1_ = s_get_asic_failed_00061c44[4];
                                local_824._1_1_ = s_get_asic_failed_00061c44[5];
                                local_824._2_1_ = s_get_asic_failed_00061c44[6];
                                local_824._3_1_ = s_get_asic_failed_00061c44[7];
                                local_820._0_1_ = s_get_asic_failed_00061c44[8];
                                local_820._1_1_ = s_get_asic_failed_00061c44[9];
                                local_820._2_1_ = s_get_asic_failed_00061c44[10];
                                local_820._3_1_ = s_get_asic_failed_00061c44[11];
                                local_81c._0_1_ = s_get_asic_failed_00061c44[12];
                                local_81c._1_1_ = s_get_asic_failed_00061c44[13];
                                local_81c._2_1_ = s_get_asic_failed_00061c44[14];
                                local_81c._3_1_ = s_get_asic_failed_00061c44[15];
                                local_818._0_1_ = (char)ram0x00061c54;
                                FUN_0002e584(3,&local_828,0);
LAB_0001c214:
                                if (3 < DAT_0007eb9c) {
                                  iVar20 = -1;
                                  local_828._0_1_ = s_parse_asic_failed_00061e68[0];
                                  local_828._1_1_ = s_parse_asic_failed_00061e68[1];
                                  local_828._2_1_ = s_parse_asic_failed_00061e68[2];
                                  local_828._3_1_ = s_parse_asic_failed_00061e68[3];
                                  local_824._0_1_ = s_parse_asic_failed_00061e68[4];
                                  local_824._1_1_ = s_parse_asic_failed_00061e68[5];
                                  local_824._2_1_ = s_parse_asic_failed_00061e68[6];
                                  local_824._3_1_ = s_parse_asic_failed_00061e68[7];
                                  local_820._0_1_ = s_parse_asic_failed_00061e68[8];
                                  local_820._1_1_ = s_parse_asic_failed_00061e68[9];
                                  local_820._2_1_ = s_parse_asic_failed_00061e68[10];
                                  local_820._3_1_ = s_parse_asic_failed_00061e68[11];
                                  local_81c._0_1_ = s_parse_asic_failed_00061e68[12];
                                  local_81c._1_1_ = s_parse_asic_failed_00061e68[13];
                                  local_81c._2_1_ = s_parse_asic_failed_00061e68[14];
                                  local_81c._3_1_ = s_parse_asic_failed_00061e68[15];
                                  local_818._0_3_ = (undefined3)ram0x00061e78;
                                  FUN_0002e584(3,&local_828,0);
                                  goto LAB_0001b540;
                                }
                              }
                            }
                            else {
                              if (4 < DAT_0007eb9c) {
                                local_828._0_1_ = (char)DAT_00061c58;
                                local_828._1_1_ = DAT_00061c58._1_1_;
                                local_828._2_1_ = DAT_00061c58._2_1_;
                                local_828._3_1_ = DAT_00061c58._3_1_;
                                local_824._0_3_ = (undefined3)DAT_00061c5c;
                                FUN_0002e584(4,&local_828);
                              }
                              piVar9 = (int *)FUN_0004e234(piVar5,"asic_id");
                              if ((piVar9 == (int *)0x0) || (*piVar9 != 2)) {
                                if (3 < DAT_0007eb9c) {
                                  local_828._0_1_ = s_get_asic_id_failed_00061c68[0];
                                  local_828._1_1_ = s_get_asic_id_failed_00061c68[1];
                                  local_828._2_1_ = s_get_asic_id_failed_00061c68[2];
                                  local_828._3_1_ = s_get_asic_id_failed_00061c68[3];
                                  local_824._0_1_ = s_get_asic_id_failed_00061c68[4];
                                  local_824._1_1_ = s_get_asic_id_failed_00061c68[5];
                                  local_824._2_1_ = s_get_asic_id_failed_00061c68[6];
                                  local_824._3_1_ = s_get_asic_id_failed_00061c68[7];
                                  local_820._0_1_ = s_get_asic_id_failed_00061c68[8];
                                  local_820._1_1_ = s_get_asic_id_failed_00061c68[9];
                                  local_820._2_1_ = s_get_asic_id_failed_00061c68[10];
                                  local_820._3_1_ = s_get_asic_id_failed_00061c68[11];
                                  local_81c._0_1_ = s_get_asic_id_failed_00061c68[12];
                                  local_81c._1_1_ = s_get_asic_id_failed_00061c68[13];
                                  local_81c._2_1_ = s_get_asic_id_failed_00061c68[14];
                                  local_81c._3_1_ = s_get_asic_id_failed_00061c68[15];
                                  local_818._0_1_ = s_get_asic_id_failed_00061c68[16];
                                  local_818._1_1_ = s_get_asic_id_failed_00061c68[17];
                                  local_818._2_1_ = s_get_asic_id_failed_00061c68[18];
                                  local_818._3_1_ = s_get_asic_id_failed_00061c68[19];
                                  FUN_0002e584(3,&local_828,0);
                                  goto LAB_0001c214;
                                }
                              }
                              else {
                                if (4 < DAT_0007eb9c) {
                                  uVar10 = FUN_0004e768();
                                  snprintf((char *)&local_828,0x800,"asic_id: %s\n",uVar10);
                                  FUN_0002e584(4,&local_828,0);
                                }
                                piVar9 = (int *)FUN_0004e234(piVar5,"asic_addr");
                                if ((piVar9 == (int *)0x0) || (*piVar9 != 2)) {
                                  if (3 < DAT_0007eb9c) {
                                    local_828._0_1_ = s_get_asic_addr_failed_00061c98[0];
                                    local_828._1_1_ = s_get_asic_addr_failed_00061c98[1];
                                    local_828._2_1_ = s_get_asic_addr_failed_00061c98[2];
                                    local_828._3_1_ = s_get_asic_addr_failed_00061c98[3];
                                    local_824._0_1_ = s_get_asic_addr_failed_00061c98[4];
                                    local_824._1_1_ = s_get_asic_addr_failed_00061c98[5];
                                    local_824._2_1_ = s_get_asic_addr_failed_00061c98[6];
                                    local_824._3_1_ = s_get_asic_addr_failed_00061c98[7];
                                    local_820._0_1_ = s_get_asic_addr_failed_00061c98[8];
                                    local_820._1_1_ = s_get_asic_addr_failed_00061c98[9];
                                    local_820._2_1_ = s_get_asic_addr_failed_00061c98[10];
                                    local_820._3_1_ = s_get_asic_addr_failed_00061c98[11];
                                    local_81c._0_1_ = s_get_asic_addr_failed_00061c98[12];
                                    local_81c._1_1_ = s_get_asic_addr_failed_00061c98[13];
                                    local_81c._2_1_ = s_get_asic_addr_failed_00061c98[14];
                                    local_81c._3_1_ = s_get_asic_addr_failed_00061c98[15];
                                    local_818._0_1_ = s_get_asic_addr_failed_00061c98[16];
                                    local_818._1_1_ = s_get_asic_addr_failed_00061c98[17];
                                    local_818._2_1_ = s_get_asic_addr_failed_00061c98[18];
                                    local_818._3_1_ = s_get_asic_addr_failed_00061c98[19];
                                    local_814._0_2_ = (short)ram0x00061cac;
                                    FUN_0002e584(3,&local_828,0);
                                    goto LAB_0001c214;
                                  }
                                }
                                else {
                                  if (4 < DAT_0007eb9c) {
                                    uVar10 = FUN_0004e768();
                                    snprintf((char *)&local_828,0x800,"asic_addr : %s\n",uVar10);
                                    FUN_0002e584(4,&local_828,0);
                                  }
                                  pcVar6 = (char *)FUN_0004e768(piVar9);
                                  DAT_0058dfd8 = strtol(pcVar6,(char **)0x0,0);
                                  if (DAT_0058dfd8 == 0) {
                                    if (3 < DAT_0007eb9c) {
                                      pcVar6 = "convert asic_addr failed\n";
LAB_0001c3ac:
                                      local_828 = *(undefined4 *)pcVar6;
                                      local_824 = *(undefined4 *)((int)pcVar6 + 4);
                                      local_820 = *(undefined4 *)((int)pcVar6 + 8);
                                      local_81c = *(undefined4 *)((int)pcVar6 + 0xc);
                                      local_818 = *(undefined4 *)((int)pcVar6 + 0x10);
                                      local_814 = *(undefined4 *)((int)pcVar6 + 0x14);
                                      local_810._0_2_ = (short)*(undefined4 *)((int)pcVar6 + 0x18);
                                      FUN_0002e584(3,&local_828,0);
                                      goto LAB_0001c214;
                                    }
                                  }
                                  else {
                                    if (4 < DAT_0007eb9c) {
                                      snprintf((char *)&local_828,0x800,"asic_addr 0x%x\n",
                                               DAT_0058dfd8);
                                      FUN_0002e584(4,&local_828,0);
                                    }
                                    piVar9 = (int *)FUN_0004e234(piVar5,"asic_core_num");
                                    if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                      if (3 < DAT_0007eb9c) {
                                        pcVar6 = "get asic_core_num failed\n";
                                        goto LAB_0001c3ac;
                                      }
                                    }
                                    else {
                                      if (4 < DAT_0007eb9c) {
                                        uVar10 = FUN_0004e9c4();
                                        snprintf((char *)&local_828,0x800,"asic_core_num: %d\n",
                                                 uVar10);
                                        FUN_0002e584(4,&local_828,0);
                                      }
                                      DAT_0058dfdc = FUN_0004e9c4(piVar9);
                                      piVar9 = (int *)FUN_0004e234(piVar5,"asic_small_core_num");
                                      if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                        if (3 < DAT_0007eb9c) {
                                          pcVar6 = "get asic_small_core_num failed\n";
LAB_0001c524:
                                          local_828 = *(undefined4 *)pcVar6;
                                          local_824 = *(undefined4 *)((int)pcVar6 + 4);
                                          local_820 = *(undefined4 *)((int)pcVar6 + 8);
                                          local_81c = *(undefined4 *)((int)pcVar6 + 0xc);
                                          local_818 = *(undefined4 *)((int)pcVar6 + 0x10);
                                          local_814 = *(undefined4 *)((int)pcVar6 + 0x14);
                                          local_810 = *(undefined4 *)((int)pcVar6 + 0x18);
                                          local_80c = *(undefined4 *)((int)pcVar6 + 0x1c);
                                          FUN_0002e584(3,&local_828,0);
                                          goto LAB_0001c214;
                                        }
                                      }
                                      else {
                                        if (4 < DAT_0007eb9c) {
                                          uVar10 = FUN_0004e9c4();
                                          snprintf((char *)&local_828,0x800,
                                                   "asic_small_core_num: %d\n",uVar10);
                                          FUN_0002e584(4,&local_828,0);
                                        }
                                        DAT_0058dfe0 = FUN_0004e9c4(piVar9);
                                        piVar9 = (int *)FUN_0004e234(piVar5,"core_small_core_num");
                                        if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                          if (3 < DAT_0007eb9c) {
                                            pcVar6 = "get core_small_core_num failed\n";
                                            goto LAB_0001c524;
                                          }
                                        }
                                        else {
                                          if (4 < DAT_0007eb9c) {
                                            uVar10 = FUN_0004e9c4();
                                            snprintf((char *)&local_828,0x800,
                                                     "core_small_core_num: %d\n",uVar10);
                                            FUN_0002e584(4,&local_828,0);
                                          }
                                          DAT_0058dfe4 = FUN_0004e9c4(piVar9);
                                          piVar9 = (int *)FUN_0004e234(piVar5,"asic_domain_num");
                                          if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                            if (3 < DAT_0007eb9c) {
                                              local_828._0_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[0];
                                              local_828._1_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[1];
                                              local_828._2_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[2];
                                              local_828._3_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[3];
                                              local_824._0_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[4];
                                              local_824._1_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[5];
                                              local_824._2_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[6];
                                              local_824._3_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[7];
                                              local_820._0_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[8];
                                              local_820._1_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[9];
                                              local_820._2_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[10];
                                              local_820._3_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[11];
                                              local_81c._0_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[12];
                                              local_81c._1_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[13];
                                              local_81c._2_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[14];
                                              local_81c._3_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[15];
                                              local_818._0_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[16];
                                              local_818._1_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[17];
                                              local_818._2_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[18];
                                              local_818._3_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[19];
                                              local_814._0_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[20];
                                              local_814._1_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[21];
                                              local_814._2_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[22];
                                              local_814._3_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[23];
                                              local_810._0_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[24];
                                              local_810._1_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[25];
                                              local_810._2_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[26];
                                              local_810._3_1_ =
                                                   s_get_asic_domain_num_failed_00061ddc[27];
                                              FUN_0002e584(3,&local_828,0);
                                              goto LAB_0001c214;
                                            }
                                          }
                                          else {
                                            if (4 < DAT_0007eb9c) {
                                              uVar10 = FUN_0004e9c4();
                                              snprintf((char *)&local_828,0x800,
                                                       "asic_domain_num : %d\n",uVar10);
                                              FUN_0002e584(4,&local_828,0);
                                            }
                                            DAT_0058dfe8 = FUN_0004e9c4(piVar9);
                                            piVar5 = (int *)FUN_0004e234(piVar5,"asic_addr_interval"
                                                                        );
                                            if ((piVar5 == (int *)0x0) || (*piVar5 != 3)) {
                                              if (3 < DAT_0007eb9c) {
                                                local_828._0_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[0];
                                                local_828._1_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[1];
                                                local_828._2_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[2];
                                                local_828._3_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[3];
                                                local_824._0_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[4];
                                                local_824._1_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[5];
                                                local_824._2_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[6];
                                                local_824._3_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[7];
                                                local_820._0_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[8];
                                                local_820._1_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[9];
                                                local_820._2_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[10];
                                                local_820._3_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[11];
                                                local_81c._0_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[12];
                                                local_81c._1_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[13];
                                                local_81c._2_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[14];
                                                local_81c._3_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[15];
                                                local_818._0_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[16];
                                                local_818._1_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[17];
                                                local_818._2_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[18];
                                                local_818._3_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[19];
                                                local_814._0_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[20];
                                                local_814._1_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[21];
                                                local_814._2_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[22];
                                                local_814._3_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[23];
                                                local_810._0_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[24];
                                                local_810._1_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[25];
                                                local_810._2_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[26];
                                                local_810._3_1_ =
                                                     s_get_asic_addr_interval_failed_00061e24[27];
                                                local_80c._0_3_ = (undefined3)ram0x00061e40;
                                                FUN_0002e584(3,&local_828,0);
                                                goto LAB_0001c214;
                                              }
                                            }
                                            else {
                                              if (4 < DAT_0007eb9c) {
                                                uVar10 = FUN_0004e9c4();
                                                snprintf((char *)&local_828,0x800,
                                                         "asic_addr_interval : %d\n",uVar10);
                                                FUN_0002e584(4,&local_828,0);
                                              }
                                              DAT_0058dfec = FUN_0004e9c4(piVar5);
                                              piVar5 = (int *)FUN_0004e234(piVar4,"chain");
                                              if ((piVar5 == (int *)0x0) || (*piVar5 != 0)) {
                                                if (3 < DAT_0007eb9c) {
                                                  local_828._0_1_ = s_get_chain_failed_00061e7c[0];
                                                  local_828._1_1_ = s_get_chain_failed_00061e7c[1];
                                                  local_828._2_1_ = s_get_chain_failed_00061e7c[2];
                                                  local_828._3_1_ = s_get_chain_failed_00061e7c[3];
                                                  local_824._0_1_ = s_get_chain_failed_00061e7c[4];
                                                  local_824._1_1_ = s_get_chain_failed_00061e7c[5];
                                                  local_824._2_1_ = s_get_chain_failed_00061e7c[6];
                                                  local_824._3_1_ = s_get_chain_failed_00061e7c[7];
                                                  local_820._0_1_ = s_get_chain_failed_00061e7c[8];
                                                  local_820._1_1_ = s_get_chain_failed_00061e7c[9];
                                                  local_820._2_1_ = s_get_chain_failed_00061e7c[10];
                                                  local_820._3_1_ = s_get_chain_failed_00061e7c[11];
                                                  local_81c._0_1_ = s_get_chain_failed_00061e7c[12];
                                                  local_81c._1_1_ = s_get_chain_failed_00061e7c[13];
                                                  local_81c._2_1_ = s_get_chain_failed_00061e7c[14];
                                                  local_81c._3_1_ = s_get_chain_failed_00061e7c[15];
                                                  local_818._0_2_ = (short)ram0x00061e8c;
                                                  FUN_0002e584(3,&local_828,0);
                                                  goto LAB_0001c828;
                                                }
                                              }
                                              else {
                                                if (4 < DAT_0007eb9c) {
                                                  local_828._0_1_ = s_chain__00061e90[0];
                                                  local_828._1_1_ = s_chain__00061e90[1];
                                                  local_828._2_1_ = s_chain__00061e90[2];
                                                  local_828._3_1_ = s_chain__00061e90[3];
                                                  local_824._0_1_ = s_chain__00061e90[4];
                                                  local_824._1_1_ = s_chain__00061e90[5];
                                                  local_824._2_1_ = s_chain__00061e90[6];
                                                  local_824._3_1_ = s_chain__00061e90[7];
                                                  FUN_0002e584(4,&local_828);
                                                }
                                                piVar9 = (int *)FUN_0004e234(piVar5,"chain_num");
                                                if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                                  if (3 < DAT_0007eb9c) {
                                                    pcVar6 = "get chain_num failed\n";
LAB_0001c800:
                                                    local_828 = *(undefined4 *)pcVar6;
                                                    local_824 = *(undefined4 *)((int)pcVar6 + 4);
                                                    local_820 = *(undefined4 *)((int)pcVar6 + 8);
                                                    local_81c = *(undefined4 *)((int)pcVar6 + 0xc);
                                                    local_818 = *(undefined4 *)((int)pcVar6 + 0x10);
                                                    local_814._0_2_ =
                                                         (short)*(undefined4 *)((int)pcVar6 + 0x14);
                                                    FUN_0002e584(3,&local_828,0);
LAB_0001c828:
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "parse chain failed\n";
                                                      goto LAB_0001ba88;
                                                    }
                                                  }
                                                }
                                                else {
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e9c4();
                                                    snprintf((char *)&local_828,0x800,
                                                             "chain_num : %d\n",uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  DAT_0058dfbc = FUN_0004e9c4(piVar9);
                                                  piVar9 = (int *)FUN_0004e234(piVar5,"chain_row");
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get chain_row failed\n";
                                                      goto LAB_0001c800;
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      uVar10 = FUN_0004e9c4();
                                                      snprintf((char *)&local_828,0x800,
                                                               "chain_row: %d\n",uVar10);
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    DAT_0058dfc0 = FUN_0004e9c4(piVar9);
                                                    piVar9 = (int *)FUN_0004e234(piVar5,
                                                  "chain_column");
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      local_828._0_1_ =
                                                           s_get_chain_column_failed_00061f04[0];
                                                      local_828._1_1_ =
                                                           s_get_chain_column_failed_00061f04[1];
                                                      local_828._2_1_ =
                                                           s_get_chain_column_failed_00061f04[2];
                                                      local_828._3_1_ =
                                                           s_get_chain_column_failed_00061f04[3];
                                                      local_824._0_1_ =
                                                           s_get_chain_column_failed_00061f04[4];
                                                      local_824._1_1_ =
                                                           s_get_chain_column_failed_00061f04[5];
                                                      local_824._2_1_ =
                                                           s_get_chain_column_failed_00061f04[6];
                                                      local_824._3_1_ =
                                                           s_get_chain_column_failed_00061f04[7];
                                                      local_820._0_1_ =
                                                           s_get_chain_column_failed_00061f04[8];
                                                      local_820._1_1_ =
                                                           s_get_chain_column_failed_00061f04[9];
                                                      local_820._2_1_ =
                                                           s_get_chain_column_failed_00061f04[10];
                                                      local_820._3_1_ =
                                                           s_get_chain_column_failed_00061f04[11];
                                                      local_81c._0_1_ =
                                                           s_get_chain_column_failed_00061f04[12];
                                                      local_81c._1_1_ =
                                                           s_get_chain_column_failed_00061f04[13];
                                                      local_81c._2_1_ =
                                                           s_get_chain_column_failed_00061f04[14];
                                                      local_81c._3_1_ =
                                                           s_get_chain_column_failed_00061f04[15];
                                                      local_818._0_1_ =
                                                           s_get_chain_column_failed_00061f04[16];
                                                      local_818._1_1_ =
                                                           s_get_chain_column_failed_00061f04[17];
                                                      local_818._2_1_ =
                                                           s_get_chain_column_failed_00061f04[18];
                                                      local_818._3_1_ =
                                                           s_get_chain_column_failed_00061f04[19];
                                                      local_814._0_1_ =
                                                           s_get_chain_column_failed_00061f04[20];
                                                      local_814._1_1_ =
                                                           s_get_chain_column_failed_00061f04[21];
                                                      local_814._2_1_ =
                                                           s_get_chain_column_failed_00061f04[22];
                                                      local_814._3_1_ =
                                                           s_get_chain_column_failed_00061f04[23];
                                                      local_810._0_1_ = (char)ram0x00061f1c;
                                                      FUN_0002e584(3,&local_828,0);
                                                      goto LAB_0001c828;
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      uVar10 = FUN_0004e9c4();
                                                      snprintf((char *)&local_828,0x800,
                                                               "chain_column: %d\n",uVar10);
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    DAT_0058dfc4 = FUN_0004e9c4(piVar9);
                                                    piVar9 = (int *)FUN_0004e234(piVar5,
                                                  "chain_domain_num");
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      local_828._0_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[0]
                                                      ;
                                                      local_828._1_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[1]
                                                      ;
                                                      local_828._2_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[2]
                                                      ;
                                                      local_828._3_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[3]
                                                      ;
                                                      local_824._0_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[4]
                                                      ;
                                                      local_824._1_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[5]
                                                      ;
                                                      local_824._2_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[6]
                                                      ;
                                                      local_824._3_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[7]
                                                      ;
                                                      local_820._0_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[8]
                                                      ;
                                                      local_820._1_1_ =
                                                           s_get_chain_domain_num_failed_00061f48[9]
                                                      ;
                                                      local_820._2_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [10];
                                                      local_820._3_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [11];
                                                      local_81c._0_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [12];
                                                      local_81c._1_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [13];
                                                      local_81c._2_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [14];
                                                      local_81c._3_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [15];
                                                      local_818._0_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [16];
                                                      local_818._1_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [17];
                                                      local_818._2_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [18];
                                                      local_818._3_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [19];
                                                      local_814._0_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [20];
                                                      local_814._1_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [21];
                                                      local_814._2_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [22];
                                                      local_814._3_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [23];
                                                      local_810._0_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [24];
                                                      local_810._1_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [25];
                                                      local_810._2_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [26];
                                                      local_810._3_1_ =
                                                           s_get_chain_domain_num_failed_00061f48
                                                           [27];
                                                      local_80c._0_1_ = (char)ram0x00061f64;
                                                      FUN_0002e584(3,&local_828,0);
                                                      goto LAB_0001c828;
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      uVar10 = FUN_0004e9c4();
                                                      snprintf((char *)&local_828,0x800,
                                                               "chain_domain_num : %d\n",uVar10);
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    DAT_0058dfc8 = FUN_0004e9c4(piVar9);
                                                    piVar9 = (int *)FUN_0004e234(piVar5,
                                                  "chain_asic_num");
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get chain_asic_num failed\n";
LAB_0001caec:
                                                      local_828 = *(undefined4 *)pcVar6;
                                                      local_824 = *(undefined4 *)((int)pcVar6 + 4);
                                                      local_820 = *(undefined4 *)((int)pcVar6 + 8);
                                                      local_81c = *(undefined4 *)((int)pcVar6 + 0xc)
                                                      ;
                                                      local_818 = *(undefined4 *)
                                                                   ((int)pcVar6 + 0x10);
                                                      local_814 = *(undefined4 *)
                                                                   ((int)pcVar6 + 0x14);
                                                      local_810._0_3_ =
                                                           (undefined3)
                                                           *(undefined4 *)((int)pcVar6 + 0x18);
                                                      FUN_0002e584(3,&local_828,0);
                                                      goto LAB_0001c828;
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      uVar10 = FUN_0004e9c4();
                                                      snprintf((char *)&local_828,0x800,
                                                               "chain_asic_num : %d\n",uVar10);
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    DAT_0058dfcc = FUN_0004e9c4(piVar9);
                                                    piVar9 = (int *)FUN_0004e234(piVar5,
                                                  "domain_asic_num");
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      local_828._0_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[0];
                                                      local_828._1_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[1];
                                                      local_828._2_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[2];
                                                      local_828._3_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[3];
                                                      local_824._0_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[4];
                                                      local_824._1_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[5];
                                                      local_824._2_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[6];
                                                      local_824._3_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[7];
                                                      local_820._0_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[8];
                                                      local_820._1_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[9];
                                                      local_820._2_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[10]
                                                      ;
                                                      local_820._3_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[11]
                                                      ;
                                                      local_81c._0_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[12]
                                                      ;
                                                      local_81c._1_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[13]
                                                      ;
                                                      local_81c._2_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[14]
                                                      ;
                                                      local_81c._3_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[15]
                                                      ;
                                                      local_818._0_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[16]
                                                      ;
                                                      local_818._1_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[17]
                                                      ;
                                                      local_818._2_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[18]
                                                      ;
                                                      local_818._3_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[19]
                                                      ;
                                                      local_814._0_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[20]
                                                      ;
                                                      local_814._1_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[21]
                                                      ;
                                                      local_814._2_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[22]
                                                      ;
                                                      local_814._3_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[23]
                                                      ;
                                                      local_810._0_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[24]
                                                      ;
                                                      local_810._1_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[25]
                                                      ;
                                                      local_810._2_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[26]
                                                      ;
                                                      local_810._3_1_ =
                                                           s_get_domain_asic_num_failed_00061fd4[27]
                                                      ;
                                                      FUN_0002e584(3,&local_828,0);
                                                      goto LAB_0001c828;
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      uVar10 = FUN_0004e9c4();
                                                      snprintf((char *)&local_828,0x800,
                                                               "domain_asic_num : %d\n",uVar10);
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    iVar20 = FUN_0004e9c4(piVar9);
                                                    __nmemb_00 = DAT_0058dfcc;
                                                    __nmemb = DAT_0058dfc8;
                                                    sVar7 = DAT_0058dfbc;
                                                    DAT_0058dfd0 = iVar20;
                                                    if (3 < DAT_0007eb9c) {
                                                      snprintf((char *)&local_828,0x800,
                                                                                                                              
                                                  "chain_num %d, chain_domain_num %d, chain_asic_num %d, domain_asic_num %d\n"
                                                  ,DAT_0058dfbc,DAT_0058dfc8,DAT_0058dfcc,iVar20);
                                                  FUN_0002e584(3,&local_828,0);
                                                  }
                                                  DAT_0058dff0 = calloc(sVar7,0x14);
                                                  if (DAT_0058dff0 == (void *)0x0) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "malloc %d chain_t failed\n";
LAB_0001cd40:
                                                      snprintf((char *)&local_828,0x800,pcVar6,sVar7
                                                              );
                                                      FUN_0002e584(3,&local_828,0);
                                                      if (3 < DAT_0007eb9c) {
                                                        local_828._0_1_ =
                                                             s_alloc_topol_failed_000620a8[0];
                                                        local_828._1_1_ =
                                                             s_alloc_topol_failed_000620a8[1];
                                                        local_828._2_1_ =
                                                             s_alloc_topol_failed_000620a8[2];
                                                        local_828._3_1_ =
                                                             s_alloc_topol_failed_000620a8[3];
                                                        local_824._0_1_ =
                                                             s_alloc_topol_failed_000620a8[4];
                                                        local_824._1_1_ =
                                                             s_alloc_topol_failed_000620a8[5];
                                                        local_824._2_1_ =
                                                             s_alloc_topol_failed_000620a8[6];
                                                        local_824._3_1_ =
                                                             s_alloc_topol_failed_000620a8[7];
                                                        local_820._0_1_ =
                                                             s_alloc_topol_failed_000620a8[8];
                                                        local_820._1_1_ =
                                                             s_alloc_topol_failed_000620a8[9];
                                                        local_820._2_1_ =
                                                             s_alloc_topol_failed_000620a8[10];
                                                        local_820._3_1_ =
                                                             s_alloc_topol_failed_000620a8[11];
                                                        local_81c._0_1_ =
                                                             s_alloc_topol_failed_000620a8[12];
                                                        local_81c._1_1_ =
                                                             s_alloc_topol_failed_000620a8[13];
                                                        local_81c._2_1_ =
                                                             s_alloc_topol_failed_000620a8[14];
                                                        local_81c._3_1_ =
                                                             s_alloc_topol_failed_000620a8[15];
                                                        local_818._0_1_ =
                                                             s_alloc_topol_failed_000620a8[16];
                                                        local_818._1_1_ =
                                                             s_alloc_topol_failed_000620a8[17];
                                                        local_818._2_1_ =
                                                             s_alloc_topol_failed_000620a8[18];
                                                        local_818._3_1_ =
                                                             s_alloc_topol_failed_000620a8[19];
                                                        FUN_0002e584(3,&local_828,0);
                                                        goto LAB_0001c828;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    for (iVar20 = 0; pvVar22 = DAT_0058dff0,
                                                        iVar20 < (int)sVar7; iVar20 = iVar20 + 1) {
                                                      iVar16 = iVar20 * 0x14;
                                                      *(int *)((int)DAT_0058dff0 + iVar16) = iVar20;
                                                      pvVar13 = calloc(__nmemb,8);
                                                      *(void **)((int)pvVar22 + iVar16 + 0xc) =
                                                           pvVar13;
                                                      if (pvVar13 == (void *)0x0) {
                                                        if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                        pcVar6 = "malloc %d domain_t failed\n";
                                                        sVar7 = __nmemb;
                                                        goto LAB_0001cd40;
                                                      }
                                                      pvVar13 = calloc(__nmemb_00,0x1c);
                                                      *(void **)((int)pvVar22 + iVar16 + 8) =
                                                           pvVar13;
                                                      if (pvVar13 == (void *)0x0) {
                                                        if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                        pcVar6 = "malloc %d asic_t failed\n";
                                                        sVar7 = __nmemb_00;
                                                        goto LAB_0001cd40;
                                                      }
                                                      iVar14 = 0;
                                                      iVar19 = 0;
                                                      while( true ) {
                                                        iVar14 = iVar14 + iVar20 * 0x1c;
                                                        if ((int)__nmemb <= iVar19) break;
                                                        iVar17 = *(int *)((int)pvVar22 +
                                                                         iVar16 + 0xc);
                                                        *(int *)(iVar17 + iVar19 * 8) = iVar19;
                                                        iVar1 = iVar19 * 8;
                                                        iVar19 = iVar19 + 1;
                                                        *(int *)(iVar17 + iVar1 + 4) =
                                                             *(int *)((int)pvVar22 + iVar16 + 8) +
                                                             iVar14 + iVar20 * -0x1c;
                                                      }
                                                    }
                                                    piVar9 = (int *)FUN_0004e234(piVar5,&
                                                  DAT_000609f8);
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 0)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      local_828._0_1_ = s_get_pic_failed_000620bc[0]
                                                      ;
                                                      local_828._1_1_ = s_get_pic_failed_000620bc[1]
                                                      ;
                                                      local_828._2_1_ = s_get_pic_failed_000620bc[2]
                                                      ;
                                                      local_828._3_1_ = s_get_pic_failed_000620bc[3]
                                                      ;
                                                      local_824._0_1_ = s_get_pic_failed_000620bc[4]
                                                      ;
                                                      local_824._1_1_ = s_get_pic_failed_000620bc[5]
                                                      ;
                                                      local_824._2_1_ = s_get_pic_failed_000620bc[6]
                                                      ;
                                                      local_824._3_1_ = s_get_pic_failed_000620bc[7]
                                                      ;
                                                      local_820._0_1_ = s_get_pic_failed_000620bc[8]
                                                      ;
                                                      local_820._1_1_ = s_get_pic_failed_000620bc[9]
                                                      ;
                                                      local_820._2_1_ =
                                                           s_get_pic_failed_000620bc[10];
                                                      local_820._3_1_ =
                                                           s_get_pic_failed_000620bc[11];
                                                      local_81c._0_1_ =
                                                           s_get_pic_failed_000620bc[12];
                                                      local_81c._1_1_ =
                                                           s_get_pic_failed_000620bc[13];
                                                      local_81c._2_1_ =
                                                           s_get_pic_failed_000620bc[14];
                                                      local_81c._3_1_ =
                                                           s_get_pic_failed_000620bc[15];
                                                      FUN_0002e584(3,&local_828,0);
LAB_0001ce48:
                                                      if (3 < DAT_0007eb9c) {
                                                        local_828._0_1_ =
                                                             s_parse_chain_pic_failed_000621b4[0];
                                                        local_828._1_1_ =
                                                             s_parse_chain_pic_failed_000621b4[1];
                                                        local_828._2_1_ =
                                                             s_parse_chain_pic_failed_000621b4[2];
                                                        local_828._3_1_ =
                                                             s_parse_chain_pic_failed_000621b4[3];
                                                        local_824._0_1_ =
                                                             s_parse_chain_pic_failed_000621b4[4];
                                                        local_824._1_1_ =
                                                             s_parse_chain_pic_failed_000621b4[5];
                                                        local_824._2_1_ =
                                                             s_parse_chain_pic_failed_000621b4[6];
                                                        local_824._3_1_ =
                                                             s_parse_chain_pic_failed_000621b4[7];
                                                        local_820._0_1_ =
                                                             s_parse_chain_pic_failed_000621b4[8];
                                                        local_820._1_1_ =
                                                             s_parse_chain_pic_failed_000621b4[9];
                                                        local_820._2_1_ =
                                                             s_parse_chain_pic_failed_000621b4[10];
                                                        local_820._3_1_ =
                                                             s_parse_chain_pic_failed_000621b4[11];
                                                        local_81c._0_1_ =
                                                             s_parse_chain_pic_failed_000621b4[12];
                                                        local_81c._1_1_ =
                                                             s_parse_chain_pic_failed_000621b4[13];
                                                        local_81c._2_1_ =
                                                             s_parse_chain_pic_failed_000621b4[14];
                                                        local_81c._3_1_ =
                                                             s_parse_chain_pic_failed_000621b4[15];
                                                        local_818._0_1_ =
                                                             s_parse_chain_pic_failed_000621b4[16];
                                                        local_818._1_1_ =
                                                             s_parse_chain_pic_failed_000621b4[17];
                                                        local_818._2_1_ =
                                                             s_parse_chain_pic_failed_000621b4[18];
                                                        local_818._3_1_ =
                                                             s_parse_chain_pic_failed_000621b4[19];
                                                        local_814._0_1_ =
                                                             s_parse_chain_pic_failed_000621b4[20];
                                                        local_814._1_1_ =
                                                             s_parse_chain_pic_failed_000621b4[21];
                                                        local_814._2_1_ =
                                                             s_parse_chain_pic_failed_000621b4[22];
                                                        local_814._3_1_ =
                                                             s_parse_chain_pic_failed_000621b4[23];
                                                        FUN_0002e584(3,&local_828,0);
                                                        goto LAB_0001c828;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      local_828._0_1_ = (char)DAT_000620cc;
                                                      local_828._1_1_ = DAT_000620cc._1_1_;
                                                      local_828._2_1_ = DAT_000620cc._2_1_;
                                                      local_828._3_1_ = DAT_000620cc._3_1_;
                                                      local_824._0_2_ = (short)DAT_000620d0;
                                                      FUN_0002e584(4,&local_828);
                                                    }
                                                    piVar12 = (int *)FUN_0004e234(piVar9,"type");
                                                    if ((piVar12 == (int *)0x0) || (*piVar12 != 2))
                                                    {
                                                      if (3 < DAT_0007eb9c) {
                                                        local_828._0_1_ =
                                                             s_get_type_failed_00061a28[0];
                                                        local_828._1_1_ =
                                                             s_get_type_failed_00061a28[1];
                                                        local_828._2_1_ =
                                                             s_get_type_failed_00061a28[2];
                                                        local_828._3_1_ =
                                                             s_get_type_failed_00061a28[3];
                                                        local_824._0_1_ =
                                                             s_get_type_failed_00061a28[4];
                                                        local_824._1_1_ =
                                                             s_get_type_failed_00061a28[5];
                                                        local_824._2_1_ =
                                                             s_get_type_failed_00061a28[6];
                                                        local_824._3_1_ =
                                                             s_get_type_failed_00061a28[7];
                                                        local_820._0_1_ =
                                                             s_get_type_failed_00061a28[8];
                                                        local_820._1_1_ =
                                                             s_get_type_failed_00061a28[9];
                                                        local_820._2_1_ =
                                                             s_get_type_failed_00061a28[10];
                                                        local_820._3_1_ =
                                                             s_get_type_failed_00061a28[11];
                                                        local_81c._0_1_ =
                                                             s_get_type_failed_00061a28[12];
                                                        local_81c._1_1_ =
                                                             s_get_type_failed_00061a28[13];
                                                        local_81c._2_1_ =
                                                             s_get_type_failed_00061a28[14];
                                                        local_81c._3_1_ =
                                                             s_get_type_failed_00061a28[15];
                                                        local_818._0_1_ = (char)ram0x00061a38;
                                                        FUN_0002e584(3,&local_828,0);
                                                        goto LAB_0001ce48;
                                                      }
                                                    }
                                                    else {
                                                      if (4 < DAT_0007eb9c) {
                                                        uVar10 = FUN_0004e768();
                                                        snprintf((char *)&local_828,0x800,
                                                                 "type: %s\n",uVar10);
                                                        FUN_0002e584(4,&local_828,0);
                                                      }
                                                      piVar12 = (int *)FUN_0004e234(piVar9,
                                                  "i2c_addr");
                                                  if ((piVar12 == (int *)0x0) || (*piVar12 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      local_828._0_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[0];
                                                      local_828._1_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[1];
                                                      local_828._2_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[2];
                                                      local_828._3_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[3];
                                                      local_824._0_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[4];
                                                      local_824._1_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[5];
                                                      local_824._2_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[6];
                                                      local_824._3_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[7];
                                                      local_820._0_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[8];
                                                      local_820._1_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[9];
                                                      local_820._2_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[10];
                                                      local_820._3_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[11];
                                                      local_81c._0_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[12];
                                                      local_81c._1_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[13];
                                                      local_81c._2_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[14];
                                                      local_81c._3_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[15];
                                                      local_818._0_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[16];
                                                      local_818._1_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[17];
                                                      local_818._2_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[18];
                                                      local_818._3_1_ =
                                                           s_get_i2c_addr_failed_00061ab8[19];
                                                      local_814._0_1_ = (char)ram0x00061acc;
                                                      FUN_0002e584(3,&local_828,0);
                                                      goto LAB_0001ce48;
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      uVar10 = FUN_0004e9c4();
                                                      snprintf((char *)&local_828,0x800,
                                                               "i2c_addr: %d\n",uVar10);
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    piVar9 = (int *)FUN_0004e234(piVar9,"sensor");
                                                    pcVar6 = DAT_0058dfb8;
                                                    if ((piVar9 == (int *)0x0) || (*piVar9 != 1)) {
                                                      iVar20 = strcmp(DAT_0058dfb8,"BHB28601");
                                                      if ((iVar20 == 0) ||
                                                         (iVar20 = strcmp(pcVar6,"BHB28501"),
                                                         iVar20 == 0)) goto LAB_0001d42c;
                                                      if (3 < DAT_0007eb9c) {
                                                        local_828._0_1_ =
                                                             s_get_pic_sensor_failed_000620d4[0];
                                                        local_828._1_1_ =
                                                             s_get_pic_sensor_failed_000620d4[1];
                                                        local_828._2_1_ =
                                                             s_get_pic_sensor_failed_000620d4[2];
                                                        local_828._3_1_ =
                                                             s_get_pic_sensor_failed_000620d4[3];
                                                        local_824._0_1_ =
                                                             s_get_pic_sensor_failed_000620d4[4];
                                                        local_824._1_1_ =
                                                             s_get_pic_sensor_failed_000620d4[5];
                                                        local_824._2_1_ =
                                                             s_get_pic_sensor_failed_000620d4[6];
                                                        local_824._3_1_ =
                                                             s_get_pic_sensor_failed_000620d4[7];
                                                        local_820._0_1_ =
                                                             s_get_pic_sensor_failed_000620d4[8];
                                                        local_820._1_1_ =
                                                             s_get_pic_sensor_failed_000620d4[9];
                                                        local_820._2_1_ =
                                                             s_get_pic_sensor_failed_000620d4[10];
                                                        local_820._3_1_ =
                                                             s_get_pic_sensor_failed_000620d4[11];
                                                        local_81c._0_1_ =
                                                             s_get_pic_sensor_failed_000620d4[12];
                                                        local_81c._1_1_ =
                                                             s_get_pic_sensor_failed_000620d4[13];
                                                        local_81c._2_1_ =
                                                             s_get_pic_sensor_failed_000620d4[14];
                                                        local_81c._3_1_ =
                                                             s_get_pic_sensor_failed_000620d4[15];
                                                        local_818._0_1_ =
                                                             s_get_pic_sensor_failed_000620d4[16];
                                                        local_818._1_1_ =
                                                             s_get_pic_sensor_failed_000620d4[17];
                                                        local_818._2_1_ =
                                                             s_get_pic_sensor_failed_000620d4[18];
                                                        local_818._3_1_ =
                                                             s_get_pic_sensor_failed_000620d4[19];
                                                        local_814._0_3_ = (undefined3)ram0x000620e8;
                                                        FUN_0002e584(3,&local_828,0);
                                                        goto LAB_0001ce48;
                                                      }
                                                    }
                                                    else {
                                                      if (4 < DAT_0007eb9c) {
                                                        local_828._0_1_ = s_pic_sensor__000620ec[0];
                                                        local_828._1_1_ = s_pic_sensor__000620ec[1];
                                                        local_828._2_1_ = s_pic_sensor__000620ec[2];
                                                        local_828._3_1_ = s_pic_sensor__000620ec[3];
                                                        local_824._0_1_ = s_pic_sensor__000620ec[4];
                                                        local_824._1_1_ = s_pic_sensor__000620ec[5];
                                                        local_824._2_1_ = s_pic_sensor__000620ec[6];
                                                        local_824._3_1_ = s_pic_sensor__000620ec[7];
                                                        local_820._0_1_ = s_pic_sensor__000620ec[8];
                                                        local_820._1_1_ = s_pic_sensor__000620ec[9];
                                                        local_820._2_1_ = s_pic_sensor__000620ec[10]
                                                        ;
                                                        local_820._3_1_ = s_pic_sensor__000620ec[11]
                                                        ;
                                                        local_81c._0_1_ = (char)ram0x000620f8;
                                                        FUN_0002e584(4,&local_828,0);
                                                      }
                                                      DAT_0058dff8 = FUN_0004e5a0(piVar9);
                                                      sVar7 = FUN_0004e5a0(piVar9);
                                                      DAT_0058dffc = calloc(sVar7,0xc);
                                                      if (DAT_0058dffc == (void *)0x0) {
                                                        if (3 < DAT_0007eb9c) {
                                                          uVar10 = FUN_0004e5a0(piVar9);
                                                          snprintf((char *)&local_828,0x800,
                                                                   "malloc %d sensor_t failed\n",
                                                                   uVar10);
                                                          FUN_0002e584(3,&local_828,0);
                                                          goto LAB_0001ce48;
                                                        }
                                                      }
                                                      else {
                                                        for (uVar21 = 0;
                                                            uVar11 = FUN_0004e5a0(piVar9),
                                                            uVar21 < uVar11; uVar21 = uVar21 + 1) {
                                                          piVar12 = (int *)FUN_0004e5bc(piVar9,
                                                  uVar21);
                                                  if ((piVar12 == (int *)0x0) || (*piVar12 != 0)) {
                                                    if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                    pcVar6 = "get array %d failed\n";
LAB_0001d33c:
                                                    snprintf((char *)&local_828,0x800,pcVar6,uVar21)
                                                    ;
                                                    FUN_0002e584(3,&local_828,0);
                                                    goto LAB_0001ce48;
                                                  }
                                                  piVar15 = (int *)FUN_0004e234(piVar12,"index");
                                                  if ((piVar15 == (int *)0x0) || (*piVar15 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d index failed\n";
                                                      goto LAB_0001d33c;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e9c4();
                                                    snprintf((char *)&local_828,0x800,"index: %d\n",
                                                             uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  pvVar22 = DAT_0058dffc;
                                                  iVar20 = FUN_0004e9c4(piVar15);
                                                  iVar20 = iVar20 * 0xc;
                                                  uVar10 = FUN_0004e9c4(piVar15);
                                                  *(undefined4 *)((int)pvVar22 + iVar20) = uVar10;
                                                  piVar15 = (int *)FUN_0004e234(piVar12,"type");
                                                  if ((piVar15 == (int *)0x0) || (*piVar15 != 2)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d type failed\n";
                                                      goto LAB_0001d33c;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e768();
                                                    snprintf((char *)&local_828,0x800,"type: %s\n",
                                                             uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  piVar15 = (int *)FUN_0004e234(piVar12,&
                                                  DAT_00062164);
                                                  if ((piVar15 == (int *)0x0) || (*piVar15 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d bind_asic failed\n";
                                                      goto LAB_0001d33c;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e9c4();
                                                    snprintf((char *)&local_828,0x800,"iic: %d\n",
                                                             uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  uVar10 = FUN_0004e9c4(piVar15);
                                                  *(undefined4 *)((int)pvVar22 + iVar20 + 4) =
                                                       uVar10;
                                                  piVar12 = (int *)FUN_0004e234(piVar12,"x");
                                                  if ((piVar12 == (int *)0x0) || (*piVar12 != 2)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d x failed\n";
                                                      goto LAB_0001d33c;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    FUN_0004e768();
                                                    snprintf((char *)&local_828,0x800,"x: %s\n");
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  if (DAT_0058e000 == 0) {
                                                    pcVar6 = (char *)FUN_0004e768(piVar12);
                                                    iVar16 = strncasecmp(pcVar6,"right",5);
                                                    if (iVar16 == 0) {
                                                      *(undefined *)((int)pvVar22 + iVar20 + 8) = 1;
                                                    }
                                                    else {
                                                      *(undefined *)((int)pvVar22 + iVar20 + 8) = 0;
                                                    }
                                                  }
                                                  }
LAB_0001d42c:
                                                  piVar9 = (int *)FUN_0004e234(piVar5,"eeprom");
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 0)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      local_828._0_1_ =
                                                           s_get_eeprom_failed_000621d4[0];
                                                      local_828._1_1_ =
                                                           s_get_eeprom_failed_000621d4[1];
                                                      local_828._2_1_ =
                                                           s_get_eeprom_failed_000621d4[2];
                                                      local_828._3_1_ =
                                                           s_get_eeprom_failed_000621d4[3];
                                                      local_824._0_1_ =
                                                           s_get_eeprom_failed_000621d4[4];
                                                      local_824._1_1_ =
                                                           s_get_eeprom_failed_000621d4[5];
                                                      local_824._2_1_ =
                                                           s_get_eeprom_failed_000621d4[6];
                                                      local_824._3_1_ =
                                                           s_get_eeprom_failed_000621d4[7];
                                                      local_820._0_1_ =
                                                           s_get_eeprom_failed_000621d4[8];
                                                      local_820._1_1_ =
                                                           s_get_eeprom_failed_000621d4[9];
                                                      local_820._2_1_ =
                                                           s_get_eeprom_failed_000621d4[10];
                                                      local_820._3_1_ =
                                                           s_get_eeprom_failed_000621d4[11];
                                                      local_81c._0_1_ =
                                                           s_get_eeprom_failed_000621d4[12];
                                                      local_81c._1_1_ =
                                                           s_get_eeprom_failed_000621d4[13];
                                                      local_81c._2_1_ =
                                                           s_get_eeprom_failed_000621d4[14];
                                                      local_81c._3_1_ =
                                                           s_get_eeprom_failed_000621d4[15];
                                                      local_818._0_3_ = (undefined3)ram0x000621e4;
                                                      FUN_0002e584(3,&local_828,0);
LAB_0001d498:
                                                      if (3 < DAT_0007eb9c) {
                                                        pcVar6 = "parse chain eeprom failed\n";
                                                        goto LAB_0001caec;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    if (4 < DAT_0007eb9c) {
                                                      local_828._0_1_ = s_eeprom__000621e8[0];
                                                      local_828._1_1_ = s_eeprom__000621e8[1];
                                                      local_828._2_1_ = s_eeprom__000621e8[2];
                                                      local_828._3_1_ = s_eeprom__000621e8[3];
                                                      local_824._0_1_ = s_eeprom__000621e8[4];
                                                      local_824._1_1_ = s_eeprom__000621e8[5];
                                                      local_824._2_1_ = s_eeprom__000621e8[6];
                                                      local_824._3_1_ = s_eeprom__000621e8[7];
                                                      local_820._0_1_ = (char)ram0x000621f0;
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    piVar12 = (int *)FUN_0004e234(piVar9,"type");
                                                    if ((piVar12 == (int *)0x0) || (*piVar12 != 2))
                                                    {
                                                      if (3 < DAT_0007eb9c) {
                                                        local_828._0_1_ =
                                                             s_get_type_failed_00061a28[0];
                                                        local_828._1_1_ =
                                                             s_get_type_failed_00061a28[1];
                                                        local_828._2_1_ =
                                                             s_get_type_failed_00061a28[2];
                                                        local_828._3_1_ =
                                                             s_get_type_failed_00061a28[3];
                                                        local_824._0_1_ =
                                                             s_get_type_failed_00061a28[4];
                                                        local_824._1_1_ =
                                                             s_get_type_failed_00061a28[5];
                                                        local_824._2_1_ =
                                                             s_get_type_failed_00061a28[6];
                                                        local_824._3_1_ =
                                                             s_get_type_failed_00061a28[7];
                                                        local_820._0_1_ =
                                                             s_get_type_failed_00061a28[8];
                                                        local_820._1_1_ =
                                                             s_get_type_failed_00061a28[9];
                                                        local_820._2_1_ =
                                                             s_get_type_failed_00061a28[10];
                                                        local_820._3_1_ =
                                                             s_get_type_failed_00061a28[11];
                                                        local_81c._0_1_ =
                                                             s_get_type_failed_00061a28[12];
                                                        local_81c._1_1_ =
                                                             s_get_type_failed_00061a28[13];
                                                        local_81c._2_1_ =
                                                             s_get_type_failed_00061a28[14];
                                                        local_81c._3_1_ =
                                                             s_get_type_failed_00061a28[15];
                                                        local_818._0_1_ = (char)ram0x00061a38;
                                                        FUN_0002e584(3,&local_828,0);
                                                        goto LAB_0001d498;
                                                      }
                                                    }
                                                    else {
                                                      if (4 < DAT_0007eb9c) {
                                                        uVar10 = FUN_0004e768();
                                                        snprintf((char *)&local_828,0x800,
                                                                 "type: %s\n",uVar10);
                                                        FUN_0002e584(4,&local_828,0);
                                                      }
                                                      piVar9 = (int *)FUN_0004e234(piVar9,"i2c_addr"
                                                                                  );
                                                      if ((piVar9 == (int *)0x0) || (*piVar9 != 3))
                                                      {
                                                        if (3 < DAT_0007eb9c) {
                                                          local_828._0_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[0];
                                                          local_828._1_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[1];
                                                          local_828._2_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[2];
                                                          local_828._3_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[3];
                                                          local_824._0_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[4];
                                                          local_824._1_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[5];
                                                          local_824._2_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[6];
                                                          local_824._3_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[7];
                                                          local_820._0_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[8];
                                                          local_820._1_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[9];
                                                          local_820._2_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[10];
                                                          local_820._3_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[11];
                                                          local_81c._0_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[12];
                                                          local_81c._1_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[13];
                                                          local_81c._2_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[14];
                                                          local_81c._3_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[15];
                                                          local_818._0_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[16];
                                                          local_818._1_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[17];
                                                          local_818._2_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[18];
                                                          local_818._3_1_ =
                                                               s_get_i2c_addr_failed_00061ab8[19];
                                                          local_814._0_1_ = (char)ram0x00061acc;
                                                          FUN_0002e584(3,&local_828,0);
                                                          goto LAB_0001d498;
                                                        }
                                                      }
                                                      else {
                                                        if (4 < DAT_0007eb9c) {
                                                          uVar10 = FUN_0004e9c4();
                                                          snprintf((char *)&local_828,0x800,
                                                                   "i2c_addr: %d\n",uVar10);
                                                          FUN_0002e584(4,&local_828,0);
                                                        }
                                                        piVar9 = (int *)FUN_0004e234(piVar5,"sensor"
                                                                                    );
                                                        if ((piVar9 == (int *)0x0) || (*piVar9 != 1)
                                                           ) {
                                                          if (3 < DAT_0007eb9c) {
                                                            local_828._0_1_ =
                                                                 s_get_sensor_failed_00062210[0];
                                                            local_828._1_1_ =
                                                                 s_get_sensor_failed_00062210[1];
                                                            local_828._2_1_ =
                                                                 s_get_sensor_failed_00062210[2];
                                                            local_828._3_1_ =
                                                                 s_get_sensor_failed_00062210[3];
                                                            local_824._0_1_ =
                                                                 s_get_sensor_failed_00062210[4];
                                                            local_824._1_1_ =
                                                                 s_get_sensor_failed_00062210[5];
                                                            local_824._2_1_ =
                                                                 s_get_sensor_failed_00062210[6];
                                                            local_824._3_1_ =
                                                                 s_get_sensor_failed_00062210[7];
                                                            local_820._0_1_ =
                                                                 s_get_sensor_failed_00062210[8];
                                                            local_820._1_1_ =
                                                                 s_get_sensor_failed_00062210[9];
                                                            local_820._2_1_ =
                                                                 s_get_sensor_failed_00062210[10];
                                                            local_820._3_1_ =
                                                                 s_get_sensor_failed_00062210[11];
                                                            local_81c._0_1_ =
                                                                 s_get_sensor_failed_00062210[12];
                                                            local_81c._1_1_ =
                                                                 s_get_sensor_failed_00062210[13];
                                                            local_81c._2_1_ =
                                                                 s_get_sensor_failed_00062210[14];
                                                            local_81c._3_1_ =
                                                                 s_get_sensor_failed_00062210[15];
                                                            local_818._0_3_ =
                                                                 (undefined3)ram0x00062220;
                                                            FUN_0002e584(3,&local_828,0);
LAB_0001d68c:
                                                            if (3 < DAT_0007eb9c) {
                                                              pcVar6 = "parse chain sensor failed\n"
                                                              ;
                                                              goto LAB_0001caec;
                                                            }
                                                          }
                                                        }
                                                        else {
                                                          if (4 < DAT_0007eb9c) {
                                                            local_828._0_1_ =
                                                                 s_pic_sensor__000620ec[4];
                                                            local_828._1_1_ =
                                                                 s_pic_sensor__000620ec[5];
                                                            local_828._2_1_ =
                                                                 s_pic_sensor__000620ec[6];
                                                            local_828._3_1_ =
                                                                 s_pic_sensor__000620ec[7];
                                                            local_824._0_1_ =
                                                                 s_pic_sensor__000620ec[8];
                                                            local_824._1_1_ =
                                                                 s_pic_sensor__000620ec[9];
                                                            local_824._2_1_ =
                                                                 s_pic_sensor__000620ec[10];
                                                            local_824._3_1_ =
                                                                 s_pic_sensor__000620ec[11];
                                                            local_820._0_1_ = (char)ram0x000620f8;
                                                            FUN_0002e584(4,&local_828,0);
                                                          }
                                                          DAT_0058dfd4 = FUN_0004e5a0(piVar9);
                                                          sVar7 = FUN_0004e5a0(piVar9);
                                                          DAT_0058dff4 = calloc(sVar7,0xc);
                                                          if (DAT_0058dff4 == (void *)0x0) {
                                                            if (3 < DAT_0007eb9c) {
                                                              uVar10 = FUN_0004e5a0(piVar9);
                                                              snprintf((char *)&local_828,0x800,
                                                                       "malloc %d sensor_t failed\n"
                                                                       ,uVar10);
                                                              FUN_0002e584(3,&local_828,0);
                                                              goto LAB_0001d68c;
                                                            }
                                                          }
                                                          else {
                                                            for (uVar21 = 0;
                                                                uVar11 = FUN_0004e5a0(piVar9),
                                                                uVar21 < uVar11; uVar21 = uVar21 + 1
                                                                ) {
                                                              piVar12 = (int *)FUN_0004e5bc(piVar9,
                                                  uVar21);
                                                  if ((piVar12 == (int *)0x0) || (*piVar12 != 0)) {
                                                    if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                    pcVar6 = "get array %d failed\n";
LAB_0001d8a8:
                                                    snprintf((char *)&local_828,0x800,pcVar6,uVar21)
                                                    ;
                                                    FUN_0002e584(3,&local_828,0);
                                                    goto LAB_0001d68c;
                                                  }
                                                  piVar15 = (int *)FUN_0004e234(piVar12,"index");
                                                  if ((piVar15 == (int *)0x0) || (*piVar15 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d index failed\n";
                                                      goto LAB_0001d8a8;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e9c4();
                                                    snprintf((char *)&local_828,0x800,"index: %d\n",
                                                             uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  pvVar22 = DAT_0058dff4;
                                                  iVar20 = FUN_0004e9c4(piVar15);
                                                  piVar15 = (int *)FUN_0004e234(piVar12,"type");
                                                  if ((piVar15 == (int *)0x0) || (*piVar15 != 2)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d type failed\n";
                                                      goto LAB_0001d8a8;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e768();
                                                    snprintf((char *)&local_828,0x800,"type: %s\n",
                                                             uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  piVar12 = (int *)FUN_0004e234(piVar12,"bind_asic")
                                                  ;
                                                  if ((piVar12 == (int *)0x0) || (*piVar12 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d bind_asic failed\n";
                                                      goto LAB_0001d8a8;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e9c4();
                                                    snprintf((char *)&local_828,0x800,
                                                             "bind_asic: %d\n",uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  uVar10 = FUN_0004e9c4(piVar12);
                                                  *(undefined4 *)((int)pvVar22 + iVar20 * 0xc + 4) =
                                                       uVar10;
                                                  }
                                                  piVar5 = (int *)FUN_0004e234(piVar5,"domain");
                                                  if ((piVar5 != (int *)0x0) && (*piVar5 == 1)) {
                                                    if (4 < DAT_0007eb9c) {
                                                      local_828._0_1_ = s_domain__00062278[0];
                                                      local_828._1_1_ = s_domain__00062278[1];
                                                      local_828._2_1_ = s_domain__00062278[2];
                                                      local_828._3_1_ = s_domain__00062278[3];
                                                      local_824._0_1_ = s_domain__00062278[4];
                                                      local_824._1_1_ = s_domain__00062278[5];
                                                      local_824._2_1_ = s_domain__00062278[6];
                                                      local_824._3_1_ = s_domain__00062278[7];
                                                      local_820._0_1_ = (char)ram0x00062280;
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    for (pvVar22 = (void *)0x0;
                                                        pvVar13 = (void *)FUN_0004e5a0(piVar5),
                                                        pvVar22 < pvVar13;
                                                        pvVar22 = (void *)((int)pvVar22 + 1)) {
                                                      piVar9 = (int *)FUN_0004e5bc(piVar5,pvVar22);
                                                      if ((piVar9 == (int *)0x0) || (*piVar9 != 0))
                                                      {
                                                        if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                        pcVar6 = "get array %d failed\n";
LAB_0001dba0:
                                                        snprintf((char *)&local_828,0x800,pcVar6,
                                                                 pvVar22);
                                                        FUN_0002e584(3,&local_828,0);
                                                        goto LAB_0001d9a4;
                                                      }
                                                      piVar12 = (int *)FUN_0004e234(piVar9,"index");
                                                      if ((piVar12 == (int *)0x0) || (*piVar12 != 3)
                                                         ) {
                                                        if (3 < DAT_0007eb9c) {
                                                          pcVar6 = "get array %d index failed\n";
                                                          goto LAB_0001dba0;
                                                        }
                                                        goto LAB_0001b53c;
                                                      }
                                                      if (4 < DAT_0007eb9c) {
                                                        uVar10 = FUN_0004e9c4();
                                                        snprintf((char *)&local_828,0x800,
                                                                 "index: %d\n",uVar10);
                                                        FUN_0002e584(4,&local_828,0);
                                                      }
                                                      piVar9 = (int *)FUN_0004e234(piVar9,&
                                                  DAT_00061c3c);
                                                  if ((piVar9 == (int *)0x0) || (*piVar9 != 1)) {
                                                    if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                    local_828._0_1_ = s_get_asic_failed_00061c44[0];
                                                    local_828._1_1_ = s_get_asic_failed_00061c44[1];
                                                    local_828._2_1_ = s_get_asic_failed_00061c44[2];
                                                    local_828._3_1_ = s_get_asic_failed_00061c44[3];
                                                    local_824._0_1_ = s_get_asic_failed_00061c44[4];
                                                    local_824._1_1_ = s_get_asic_failed_00061c44[5];
                                                    local_824._2_1_ = s_get_asic_failed_00061c44[6];
                                                    local_824._3_1_ = s_get_asic_failed_00061c44[7];
                                                    local_820._0_1_ = s_get_asic_failed_00061c44[8];
                                                    local_820._1_1_ = s_get_asic_failed_00061c44[9];
                                                    local_820._2_1_ = s_get_asic_failed_00061c44[10]
                                                    ;
                                                    local_820._3_1_ = s_get_asic_failed_00061c44[11]
                                                    ;
                                                    local_81c._0_1_ = s_get_asic_failed_00061c44[12]
                                                    ;
                                                    local_81c._1_1_ = s_get_asic_failed_00061c44[13]
                                                    ;
                                                    local_81c._2_1_ = s_get_asic_failed_00061c44[14]
                                                    ;
                                                    local_81c._3_1_ = s_get_asic_failed_00061c44[15]
                                                    ;
                                                    local_818._0_1_ = (char)ram0x00061c54;
                                                    FUN_0002e584(3,&local_828,0);
LAB_0001db44:
                                                    if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                    snprintf((char *)&local_828,0x800,
                                                             "parse arrry %d asic failed\n",pvVar22)
                                                    ;
                                                    FUN_0002e584(3,&local_828,0);
                                                    goto LAB_0001d9a4;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    local_828._0_1_ = (char)DAT_00061c58;
                                                    local_828._1_1_ = DAT_00061c58._1_1_;
                                                    local_828._2_1_ = DAT_00061c58._2_1_;
                                                    local_828._3_1_ = DAT_00061c58._3_1_;
                                                    local_824._0_3_ = (undefined3)DAT_00061c5c;
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  for (uVar21 = 0; uVar11 = FUN_0004e5a0(piVar9),
                                                      uVar21 < uVar11; uVar21 = uVar21 + 1) {
                                                    piVar12 = (int *)FUN_0004e5bc(piVar9,uVar21);
                                                    if ((piVar12 == (int *)0x0) || (*piVar12 != 0))
                                                    {
                                                      if (DAT_0007eb9c < 4) goto LAB_0001b53c;
                                                      pcVar6 = "get array %d failed\n";
LAB_0001de28:
                                                      snprintf((char *)&local_828,0x800,pcVar6,
                                                               uVar21);
                                                      FUN_0002e584(3,&local_828,0);
                                                      goto LAB_0001db44;
                                                    }
                                                    piVar15 = (int *)FUN_0004e234(piVar12,"index");
                                                    if ((piVar15 == (int *)0x0) || (*piVar15 != 3))
                                                    {
                                                      if (3 < DAT_0007eb9c) {
                                                        pcVar6 = "get array %d index failed\n";
                                                        goto LAB_0001de28;
                                                      }
                                                      goto LAB_0001b53c;
                                                    }
                                                    if (4 < DAT_0007eb9c) {
                                                      uVar10 = FUN_0004e9c4();
                                                      snprintf((char *)&local_828,0x800,
                                                               "index: %d\n",uVar10);
                                                      FUN_0002e584(4,&local_828,0);
                                                    }
                                                    iVar20 = FUN_0004e9c4(piVar15);
                                                    iVar16 = *(int *)((int)DAT_0058dff0 + 8);
                                                    *(int *)(iVar16 + iVar20 * 0x1c) = iVar20;
                                                    iVar16 = iVar16 + iVar20 * 0x1c;
                                                    piVar12 = (int *)FUN_0004e234(piVar12,
                                                  "coordinate");
                                                  if ((piVar12 == (int *)0x0) || (*piVar12 != 1)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d coordinate failed\n";
                                                      goto LAB_0001de28;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  piVar15 = (int *)FUN_0004e5bc(piVar12,0);
                                                  if ((piVar15 == (int *)0x0) || (*piVar15 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d coordinate x failed\n";
                                                      goto LAB_0001de28;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e9c4();
                                                    snprintf((char *)&local_828,0x800,"x: %d\n",
                                                             uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  uVar10 = FUN_0004e9c4(piVar15);
                                                  *(undefined4 *)(iVar16 + 4) = uVar10;
                                                  piVar12 = (int *)FUN_0004e5bc(piVar12,1);
                                                  if ((piVar12 == (int *)0x0) || (*piVar12 != 3)) {
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "get array %d coordinate y failed\n";
                                                      goto LAB_0001de28;
                                                    }
                                                    goto LAB_0001b53c;
                                                  }
                                                  if (4 < DAT_0007eb9c) {
                                                    uVar10 = FUN_0004e9c4();
                                                    snprintf((char *)&local_828,0x800,"y: %d\n",
                                                             uVar10);
                                                    FUN_0002e584(4,&local_828,0);
                                                  }
                                                  uVar10 = FUN_0004e9c4(piVar12);
                                                  *(undefined4 *)(iVar16 + 8) = uVar10;
                                                  }
                                                  }
                                                  pvVar22 = *(void **)((int)DAT_0058dff0 + 8);
                                                  for (iVar20 = 1; iVar20 < (int)DAT_0058dfbc;
                                                      iVar20 = iVar20 + 1) {
                                                    pvVar13 = memcpy(*(void **)((int)DAT_0058dff0 +
                                                                               iVar20 * 0x14 + 8),
                                                                     pvVar22,DAT_0058dfcc * 0x1c);
                                                  }
                                                  for (iVar20 = 0; pvVar22 = DAT_0058dff4,
                                                      iVar20 < DAT_0058dfd4; iVar20 = iVar20 + 1) {
                                                    iVar16 = *(int *)((int)DAT_0058dff4 +
                                                                     iVar20 * 0xc + 4);
                                                    iVar14 = iVar16 * 0x1c +
                                                             *(int *)((int)DAT_0058dff0 + 8);
                                                    if (3 < DAT_0007eb9c) {
                                                      snprintf((char *)&local_828,0x800,
                                                               "asic %d, wind %d, y %d\n",iVar16,
                                                               DAT_0058e000,
                                                               *(undefined4 *)(iVar14 + 8));
                                                      pvVar13 = (void *)FUN_0002e584(3,&local_828,0)
                                                      ;
                                                    }
                                                    if (DAT_0058e000 == 1) {
                                                      pvVar13 = (void *)(DAT_0058dfc4 * 0x55555556);
                                                      if (DAT_0058dfc4 / 3 < *(int *)(iVar14 + 8))
                                                      goto LAB_0001e03c;
                                                      uVar18 = 1;
                                                      if (3 < DAT_0007eb9c) {
                                                        local_828._0_1_ = s_air_in_00062350[0];
                                                        local_828._1_1_ = s_air_in_00062350[1];
                                                        local_828._2_1_ = s_air_in_00062350[2];
                                                        local_828._3_1_ = s_air_in_00062350[3];
                                                        local_824._0_1_ = s_air_in_00062350[4];
                                                        local_824._1_1_ = s_air_in_00062350[5];
                                                        local_824._2_1_ = s_air_in_00062350[6];
                                                        local_824._3_1_ = s_air_in_00062350[7];
                                                        pvVar13 = (void *)FUN_0002e584(3,&local_828,
                                                                                       0);
                                                      }
                                                    }
                                                    else if ((DAT_0058e000 == 0) &&
                                                            (pvVar13 = (void *)(DAT_0058dfc4 *
                                                                               -0x55555554),
                                                            (DAT_0058dfc4 * 2) / 3 <=
                                                            *(int *)(iVar14 + 8))) {
                                                      if (DAT_0007eb9c < 4) {
                                                        uVar18 = 1;
                                                      }
                                                      else {
                                                        local_828._0_1_ = s_air_in_00062350[0];
                                                        local_828._1_1_ = s_air_in_00062350[1];
                                                        local_828._2_1_ = s_air_in_00062350[2];
                                                        local_828._3_1_ = s_air_in_00062350[3];
                                                        local_824._0_1_ = s_air_in_00062350[4];
                                                        local_824._1_1_ = s_air_in_00062350[5];
                                                        local_824._2_1_ = s_air_in_00062350[6];
                                                        local_824._3_1_ = s_air_in_00062350[7];
                                                        pvVar13 = (void *)FUN_0002e584(3,&local_828,
                                                                                       0);
                                                        uVar18 = 1;
                                                      }
                                                    }
                                                    else {
LAB_0001e03c:
                                                      if (DAT_0007eb9c < 4) {
                                                        uVar18 = 0;
                                                      }
                                                      else {
                                                        local_828._0_1_ = s_air_out_00062358[0];
                                                        local_828._1_1_ = s_air_out_00062358[1];
                                                        local_828._2_1_ = s_air_out_00062358[2];
                                                        local_828._3_1_ = s_air_out_00062358[3];
                                                        local_824._0_1_ = s_air_out_00062358[4];
                                                        local_824._1_1_ = s_air_out_00062358[5];
                                                        local_824._2_1_ = s_air_out_00062358[6];
                                                        local_824._3_1_ = s_air_out_00062358[7];
                                                        local_820._0_1_ = (char)ram0x00062360;
                                                        pvVar13 = (void *)FUN_0002e584(3,&local_828,
                                                                                       0);
                                                        uVar18 = 0;
                                                      }
                                                    }
                                                    *(undefined *)((int)pvVar22 + iVar20 * 0xc + 8)
                                                         = uVar18;
                                                  }
                                                  iVar20 = FUN_0001b398(pvVar13);
                                                  if ((iVar20 != 0) && (3 < DAT_0007eb9c)) {
                                                    local_828._0_1_ =
                                                         s_init_topol_runtime_failed_00062378[0];
                                                    local_828._1_1_ =
                                                         s_init_topol_runtime_failed_00062378[1];
                                                    local_828._2_1_ =
                                                         s_init_topol_runtime_failed_00062378[2];
                                                    local_828._3_1_ =
                                                         s_init_topol_runtime_failed_00062378[3];
                                                    local_824._0_1_ =
                                                         s_init_topol_runtime_failed_00062378[4];
                                                    local_824._1_1_ =
                                                         s_init_topol_runtime_failed_00062378[5];
                                                    local_824._2_1_ =
                                                         s_init_topol_runtime_failed_00062378[6];
                                                    local_824._3_1_ =
                                                         s_init_topol_runtime_failed_00062378[7];
                                                    local_820._0_1_ =
                                                         s_init_topol_runtime_failed_00062378[8];
                                                    local_820._1_1_ =
                                                         s_init_topol_runtime_failed_00062378[9];
                                                    local_820._2_1_ =
                                                         s_init_topol_runtime_failed_00062378[10];
                                                    local_820._3_1_ =
                                                         s_init_topol_runtime_failed_00062378[11];
                                                    local_81c._0_1_ =
                                                         s_init_topol_runtime_failed_00062378[12];
                                                    local_81c._1_1_ =
                                                         s_init_topol_runtime_failed_00062378[13];
                                                    local_81c._2_1_ =
                                                         s_init_topol_runtime_failed_00062378[14];
                                                    local_81c._3_1_ =
                                                         s_init_topol_runtime_failed_00062378[15];
                                                    local_818._0_1_ =
                                                         s_init_topol_runtime_failed_00062378[16];
                                                    local_818._1_1_ =
                                                         s_init_topol_runtime_failed_00062378[17];
                                                    local_818._2_1_ =
                                                         s_init_topol_runtime_failed_00062378[18];
                                                    local_818._3_1_ =
                                                         s_init_topol_runtime_failed_00062378[19];
                                                    local_814._0_1_ =
                                                         s_init_topol_runtime_failed_00062378[20];
                                                    local_814._1_1_ =
                                                         s_init_topol_runtime_failed_00062378[21];
                                                    local_814._2_1_ =
                                                         s_init_topol_runtime_failed_00062378[22];
                                                    local_814._3_1_ =
                                                         s_init_topol_runtime_failed_00062378[23];
                                                    local_810._0_3_ = (undefined3)ram0x00062390;
                                                    FUN_0002e584(3,&local_828,0);
                                                  }
                                                  goto LAB_0001b540;
                                                  }
                                                  if (3 < DAT_0007eb9c) {
                                                    local_828._0_1_ =
                                                         s_get_domain_failed_00062264[0];
                                                    local_828._1_1_ =
                                                         s_get_domain_failed_00062264[1];
                                                    local_828._2_1_ =
                                                         s_get_domain_failed_00062264[2];
                                                    local_828._3_1_ =
                                                         s_get_domain_failed_00062264[3];
                                                    local_824._0_1_ =
                                                         s_get_domain_failed_00062264[4];
                                                    local_824._1_1_ =
                                                         s_get_domain_failed_00062264[5];
                                                    local_824._2_1_ =
                                                         s_get_domain_failed_00062264[6];
                                                    local_824._3_1_ =
                                                         s_get_domain_failed_00062264[7];
                                                    local_820._0_1_ =
                                                         s_get_domain_failed_00062264[8];
                                                    local_820._1_1_ =
                                                         s_get_domain_failed_00062264[9];
                                                    local_820._2_1_ =
                                                         s_get_domain_failed_00062264[10];
                                                    local_820._3_1_ =
                                                         s_get_domain_failed_00062264[11];
                                                    local_81c._0_1_ =
                                                         s_get_domain_failed_00062264[12];
                                                    local_81c._1_1_ =
                                                         s_get_domain_failed_00062264[13];
                                                    local_81c._2_1_ =
                                                         s_get_domain_failed_00062264[14];
                                                    local_81c._3_1_ =
                                                         s_get_domain_failed_00062264[15];
                                                    local_818._0_3_ = (undefined3)ram0x00062274;
                                                    FUN_0002e584(3,&local_828,0);
LAB_0001d9a4:
                                                    if (3 < DAT_0007eb9c) {
                                                      pcVar6 = "parse chain domain failed\n";
                                                      goto LAB_0001caec;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else {
                            iVar20 = strncmp(pcVar6,"left",4);
                            if (iVar20 == 0) {
                              iVar20 = strncmp(pcVar8,"out",2);
                              if (iVar20 != 0) {
                                iVar20 = strncmp(pcVar8,"in",2);
                                goto joined_r0x0001c174;
                              }
                              goto LAB_0001c3f4;
                            }
LAB_0001c0e4:
                            if (3 < DAT_0007eb9c) {
                              snprintf((char *)&local_828,0x800,
                                       "unkonwn wind position %s, direction %s\n",pcVar6,pcVar8);
                              FUN_0002e584(3,&local_828,0);
                              goto LAB_0001bdac;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0001b53c:
  iVar20 = -1;
LAB_0001b540:
  if (piVar4[1] != -1) {
    piVar5 = piVar4 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar16 + -1;
    if (iVar16 + -1 == 0) {
      FUN_0004eb6c(piVar4);
    }
  }
  return iVar20;
}

