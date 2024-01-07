
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00033e34(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s1;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined2 uStack_800;
  undefined local_7fe;
  
  FUN_000323dc();
  FUN_000446dc();
  iVar1 = FUN_00013da4(4000,1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (DAT_0007eb9c < 4) {
    iVar1 = FUN_0003204c();
  }
  else {
    local_810._0_1_ = s_Fan_check_passed__00066d88[0];
    local_810._1_1_ = s_Fan_check_passed__00066d88[1];
    local_810._2_1_ = s_Fan_check_passed__00066d88[2];
    local_810._3_1_ = s_Fan_check_passed__00066d88[3];
    uStack_80c._0_1_ = s_Fan_check_passed__00066d88[4];
    uStack_80c._1_1_ = s_Fan_check_passed__00066d88[5];
    uStack_80c._2_1_ = s_Fan_check_passed__00066d88[6];
    uStack_80c._3_1_ = s_Fan_check_passed__00066d88[7];
    uStack_808._0_1_ = s_Fan_check_passed__00066d88[8];
    uStack_808._1_1_ = s_Fan_check_passed__00066d88[9];
    uStack_808._2_1_ = s_Fan_check_passed__00066d88[10];
    uStack_808._3_1_ = s_Fan_check_passed__00066d88[11];
    uStack_804._0_1_ = s_Fan_check_passed__00066d88[12];
    uStack_804._1_1_ = s_Fan_check_passed__00066d88[13];
    uStack_804._2_1_ = s_Fan_check_passed__00066d88[14];
    uStack_804._3_1_ = s_Fan_check_passed__00066d88[15];
    uStack_800 = (undefined2)ram0x00066d98;
    local_7fe = (undefined)((uint)ram0x00066d98 >> 0x10);
    FUN_0002e584(3,&local_810,0);
    iVar1 = FUN_0003204c();
  }
  if (iVar1 != 0) {
    iVar2 = FUN_0001e28c();
    if (iVar2 == 0) {
      return iVar1;
    }
    if (DAT_0007edc8 == 0) {
      return iVar1;
    }
  }
  FUN_00027940();
  FUN_00014fa4();
  if (DAT_0007eb79 == '\0') {
    if (DAT_00482a8c < 1) goto LAB_00033eac;
    iVar1 = FUN_00019698();
  }
  else {
    __s1 = (char *)FUN_0001e0c0();
    iVar1 = strcmp(__s1,"BHB28601");
    if (iVar1 == 0) {
      uVar3 = 0x76c;
    }
    else {
      uVar3 = 0x5dc;
    }
    iVar1 = FUN_00019698(uVar3);
  }
  if (iVar1 != 0) {
    FUN_000356c4(0xc,0);
    FUN_00031d58(9,"get power type version failed!");
    return iVar1;
  }
LAB_00033eac:
  if (3 < DAT_0007eb9c) {
    uVar3 = FUN_0001572c();
    snprintf((char *)&local_810,0x800,"start up min temp by 75a = %d",uVar3);
    FUN_0002e584(3,&local_810,0);
  }
  FUN_000448c8();
  FUN_000449e0();
  FUN_00044a50();
  FUN_000304d4(10);
  FUN_00028138(0x1c200);
  FUN_000304d4(10);
  iVar1 = FUN_000329dc();
  if ((iVar1 == 0) || ((iVar2 = FUN_0001e28c(), iVar2 != 0 && (DAT_0007edc8 != 0)))) {
    FUN_00033950();
    iVar1 = 0;
    DAT_0007f8d4 = 0;
    DAT_0007f8dc = 0;
    DAT_0007f8d8 = 0;
  }
  return iVar1;
}

