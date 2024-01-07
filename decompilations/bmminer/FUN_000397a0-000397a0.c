
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000397a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined local_800;
  
  if (4 < DAT_0007eb9c) {
    iVar2 = *(int *)(DAT_004fcb3c + (param_1 + 2) * 4);
    if (iVar2 == 0) {
      pcVar3 = "BLOCK";
    }
    else if (iVar2 == 1) {
      pcVar3 = "READY";
    }
    else {
      pcVar3 = "UNKNOWN";
      if (iVar2 == 2) {
        pcVar3 = "DONE";
      }
    }
    snprintf((char *)&local_810,0x800,"[DEBUG] chain = %d, status = %s\n",param_1,pcVar3);
    FUN_0002e584(4,&local_810,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      local_810._0_1_ = s_Handle_is_NULL__00067bc8[0];
      local_810._1_1_ = s_Handle_is_NULL__00067bc8[1];
      local_810._2_1_ = s_Handle_is_NULL__00067bc8[2];
      local_810._3_1_ = s_Handle_is_NULL__00067bc8[3];
      uStack_80c._0_1_ = s_Handle_is_NULL__00067bc8[4];
      uStack_80c._1_1_ = s_Handle_is_NULL__00067bc8[5];
      uStack_80c._2_1_ = s_Handle_is_NULL__00067bc8[6];
      uStack_80c._3_1_ = s_Handle_is_NULL__00067bc8[7];
      uStack_808._0_1_ = s_Handle_is_NULL__00067bc8[8];
      uStack_808._1_1_ = s_Handle_is_NULL__00067bc8[9];
      uStack_808._2_1_ = s_Handle_is_NULL__00067bc8[10];
      uStack_808._3_1_ = s_Handle_is_NULL__00067bc8[11];
      uStack_804._0_1_ = s_Handle_is_NULL__00067bc8[12];
      uStack_804._1_1_ = s_Handle_is_NULL__00067bc8[13];
      uStack_804._2_1_ = s_Handle_is_NULL__00067bc8[14];
      uStack_804._3_1_ = s_Handle_is_NULL__00067bc8[15];
      local_800 = (undefined)ram0x00067bd8;
      FUN_0002e584(3,&local_810,0);
      return 2;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_004fcb3c + (param_1 + 2) * 4);
  }
  return uVar1;
}

