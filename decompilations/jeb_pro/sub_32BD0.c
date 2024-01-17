int sub_32BD0() {
    char __ptr1;
    sub_44B54(&g99EDE0, 32);
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "miner ID : %s\n", 0x99ede0);
        sub_2E584(3, &__ptr1, 0);
    }
    int v0 = sub_45C98();
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "FPGA Version = 0x%04X\n", (uint32_t)(uint16_t)v0);
        sub_2E584(3, &__ptr1, 0);
    }
    return sprintf(&g80FDC, "%d.%d.%d.%d", (uint32_t)(uint8_t)v0, (uint32_t)(uint8_t)(v0 >>> 16), SOCK_STREAM, 3);
}
