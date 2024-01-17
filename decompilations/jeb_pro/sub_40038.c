int sub_40038() {
    char __ptr1;
    int __fd = open64("/dev/axi_fpga_dev", O_RDWR);
    gvar_504C94 = (uint32_t)__fd;
    if(__fd >= 0) {
        void* ptr0 = mmap64(NULL, 0x1200, 3, SOCK_STREAM, __fd, 0L);
        gvar_504C98 = (uint32_t)ptr0;
        if(ptr0 != 0) {
            int __fd1 = open64("/dev/fpga_mem", O_RDWR);
            gvar_504C9C = (uint32_t)__fd1;
            if(__fd1 >= 0) {
                int v0 = __fd1;
                __off64_t v1 = 0L;
                void* ptr1 = mmap64(NULL, 0x1000000, 3, SOCK_STREAM, __fd1, 0L);
                gvar_504CA0 = (uint32_t)ptr1;
                if(ptr1 != 0) {
                    snprintf(&__ptr1, 0x800, "mmap fpga_mem_addr_hal = 0x%x\n", ptr1);
                    sub_2E584(3, &__ptr1, 0);
                    gvar_504CA4 = 1;
                    return 0;
                }
                snprintf(&__ptr1, 0x800, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
                sub_2E584(0, &__ptr1, 0);
                munmap(gvar_504C98, 0x1200);
                close(gvar_504C94);
                close(gvar_504C9C);
                return -1;
            }
            snprintf(&__ptr1, 0x800, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", __fd1);
            sub_2E584(0, &__ptr1, 0);
            perror("open");
            munmap(gvar_504C98, 0x1200);
            close(gvar_504C94);
            return -1;
        }
        snprintf(&__ptr1, 0x800, "mmap axi_fpga_addr failed. axi_fpga_addr = %p\n", 0);
        sub_2E584(0, &__ptr1, 0);
        close(gvar_504C94);
        return -2;
    }
    snprintf(&__ptr1, 0x800, "/dev/axi_fpga_dev open failed. fd = %d\n", __fd);
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
