int sub_1A308(int param0, int param1, size_t __n) {
    int v0;
    char __ptr1;
    int v1 = sub_36538(&v0);
    if(v1 == 0) {
        do {
            int v2 = sub_1E29C(v1);
            if(v2 != 0) {
                memset((void*)(v1 * 0x400 + &gvar_4FBAA0), 0, 0x400);
                int v3 = sub_183FC(v1, gvar_80FB4, (uint32_t*)(v1 * 0x400 + &gvar_4FBAA0));
                if(v3 == 0) {
                    uint32_t v4 = sub_1E0F0();
                    if((uint8_t)v4 == 0) {
                        goto loc_1A348;
                    }
                    else {
                        uint32_t v5 = *(uint32_t*)(v1 * 0x400 + (int)&gvar_4FBAA0);
                        if(v5 > v0) {
                            goto loc_1A418;
                        }
                        else {
                            __n = v1 * 0x400 + 0x4fbaa4;
                            int* ptr0 = (int*)((uint32_t)((uint8_t)v4 - SOCK_STREAM) * 4 + v1 * 0x400 + 0x4fbaa4);
                        }
                    }
                }
                else {
                    goto loc_1A39C;
                }
                while(__n != ptr0) {
                    v5 = *(uint32_t*)__n;
                    __n += 4;
                    if(v5 > v0) {
                    loc_1A418:
                        if(gvar_7EB9C > 3) {
                            snprintf(&__ptr1, 0x800, "Freq(%d) > Max_freq(%d), invalid!\n", v5, v0);
                            sub_2E584(3, &__ptr1, 0);
                        }
                    loc_1A39C:
                        sub_356C4(3, 0xFF);
                        sub_31D58(12, "Get frequency failed!", __n);
                        return -1;
                    }
                }
            }
        loc_1A348:
            ++v1;
        }
        while(v1 != 4);
        return 0;
    }
    sub_356C4(3, 0xFF);
    sub_31D58(12, "Get max freq failed!", __n);
    return -1;
}
