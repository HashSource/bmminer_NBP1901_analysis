int sub_2BE40(int param0, int param1) {
    uint32_t v0;
    char __ptr1;
    char v1;
    *(int*)&v1 = param1;
    int v2 = sub_1E29C(param0);
    if(v2 == 0) {
        if(gvar_7EB9C <= 3) {
            return 0;
        }
        snprintf(&__ptr1, 0x800, "Chain %d is not exist.\n", param0);
        sub_2E584(3, &__ptr1, 0);
        return 0;
    }
    if(*(int*)&v1 == 0) {
        sub_1E610(param0, 0);
    }
    uint32_t v3 = 0;
    sub_2BDD0();
    int v4 = 0;
    sub_1EC84((int)(uint8_t)param0, SOCK_STREAM, 0, v1);
loc_2BEC8:
    do {
        sub_304D4(300);
        pthread_mutex_lock(&g810DC);
        uint32_t v5 = gvar_5945C0;
        v3 += v5;
        uint32_t v6 = v5;
        if((int)v5 > 0) {
            int v7 = 0;
            while(SOCK_STREAM) {
                uint32_t v8 = gvar_5945BC;
                gvar_5945C0 = v5 - SOCK_STREAM;
                ++v7;
                uint32_t v9 = v8 + SOCK_STREAM;
                uint32_t v10 = v9 * 8 + &gvar_5945B8;
                if(v9 > 510) {
                    v9 = 0;
                }
                int v11 = (uint32_t)*(char*)(v10 + 10);
                int v12 = (uint32_t)*(char*)(v10 + 11);
                gvar_5945BC = v9;
                uint32_t v13 = *(uint32_t*)(v10 + 4);
                if((param0 == v12 && v11 == 0) != 0) {
                    v0 = v13;
                    uint32_t v14 = sub_1E110();
                    if(v0 >>> 16 == v14) {
                        sub_1E5A0(param0);
                        if(v7 != v6) {
                            goto loc_2BEFC;
                        }
                        else {
                        loc_2BF60:
                            uint32_t v15 = sub_1E0F0();
                            int v16 = sub_1E28C();
                            if(v16 * v15 * 5 < (int)v3) {
                                pthread_mutex_unlock(&g810DC);
                                return SOCK_STREAM;
                            }
                            v4 = 0;
                            pthread_mutex_unlock(&g810DC);
                            goto loc_2BEC8;
                        }
                    }
                }
                if(v7 == v6) {
                    break;
                }
            loc_2BEFC:
                v5 = gvar_5945C0;
            }
            goto loc_2BF60;
        }
        else {
            v0 = v5;
            uint32_t v17 = sub_1E0F0();
            int v18 = sub_1E28C();
            if(v18 * v17 * 5 < (int)v3) {
                pthread_mutex_unlock(&g810DC);
                return SOCK_STREAM;
            }
            if(v0 != 0) {
                if(*(int*)&v1 == 0) {
                    uint32_t v19 = sub_1E0F0();
                    int v20 = sub_1E67C(param0);
                    if(v20 == v19) {
                        pthread_mutex_unlock(&g810DC);
                        return SOCK_STREAM;
                    }
                }
                pthread_mutex_unlock(&g810DC);
                goto loc_2BEC8;
            }
            ++v4;
            sub_304D4(100);
            pthread_mutex_unlock(&g810DC);
        }
    }
    while(v4 != 4);
    return SOCK_STREAM;
}
