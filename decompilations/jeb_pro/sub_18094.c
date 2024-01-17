short sub_18094(int param0) {
    char __ptr1;
    uint32_t v0 = gvar_7F814;
    if(v0 == 0 || *(char*)(v0 + 28) == 0) {
        if(gvar_7EB9C <= 3) {
            return 0xffff;
        }
        snprintf(&__ptr1, 0x800, "No pcb version, chain = %d.\n", param0);
        sub_2E584(3, &__ptr1, 0);
        return 0xffff;
    }
    uint32_t v1 = *(uint32_t*)(param0 * 4 + v0);
    return (uint32_t)((uint16_t)*(char*)(v1 + 28) | ((uint16_t)*(char*)(v1 + 27) << 8));
}
