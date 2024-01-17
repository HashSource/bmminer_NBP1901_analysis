int sub_18258(int param0, int* param1) {
    char __ptr1;
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && *(char*)(v0 + 28) != 0) {
        if(param1 != 0) {
            *param1 = (uint32_t)*(char*)(*(int*)(param0 * 4 + v0) + 46);
            return 0;
        }
        return -2;
    }
    if(gvar_7EB9C <= 3) {
        return -1;
    }
    snprintf(&__ptr1, 0x800, "No test standard, chain = %d.\n", param0);
    sub_2E584(3, &__ptr1, 0);
    return -1;
}
