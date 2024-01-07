
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0003fa64(int param_1)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined uStack_81f;
  undefined auStack_81e [14];
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  
  __fd = socket(2,1,0);
  if (__fd < 0) {
    local_810._0_1_ = s_error_sock_00068dbc[0];
    local_810._1_1_ = s_error_sock_00068dbc[1];
    local_810._2_1_ = s_error_sock_00068dbc[2];
    local_810._3_1_ = s_error_sock_00068dbc[3];
    uStack_80c._0_1_ = s_error_sock_00068dbc[4];
    uStack_80c._1_1_ = s_error_sock_00068dbc[5];
    uStack_80c._2_1_ = s_error_sock_00068dbc[6];
    uStack_80c._3_1_ = s_error_sock_00068dbc[7];
    FUN_0002e584(0,&local_810);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ioctl(__fd,0x8927);
    if (iVar1 < 0) {
      local_810._0_1_ = s_error_ioctl_00068dd0[0];
      local_810._1_1_ = s_error_ioctl_00068dd0[1];
      local_810._2_1_ = s_error_ioctl_00068dd0[2];
      local_810._3_1_ = s_error_ioctl_00068dd0[3];
      uStack_80c._0_1_ = s_error_ioctl_00068dd0[4];
      uStack_80c._1_1_ = s_error_ioctl_00068dd0[5];
      uStack_80c._2_1_ = s_error_ioctl_00068dd0[6];
      uStack_80c._3_1_ = s_error_ioctl_00068dd0[7];
      uStack_808._0_1_ = s_error_ioctl_00068dd0[8];
      uStack_808._1_1_ = s_error_ioctl_00068dd0[9];
      uStack_808._2_1_ = s_error_ioctl_00068dd0[10];
      uStack_808._3_1_ = s_error_ioctl_00068dd0[11];
      FUN_0002e584(0,&local_810);
      close(__fd);
      uVar2 = 0xfffffffe;
    }
    else {
      puVar3 = &uStack_81f;
      puVar4 = (undefined *)(param_1 + -1);
      do {
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar3;
      } while (puVar4 != (undefined *)(param_1 + 5));
      close(__fd);
      uVar2 = 0;
    }
  }
  return uVar2;
}

