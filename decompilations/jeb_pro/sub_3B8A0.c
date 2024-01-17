int sub_3B8A0(int param0, int param1) {
    int v0;
    char __ptr1;
    uint32_t v1 = sub_1E0F0();
    v0 = 0;
    if(v1 != 0) {
        int v2 = 0;
        int* ptr0 = (int*)(param0 * 0x400 + param1 - 4);
        do {
            ++v2;
            int v3 = *(ptr0 + SOCK_STREAM);
            ++ptr0;
            v0 += v3;
        }
        while(v1 != v2);
    }
    uint32_t v4 = sub_1E0F0();
    int result = sub_5F880(v0, (int)v4);
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "chain = %d, freq_avg = %d\n", param0, result);
        sub_2E584(4, &__ptr1, 0);
    }
    return result;
}
