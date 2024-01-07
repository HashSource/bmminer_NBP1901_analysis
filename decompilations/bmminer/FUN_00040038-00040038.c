
undefined4 FUN_00040038(void)

{
  undefined4 uVar1;
  char acStack_818 [2052];
  
  DAT_00504c94 = open64("/dev/axi_fpga_dev",2);
  if (DAT_00504c94 < 0) {
    snprintf(acStack_818,0x800,"/dev/axi_fpga_dev open failed. fd = %d\n",DAT_00504c94);
    FUN_0002e584(0,acStack_818);
    uVar1 = 0xffffffff;
  }
  else {
    DAT_00504c98 = mmap64((void *)0x0,0x1200,3,1,DAT_00504c94,0);
    if (DAT_00504c98 == (void *)0x0) {
      snprintf(acStack_818,0x800,"mmap axi_fpga_addr failed. axi_fpga_addr = %p\n",0);
      FUN_0002e584(0,acStack_818,0);
      close(DAT_00504c94);
      uVar1 = 0xfffffffe;
    }
    else {
      DAT_00504c9c = open64("/dev/fpga_mem",2);
      if (DAT_00504c9c < 0) {
        snprintf(acStack_818,0x800,"/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n",DAT_00504c9c)
        ;
        FUN_0002e584(0,acStack_818);
        perror("open");
        munmap(DAT_00504c98,0x1200);
        close(DAT_00504c94);
        uVar1 = 0xffffffff;
      }
      else {
        DAT_00504ca0 = mmap64((void *)0x0,0x1000000,3,1,DAT_00504c9c,0);
        if (DAT_00504ca0 == (void *)0x0) {
          snprintf(acStack_818,0x800,"mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n",0);
          FUN_0002e584(0,acStack_818,0);
          munmap(DAT_00504c98,0x1200);
          close(DAT_00504c94);
          close(DAT_00504c9c);
          uVar1 = 0xffffffff;
        }
        else {
          snprintf(acStack_818,0x800,"mmap fpga_mem_addr_hal = 0x%x\n",DAT_00504ca0);
          FUN_0002e584(3,acStack_818,0);
          uVar1 = 0;
          DAT_00504ca4 = 1;
        }
      }
    }
  }
  return uVar1;
}

