
undefined4 FUN_00032f40(byte *param_1)

{
  byte bVar1;
  void *__dest;
  uint uVar2;
  int iVar3;
  size_t __nmemb;
  undefined4 local_878;
  int local_874;
  byte *local_870;
  uint local_86c;
  byte *local_868;
  uint local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  int local_850;
  int local_84c;
  undefined4 local_848;
  uint local_844;
  uint local_840;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 local_830;
  uint local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  
  if (*param_1 != 0x52) {
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      snprintf((char *)&local_828,0x800,"%s: SEND_JOB_TYPE is wrong : 0x%x\n",DAT_00033454,
               (uint)*param_1);
      FUN_0002e584(7,&local_828,0);
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  iVar3 = *(int *)(param_1 + 4);
  if ((DAT_00482a5d != '\0') &&
     (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
    snprintf((char *)&local_828,0x800,"%s: len = 0x%x\n",DAT_00033454,iVar3);
    FUN_0002e584(7,&local_828,0);
  }
  __nmemb = iVar3 + 8;
  __dest = calloc(__nmemb,1);
  if (__dest == (void *)0x0) {
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      snprintf((char *)&local_828,0x800,"%s: malloc buffer failed.\n",DAT_00033454);
      FUN_0002e584(7,&local_828,0);
      return 0xfffffffe;
    }
    return 0xfffffffe;
  }
  memcpy(__dest,param_1,__nmemb);
  if (DAT_00482a88 == '\0') {
    if (3 < DAT_0007eb9c) {
      local_828._0_1_ = s_only_support_asic_boost_00066b44[0];
      local_828._1_1_ = s_only_support_asic_boost_00066b44[1];
      local_828._2_1_ = s_only_support_asic_boost_00066b44[2];
      local_828._3_1_ = s_only_support_asic_boost_00066b44[3];
      uStack_824._0_1_ = s_only_support_asic_boost_00066b44[4];
      uStack_824._1_1_ = s_only_support_asic_boost_00066b44[5];
      uStack_824._2_1_ = s_only_support_asic_boost_00066b44[6];
      uStack_824._3_1_ = s_only_support_asic_boost_00066b44[7];
      uStack_820._0_1_ = s_only_support_asic_boost_00066b44[8];
      uStack_820._1_1_ = s_only_support_asic_boost_00066b44[9];
      uStack_820._2_1_ = s_only_support_asic_boost_00066b44[10];
      uStack_820._3_1_ = s_only_support_asic_boost_00066b44[11];
      uStack_81c._0_1_ = s_only_support_asic_boost_00066b44[12];
      uStack_81c._1_1_ = s_only_support_asic_boost_00066b44[13];
      uStack_81c._2_1_ = s_only_support_asic_boost_00066b44[14];
      uStack_81c._3_1_ = s_only_support_asic_boost_00066b44[15];
      uStack_818._0_1_ = s_only_support_asic_boost_00066b44[16];
      uStack_818._1_1_ = s_only_support_asic_boost_00066b44[17];
      uStack_818._2_1_ = s_only_support_asic_boost_00066b44[18];
      uStack_818._3_1_ = s_only_support_asic_boost_00066b44[19];
      uStack_814._0_1_ = s_only_support_asic_boost_00066b44[20];
      uStack_814._1_1_ = s_only_support_asic_boost_00066b44[21];
      uStack_814._2_1_ = s_only_support_asic_boost_00066b44[22];
      uStack_814._3_1_ = s_only_support_asic_boost_00066b44[23];
      FUN_0002e584(3,&local_828,0);
    }
    goto LAB_00033354;
  }
  if (*(char *)((int)__dest + 0x50) == '\0') {
    DAT_0007eb58 = 1;
    DAT_00080f98 = 0;
    if (DAT_0007edd8 == 1) goto LAB_00033354;
LAB_000330e4:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"Version num %d\n");
      FUN_0002e584(3,&local_828,0);
    }
    DAT_0007edd8 = DAT_0007eb58;
  }
  else {
    DAT_0007eb58 = *(int *)((int)__dest + 0x54);
    DAT_00080f98 = *(int *)((int)__dest + 0x58);
    if (DAT_0007eb58 != DAT_0007edd8) goto LAB_000330e4;
  }
  if ((DAT_0007edd8 - 4U & 0xfffffffb) == 0) {
    if (DAT_0007eddc != DAT_00080f98) {
      iVar3 = DAT_0007edd8;
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"Mask num 0x%x\n");
        FUN_0002e584(3,&local_828,0);
        iVar3 = DAT_0007eb58;
      }
      DAT_0007eddc = DAT_00080f98;
      FUN_000321b8(DAT_00482a6c,iVar3,0x5a);
    }
    bVar1 = *(byte *)((int)__dest + 9);
    if ((bVar1 & 2) != 0) {
      FUN_00044e1c(*(undefined *)((int)__dest + 10));
      bVar1 = *(byte *)((int)__dest + 9);
    }
    local_86c = (uint)*(ushort *)((int)__dest + 0x3c);
    local_82c = bVar1 & 1;
    local_868 = param_1 + local_86c + 0x60;
    local_830 = DAT_0099eddc;
    local_870 = param_1 + 0x60;
    local_858 = *(undefined4 *)((int)__dest + 0xc);
    local_864 = (uint)*(ushort *)((int)__dest + 0x42);
    local_85c = *(undefined4 *)((int)__dest + 0x38);
    local_840 = (uint)*(ushort *)((int)__dest + 0x40);
    local_844 = (uint)*(ushort *)((int)__dest + 0x3e);
    local_84c = (int)__dest + 0x14;
    local_850 = DAT_00080f98;
    local_854 = *(undefined4 *)((int)__dest + 0x10);
    local_838 = *(undefined4 *)((int)__dest + 0x48);
    uStack_834 = *(undefined4 *)((int)__dest + 0x4c);
    local_860 = *(undefined4 *)((int)__dest + 0x34);
    local_874 = DAT_0007eb58;
    local_848 = 0x20;
    local_878 = 0;
    if (DAT_00482a89 == '\0') {
      uVar2 = FUN_000452b0();
      FUN_000452d0(uVar2 | 0x10000);
      uVar2 = FUN_0004476c();
      FUN_00044794(uVar2 | 0x80);
      DAT_00482a89 = '\x01';
    }
    if (4 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"start to send job, mid_auto_gen = %d",local_878);
      FUN_0002e584(4,&local_828,0);
    }
    FUN_00045334(&local_878);
    free(__dest);
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      snprintf((char *)&local_828,0x800,"--- %s end\n",DAT_00033454);
      FUN_0002e584(7,&local_828,0);
    }
    FUN_000302a0(DAT_00033458);
    FUN_000304d4(1);
    return 0;
  }
LAB_00033354:
  free(__dest);
  return 0;
}

