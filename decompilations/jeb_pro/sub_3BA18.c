int sub_3BA18(int param0, int param1) {
    char __ptr1;
    int result = 0;
    int v0 = param1 - 4;
    int v1 = 0;
    do {
        int v2 = sub_1E29C(v1);
        if(v2 != 0 && (param0 != 0xFF ? param0 == v1: SOCK_STREAM) != 0) {
            uint32_t v3 = sub_1E0F0();
            if(v3 != 0) {
                param1 = v1 * 0x400 + v0;
                int v4 = 0;
                do {
                    int v5 = *(int*)(param1 + 4);
                    param1 += 4;
                    ++v4;
                    if(v5 > result) {
                        result = v5;
                    }
                }
                while(v3 != v4);
            }
        }
        ++v1;
    }
    while(v1 != 4);
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "chain = %d, freq_max = %d\n", param0, result);
        sub_2E584(4, &__ptr1, 0);
    }
    return result;
}
