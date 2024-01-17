int sub_365E8(int param0) {
    char __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Check if is recv nonce enough, chain = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    int v0 = *(int*)((param0 + 2107394) * 4 + gvar_4FCB34);
    uint32_t v1 = sub_1E130();
    uint32_t v2 = sub_1E0F0();
    return v1 * v2 * 8 <= v0;
}
