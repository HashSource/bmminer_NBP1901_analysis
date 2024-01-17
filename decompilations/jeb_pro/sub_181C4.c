int sub_181C4(int param0, int* param1) {
    char __ptr1;
    uint32_t v0 = gvar_7F814;
    if(v0 == 0 || *(char*)(v0 + 28) == 0) {
        if(gvar_7EB9C <= 4) {
            return -1;
        }
        snprintf(&__ptr1, 0x800, "No temp, chain = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
        return -1;
    }
    *param1 = (uint32_t)*(char*)(*(int*)(param0 * 4 + v0) + 43);
    return 0;
}
