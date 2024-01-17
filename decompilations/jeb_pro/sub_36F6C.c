int sub_36F6C(int param0, int* param1) {
    void* __s;
    char* ptr0;
    char* __ptr1_3;
    int v0;
    char __ptr1;
    int __dest;
    char __src;
    int* ptr1 = param1;
    int v1 = sub_3388C();
    uint32_t v2 = gvar_7EB9C;
    int v3 = (int)(uint8_t)(v1 >>> 8);
    int v4 = *ptr1;
    int v5 = (int)(uint8_t)(v1 >>> 16);
    char v6 = (uint8_t)v1;
    int v7 = v3;
    int v8 = v4;
    char v9 = (uint8_t)v3;
    char v10 = (uint8_t)v5;
    __ptr1_3 = &__ptr1;
    if(v2 > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Send work, max_freq = %d\n", v8);
        sub_2E584(4, &__ptr1, 0);
        v2 = gvar_7EB9C;
    }
    int v11 = 3;
    int v12 = v5;
    void* __ptr1_1 = __ptr1_3;
    if(v2 <= 4) {
    loc_36FE4:
        do {
            sub_40390(24, 0);
            int v13 = sub_4476C();
            int v14 = 0;
            sub_44794((v13 & 0xffff70ff) | 0x8400);
            do {
                int v15 = sub_1E29C(v14);
                if(v15 != 0) {
                    sub_50288((int)(uint8_t)v14, SOCK_STREAM, 0);
                }
                ++v14;
            }
            while(v14 != 4);
            uint32_t v16 = gvar_7EB9C;
            char v17 = v16 == 4;
            if(v16 >= 4 && v17 == 0) {
                *(int*)__ptr1_1 = 0x4245445b;
                *(int*)((int)__ptr1_1 + 4) = 0x205d4755;
                *(int*)((int)__ptr1_1 + 8) = 0x646e6553;
                *(int*)((int)__ptr1_1 + 12) = 1819635232;
                int* ptr2 = (int*)((int)__ptr1_1 + 16);
                *ptr2 = 1870078060;
                *(ptr2 + SOCK_STREAM) = 170814322;
                ptr0 = ptr2 + 2;
                ptr0[0] = 0;
                sub_2E584(4, (char*)__ptr1_1, 0);
            }
            int v18 = 0;
            memset(__ptr1_1, 0, 148);
            __ptr1 = SOCK_STREAM;
            do {
                int v19 = sub_1E29C(v18);
                if(v19 != 0) {
                    int v20 = SOCK_STREAM << v18;
                    while(SOCK_STREAM) {
                        int v21 = sub_44ED4();
                        v17 = (v21 & v20) == 0;
                        if(v17 == 0) {
                            break;
                        }
                        sub_304D4(SOCK_STREAM);
                    }
                    char v22 = (uint8_t)v18 | 0x80;
                    memcpy(&__dest, &__src, 132);
                    sub_1EEB8(*(int*)__ptr1_1, *(int*)((int)__ptr1_1 + 4), *(int*)((int)__ptr1_1 + 8), *(int*)((int)__ptr1_1 + 12), __dest, v0);
                    sub_304D4(10);
                }
                ++v18;
            }
            while(v18 != 4);
            sleep(1);
            int v23 = sub_4476C();
            sub_44794((v23 & 0xffff70ff) | 0x8100);
            usleep(&loc_186A0);
            --v11;
            if(v11 == 0) {
                int v24 = v12;
                sub_1F1EC(0xFF, SOCK_STREAM);
                sub_1EFE0(0xFF, v7, v24, SOCK_STREAM);
                sub_36908();
                usleep(&loc_186A0);
                sub_36908();
                usleep(&loc_186A0);
                sub_36908();
                usleep(&loc_186A0);
                do {
                    int v25 = sub_1E29C(v11);
                    if(v25 != 0) {
                        sub_50BD4((int)(uint8_t)v11, 0);
                    }
                    ++v11;
                }
                while(v11 != 4);
                int v26 = 0;
                do {
                    int v27 = sub_1E29C(v26);
                    if(v27 != 0) {
                        sub_50E78((int)(uint8_t)v26);
                    }
                    ++v26;
                }
                while(v26 != 4);
                int v28 = 3;
                int v29 = 30000 - (uint32_t)(v8 - 250) / 20;
                int v30 = v29 / 333;
                do {
                    int v31 = 0;
                    do {
                        int v32 = sub_1E29C(v31);
                        if(v32 != 0) {
                            sub_50F80((int)(uint8_t)v31, v30);
                        }
                        ++v31;
                    }
                    while(v31 != 4);
                    usleep(&loc_186A0);
                    --v28;
                }
                while(v28 != 0);
                do {
                    int v33 = sub_1E29C(v28);
                    if(v33 != 0) {
                        sub_50FA4((int)(uint8_t)v28, 8);
                    }
                    ++v28;
                }
                while(v28 != 4);
                __useconds_t __useconds = (__useconds_t)(v29 + 1000);
                int v34 = 8;
                do {
                    int v35 = 0;
                    do {
                        int v36 = sub_1E29C(v35);
                        if(v36 != 0) {
                            sub_50FDC((int)(uint8_t)v35);
                        }
                        ++v35;
                    }
                    while(v35 != 4);
                    usleep(__useconds);
                    --v34;
                }
                while(v34 != 0);
                sub_36908();
                usleep(&loc_186A0);
                sub_36908();
                usleep(&loc_186A0);
                sub_36908();
                usleep(&loc_186A0);
                sub_1EFE0(0xFF, v7, v24, 0);
                if(gvar_7EB9C <= 4) {
                    __s = *(void**)(gvar_4FCB34 + 4);
                }
                else {
                    char* __ptr1_2 = __ptr1_3;
                    *(int*)&__ptr1_2[0] = '[';
                    *(int*)&__ptr1_2[4] = 'U';
                    *(int*)&__ptr1_2[8] = 'G';
                    *(int*)&__ptr1_2[12] = 'n';
                    *(int*)&__ptr1_2[16] = 'e';
                    *(int*)&__ptr1_2[20] = 'u';
                    *(int*)&__ptr1_2[24] = 'r';
                    *(int*)&__ptr1_2[28] = 'h';
                    *(short*)&__ptr1_2[32] = '.';
                    __ptr1_2[34] = 0;
                    sub_2E584(4, __ptr1_2, 0);
                    __s = *(void**)(gvar_4FCB34 + 4);
                    if(gvar_7EB9C > 4) {
                        __dest = SOCK_STREAM;
                        snprintf(__ptr1_2, 0x800, "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n", 224, SOCK_STREAM);
                        sub_2E584(4, __ptr1_2, 0);
                    }
                }
                memset(__s, 0, 0x400);
                int v37 = 5;
                sub_1EC84(0xFF, SOCK_STREAM, 0, 224);
                do {
                    int v38 = sub_36F2C();
                    if(v38 != 0) {
                        return 0;
                    }
                    usleep(&loc_186A0);
                    --v37;
                }
                while(v37 != 0);
                v7 = &gvar_7EB9C;
                int v39 = 95;
                void* ptr3 = __s;
                do {
                    int v40 = 0;
                    do {
                        int v41 = sub_1E29C(v40);
                        if(v41 != 0) {
                            uint32_t v42 = sub_1E0F0();
                            if(v42 != 0) {
                                char* ptr4 = (char*)(v40 * 0x100 + (int)ptr3);
                                int v43 = (int)(uint8_t)v40;
                                int v44 = 0;
                                do {
                                    int v45 = (uint32_t)*ptr4;
                                    ++ptr4;
                                    if(v45 != SOCK_STREAM) {
                                        uint32_t v46 = sub_1E160();
                                        sub_1EC84(v43, 0, (int)((uint8_t)v46 * (uint8_t)v44), 224);
                                    }
                                    ++v44;
                                }
                                while(v44 != v42);
                            }
                        }
                        ++v40;
                    }
                    while(v40 != 4);
                    usleep(&loc_186A0);
                    int v47 = sub_36F2C();
                    if(v47 != 0) {
                        return 0;
                    }
                    --v39;
                }
                while(v39 != 0);
                if(gvar_7EB9C <= 3) {
                    return -1;
                }
                snprintf(__ptr1_3, 0x800, "Read REG[0x%X] done failed.\n", 224);
                sub_2E584(3, __ptr1_3, 0);
                return -1;
            }
        }
        while(gvar_7EB9C <= 4);
    }
    *(int*)__ptr1_1 = 0x4245445b;
    *(int*)((int)__ptr1_1 + 4) = 0x205d4755;
    *(int*)((int)__ptr1_1 + 8) = 544499027;
    *(int*)((int)__ptr1_1 + 12) = 1918989427;
    int* ptr5 = (int*)((int)__ptr1_1 + 16);
    *ptr5 = 1869488244;
    *(ptr5 + SOCK_STREAM) = 0x2065636e;
    *(ptr5 + 2) = 0x7366666f;
    *(ptr5 + 3) = 1763734629;
    int* ptr6 = ptr5 + 4;
    *ptr6 = 0x6c61766e;
    *(ptr6 + SOCK_STREAM) = 170812521;
    ptr0 = ptr6 + 2;
    ptr0[0] = 0;
    sub_2E584(4, (char*)__ptr1_1, 0);
    goto loc_36FE4;
}
