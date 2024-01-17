int sub_271E8(int param0, int param1) {
    char v0;
    char __dest;
    int __ptr1_1;
    int v1;
    char v2;
    __int128 v3;
    char v4;
    char v5;
    char v6;
    int v7;
    int64_t v8;
    *(int*)&v6 = 0;
    prctl(PR_SET_NAME, "tuning_freq");
    uint32_t v9 = sub_31D38();
    while(v9 != 2) {
        sub_304D4(1000);
        v9 = sub_31D38();
    }
    while(SOCK_STREAM) {
        pthread_mutex_lock(&g7FA44);
        uint32_t v10 = sub_19AB4();
        uint32_t v11 = gvar_482A8C;
        if(v10 == v11) {
            goto loc_27274;
        }
        else {
            pthread_mutex_unlock(&g7FA44);
            sub_304D4(1000);
        }
    }
loc_27274:
    int v12 = gvar_7EB78;
    char* ptr0 = (char*)&gvar_7EB78;
    gvar_7EB78 = 0;
    *(int*)&v2 = v12;
    pthread_mutex_unlock(&g7FA44);
    sub_304D4(60000);
    if(gvar_7EB9C > 3) {
        int v13 = 2676;
        int __ptr1 = 1768846708;
        int v14 = 0x6620676e;
        int v15 = 544302450;
        int v16 = 1918989427;
        short v17 = (uint16_t)v13;
        char v18 = (uint8_t)(v13 >>> 16);
        sub_2E584(3, &__ptr1, 0);
    }
    int* ptr1 = (int*)&gvar_7EB68;
    int* ptr2 = (int*)&gvar_482A6C;
    sub_27058();
    int v19 = (int)gvar_482A6C;
    if((int)gvar_7EB68 > 0) {
        int* ptr3 = (int*)&gvar_7EB6C;
        int v20 = (int)&__ptr1;
        int* ptr4 = &v0;
        int* ptr5 = &v4;
        uint32_t v21 = gvar_7EB9C;
        int v22 = 0;
        int v23 = v19;
        uint32_t* ptr6 = &gvar_7EDD0;
        int v24 = 0;
        int v25 = 180000000;
        __int128 v26 = (unsigned __int128)v8 | ((unsigned __int128)0x3fef5c28f5c28f5cL << 64);
        if(v21 > 3) {
            goto loc_27518;
        }
    }
    else {
        v23 = v19;
        ptr4 = &v0;
        int v27 = 0;
        ptr5 = &v4;
        goto loc_276A4;
    loc_27334:
        do {
            uint32_t* ptr7 = ptr6;
            int v28 = 0;
            do {
                int v29 = sub_1E29C(v28);
                if(v29 != 0) {
                    uint32_t v30 = *ptr7;
                    int v31 = gvar_482A70;
                    *(int*)&v6 = 0;
                    sub_1AAE4(v28, v31, v19, (char*)v23, 0);
                }
                ++v28;
            }
            while(v28 != 4);
            int v32 = 0;
            memcpy(&__dest, &gvar_81128, 0x1000);
            sub_304D4(&loc_2BF20);
            do {
                int v33 = sub_1E29C(v32);
                if(v33 != 0) {
                    uint32_t v34 = sub_1E0F0();
                    if((int)v34 > 0) {
                        int v35 = v32 * 0x100 + v34;
                        int v36 = v32 * 0x400;
                        uint32_t v37 = (uint32_t)(v35 * 4 + (int)&__dest);
                        uint32_t v38 = (uint32_t)(v36 + (int)&__dest);
                        char* ptr8 = (char*)(v36 + 0x81124);
                        int* ptr9 = (int*)(v36 + v20);
                        do {
                            int v39 = *(int*)v38;
                            v38 += 4;
                            int v40 = *(int*)(ptr8 + 4);
                            ptr8 += 4;
                            v10 = v38;
                            v11 = v37;
                            *ptr9 = v40 - v39;
                            ++ptr9;
                        }
                        while(v10 != v11);
                    }
                }
                ++v32;
            }
            while(v32 != 4);
            int v41 = v22;
            int v42 = 0;
            int* ptr10 = ptr4 - 8;
            sub_26BD4(v23, v20);
            do {
                int v43 = sub_1E29C(v42);
                if(v43 != 0) {
                    sub_26F7C(v42, v20);
                    VCVT.S32.F32((uint32_t)(v3 >>> 0x60X), v30);
                    int v44 = (uint32_t)(v3 >>> 0x60X);
                    *(int*)(v41 + (int)ptr10) = (uint32_t)(v3 >>> 0x60X);
                    uint32_t v45 = sub_1E0F0();
                    if((int)v45 <= 0) {
                        int v46 = 0;
                    }
                    else {
                        v46 = 0;
                        int v47 = 0;
                        int v48 = v20 - 4 + v42 * 0x400;
                        do {
                            ++v47;
                            ptr8 = *(uint32_t*)(v48 + 4);
                            v48 += 4;
                            v46 += ptr8;
                        }
                        while(v45 != v47);
                    }
                    uint32_t v49 = gvar_7EB9C;
                    *(int*)(v41 + (int)ptr5) = v46;
                    if(v49 > 3) {
                        int v50 = v46;
                        *(int*)&v6 = v44;
                        snprintf(&__ptr1_1, 0x800, "chain %d, nonce_stdev %d, nonce_num %d\n", v42, *(int*)&v6, v50);
                        sub_2E584(3, &__ptr1_1, 0);
                    }
                }
                ++v42;
                v41 += 60;
            }
            while(v42 != 4);
            uint32_t v51 = sub_1E0F0();
            uint32_t v52 = sub_1E130();
            int64_t v53 = v23 * v25;
            int v54 = (uint32_t)(((uint64_t)(uint32_t)v53 * v51) >>> 32L);
            uint32_t v55 = (uint32_t)((uint32_t)v53 * v51);
            uint32_t v56 = (v51 >> 31) * (uint32_t)v53 + (uint32_t)(v53 >>> 32L) * v51;
            int64_t v57 = v52 * v55;
            int v58 = sub_600B4((uint32_t)v57, (v56 + v54) * v52 + (v52 >> 31) * v55 + (uint32_t)(v57 >>> 32L));
            v3 = (unsigned __int128)(uint64_t)v3 | ((unsigned __int128)((uint64_t)v58 | ((uint64_t)param1 << 32)) << 64);
            uint32_t v59 = gvar_7EB9C;
            VMUL.F64((uint64_t)v26, (uint64_t)(v3 >>> 0x40X), 0x3db0000000000000L);
            VCVT.S32.F64((uint32_t)v26, (uint64_t)v26);
            *(int*)(v24 * 4 + (int)&v7) = (uint32_t)v26;
            if(v59 > 3) {
                snprintf(&__ptr1_1, 0x800, "ideal_nonce_num %d\n", (uint32_t)v26);
                sub_2E584(3, &__ptr1_1, 0);
            }
            int v60 = 0;
            int v61 = v22;
            int v62 = 0;
            int v63 = v23 - *ptr3;
            int* ptr11 = ptr4 - 8;
            do {
                int v64 = v62;
                ++v62;
                int v65 = sub_1E29C(v64);
                if(v65 != 0) {
                    int v66 = *(int*)((int)ptr11 + v61);
                    char v67 = v66 < 39;
                    char v68 = v66 == 39;
                    char v69 = (((v66 - 39) ^ v66) & (v66 ^ 0x27)) < 0;
                    char v70 = (uint32_t)v66 >= 39;
                    if(v66 <= 39) {
                        VCVT.F64.S32((uint64_t)(v3 >>> 0x40X), (uint32_t)v26);
                        int v71 = *(int*)(v61 + (int)ptr5);
                        VMUL.F64((uint64_t)(v3 >>> 0x40X), (uint64_t)(v3 >>> 0x40X), (uint64_t)(v26 >>> 0x40X));
                        int v72 = v71;
                        v3 = (unsigned __int128)(uint32_t)v3 | ((unsigned __int128)v71 << 32) | ((unsigned __int128)(uint64_t)(v3 >>> 0x40X) << 64);
                        VCVT.F64.S32((uint64_t)v3, (uint32_t)(v3 >>> 0x20X));
                        VCMPE.F64((uint64_t)v3, (uint64_t)(v3 >>> 0x40X));
                        VMRS((uint8_t)v69 | ((uint8_t)v70 << SOCK_STREAM) | ((uint8_t)v68 << 2) | ((uint8_t)v67 << 3), v1);
                        if((v68 == 0 && v69 == v67)) {
                            ++v60;
                        }
                    }
                }
                v61 += 60;
            }
            while(v62 != 4);
            int v73 = sub_1E28C();
            ++v24;
            if(v73 > v60) {
                if(*ptr1 > v24) {
                    v19 = v23;
                    v22 += 4;
                    if(v24 != 15) {
                        uint32_t v74 = gvar_7EB9C;
                        v23 = v63;
                        v10 = v74;
                        v11 = 3;
                        v67 = (int)v74 < 3;
                        v68 = v74 == 3;
                        v69 = (((v74 - 3) ^ v74) & (v74 ^ 0x3)) < 0;
                        v70 = v74 >= 3;
                        if(v70 == 0 || v68 != 0) {
                            goto loc_27334;
                        }
                        goto loc_27518;
                    }
                }
                v27 = v24;
                goto loc_276A4;
            }
            v27 = v24;
            if(gvar_7EB9C > 3) {
                __ptr1_1 = 543976545;
                int v75 = 1767991395;
                int v76 = 1970544750;
                int v77 = 0x20676e69;
                *(int*)&v5 = 0x656e6f64;
                short v78 = 10;
                sub_2E584(3, &__ptr1_1, 0);
            }
            goto loc_276A4;
        }
        while(SOCK_STREAM);
    loc_27518:
        v50 = v23;
        *(int*)&v6 = v19;
        snprintf(&__ptr1_1, 0x800, "level %d, freq_curr %d, freq_next %d\n", v24, *(int*)&v6, v50);
        sub_2E584(3, &__ptr1_1, 0);
    }
    goto loc_27334;
loc_276A4:
    v20 = v27 * 4;
    int v79 = 0;
    int* ptr12 = ptr5;
    int* ptr13 = ptr4 - 9;
    sub_1EAD4(0xFF);
    v22 = v23;
    do {
        int v80 = sub_1E29C(v79);
        if(v80 != 0) {
            ptr8 = v27 - SOCK_STREAM;
            if((int)ptr8 > -1) {
                int v81 = 0x7fffffff;
                int* ptr14 = (int*)((int)ptr13 + v20);
                int* ptr15 = ptr13;
                do {
                    int v82 = *(ptr15 + SOCK_STREAM);
                    ++ptr15;
                    if(v81 >= v82) {
                        v81 = v82;
                    }
                }
                while(ptr14 != ptr15);
                int* ptr16 = ptr13;
                char* ptr17 = NULL;
                __int128 v83 = (unsigned __int128)(v83 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v81 << 96);
            loc_2778C:
                do {
                    int v84 = *(ptr16 + SOCK_STREAM);
                    ++ptr16;
                    v67 = v84 < 39;
                    v68 = v84 == 39;
                    v69 = (((v84 - 39) ^ v84) & (v84 ^ 0x27)) < 0;
                    v70 = (uint32_t)v84 >= 39;
                    if(v84 <= 39) {
                        VCVT.F64.S32((uint64_t)(((unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*(int*)((int)(int*)((int)ptr17 * 4) + (int)&v7) << 96)) >>> 0x40X), *(int*)((int)(int*)((int)ptr17 * 4) + (int)&v7));
                        v3 = (unsigned __int128)(uint32_t)v3 | ((unsigned __int128)*(int*)((int)(int*)((int)ptr17 * 4) + (int)ptr12) << 32) | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*(int*)((int)(int*)((int)ptr17 * 4) + (int)&v7) << 96)) >>> 0x40X) << 64);
                        VMUL.F64((uint64_t)(v3 >>> 0x40X), (uint64_t)(v3 >>> 0x40X), 0x3fef5c28f5c28f5cL);
                        VCVT.F64.S32((uint64_t)v3, (uint32_t)(v3 >>> 0x20X));
                        VCMPE.F64((uint64_t)v3, (uint64_t)(v3 >>> 0x40X));
                        VMRS((uint8_t)v69 | ((uint8_t)v70 << SOCK_STREAM) | ((uint8_t)v68 << 2) | ((uint8_t)v67 << 3), v1);
                        if(v68 == 0 && v69 == v67) {
                            goto loc_27858;
                        }
                        else {
                            goto loc_277C0;
                        }
                    }
                    else {
                    loc_277C0:
                        VCVT.F64.S32((uint64_t)v3, (uint32_t)(v83 >>> 0x60X));
                        v3 = (unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v84 << 96);
                        VCVT.F64.S32((uint64_t)(v3 >>> 0x40X), (uint32_t)(v3 >>> 0x60X));
                        VMUL.F64((uint64_t)v3, (uint64_t)v3, 0x3ff4000000000000L);
                        VCMPE.F64((uint64_t)(v3 >>> 0x40X), (uint64_t)v3);
                        VMRS((uint8_t)v69 | ((uint8_t)v70 << SOCK_STREAM) | ((uint8_t)v68 << 2) | ((uint8_t)v67 << 3), v1);
                        if(v67 != 0) {
                            VCVT.F64.S32((uint64_t)(((unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*(int*)((int)(int*)((int)ptr17 * 4) + (int)&v7) << 96)) >>> 0x40X), *(int*)((int)(int*)((int)ptr17 * 4) + (int)&v7));
                            v3 = (unsigned __int128)(uint32_t)v3 | ((unsigned __int128)*(int*)((int)(int*)((int)ptr17 * 4) + (int)ptr12) << 32) | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*(int*)((int)(int*)((int)ptr17 * 4) + (int)&v7) << 96)) >>> 0x40X) << 64);
                            VMUL.F64((uint64_t)(v3 >>> 0x40X), (uint64_t)(v3 >>> 0x40X), 0x3fef5c28f5c28f5cL);
                            VCVT.F64.S32((uint64_t)v3, (uint32_t)(v3 >>> 0x20X));
                            VCMPE.F64((uint64_t)v3, (uint64_t)(v3 >>> 0x40X));
                            VMRS((uint8_t)v69 | ((uint8_t)v70 << SOCK_STREAM) | ((uint8_t)v68 << 2) | ((uint8_t)v67 << 3), v1);
                            if((v68 == 0 && v69 == v67)) {
                            loc_27858:
                                ptr8 = ptr17;
                                goto loc_27824;
                            }
                        }
                        ++ptr17;
                        if(ptr17 != v27) {
                            goto loc_2778C;
                        }
                        goto loc_27824;
                    }
                }
                while(SOCK_STREAM);
            loc_27824:
            }
            char* ptr18 = (char*)(*ptr2 - (int)(int*)(gvar_7EB6C * (int)ptr8));
            if(gvar_7EB9C > 3) {
                v50 = ptr18;
                *(char**)&v6 = ptr8;
                snprintf(&__ptr1_1, 0x800, "chain %d best level %d, best freq %d\n", v79, *(int*)&v6, v50);
                sub_2E584(3, &__ptr1_1, 0);
            }
            int v85 = gvar_482A70;
            *(int*)&v6 = 0;
            sub_1AAE4(v79, v85, v22, ptr18, 0);
        }
        ++v79;
        ptr12 += 15;
        ptr13 += 15;
    }
    while(v79 != 4);
    uint32_t v86 = gvar_7EB9C;
    *ptr0 = v2;
    if(v86 > 3) {
        __ptr1_1 = 1768846708;
        v75 = 0x6620676e;
        v76 = 544302450;
        v77 = 0xa646e65;
        v5 = 0;
        sub_2E584(3, &__ptr1_1, 0);
    }
    return 0;
}
