
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0003fd74(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined2 local_808;
  
  if (DAT_00504c90 == 0) {
    iVar1 = FUN_00040228();
    if (iVar1 == 0) {
      iVar1 = FUN_0004044c();
      if (iVar1 == 0) {
        memset(&DAT_00504b68,0,0x124);
        FUN_0003fb58();
        DAT_00504c90 = 1;
        FUN_0003fefc();
        FUN_00042694();
        FUN_000419d8();
        return 0;
      }
      uVar2 = 0xfffffffe;
      local_818._0_1_ = s_gpio_init_failed_00068e3c[0];
      local_818._1_1_ = s_gpio_init_failed_00068e3c[1];
      local_818._2_1_ = s_gpio_init_failed_00068e3c[2];
      local_818._3_1_ = s_gpio_init_failed_00068e3c[3];
      uStack_814._0_1_ = s_gpio_init_failed_00068e3c[4];
      uStack_814._1_1_ = s_gpio_init_failed_00068e3c[5];
      uStack_814._2_1_ = s_gpio_init_failed_00068e3c[6];
      uStack_814._3_1_ = s_gpio_init_failed_00068e3c[7];
      uStack_810._0_1_ = s_gpio_init_failed_00068e3c[8];
      uStack_810._1_1_ = s_gpio_init_failed_00068e3c[9];
      uStack_810._2_1_ = s_gpio_init_failed_00068e3c[10];
      uStack_810._3_1_ = s_gpio_init_failed_00068e3c[11];
      uStack_80c._0_1_ = s_gpio_init_failed_00068e3c[12];
      uStack_80c._1_1_ = s_gpio_init_failed_00068e3c[13];
      uStack_80c._2_1_ = s_gpio_init_failed_00068e3c[14];
      uStack_80c._3_1_ = s_gpio_init_failed_00068e3c[15];
      local_808 = (undefined2)ram0x00068e4c;
      FUN_0002e584(0,&local_818,0);
    }
    else {
      uVar2 = 0xffffffff;
      local_818._0_1_ = s_fpga_init_failed_00068e28[0];
      local_818._1_1_ = s_fpga_init_failed_00068e28[1];
      local_818._2_1_ = s_fpga_init_failed_00068e28[2];
      local_818._3_1_ = s_fpga_init_failed_00068e28[3];
      uStack_814._0_1_ = s_fpga_init_failed_00068e28[4];
      uStack_814._1_1_ = s_fpga_init_failed_00068e28[5];
      uStack_814._2_1_ = s_fpga_init_failed_00068e28[6];
      uStack_814._3_1_ = s_fpga_init_failed_00068e28[7];
      uStack_810._0_1_ = s_fpga_init_failed_00068e28[8];
      uStack_810._1_1_ = s_fpga_init_failed_00068e28[9];
      uStack_810._2_1_ = s_fpga_init_failed_00068e28[10];
      uStack_810._3_1_ = s_fpga_init_failed_00068e28[11];
      uStack_80c._0_1_ = s_fpga_init_failed_00068e28[12];
      uStack_80c._1_1_ = s_fpga_init_failed_00068e28[13];
      uStack_80c._2_1_ = s_fpga_init_failed_00068e28[14];
      uStack_80c._3_1_ = s_fpga_init_failed_00068e28[15];
      local_808 = (undefined2)ram0x00068e38;
      FUN_0002e584(0,&local_818,0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

