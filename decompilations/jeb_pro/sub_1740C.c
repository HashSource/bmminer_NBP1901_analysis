int sub_1740C(int param0, void* param1) {
    uint32_t v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    size_t __n2;
    int v26;
    void* ptr0;
    int v27;
    char __src1;
    int v28;
    int v29;
    char v30;
    uint8_t v31;
    char __src;
    char __dest1;
    char v32;
    uint8_t v33;
    uint8_t v34;
    char v35;
    uint8_t v36;
    char __s;
    char __dest;
    char v37;
    char __s1;
    int __ptr1;
    int v38;
    char v39;
    int v40;
    __int128 v41;
    char v42;
    int v43;
    char v44;
    short v45;
    char v46;
    int v47;
    short v48;
    int v49;
    int v50 = param0;
    void* ptr1 = param1;
    void* ptr2 = param1;
    memset(&__s, 0, 0x100);
    memset(&__s1, 0, 0x100);
    char* ptr3 = *(uint32_t*)(v50 * 4 + (int)ptr1);
    int v51 = 3;
    do {
        int v52 = sub_44358(v50, 0, (int)&__s, 0x100);
        int v53 = v52;
        int __c = v52;
        param1 = &__s;
        char* ptr4 = (char*)v50;
        if(v53 != 0) {
            if(gvar_7EB9C > 3) {
                snprintf(&__ptr1, 0x800, "Read configuration fail for chain %d.\n", v50);
                sub_2E584(3, &__ptr1, 0);
            }
            return __c;
        }
        sub_17244(ptr4, (uint32_t)&__s, 0x100);
        memset(&__dest, __c, 0x100);
        int v54 = v34;
        int v55 = v54 + 5;
        size_t __n1 = (size_t)(v54 - 2);
        size_t __n = (size_t)(v55 & 0xfffffff8);
        int v56 = (int)__n > 254;
        if((uint8_t)__n1 > 253) {
            v56 |= SOCK_STREAM;
        }
        if(v56 != 0 && gvar_7EB9C <= 3) {
            goto loc_174E0;
        }
        else if(v56 != 0) {
            __builtin_strcpy(&__ptr1, "EEPROM info error!, -1");
            sub_2E584(3, &__ptr1, __c);
            goto loc_175B8;
        }
        else {
            v26 = __s;
        }
        if((v26 >>> 4 == SOCK_STREAM && (v26 & 0xf) == SOCK_STREAM) != 0) {
            memcpy(&__dest, &__src, __n);
            sub_18E48((int)&__dest, (int)__n, __c);
            short v57 = *(short*)&__s;
            *(short*)&__s1 = *(short*)&__s;
            memcpy(&__dest1, &__dest, __n1);
            int v58 = (uint32_t)(uint8_t)(*ptr3 & 0xf) | ((uint32_t)(uint8_t)((v57 >>> 4) & 0xf) << 4) | ((uint32_t)0 << 8);
            *ptr3 = (uint8_t)v58;
            *ptr3 = (uint8_t)((uint32_t)(uint8_t)(__s1 & 0xf) | ((uint32_t)((v58 >>> 4) & 0xfffffff) << 4));
            *(ptr3 + SOCK_STREAM) = v35;
            int v59 = __dest1;
            uint32_t v60 = (uint32_t)(v59 - SOCK_STREAM);
            *(ptr3 + 2) = (uint8_t)v59;
            if(v59 - SOCK_STREAM > SOCK_STREAM) {
                if(v59 != 3) {
                    if(v59 == 4) {
                        __n2 = 9;
                        v25 = 81;
                        goto loc_17B34;
                    }
                    else if(gvar_7EB9C <= 3) {
                        return -1;
                    }
                    else {
                        __ptr1 = 1936287828;
                        v24 = 0x544d4620;
                        v23 = 544434464;
                        *(int*)&v48 = 544501614;
                        v22 = 0x70707573;
                        *(int*)&v44 = 1702130287;
                        *(short*)&v42 = 2660;
                        char v61 = 0;
                        sub_2E584(3, &__ptr1, 0);
                        v0 = gvar_7EB9C;
                    loc_174F4:
                        if(v0 > 3) {
                            snprintf(&__ptr1, 0x800, "Data load fail for chain %d.\n", v50);
                            sub_2E584(3, &__ptr1, 0);
                        }
                        return -1;
                    }
                }
                __n2 = 9;
                v25 = 73;
            loc_17B34:
                v21 = 66;
                v20 = 67;
                v19 = v25;
                v18 = 64;
                v17 = 65;
                v16 = 60;
                v15 = 62;
                v14 = 53;
                v13 = 56;
                v12 = 58;
                v11 = 45;
                v10 = 54;
                v9 = 55;
                v8 = SOCK_STREAM;
                v7 = 52;
                v6 = 51;
                v5 = 46;
                v4 = 50;
            }
            else {
                v21 = 61;
                v20 = 62;
                v18 = 59;
                v17 = 60;
                __n2 = 4;
                v16 = 55;
                v15 = 57;
                v11 = 40;
                v13 = 51;
                v12 = 53;
                v8 = SOCK_STREAM;
                v10 = 49;
                v9 = 50;
                v19 = 65;
                v7 = 47;
                v6 = 46;
                v14 = 48;
                v5 = 41;
                v4 = 45;
            }
            void* ptr5 = calloc(18, 1);
            int v62 = (int)ptr5;
            *(void**)(ptr3 + 3) = ptr5;
            if(ptr5 == 0) {
                if(gvar_7EB9C <= 3) {
                    v8 = v62;
                }
                else {
                    v8 = 0;
                    __ptr1 = 0x6f636544;
                    v24 = 0x53206564;
                    v23 = 1330585678;
                    v48 = 2637;
                    char v63 = 0;
                    sub_2E584(3, &__ptr1, v62);
                    v62 = *(int*)(ptr3 + 3);
                }
            }
            int v64 = v27;
            int v65 = v49;
            int v66 = v47;
            *(int*)v62 = v29;
            *(int*)(v62 + 4) = v64;
            *(int*)(v62 + 8) = v65;
            *(int*)(v62 + 12) = v66;
            *(char*)(v62 + 16) = v46;
            void* ptr6 = calloc(3, 1);
            int v67 = (int)ptr6;
            *(void**)(ptr3 + 7) = ptr6;
            if(ptr6 == 0) {
                v8 = 0;
                if(gvar_7EB9C > 3) {
                    __ptr1 = 0x6f636544;
                    v24 = 0x43206564;
                    v23 = 544237928;
                    *(int*)&v48 = 0x20656944;
                    v22 = 0xa4d4f4f;
                    v44 = 0;
                    sub_2E584(3, &__ptr1, v67);
                    v67 = *(int*)(ptr3 + 7);
                }
            }
            *(short*)v67 = v45;
            void* ptr7 = calloc(14, 1);
            int v68 = (int)ptr7;
            *(void**)(ptr3 + 11) = ptr7;
            if(ptr7 == 0) {
                v8 = 0;
                if(gvar_7EB9C > 3) {
                    __ptr1 = 0x6f636544;
                    v24 = 0x43206564;
                    v23 = 544237928;
                    *(int*)&v48 = 1802658125;
                    v22 = 0x20676e69;
                    *(int*)&v44 = 0xa4d4f4f;
                    v42 = 0;
                    sub_2E584(3, &__ptr1, v68);
                    v68 = *(int*)(ptr3 + 11);
                }
            }
            int v69 = v38;
            int v70 = v40;
            *(int*)v68 = v43;
            *(int*)(v68 + 8) = v69;
            *(int*)(v68 + 4) = v70;
            *(char*)(v68 + 12) = v32;
            int v71 = (uint32_t)*(ptr3 + 2) - SOCK_STREAM;
            *(ptr3 + 15) = v30;
            if(v71 > SOCK_STREAM) {
                void* ptr8 = calloc(__n2 + SOCK_STREAM, 1);
                void* __dest2 = ptr8;
                *(void**)(ptr3 + 16) = ptr8;
                if(ptr8 == 0) {
                    v8 = 0;
                    if(gvar_7EB9C > 3) {
                        __ptr1 = 0x6f636544;
                        v24 = 0x43206564;
                        v23 = 544237928;
                        *(int*)&v48 = 0x50205446;
                        v22 = 0x72676f72;
                        *(int*)&v44 = 1444965729;
                        *(int*)&v42 = 1769173605;
                        *(int*)&v39 = 1327525487;
                        v3 = 675151;
                        sub_2E584(3, &__ptr1, (int)__dest2);
                        __dest2 = *(void**)(ptr3 + 16);
                    }
                }
                memcpy(__dest2, &__src1, __n2);
            }
            else {
                size_t __maxlen = __n2 + 6;
                *(int*)&__dest = 0;
                int v72 = 0;
                int v73 = 0;
                int v74 = 0;
                void* ptr9 = calloc(__n2 + 6, 1);
                char* __s2 = (char*)ptr9;
                *(void**)(ptr3 + 16) = ptr9;
                if(ptr9 == 0) {
                    v8 = 0;
                    if(gvar_7EB9C > 3) {
                        __ptr1 = 0x6f636544;
                        v24 = 0x43206564;
                        v23 = 544237928;
                        *(int*)&v48 = 0x50205446;
                        v22 = 0x72676f72;
                        *(int*)&v44 = 1444965729;
                        *(int*)&v42 = 1769173605;
                        *(int*)&v39 = 1327525487;
                        v3 = 675151;
                        sub_2E584(3, &__ptr1, (int)__s2);
                        __s2 = *(char**)(ptr3 + 16);
                    }
                }
                memcpy(&__dest, &__src1, __n2);
                int v75 = v31;
                v2 = v36;
                v1 = v33;
                snprintf(__s2, __maxlen, "F%dV%02dB%dC%d", __dest, v2, v1, v75);
            }
            *(ptr3 + 20) = (uint8_t)((uint32_t)(uint8_t)(*(char*)(v11 + (int)&__s1) & 0x7f) | ((uint32_t)(((uint32_t)*(ptr3 + 20) >>> 7) & 0x1ffffff) << 7));
            *(ptr3 + 20) = (uint8_t)(*(ptr3 + 20) & 0x7f) | ((uint8_t)(*(char*)(v11 + (int)&__s1) < 0) << 7);
            void* ptr10 = calloc(5, 1);
            int v76 = (int)ptr10;
            *(void**)(ptr3 + 21) = ptr10;
            if(ptr10 == 0) {
                v8 = 0;
                if(gvar_7EB9C > 3) {
                    __ptr1 = 0x6f636544;
                    v24 = 0x61206564;
                    v23 = 543385971;
                    *(int*)&v48 = 1684956531;
                    v22 = 1629516399;
                    *(int*)&v44 = 544367716;
                    *(int*)&v42 = 0xa4d4f4f;
                    v39 = 0;
                    sub_2E584(3, &__ptr1, v76);
                    v76 = *(int*)(ptr3 + 21);
                }
            }
            int v77 = v4;
            char* ptr11 = &v37 + v6;
            int v78 = v7;
            *(int*)v76 = *(int*)((int)&__s1 + v5);
            *(ptr3 + 25) = (uint8_t)((uint32_t)(uint8_t)(*(char*)(v77 + (int)&__s1) & 0x7f) | ((uint32_t)(((uint32_t)*(ptr3 + 25) >>> 7) & 0x1ffffff) << 7));
            *(ptr3 + 25) = (uint8_t)(*(ptr3 + 25) & 0x7f) | ((uint8_t)(*(char*)(v77 + (int)&__s1) < 0) << 7);
            *(int*)(ptr3 + 26) = (uint32_t)*(ptr11 - 0xa00) | ((uint32_t)*(char*)(v78 + (int)&__s1) << 8) | ((uint32_t)*(char*)((int)&__s1 + v14) << 16) | ((uint32_t)*(char*)((int*)(&v37 + v10) - 640) << 24);
            *(ptr3 + 30) = *(char*)((int)&__s1 + v9);
            void* ptr12 = calloc(3, 1);
            int v79 = (int)ptr12;
            *(void**)(ptr3 + 31) = ptr12;
            if(ptr12 == 0) {
                v8 = 0;
                if(gvar_7EB9C > 3) {
                    __ptr1 = 0x6f636544;
                    v24 = 0x43206564;
                    v23 = 544237928;
                    *(int*)&v48 = 0x68636554;
                    v22 = 0x6f6c6f6e;
                    *(int*)&v44 = 1327528295;
                    *(int*)&v42 = 675151;
                    sub_2E584(3, &__ptr1, v79);
                    v79 = *(int*)(ptr3 + 31);
                }
            }
            int v80 = v21;
            int v81 = v20;
            int v82 = v18;
            *(short*)v79 = *(short*)((int)&__s1 + v13);
            int v83 = (uint32_t)*(short*)((int)&__s1 + v12);
            *(short*)(ptr3 + 35) = (uint16_t)(uint8_t)(v83 >>> 8) | ((uint16_t)(uint8_t)v83 << 8);
            int v84 = (uint32_t)*(short*)((int)&__s1 + v16);
            *(short*)(ptr3 + 37) = (uint16_t)(uint8_t)(v84 >>> 8) | ((uint16_t)(uint8_t)v84 << 8);
            int v85 = (uint32_t)*(short*)((int)&__s1 + v15);
            VCVT.F64.S32((uint64_t)(((unsigned __int128)(v41 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)((uint16_t)(uint8_t)(v85 >>> 8) | ((uint16_t)(uint8_t)v85 << 8)) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(v41 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)((uint16_t)(uint8_t)(v85 >>> 8) | ((uint16_t)(uint8_t)v85 << 8)) << 96)) >>> 0x60X));
            VDIV.F64((uint64_t)((unsigned __int128)(v41 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)((uint16_t)(uint8_t)(v85 >>> 8) | ((uint16_t)(uint8_t)v85 << 8)) << 96)), (uint64_t)(((unsigned __int128)(v41 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)((uint16_t)(uint8_t)(v85 >>> 8) | ((uint16_t)(uint8_t)v85 << 8)) << 96)) >>> 0x40X), 0x4059000000000000L);
            VCVT.F32.F64((uint32_t)((unsigned __int128)(v41 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)((uint16_t)(uint8_t)(v85 >>> 8) | ((uint16_t)(uint8_t)v85 << 8)) << 96)), (uint64_t)((unsigned __int128)(v41 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)((uint16_t)(uint8_t)(v85 >>> 8) | ((uint16_t)(uint8_t)v85 << 8)) << 96)));
            *(int*)(ptr3 + 39) = (uint32_t)((unsigned __int128)(v41 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)((uint16_t)(uint8_t)(v85 >>> 8) | ((uint16_t)(uint8_t)v85 << 8)) << 96));
            *(int*)(ptr3 + 43) = (uint32_t)*(char*)(v82 + (int)&__s1) | ((uint32_t)*(char*)((int*)(&v37 + v17) - 640) << 8) | ((uint32_t)*(char*)(v80 + (int)&__s1) << 16) | ((uint32_t)*(char*)(v81 + (int)&__s1) << 24);
            void* ptr13 = calloc(9, 1);
            v56 = ptr13;
            *(void**)(ptr3 + 47) = ptr13;
            if(ptr13 == 0) {
                v8 = &gvar_7EB9C;
                if(gvar_7EB9C > 3) {
                    __ptr1 = 0x6f636544;
                    v24 = 0x6d206564;
                    v23 = 0x72656e69;
                    *(int*)&v48 = 1887007776;
                    v22 = 1330585701;
                    *(short*)&v44 = 2637;
                    char v86 = 0;
                    sub_2E584(3, &__ptr1, v56);
                    v56 = *(int*)(ptr3 + 47);
                }
                v60 = &v37 + v19;
                param1 = ptr0;
                *(int*)v56 = v28;
                *(void**)(v56 + 4) = param1;
                *(ptr3 + 55) = *(char*)(v60 - 0xa00);
            }
            else {
                int v87 = v19;
                v53 = v8;
                if(v8 == 0) {
                    v8 = 60316;
                }
                char* ptr14 = v87 + &v37;
                int v88 = v28;
                param1 = ptr0;
                if(v53 == 0) {
                    v8 = (uint32_t)(uint16_t)v8 | ((uint32_t)7 << 16);
                }
                v60 = *(ptr14 - 0xa00);
                *(int*)v56 = v88;
                *(void**)(v56 + 4) = param1;
                *(ptr3 + 55) = (uint8_t)v60;
                if(v53 != 0) {
                    int v89 = sub_315EC((char*)&__s1, ((uint32_t)*(ptr3 + SOCK_STREAM) - SOCK_STREAM) * 8);
                    v0 = *(ptr3 + 55);
                    if(v89 == v0) {
                        *(char*)((int*)(v50 + (int)ptr2) + 4) = SOCK_STREAM;
                        return __c;
                    }
                    v8 = &gvar_7EB9C;
                    if(gvar_7EB9C <= 3) {
                        return -1;
                    }
                    v1 = v89;
                    v2 = (uint32_t)*(ptr3 + SOCK_STREAM);
                    snprintf(&__ptr1, 0x800, "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n", v0, v2, v1);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
            v0 = *(uint32_t*)v8;
            goto loc_174F4;
        }
        else if(gvar_7EB9C <= 3) {
            goto loc_174E0;
        }
        else {
            __builtin_strcpy(&__ptr1, "EEPROM info error!, -2");
            sub_2E584(3, &__ptr1, 0);
        loc_175B8:
            int v90 = v50;
            if(gvar_7EB9C > 3) {
                snprintf(&__ptr1, 0x800, "Data decode fail for chain %d.\n", v90);
                sub_2E584(3, &__ptr1, 0);
            }
        loc_174E0:
            usleep(500000);
            --v51;
        }
    }
    while(v51 != 0);
    v0 = gvar_7EB9C;
    goto loc_174F4;
}
