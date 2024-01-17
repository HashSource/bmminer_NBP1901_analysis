uint32_t sub_1AD08(int param0, char* param1, uint32_t param2) {
    int v0;
    int v1;
    short v2;
    __int128 v3;
    char v4;
    char v5;
    __int128 v6;
    char __s;
    int __ptr1;
    int v7;
    int64_t v8 = (uint64_t)v6;
    int64_t v9 = (uint64_t)(v6 >>> 0x40X);
    int v10 = param0;
    uint32_t v11 = param2;
    char* ptr0 = param1;
    size_t __nmemb = 0;
    int v12 = 0;
    uint32_t result = 0;
    __int128 v13 = (unsigned __int128)(uint64_t)v6 | ((unsigned __int128)v7 << 64) | ((unsigned __int128)(uint32_t)(v6 >>> 0x60X) << 96);
    int v14 = 0;
    memset(&__s, 0, 0x1000);
    int v15 = 0;
    int __base = 0;
    int v16 = 0;
    int v17 = -1;
    int v18 = -1;
    int v19 = -1;
    int v20 = 0;
    int v21 = -1;
    int v22 = 0;
    int v23 = 0;
    int v24 = 0;
    int v25 = 0;
    int v26 = 0;
    int v27 = 0;
    do {
        int v28 = sub_1E29C(v12);
        if(v28 != 0) {
            int v29 = v12 * 0x400;
            int v30 = v12 * 4;
            uint32_t v31 = (uint32_t)(v29 + v10);
            sub_19D70(v31, (int*)(v30 + (int)&v21), (int*)(v30 + (int)&v15), &v14);
            uint32_t v32 = result;
            uint32_t v33 = *(uint32_t*)(v12 * 4 + (int)&v15);
            int v34 = *(int*)(v12 * 4 + (int)&v21);
            int* ptr1 = (int*)(__nmemb * 4 + (int)&__s);
            ++__nmemb;
            if(v32 >= v33) {
                v33 = v32;
            }
            *(ptr1 - 516) = v34;
            result = v33;
            uint32_t v35 = sub_1E0F0();
            if(v35 != 0) {
                uint32_t v36 = v35 * 4 + v31;
                int v37 = *(int*)(v12 * 4 + (int)&v21);
                int* ptr2 = (int*)(v29 + (int)&__s);
                do {
                    int v38 = *(int*)v31;
                    v31 += 4;
                    *ptr2 = v38 - v37;
                    ++ptr2;
                }
                while(v36 != v31);
            }
            if(gvar_7EDC8 == 2) {
                *(uint32_t*)((int)&gvar_7F8C4 + v30) = gvar_482A6C;
            }
            int v39 = v14;
            uint32_t v40 = sub_1E0F0();
            int v41 = sub_5F880(v39, (int)v40);
            *(uint32_t*)((int)&gvar_7F8E0 + v30) = (uint32_t)v41;
        }
        ++v12;
    }
    while(v12 != 4);
    qsort(&__base, __nmemb, 4, &sub_19D60);
    int v42 = (int)ptr0;
    __int128 v43 = (unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)__base << 96);
    VCVT.F32.U32(v7, (uint32_t)(v43 >>> 0x60X));
    sub_1A470(0xFF, v42, v11);
    if(result != __base) {
        if(__nmemb > SOCK_STREAM) {
            void* ptr3 = &__base;
            int v44 = SOCK_STREAM;
            do {
                int v45 = 0;
                do {
                    int v46 = sub_1E29C(v45);
                    if(v46 != 0) {
                        char* ptr4 = *(char**)((int)ptr3 + 4);
                        if(*(int*)(v45 * 4 + (int)&v21) >= (uint32_t)ptr4) {
                            int v47 = *(int*)ptr3;
                            *(uint32_t*)&v4 = v11;
                            v7 = (uint32_t)(v13 >>> 0x40X);
                            sub_1AAE4(v45, v42, v47, ptr4, v4);
                        }
                    }
                    ++v45;
                }
                while(v45 != 4);
                ++v44;
                ptr3 = (int)ptr3 + 4;
            }
            while(v44 != __nmemb);
        }
        int v48 = 0;
        int v49 = &v5;
        do {
            int v50 = sub_1E29C(v48);
            if(v50 != 0) {
                v13 = (unsigned __int128)(uint32_t)v13 | ((unsigned __int128)*(int*)(v48 * 4 + (int)&v21) << 32) | ((unsigned __int128)(uint64_t)(v13 >>> 0x40X) << 64);
                if((uint32_t)(v13 >>> 0x20X) != *(int*)(v48 * 4 + (int)&v15)) {
                    if(gvar_7EB9C > 3) {
                        VCVT.F64.F32((uint64_t)(v43 >>> 0x40X), (uint32_t)(v13 >>> 0x40X));
                        *(int*)&v4 = (uint32_t)(v13 >>> 0x20X);
                        int64_t v51 = (uint64_t)(v43 >>> 0x40X);
                        snprintf(&__ptr1, 0x800, "chain = %d, start = %d, freq_step = %.2f\n", v48, *(int*)&v4, v51);
                        sub_2E584(3, &__ptr1, 0);
                    }
                    uint32_t __nmemb1 = sub_1E0F0();
                    void* __ptr = calloc(__nmemb1, 8);
                    if(__ptr != 0) {
                        int v52 = 0;
                        int* ptr5 = (int*)(v48 * 0x400 + (int)&__s);
                        __ptr1 = 0;
                        v0 = 0;
                        uint32_t v53 = sub_1E0E0();
                        if(v53 != 0) {
                            v10 = v48;
                            do {
                                uint32_t v54 = sub_1E100();
                                if(v54 != 0) {
                                    int v55 = 0;
                                    do {
                                        uint32_t v56 = sub_1E100();
                                        uint32_t v57 = v56 * v52 + v55;
                                        ++v55;
                                        *((int*)(v57 * 8 + (int)__ptr) + SOCK_STREAM) = *(int*)(v57 * 4 + (int)ptr5);
                                        *(uint32_t*)(v57 * 8 + (int)__ptr) = v57;
                                    }
                                    while(v54 != v55);
                                }
                                int v58 = v52 * 8;
                                ++v52;
                                uint32_t v59 = sub_1E100();
                                uint32_t __nmemb2 = sub_1E100();
                                qsort((void*)(v59 * v58 + (int)__ptr), __nmemb2, 8, &sub_19D40);
                            }
                            while(v52 != v53);
                            v48 = v10;
                        }
                        uint32_t v60 = sub_1E0F0();
                        uint32_t v61 = v60;
                        char v62 = v60 >= 0x80000000;
                        char v63 = v60 == 0;
                        char v64 = 0;
                        char v65 = SOCK_STREAM;
                        __int128 v66 = v43 & 0xFFFFFFFF00000000FFFFFFFFFFFFFFFFX;
                        if(v60 != 0) {
                            int* ptr6 = (int*)(v61 * 4 + (int)ptr5);
                            do {
                                v66 = (unsigned __int128)(v66 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*ptr5 << 96);
                                ++ptr5;
                                VCVT.F32.U32((uint32_t)(v66 >>> 0x60X), (uint32_t)(v66 >>> 0x60X));
                                VCMP.F32((uint32_t)(v66 >>> 0x60X), (uint32_t)(v66 >>> 0x40X));
                                VMRS((uint8_t)v64 | ((uint8_t)v65 << SOCK_STREAM) | ((uint8_t)v63 << 2) | ((uint8_t)v62 << 3), v1);
                                if((v63 == 0 && v64 == v62)) {
                                    VMOVGT.F32((uint32_t)(v66 >>> 0x40X), (uint32_t)(v66 >>> 0x60X));
                                }
                                v62 = (int)ptr6 < (int)ptr5;
                                v63 = ptr6 == ptr5;
                                v64 = (int)(int*)((int)(int*)((int)(int*)((int)ptr6 - (int)ptr5) ^ (int)ptr6) & (int)(int*)((int)ptr6 ^ (int)ptr5)) < 0;
                                v65 = ptr6 >= ptr5;
                            }
                            while(ptr6 != ptr5);
                        }
                        v43 = (unsigned __int128)((unsigned __int128)(uint64_t)v66 | ((unsigned __int128)((uint32_t)(v13 >>> 0x40X) + (uint32_t)(v66 >>> 0x40X)) << 64)) | ((unsigned __int128)((uint32_t)(v13 >>> 0x40X) + (uint32_t)(v66 >>> 0x40X) + 1.0) << 96);
                        VDIV.F32((uint32_t)(v43 >>> 0x40X), (uint32_t)(v43 >>> 0x60X), (uint32_t)(v13 >>> 0x40X));
                        VCVT.U32.F32((uint32_t)(v43 >>> 0x60X), (uint32_t)(v43 >>> 0x40X));
                        int v67 = (uint32_t)(v43 >>> 0x60X);
                        if((uint32_t)(v43 >>> 0x60X) != 0) {
                            int v68 = v49;
                            int v69 = 0;
                            do {
                                int v70 = v69 + SOCK_STREAM;
                                ++v69;
                                v43 = (unsigned __int128)(v43 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v70 << 96);
                                VCVT.F32.U32((uint32_t)v13, (uint32_t)(v43 >>> 0x60X));
                                uint32_t v71 = sub_1E100();
                                v10 = v71;
                                VMUL.F32((uint32_t)v13, (uint32_t)v13, (uint32_t)(v13 >>> 0x40X));
                                if(v71 != 0) {
                                    int v72 = 0;
                                    __useconds_t v73 = &loc_186A0;
                                    do {
                                        uint32_t v74 = sub_1E0E0();
                                        uint32_t v75 = v74;
                                        v62 = v74 >= 0x80000000;
                                        v63 = v74 == 0;
                                        v64 = 0;
                                        v65 = SOCK_STREAM;
                                        if(v75 != 0) {
                                            int v76 = 0;
                                            do {
                                                uint32_t v77 = sub_1E100();
                                                short v78 = (uint16_t)*(int*)((v77 * v76 + v72) * 8 + (int)__ptr);
                                                uint32_t v79 = sub_1E100();
                                                v43 = (unsigned __int128)(v43 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*((int*)((v79 * v76 + v72) * 8 + (int)__ptr) + SOCK_STREAM) << 96);
                                                VCVT.F32.U32((uint32_t)(v43 >>> 0x60X), (uint32_t)(v43 >>> 0x60X));
                                                VCMPE.F32((uint32_t)v13, (uint32_t)(v43 >>> 0x60X));
                                                VMRS((uint8_t)v64 | ((uint8_t)v65 << SOCK_STREAM) | ((uint8_t)v63 << 2) | ((uint8_t)v62 << 3), v1);
                                                if((v63 == 0 && v64 == v62)) {
                                                    v43 = (unsigned __int128)(uint64_t)v43 | ((unsigned __int128)((uint32_t)v13 + (uint32_t)(v43 >>> 0x60X)) << 64) | ((unsigned __int128)(uint32_t)(v43 >>> 0x60X) << 96);
                                                    VCMPE.F32((uint32_t)(v13 >>> 0x40X), (uint32_t)(v43 >>> 0x40X));
                                                    VMRS((uint8_t)v64 | ((uint8_t)v65 << SOCK_STREAM) | ((uint8_t)v63 << 2) | ((uint8_t)v62 << 3), v1);
                                                    if((v65 != 0 && v63 == 0)) {
                                                        goto loc_1B064;
                                                    }
                                                }
                                                else {
                                                loc_1B064:
                                                    VCVT.F32.U32(v7, (uint32_t)(v13 >>> 0x20X));
                                                    VCMPE.F32((uint32_t)v13, (uint32_t)(v43 >>> 0x60X));
                                                    int v80 = v68;
                                                    VMRS((uint8_t)v64 | ((uint8_t)v65 << SOCK_STREAM) | ((uint8_t)v63 << 2) | ((uint8_t)v62 << 3), v1);
                                                    if(v62 == 0) {
                                                        VADDPL.F32(v7, (uint32_t)(v43 >>> 0x60X), v7);
                                                    }
                                                    else {
                                                        VADDMI.F32(v7, (uint32_t)v13, v7);
                                                    }
                                                    sub_502C0((int)&__ptr1, v80, 0);
                                                    v0 = (uint32_t)(uint16_t)v0 | ((uint32_t)v5 << 16) | ((uint32_t)(uint8_t)(v0 >>> 24) << 24);
                                                    uint32_t v81 = sub_1E160();
                                                    *(int*)&v4 = __ptr1;
                                                    *(int*)&v2 = v0;
                                                    sub_1F164(v48, 0, (int)((uint8_t)v81 * (uint8_t)v78), ptr0, *(int*)&v4, v2);
                                                }
                                                ++v76;
                                                v62 = v76 > (int)v75;
                                                v63 = v76 == v75;
                                                v64 = (((v75 - v76) ^ v75) & (v76 ^ v75)) < 0;
                                                v65 = v76 <= v75;
                                            }
                                            while(v76 != v75);
                                        }
                                        ++v72;
                                        usleep(&loc_186A0);
                                    }
                                    while(v72 != v10);
                                }
                            }
                            while(v69 != v67);
                        }
                        free(__ptr);
                    }
                    else if(gvar_7EB9C > 3) {
                        __ptr1 = 1818845542;
                        v0 = 1629512805;
                        int v82 = 0x636f6c6c;
                        int v83 = 0x6d656d20;
                        int v84 = 0x2179726f;
                        short v85 = 10;
                        sub_2E584(3, &__ptr1, 0);
                    }
                }
            }
            ++v48;
        }
        while(v48 != 4);
    }
    return result;
}
