int sub_3FB58() {
    char v0;
    int v1;
    int v2;
    int result;
    int __ptr1;
    int v3 = 0;
    memset(&gvar_504B68, 0, 292);
    sub_40314(2, &v3);
    if(v3 != 0) {
        if(v3 >= 0) {
            gvar_504C8C = 0;
            snprintf(&__ptr1, 0x800, "HASH_ON_PLUG V9 = 0x%x\n", (int)(uint16_t)v3);
            sub_2E584(2, &__ptr1, 0);
            result = (uint16_t)v3;
            if(result != 0) {
                v2 = gvar_504B68;
                v1 = 0;
                uint32_t v4 = 0;
                while(SOCK_STREAM) {
                    int v5 = v2 * 9;
                    if((result & SOCK_STREAM) != 0) {
                        uint32_t v6 = *(uint32_t*)(v5 * 8 + (int)&gvar_504B70);
                        v1 = SOCK_STREAM;
                        ++v2;
                        *(uint32_t*)(v5 * 8 + (int)&gvar_504B6C) = v4;
                        *(uint32_t*)(v5 * 8 + (int)&gvar_504B70) = v6 + SOCK_STREAM;
                        *(uint32_t*)((v5 * 2 + v6) * 4 + (int)&gvar_504B74) = v4;
                    }
                    v0 = result >>> SOCK_STREAM == 0;
                    result >>>= SOCK_STREAM;
                    ++v4;
                    if(v0 == 0) {
                        continue;
                    }
                    goto loc_3FC30;
                }
            }
        }
        else {
            gvar_504C8C = 1;
            snprintf(&__ptr1, 0x800, "HASH_ON_PLUG T9 = 0x%x\n", v3 >>> 24);
            result = sub_2E584(2, &__ptr1, 0);
            int v7 = v3 >>> 24;
            if(v7 != 0) {
                v2 = gvar_504B68;
                v1 = 0;
                result = 0;
                do {
                    if((v7 & SOCK_STREAM) != 0) {
                        *(int*)(v2 * 72 + (int)&gvar_504B6C) = result;
                        if(result == SOCK_STREAM) {
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B74) = 2;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B78) = 10;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B7C) = 11;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B70) = 3;
                        }
                        else if((uint32_t)result < SOCK_STREAM) {
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B74) = 1;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B78) = 8;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B7C) = 9;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B70) = 3;
                        }
                        else if(result == 2) {
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B74) = 3;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B78) = 12;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B7C) = 13;
                            *(uint32_t*)(v2 * 72 + (int)&gvar_504B70) = 3;
                        }
                        ++v2;
                        v1 = SOCK_STREAM;
                    }
                    v0 = v7 >>> SOCK_STREAM == 0;
                    v7 >>>= SOCK_STREAM;
                    ++result;
                }
                while(v0 == 0);
            loc_3FC30:
                if(v1 != 0) {
                    gvar_504B68 = (uint32_t)v2;
                }
            }
        }
        return result;
    }
    __ptr1 = 0x6e6e6143;
    int v8 = 1176532079;
    int v9 = 543452777;
    int v10 = 544828993;
    int v11 = 0x67756c50;
    int v12 = 560875808;
    short v13 = 2573;
    char v14 = 0;
    return sub_2E584(0, &__ptr1, 0);
}
