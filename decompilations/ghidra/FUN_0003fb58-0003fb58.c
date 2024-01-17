
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003fb58(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined2 uStack_810;
  undefined local_80e;
  
  local_82c = 0;
  memset(&DAT_00504b68,0,0x124);
  FUN_00040314(2,&local_82c);
  if (local_82c == 0) {
    local_828._0_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[0];
    local_828._1_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[1];
    local_828._2_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[2];
    local_828._3_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[3];
    uStack_824._0_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[4];
    uStack_824._1_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[5];
    uStack_824._2_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[6];
    uStack_824._3_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[7];
    uStack_820._0_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[8];
    uStack_820._1_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[9];
    uStack_820._2_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[10];
    uStack_820._3_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[11];
    uStack_81c._0_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[12];
    uStack_81c._1_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[13];
    uStack_81c._2_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[14];
    uStack_81c._3_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[15];
    local_818._0_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[16];
    local_818._1_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[17];
    local_818._2_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[18];
    local_818._3_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[19];
    uStack_814._0_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[20];
    uStack_814._1_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[21];
    uStack_814._2_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[22];
    uStack_814._3_1_ = s_Cannot_Find_Any_Plug_In__00068ddc[23];
    uStack_810 = (undefined2)ram0x00068df4;
    local_80e = (undefined)((uint)ram0x00068df4 >> 0x10);
    FUN_0002e584(0,&local_828,0);
    return;
  }
  if ((int)local_82c < 0) {
    local_82c = local_82c >> 0x18;
    DAT_00504c8c = 1;
    snprintf((char *)&local_828,0x800,"HASH_ON_PLUG T9 = 0x%x\n",local_82c);
    FUN_0002e584(2,&local_828,0);
    if (local_82c == 0) {
      return;
    }
    bVar2 = false;
    iVar3 = 0;
    iVar5 = DAT_00504b68;
    do {
      iVar6 = iVar5 * 0x48;
      if ((local_82c & 1) != 0) {
        *(int *)(&DAT_00504b6c + iVar6) = iVar3;
        if (iVar3 == 1) {
          *(undefined4 *)(&DAT_00504b74 + iVar6) = 2;
          *(undefined4 *)(&DAT_00504b78 + iVar6) = 10;
          *(undefined4 *)(&DAT_00504b7c + iVar6) = 0xb;
          *(undefined4 *)(&DAT_00504b70 + iVar6) = 3;
        }
        else if (iVar3 == 0) {
          *(undefined4 *)(&DAT_00504b74 + iVar6) = 1;
          *(undefined4 *)(&DAT_00504b78 + iVar6) = 8;
          *(undefined4 *)(&DAT_00504b7c + iVar6) = 9;
          *(undefined4 *)(&DAT_00504b70 + iVar6) = 3;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(&DAT_00504b74 + iVar6) = 3;
          *(undefined4 *)(&DAT_00504b78 + iVar6) = 0xc;
          *(undefined4 *)(&DAT_00504b7c + iVar6) = 0xd;
          *(undefined4 *)(&DAT_00504b70 + iVar6) = 3;
        }
        iVar5 = iVar5 + 1;
        bVar2 = true;
      }
      local_82c = local_82c >> 1;
      iVar3 = iVar3 + 1;
    } while (local_82c != 0);
  }
  else {
    local_82c = local_82c & 0xffff;
    DAT_00504c8c = 0;
    snprintf((char *)&local_828,0x800,"HASH_ON_PLUG V9 = 0x%x\n",local_82c);
    FUN_0002e584(2,&local_828,0);
    if (local_82c == 0) {
      return;
    }
    bVar2 = false;
    iVar6 = 0;
    iVar3 = DAT_00504b68;
    do {
      iVar1 = iVar3 * 0x48;
      iVar5 = iVar3;
      if ((local_82c & 1) != 0) {
        iVar4 = *(int *)(&DAT_00504b70 + iVar1);
        bVar2 = true;
        iVar5 = iVar3 + 1;
        *(int *)(&DAT_00504b6c + iVar1) = iVar6;
        *(int *)(&DAT_00504b70 + iVar1) = iVar4 + 1;
        *(int *)(&DAT_00504b74 + (iVar4 + iVar3 * 0x12) * 4) = iVar6;
      }
      local_82c = local_82c >> 1;
      iVar6 = iVar6 + 1;
      iVar3 = iVar5;
    } while (local_82c != 0);
  }
  if (bVar2) {
    DAT_00504b68 = iVar5;
  }
  return;
}

