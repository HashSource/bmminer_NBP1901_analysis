int* sub_188A0(int param0, int param1, int* param2) {
    char __ptr1;
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && *(char*)(v0 + 28) != 0) {
        if(param2 != 0) {
            *param2 = (uint32_t)*(short*)(*(int*)(param0 * 4 + v0) + 60);
        }
        return NULL;
    }
    if(gvar_7EB9C <= 3) {
        return &gFFFF;
    }
    snprintf(&__ptr1, 0x800, "No work mode hash rate, chain = %d, mode = %d.\n", param0, param1);
    sub_2E584(3, &__ptr1, 0);
    return &gFFFF;
}
