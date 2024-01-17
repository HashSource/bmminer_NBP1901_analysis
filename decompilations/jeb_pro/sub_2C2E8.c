int sub_2C2E8(int param0, int param1, int param2, uint32_t param3) {
    int* ptr0;
    char __ptr1;
    char v0;
    char v1;
    int v2 = sub_1E29C(param2);
    if(v2 == 0) {
        if(gvar_7EB9C <= 3) {
            return -1;
        }
        snprintf(&__ptr1, 0x800, "chain::%d don\'t exist!!!\n", param2);
        sub_2E584(3, &__ptr1, 0);
        return -1;
    }
    char* ptr1 = (char*)&g810DC;
    pthread_mutex_lock(&g810F4);
    sub_1629C();
    gvar_8110C = 1;
    sub_2BDD0();
    switch(param0) {
        case 2: {
            uint32_t v3 = sub_1E160();
            sub_50DC4((int)(uint8_t)param2, (int)(v3 * param1), 2);
            break;
        }
        case 6: {
            uint32_t v4 = sub_1E160();
            sub_50DA8((int)(uint8_t)param2, (int)(v4 * param1));
            break;
        }
        default: {
            uint32_t v5 = sub_1E160();
            sub_5193C((int)(uint8_t)param2, (int)(v5 * param1), (uint8_t)param0);
            break;
        }
    }
    int v6 = 0;
    int v7 = 0;
    pthread_mutex_t* __mutex = (pthread_mutex_t*)&g810DC;
    usleep(&loc_186A0);
    do {
        pthread_mutex_lock(__mutex);
        uint32_t v8 = gvar_5945C0;
        uint32_t v9 = gvar_5945C0;
        if((int)v8 > 0) {
            int v10 = 0;
            pthread_mutex_t* ptr2 = __mutex;
            while(SOCK_STREAM) {
                uint32_t v11 = gvar_5945BC;
                gvar_5945C0 = v8 - SOCK_STREAM;
                ++v10;
                uint32_t v12 = v11 + SOCK_STREAM;
                uint32_t v13 = v12 * 8 + &gvar_5945B8;
                if(v12 > 510) {
                    v12 = 0;
                }
                int v14 = (uint32_t)*(char*)(v13 + 11);
                gvar_5945BC = v12;
                if(v14 == param2 && *(char*)(v13 + 10) == 64) {
                    int v15 = (int)*(char*)(v13 + 9);
                    uint32_t v16 = sub_1E160();
                    int v17 = sub_5FAF8(v15, (int)v16);
                    if(v17 == param1) {
                        int v18 = (int)*(short*)(v13 + 6);
                        ++v6;
                        uint32_t v19 = sub_1E120();
                        sub_5FADC(v18, (int)v19);
                        if(*(int*)(param1 * 4 + param3) == 0) {
                            int v20 = *(int*)(v13 + 4);
                            ++v7;
                            uint32_t v21 = sub_1E120();
                            sub_5FADC(v20 >>> 16, (int)v21);
                            *(int*)(param1 * 4 + param3) = (uint32_t)(uint16_t)v20;
                            if(v10 == v9) {
                                break;
                            }
                            goto loc_2C418;
                        }
                    }
                }
                if(v10 == v9) {
                    break;
                }
            loc_2C418:
                v8 = gvar_5945C0;
            }
            __mutex = ptr2;
            pthread_mutex_unlock(__mutex);
        }
        else {
            pthread_mutex_unlock(__mutex);
            if(v8 == 0) {
                usleep(1000);
            }
        }
        sub_302A0(&v0);
        ptr0 = sub_30578(&v0, &v1);
    }
    while((int)ptr0 <= 199);
    uint32_t v22 = sub_1E120();
    if(v22 != v7 && gvar_7EB9C > 3) {
        uint32_t v23 = sub_1E120();
        snprintf(&__ptr1, 0x800, "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n", v6, v7, v23);
        sub_2E584(3, &__ptr1, 0);
    }
    *(ptr1 + 48) = 0;
    sub_162B0();
    pthread_mutex_unlock(&g810F4);
    return 0;
}
