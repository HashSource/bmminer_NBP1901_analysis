int sub_3403C() {
    char __ptr1;
    char v0;
    int result;
    char v1;
    char v2;
    int64_t v3;
    int64_t v4 = v3;
    int v5 = 0;
    char* ptr0 = (char*)&gvar_8110C;
    int v6 = 0;
    int v7 = sub_3388C();
    uint8_t v8 = (uint8_t)v7;
    char* ptr1 = (char*)&gvar_482A60;
    short* ptr2 = (short*)&gvar_59CD98;
    uint8_t v9 = (uint8_t)(v7 >>> 8);
    uint8_t v10 = (uint8_t)(v7 >>> 16);
    sub_1629C();
    do {
        int v11 = sub_1E29C(v5);
        if(v11 != 0) {
            short* ptr3 = ptr2;
            int* ptr4 = (int*)&gvar_7EB9C;
            int* ptr5 = (int*)&gvar_5945B8;
            char* ptr6 = ptr1;
            int v12 = v5;
            void* __s = (void*)(v5 * 0x100000 + (int)ptr3);
            int v13 = (int)*(ptr6 + 16);
            int v14 = 0;
            sub_1F0E0(v5, SOCK_STREAM, 0, v13);
            do {
                *ptr0 = SOCK_STREAM;
                sub_2BDD0();
                memset(__s, 0, 0x100000);
                uint32_t v15 = sub_1E0F0();
                uint32_t v16 = v15;
                if((int)v15 > 0) {
                    int* ptr7 = (int*)&__ptr1;
                    int v17 = (int)(uint8_t)v12;
                    int* ptr8 = NULL;
                    *(int*)&v1 = v12 & 0x3;
                    do {
                        uint32_t v18 = sub_1E160();
                        pthread_mutex_t* __mutex = (pthread_mutex_t*)&g810DC;
                        sub_50DA8(v17, v18 * (int)ptr8);
                        sub_302A0(&v2);
                        do {
                            pthread_mutex_lock(__mutex);
                            int v19 = *(ptr5 + 2);
                            int v20 = *(ptr5 + 2);
                            if(v19 > 0) {
                                int v21 = *(int*)&v1;
                                int v22 = 0;
                                int* ptr9 = ptr7;
                                pthread_mutex_t* ptr10 = __mutex;
                                int v23 = v21 * 0x100;
                                while(SOCK_STREAM) {
                                    int v24 = *(ptr5 + SOCK_STREAM);
                                    ++v22;
                                    *(ptr5 + 2) = v19 - SOCK_STREAM;
                                    int v25 = v24 + SOCK_STREAM;
                                    char v26 = v25 == 510;
                                    char v27 = v25 >= 510;
                                    if(v27 == 0 || v26 != 0) {
                                        *(ptr5 + SOCK_STREAM) = v25;
                                    }
                                    int* ptr11 = (int*)(v25 * 8 + (int)ptr5);
                                    if((v27 != 0 && v26 == 0)) {
                                        *(ptr5 + SOCK_STREAM) = 0;
                                    }
                                    if((uint32_t)*(char*)((char*)ptr11 + 11) == v12 && *(char*)((char*)ptr11 + 10) == 64) {
                                        int v28 = (int)*(char*)((char*)ptr11 + 9);
                                        int v29 = *(ptr11 + SOCK_STREAM);
                                        uint32_t v30 = sub_1E160();
                                        int v31 = sub_5FAF8(v28, (int)v30);
                                        int v32 = (int)*(char*)((char*)ptr11 + 9);
                                        int v33 = (uint32_t)*(char*)((char*)ptr11 + 11) & 0x3;
                                        *(short*)((char*)(((v31 + v23) * 0x400 + (uint32_t)(uint16_t)(*(short*)((char*)ptr11 + 6) & 0x3ff)) * 4 + (int)ptr2) + 2) = (uint16_t)v29;
                                        uint32_t v34 = sub_1E160();
                                        int v35 = sub_5FAF8(v32, (int)v34);
                                        *(short*)(((v33 * 0x100 + v35) * 0x400 + (uint32_t)(uint16_t)(*(short*)((char*)ptr11 + 6) & 0x3ff)) * 4 + (int)ptr2) = SOCK_STREAM;
                                    }
                                    if(v22 == v20) {
                                        ptr7 = ptr9;
                                        __mutex = ptr10;
                                        goto loc_34294;
                                    }
                                    else {
                                        v19 = *(ptr5 + 2);
                                    }
                                }
                            loc_34294:
                            }
                            pthread_mutex_unlock(__mutex);
                            usleep(1000);
                            sub_302A0(ptr7);
                            int* ptr12 = sub_30578(ptr7, (uint32_t*)&v2);
                        }
                        while((int)ptr12 <= 99);
                        int* ptr13 = (int*)((char*)ptr8 + SOCK_STREAM);
                        ptr8 = (char*)ptr8 + SOCK_STREAM;
                    }
                    while(ptr13 != v16);
                }
                uint32_t v36 = sub_1E0F0();
                ptr10 = v36;
                if((int)v36 > 0) {
                    *(int*)&v1 = v12;
                    int* ptr14 = ptr4;
                    int v37 = 0;
                    ptr8 = ptr5;
                    int v38 = 0;
                    int v39 = 0;
                    do {
                        uint32_t v40 = sub_1E120();
                        if((int)v40 > 0) {
                            int v41 = v6;
                            short* ptr15 = ptr2;
                            v23 = v38;
                            int v42 = v41 + v38;
                            int v43 = 0;
                            int v44 = 0;
                            short* ptr16 = (short*)(v42 * 0x1000 + (int)ptr15);
                            ptr9 = "core %8d data in asic %d is zero";
                            do {
                                if(*(ptr16 + SOCK_STREAM) == 0) {
                                    int v45 = (int)*ptr16;
                                    int v46 = *ptr14;
                                    if(v45 != 0) {
                                        if(v46 > 3) {
                                            char* __format = (char*)ptr9;
                                            *(int*)&v0 = v23;
                                            snprintf(&__ptr1, 0x800, __format, v44, *(int*)&v0);
                                            sub_2E584(3, &__ptr1, 0);
                                        }
                                    }
                                    else if(v46 > 3) {
                                        *(int*)&v0 = v23;
                                        snprintf(&__ptr1, 0x800, "core %8d in asic %d not returned", v44, *(int*)&v0);
                                        sub_2E584(3, &__ptr1, 0);
                                    }
                                    v43 = SOCK_STREAM;
                                    ++v39;
                                    v37 = SOCK_STREAM;
                                }
                                ++v44;
                                ptr16 += 2;
                            }
                            while(v44 != v40);
                            int v47 = v43;
                            v38 = v23;
                            if(v47 != 0) {
                                if(*ptr14 > 3) {
                                    snprintf(&__ptr1, 0x800, "reopen asic %d", v38);
                                    sub_2E584(3, &__ptr1, 0);
                                }
                                int v48 = v1;
                                uint32_t v49 = sub_1E160();
                                sub_50CC4(v48, (int)(v49 * v38), SOCK_STREAM);
                                usleep(10000);
                                uint32_t v50 = sub_1E160();
                                sub_50CC4(v48, (int)(v50 * v38), 0);
                                usleep(10000);
                                uint32_t v51 = sub_1E160();
                                sub_515D0(v48, (int)(v51 * v38), v8, 0);
                                sub_304D4(10);
                                uint32_t v52 = sub_1E160();
                                int v53 = v10;
                                int v54 = v9;
                                *(int*)&v0 = 0;
                                sub_51668(v48, (int)(v52 * v38), v54, v53, 0);
                                uint32_t v55 = sub_1E160();
                                sub_50DF8(v48, (int)(v55 * v38));
                                usleep(10000);
                                if(*ptr14 > 3) {
                                    snprintf(&__ptr1, 0x800, "reset clock asic %d", v38);
                                    sub_2E584(3, &__ptr1, 0);
                                }
                                uint32_t v56 = sub_1E160();
                                sub_517F8(v48, (int)(v56 * v38), 0);
                                uint32_t v57 = sub_1E160();
                                sub_51794(v48, (int)(v57 * v38));
                                usleep(&loc_186A0);
                                uint32_t v58 = sub_1E160();
                                sub_517F8(v48, (int)(v58 * v38), SOCK_STREAM);
                            }
                        }
                        ++v38;
                    }
                    while(v38 != ptr10);
                    int v59 = v39;
                    v12 = *(int*)&v1;
                    ptr5 = ptr8;
                    if(*ptr4 > 3) {
                        goto loc_34608;
                    }
                    else {
                        goto loc_344E4;
                    }
                }
                if(*ptr4 <= 3) {
                    v5 = v12;
                    v59 = 0;
                    goto loc_345BC;
                }
                else {
                    v59 = 0;
                    v37 = 0;
                loc_34608:
                    __int128 v60 = (unsigned __int128)(v60 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v59 << 96);
                    int v61 = v14;
                    VCVT.F32.S32((uint32_t)(v60 >>> 0x60X), (uint32_t)(v60 >>> 0x60X));
                    *(int*)&v0 = v59;
                    int v62 = v61;
                    v14 = v61 + SOCK_STREAM;
                    VDIV.F32((uint32_t)(v60 >>> 0x40X), (uint32_t)(v60 >>> 0x60X), 1178476544);
                    VCVT.F64.F32((uint64_t)(v60 >>> 0x40X), (uint32_t)(v60 >>> 0x40X));
                    int64_t v63 = (uint64_t)(v60 >>> 0x40X);
                    snprintf(&__ptr1, 0x800, "chain %d, bad core num %8d, rate = %.2f ========================round %d", v12, *(int*)&v0, v63, v62);
                    sub_2E584(3, &__ptr1, 0);
                loc_344E4:
                    if(v59 <= 155) {
                        goto loc_345AC;
                    }
                    else {
                        usleep(1000000);
                    }
                }
            }
            while((v14 <= SOCK_STREAM ? v37 & SOCK_STREAM: 0) != 0);
            v5 = v12;
            goto loc_340AC;
        loc_345AC:
            v5 = v12;
        loc_345BC:
            if(*ptr4 > 3) {
                snprintf(&__ptr1, 0x800, "bad count is acceptable = %d", v59);
                sub_2E584(3, &__ptr1, 0);
            }
            usleep(1000000);
        }
    loc_340AC:
        ++v5;
        v6 += 0x100;
    }
    while(v5 != 4);
    *ptr0 = 0;
    sub_162B0();
    return result;
}
