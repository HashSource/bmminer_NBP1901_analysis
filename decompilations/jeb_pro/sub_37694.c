uint32_t sub_37694(int param0) {
    char __ptr1;
    int v0 = *(int*)((param0 + 2107394) * 4 + gvar_4FCB38);
    uint32_t v1 = sub_1E0E0();
    int v2 = sub_5F880(v0, (int)v1);
    uint32_t v3 = sub_1E150();
    int v4 = sub_5F880(v2, (int)v3);
    uint32_t v5 = sub_1E0E0();
    uint32_t v6 = v5;
    if(v5 == 0) {
        return 0;
    }
    uint32_t result = 0;
    int v7 = 0;
    do {
        int v8 = 0;
        char* __format = "Domain unbalance happen, chain = %d, domain = %d, nonce_num_domain = %d, threshold = %d.\n";
        uint32_t v9 = sub_1E150();
        while(v9 > v8) {
            uint32_t v10 = sub_1E150();
            uint32_t v11 = v10 * v7 + v8;
            int v12 = *(int*)((param0 * 64 + v11 + 2107398) * 4 + gvar_4FCB38);
            if((uint32_t)(v4 >>> SOCK_STREAM) > v12) {
                result = 1;
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, __format, param0, v11, v12, v4 >>> SOCK_STREAM);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
            ++v8;
            v9 = sub_1E150();
        }
        ++v7;
    }
    while(v7 != v6);
    return result;
}
