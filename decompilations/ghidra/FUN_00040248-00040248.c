
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00040248(void)

{
  int iVar1;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined2 local_7e8;
  
  if (DAT_00504ca4 == 0) {
    return;
  }
  iVar1 = munmap(DAT_00504c98,0x1200);
  if (iVar1 < 0) {
    local_808._0_1_ = s_munmap_failed__00068f64[0];
    local_808._1_1_ = s_munmap_failed__00068f64[1];
    local_808._2_1_ = s_munmap_failed__00068f64[2];
    local_808._3_1_ = s_munmap_failed__00068f64[3];
    uStack_804._0_1_ = s_munmap_failed__00068f64[4];
    uStack_804._1_1_ = s_munmap_failed__00068f64[5];
    uStack_804._2_1_ = s_munmap_failed__00068f64[6];
    uStack_804._3_1_ = s_munmap_failed__00068f64[7];
    uStack_800._0_1_ = s_munmap_failed__00068f64[8];
    uStack_800._1_1_ = s_munmap_failed__00068f64[9];
    uStack_800._2_1_ = s_munmap_failed__00068f64[10];
    uStack_800._3_1_ = s_munmap_failed__00068f64[11];
    uStack_7fc._0_1_ = s_munmap_failed__00068f64[12];
    uStack_7fc._1_1_ = s_munmap_failed__00068f64[13];
    uStack_7fc._2_1_ = s_munmap_failed__00068f64[14];
    uStack_7fc._3_1_ = s_munmap_failed__00068f64[15];
    FUN_0002e584(0,&local_808);
  }
  iVar1 = munmap(DAT_00504ca0,0x1000000);
  if (iVar1 < 0) {
    local_808._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[0];
    local_808._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[1];
    local_808._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[2];
    local_808._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[3];
    uStack_804._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[4];
    uStack_804._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[5];
    uStack_804._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[6];
    uStack_804._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[7];
    uStack_800._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[8];
    uStack_800._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[9];
    uStack_800._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[10];
    uStack_800._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[11];
    uStack_7fc._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[12];
    uStack_7fc._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[13];
    uStack_7fc._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[14];
    uStack_7fc._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[15];
    local_7f8._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[16];
    local_7f8._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[17];
    local_7f8._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[18];
    local_7f8._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[19];
    uStack_7f4._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[20];
    uStack_7f4._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[21];
    uStack_7f4._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[22];
    uStack_7f4._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[23];
    uStack_7f0._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[24];
    uStack_7f0._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[25];
    uStack_7f0._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[26];
    uStack_7f0._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[27];
    uStack_7ec._0_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[28];
    uStack_7ec._1_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[29];
    uStack_7ec._2_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[30];
    uStack_7ec._3_1_ = s_munmap_fpga_mem_addr_hal_failed__00068f74[31];
    local_7e8 = (undefined2)ram0x00068f94;
    FUN_0002e584(0,&local_808);
  }
  DAT_00504ca4 = 0;
  close(DAT_00504c94);
  close(DAT_00504c9c);
  return;
}

