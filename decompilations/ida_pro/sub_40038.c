int sub_40038()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0
  char s[2072]; // [sp+10h] [bp-818h] BYREF

  v0 = open64("/dev/axi_fpga_dev");
  dword_504C94 = v0;
  if ( v0 < 0 )
  {
    snprintf(s, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", v0);
    logMessage(0, s, 0);
    return -1;
  }
  else
  {
    dword_504C98 = mmap64(0, 4608, 3, 1, v0);
    if ( dword_504C98 )
    {
      v1 = open64("/dev/fpga_mem");
      dword_504C9C = v1;
      if ( v1 < 0 )
      {
        snprintf(s, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", v1);
        logMessage(0, s, 0);
        perror("open");
        munmap((void *)dword_504C98, 0x1200u);
        close(dword_504C94);
        return -1;
      }
      else
      {
        v2 = mmap64(0, 0x1000000, 3, 1, v1);
        dword_504CA0 = v2;
        if ( v2 )
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal = 0x%x\n", v2);
          logMessage(3, s, 0);
          result = 0;
          dword_504CA4 = 1;
        }
        else
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
          logMessage(0, s, 0);
          munmap((void *)dword_504C98, 0x1200u);
          close(dword_504C94);
          close(dword_504C9C);
          return -1;
        }
      }
    }
    else
    {
      snprintf(s, 0x800u, "mmap axi_fpga_addr failed. axi_fpga_addr = %p\n", 0);
      logMessage(0, s, 0);
      close(dword_504C94);
      return -2;
    }
  }
  return result;
}
