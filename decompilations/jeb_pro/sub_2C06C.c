int sub_2C06C(uint32_t param0, uint32_t param1, int param2) {
    char __ptr1;
    int v0 = (int)(uint8_t)param0;
    int v1 = (int)(uint8_t)param1;
    int v2 = (int)(uint8_t)param2;
    pthread_mutex_t* __mutex = (pthread_mutex_t*)&g810DC;
    int v3 = 5;
    pthread_mutex_lock(&g810F4);
    do {
        int v4 = 8;
        sub_2BDD0();
        sub_1EC84(v2, 0, v1, v0);
        do {
            sub_304D4(10);
            pthread_mutex_lock(__mutex);
            uint32_t v5 = gvar_5945C0;
            if(v5 != 0) {
                uint32_t v6 = v5;
                int v7 = 0;
                while(SOCK_STREAM) {
                    uint32_t v8 = gvar_5945BC;
                    ++v7;
                    gvar_5945C0 = v5 - SOCK_STREAM;
                    if(v8 > 509) {
                        gvar_5945BC = 0;
                    }
                    if(v8 <= 509) {
                        gvar_5945BC = v8 + SOCK_STREAM;
                    }
                    int v9 = (uint32_t)*(char*)((char*)(v8 * 8 + (int)&gvar_5945C0) + 11);
                    if(v9 == param2 && (uint32_t)*(char*)((char*)(v8 * 8 + (int)&gvar_5945C0) + 9) == param1 && (uint32_t)*(char*)((char*)(v8 * 8 + (int)&gvar_5945C0) + 10) == param0) {
                        if(param0 == 28) {
                            int result = *(int*)((v8 + SOCK_STREAM) * 8 + (int)&gvar_5945BC);
                            if((result & 0xe0000000) != 0) {
                                result = 0;
                            }
                            pthread_mutex_unlock(&g810DC);
                            sub_2BDD0();
                            pthread_mutex_unlock(&g810F4);
                            return result;
                        }
                        pthread_mutex_unlock(&g810DC);
                        sub_2BDD0();
                        pthread_mutex_unlock(&g810F4);
                        return *(int*)((v8 + SOCK_STREAM) * 8 + (int)&gvar_5945BC);
                    }
                    if(gvar_7EB9C <= 3 && v7 == v6) {
                        goto loc_2C21C;
                    }
                    else if(gvar_7EB9C > 3) {
                        int v10 = v9;
                        int v11 = (uint32_t)*(char*)((char*)(v8 * 8 + (int)&gvar_5945C0) + 10);
                        uint32_t v12 = (uint32_t)*(char*)((char*)(v8 * 8 + (int)&gvar_5945C0) + 9);
                        uint32_t v13 = param1;
                        uint32_t v14 = param0;
                        int v15 = v11;
                        uint32_t v16 = v12;
                        snprintf(&__ptr1, 0x800, "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n", param2, param1, param0, v10, v16, v15);
                        sub_2E584(3, &__ptr1, 0);
                        if(v7 == v6) {
                            goto loc_2C21C;
                        }
                    }
                    v5 = gvar_5945C0;
                }
            }
        loc_2C21C:
            pthread_mutex_unlock(__mutex);
            --v4;
        }
        while(v4 != 0);
        --v3;
    }
    while(v3 != 0);
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n", param2, param1, param0);
        sub_2E584(4, &__ptr1, v3);
    }
    sub_2BDD0();
    pthread_mutex_unlock(&g810F4);
    return 0;
}
