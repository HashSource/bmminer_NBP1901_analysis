int sub_34828(uint32_t param0, char* param1, uint32_t param2, uint32_t param3, int param4, uint32_t param5, uint32_t param6, uint32_t param7) {
    char* ptr0;
    char* __format;
    char* ptr2;
    int v0;
    uint32_t v1;
    int v2;
    uint32_t v3;
    int v4;
    int v5;
    size_t __n;
    uint32_t v6;
    char v7;
    char v8;
    int v9;
    int v10;
    int v11;
    char v12;
    short v13;
    __int128 v14;
    int __ptr1;
    int v15;
    uint32_t v16 = param0;
    char* ptr1 = param1;
    uint32_t v17 = param2;
    uint32_t v18 = param3;
    char* ptr3 = ptr1;
    uint32_t v19 = v17;
    uint32_t v20 = v18;
    uint32_t v21 = v16;
    char* ptr4 = ptr3;
    uint32_t v22 = v19;
    uint32_t v23 = v20;
    char* ptr5 = &v11;
    uint32_t v24 = param5;
    uint32_t v25 = param6;
    uint32_t v26 = param7;

    v11 = param4;
    uint32_t v27 = v24;
    uint32_t v28 = v25;
    uint32_t v29 = v26;
    char* ptr6 = ptr4;
    uint32_t v30 = v22;
    uint32_t v31 = v23;
    gvar_99EDB8 = v21;
    *(int*)&gvar_99EDBC = (uint8_t)ptr6;
    *(uint32_t*)&g99EDC0 = v30;
    gvar_99EDC4 = v31;
    uint32_t v32 = v27;
    param2 = v28;
    uint32_t v33 = v29;
    *(int*)&g99EDC8 = v11;
    gvar_99EDCC = v32;
    gvar_99EDD0 = param2;
    gvar_99EDD4 = v33;
    param1 = *(char*)&gvar_99EDB8;
    if(param1 == 81) {
        int v34 = sub_31590(&gvar_99EDB8, 30);
        param3 = *(short*)((char*)&gvar_99EDD4 + 2);
        if(v34 != param3 && gvar_7EB9C <= 4) {
            return 0;
        }
        else if(v34 != param3) {
            ptr0 = v34;
            __format = "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n";
            snprintf(&__ptr1, 0x800, __format, param3, ptr0);
            sub_2E584(4, &__ptr1, 0);
            return 0;
        }
        uint32_t v35 = gvar_7EB9C;
        char v36 = v35 >= 3;
        if(v36 != 0 && v35 != 3) {
            ptr5 = gvar_99EDC2;
            int v37 = (uint32_t)((gvar_99EDBC >>> SOCK_STREAM) & SOCK_STREAM);
            ptr0 = ptr5;
            snprintf(&__ptr1, 0x800, "fan_eft : %d  fan_pwm : %d\n", v37, ptr0);
            sub_2E584(3, &__ptr1, 0);
        }
        uint32_t v38 = gvar_7EDC8;
        if(v38 == 0) {
            int v39 = sub_362A0(161);
            int v40 = (uint32_t)(uint8_t)v39;
            do {
                int v41 = (int)v38;
                int v42 = (int)(uint8_t)v38;
                ++v38;
                int v43 = sub_1E29C(v41);
                if(v43 != 0) {
                    sub_5198C(v42, 81, (int)param2, (int)param3);
                }
            }
            while(v38 != 4);
            if(v40 != 0) {
                return 0;
            }
        }
        int v44 = sub_27A58();
        if((uint8_t)v44 == 0) {
            if(gvar_482A71 == 0 || (gvar_99EDBC & 0x10) == 0) {
                v9 = sub_31BAC();
                if(v9 > 0) {
                    gvar_482A8C = (uint32_t)v9;
                    goto loc_349C0;
                }
                else {
                    v8 = 0;
                    v7 = (uint8_t)v9 == 0;
                    if(v7 == 0) {
                        return 0;
                    }
                    goto loc_349EC;
                }
            }
            else {
                gvar_482A8C = (uint32_t)*(short*)((char*)&gvar_99EDC4 + 2);
                v9 = sub_31BAC();
                gvar_482A8C = (uint32_t)v9;
            loc_349C0:
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "fixed working voltage = %d\n", gvar_482A8C);
                    v9 = sub_2E584(3, &__ptr1, 0);
                }
            loc_349EC:
                int v45 = sub_33E34(v9, 81, param2);
                int v46 = (int)(uint8_t)v45;
                if(v46 == 0) {
                    if(gvar_482A71 == 0 || (gvar_99EDBC & 0x8) == 0) {
                        v6 = gvar_7EB9C;
                        __n = 200;
                        gvar_482A6C = 200;
                    }
                    else {
                        int v47 = 0;
                        int v48 = 0;
                        gvar_482A6C = (uint32_t)*(short*)&gvar_99EDC4;
                        do {
                            v46 = sub_1E29C(v48);
                            if(v46 != 0) {
                                v46 = sub_183FC(v48, gvar_80FB4, &v15);
                                if(v46 == 0) {
                                    int v49 = v15;
                                    if(v47 == 0) {
                                        v47 = v49;
                                    }
                                    else {
                                        v36 = (uint32_t)v49 <= (uint32_t)v47;
                                        if(v36 != 0) {
                                            v47 = v49;
                                        }
                                    }
                                }
                            }
                            ++v48;
                        }
                        while(v48 != 4);
                        v6 = gvar_7EB9C;
                        if(v6 > 3) {
                            snprintf(&__ptr1, 0x800, "min freq in eeprom = %d\n", v47);
                            v46 = sub_2E584(3, &__ptr1, 0);
                            v6 = gvar_7EB9C;
                        }
                        v8 = v47 < 0;
                        v7 = v47 == 0;
                        if(v47 != 0 && v7 == 0 && v8 == 0) {
                            gvar_482A6C = (uint32_t)v47;
                        }
                        else {
                            v8 = (int)v6 < 3;
                            if(v6 > 3) {
                                __ptr1 = 1818845542;
                                v5 = 1948279909;
                                v4 = 0x6f6c206f;
                                int v50 = 1713398881;
                                int v51 = 544302450;
                                int v52 = 1696624233;
                                int v53 = 0x6f727065;
                                int v54 = 1965042797;
                                int v55 = 0x676e6973;
                                int v56 = 0x66656420;
                                *(int*)&v13 = 'a';
                                ptr5 = &v12;
                                v12 = 0;
                                v46 = sub_2E584(3, &__ptr1, 0);
                            }
                            __n = 200;
                            v6 = gvar_7EB9C;
                            gvar_482A6C = 200;
                        }
                    }
                    if(v6 > 3) {
                        snprintf(&__ptr1, 0x800, "fixed frequency is %d\n", gvar_482A6C);
                        v46 = sub_2E584(3, &__ptr1, 0);
                    }
                    uint8_t v57 = *(int*)&gvar_80FB4;
                    if(v57 == 3) {
                        uint32_t v58 = gvar_482A8C;
                        uint32_t __s1 = sub_1E0C0();
                        int v59 = strcmp((char*)__s1, "NBS1902");
                        v8 = v59 < 0;
                        v7 = v59 == 0;
                        if(v59 == 0) {
                        loc_34DA4:
                            __int128 v60 = (unsigned __int128)(v14 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)gvar_482A8C << 96);
                            __int128 v61 = (unsigned __int128)(uint32_t)v60 | ((unsigned __int128)1063843267 << 32) | ((unsigned __int128)(uint64_t)(v60 >>> 0x40X) << 64);
                            __int128 v62 = (unsigned __int128)(uint64_t)v61 | ((unsigned __int128)0x44960000 << 64) | ((unsigned __int128)(uint32_t)(v61 >>> 0x60X) << 96);
                            VCVT.F32.S32((uint32_t)(v62 >>> 0x60X), (uint32_t)(v62 >>> 0x60X));
                            VMUL.F32((uint32_t)(v62 >>> 0x60X), (uint32_t)(v62 >>> 0x60X), (uint32_t)(v62 >>> 0x20X));
                            VCMPE.F32((uint32_t)(v62 >>> 0x60X), (uint32_t)(v62 >>> 0x40X));
                            VMRS((uint8_t)2 | ((uint8_t)v7 << 2) | ((uint8_t)v8 << 3), v10);
                            if(v8 == 0) {
                                VCVT.S32.F32((uint32_t)(v62 >>> 0x60X), (uint32_t)(v62 >>> 0x60X));
                                v3 = v62 >>> 0x60X;
                            }
                            else {
                                v3 = 1200;
                            }
                            uint32_t v63 = v58 - v3;
                            int64_t v64 = (int64_t)v63 * 0x66666667L;
                            v2 = v64 >>> 32L;
                            v46 = v64;
                            __int128 v65 = (unsigned __int128)(v62 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)gvar_482A6C << 96);
                            gvar_482A8C = v3;
                            v57 = *(int*)&gvar_80FB4;
                            VCVT.F64.U32((uint64_t)(v65 >>> 0x40X), (uint32_t)(v65 >>> 0x60X));
                            __n = (v2 >> 2) - (v63 >> 31);
                            VCVT.F64.S32((uint64_t)((unsigned __int128)(uint32_t)v65 | ((unsigned __int128)__n << 32) | ((unsigned __int128)(uint64_t)(v65 >>> 0x40X) << 64)), (uint32_t)(((unsigned __int128)(uint32_t)v65 | ((unsigned __int128)__n << 32) | ((unsigned __int128)(uint64_t)(v65 >>> 0x40X) << 64)) >>> 0x20X));
                            VMLS.F64((uint64_t)(((unsigned __int128)(uint32_t)v65 | ((unsigned __int128)__n << 32) | ((unsigned __int128)(uint64_t)(v65 >>> 0x40X) << 64)) >>> 0x40X), (uint64_t)((unsigned __int128)(uint32_t)v65 | ((unsigned __int128)__n << 32) | ((unsigned __int128)(uint64_t)(v65 >>> 0x40X) << 64)), 12.5);
                            VCVT.U32.F64((uint32_t)(((unsigned __int128)(uint32_t)v65 | ((unsigned __int128)__n << 32) | ((unsigned __int128)(uint64_t)(v65 >>> 0x40X) << 64)) >>> 0x40X), (uint64_t)(((unsigned __int128)(uint32_t)v65 | ((unsigned __int128)__n << 32) | ((unsigned __int128)(uint64_t)(v65 >>> 0x40X) << 64)) >>> 0x40X));
                            gvar_482A6C = (uint32_t)(((unsigned __int128)(uint32_t)v65 | ((unsigned __int128)__n << 32) | ((unsigned __int128)(uint64_t)(v65 >>> 0x40X) << 64)) >>> 0x40X);
                        }
                        else {
                            uint32_t __s1_1 = sub_1E0C0();
                            int v66 = strcmp((char*)__s1_1, "NBS1902L");
                            v8 = v66 < 0;
                            v7 = v66 == 0;
                            if(v66 == 0) {
                                goto loc_34DA4;
                            }
                            else {
                                uint32_t __s1_2 = sub_1E0C0();
                                int v67 = strcmp((char*)__s1_2, "NBT1903");
                                v8 = v67 < 0;
                                v7 = v67 == 0;
                                if(v67 == 0) {
                                    goto loc_34DA4;
                                }
                                uint32_t __s1_3 = sub_1E0C0();
                                int v68 = strcmp((char*)__s1_3, "NBP1901");
                                v8 = v68 < 0;
                                v7 = v68 == 0;
                                if(v68 == 0) {
                                loc_34FE8:
                                    __int128 v69 = (unsigned __int128)(v14 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)gvar_482A8C << 96);
                                    __int128 v70 = (unsigned __int128)(uint32_t)v69 | ((unsigned __int128)1063843267 << 32) | ((unsigned __int128)(uint64_t)(v69 >>> 0x40X) << 64);
                                    v14 = (unsigned __int128)(uint64_t)v70 | ((unsigned __int128)0x44960000 << 64) | ((unsigned __int128)(uint32_t)(v70 >>> 0x60X) << 96);
                                    VCVT.F32.S32((uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x60X));
                                    VMUL.F32((uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x20X));
                                    VCMPE.F32((uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x40X));
                                    VMRS((uint8_t)2 | ((uint8_t)v7 << 2) | ((uint8_t)v8 << 3), v10);
                                    if(v8 == 0) {
                                        VCVTPL.S32.F32((uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x60X));
                                        VMOVPL(param2, (uint32_t)(v14 >>> 0x60X));
                                    }
                                    else {
                                        v1 = 1200;
                                    }
                                    uint32_t v71 = gvar_482A6C;
                                    gvar_482A8C = v1;
                                    v46 = 10;
                                    v57 = *(int*)&gvar_80FB4;
                                    __n = v71 - (int)(v58 - v1) / 10 * 10;
                                    gvar_482A6C = v71 - (int)(v58 - v1) / 10 * 10;
                                }
                                else {
                                    uint32_t __s1_4 = sub_1E0C0();
                                    v46 = strcmp((char*)__s1_4, "NBP1901L");
                                    v8 = v46 < 0;
                                    v7 = v46 == 0;
                                    if(v46 == 0) {
                                        goto loc_34FE8;
                                    }
                                    else {
                                        v57 = *(int*)&gvar_80FB4;
                                    }
                                }
                            }
                        }
                    }
                    if(v57 == SOCK_STREAM || (int)gvar_482A8C <= 0) {
                        sub_194DC(v46, v2, __n);
                        sub_13FB0(0);
                        sub_304D4(2000);
                    }
                    else {
                        uint32_t v72 = sub_1E160();
                        uint32_t v73 = sub_15210(v72);
                        if((uint8_t)v73 == 0) {
                            sub_20A38(0);
                        }
                        else {
                            sub_20A38(SOCK_STREAM);
                            sub_31D58(14, "Can\'t get temperature sensor type!", param2);
                        }
                    }
                    int v74 = sub_1572C();
                    uint32_t v75 = gvar_7EB9C;
                    gvar_99EDD8 = (uint32_t)v74;
                    if(v75 > 3) {
                        snprintf(&__ptr1, 0x800, "Bring up temperature is %d\n", v74);
                        sub_2E584(3, &__ptr1, 0);
                        if(gvar_80FB0 != 0) {
                            if(gvar_7EB9C > 3) {
                                __builtin_strcpy(&__ptr1, "press any key to start rising frequency...");
                                sub_2E584(3, &__ptr1, 0);
                            }
                        loc_34CF8:
                            _IO_getc();
                        }
                    }
                    else if(gvar_80FB0 != 0) {
                        goto loc_34CF8;
                    }
                    pthread_mutex_lock(&g7F7EC);
                    sub_28138(12000000);
                    pthread_mutex_unlock(&g7F7EC);
                    if(gvar_7EB79 == 0) {
                        sub_3403C();
                    }
                    else if((int)gvar_482A8C > 0) {
                        uint32_t v76 = sub_19AB4();
                        if(gvar_482A8C != v76) {
                            int v77 = sub_1572C();
                            if((v77 <= 19 ? gvar_7EB78 & SOCK_STREAM: 0) == 0) {
                                v0 = gvar_482A8C;
                            }
                            else {
                                uint32_t v78 = 100;
                                uint32_t v79 = (uint32_t)((20 - v77) * 100);
                                uint32_t v80 = gvar_482A8C;
                                if((int)v79 < 4000) {
                                    v78 = v79 / 40;
                                }
                                int v81 = sub_19AC4();
                                v0 = (int)(v78 + v80) <= v81 ? gvar_482A8C + v78: sub_19AC4();
                            }
                            sub_195A8(v0);
                            sub_304D4(4000);
                        }
                    }
                    sub_304D4(1000);
                    uint32_t v82 = sub_1E100();
                    if(v82 == 2) {
                        int v83 = 0;
                        do {
                            int v84 = v83;
                            int v85 = (int)(uint8_t)v83;
                            ++v83;
                            int v86 = sub_1E29C(v84);
                            if(v86 != 0) {
                                uint32_t v87 = sub_1E160();
                                sub_50A80(v85, (int)(v87 * 19), 0);
                                uint32_t v88 = sub_1E160();
                                sub_50A80(v85, (int)(v88 * 55), 0);
                            }
                        }
                        while(v83 != 4);
                    }
                    sub_31D58(SOCK_STREAM, "soc init done!", param2);
                    int v89 = sub_27C88();
                    int v90 = (int)(uint8_t)v89;
                    if(v90 == 0) {
                        int v91 = &gvar_99CD98;
                        do {
                            int v92 = sub_1E29C(v90);
                            if(v92 != 0) {
                                int v93 = 0;
                                int* ptr7 = (int*)(v90 * 0x800 + v91);
                                while(SOCK_STREAM) {
                                    ptr2 = v93;
                                    int v94 = sub_1E67C(v90);
                                    if((uint32_t)v94 <= (uint32_t)v93) {
                                        break;
                                    }
                                    uint32_t v95 = sub_1E100();
                                    sub_5FADC(v93, (int)v95);
                                    ++v93;
                                    sub_1E820(v90, ptr2, 111);
                                    *ptr7 = 0;
                                    *(ptr7 + SOCK_STREAM) = 0;
                                    ptr7 += 2;
                                }
                                sub_1E820(v90, ptr2, 111);
                            }
                            ++v90;
                        }
                        while(v90 != 4);
                        int v96 = sub_27B70();
                        if((uint8_t)v96 == 0) {
                            if(gvar_80FA4 != 0) {
                                sub_27DA0();
                            }
                            sub_2BDC4();
                            sub_3208C();
                            sub_304D4(500);
                            if(gvar_7EB9C <= 3) {
                                return SOCK_STREAM;
                            }
                            __ptr1 = 1953066569;
                            v5 = 1852793888;
                            v4 = 663909;
                            sub_2E584(3, &__ptr1, 0);
                            return SOCK_STREAM;
                        }
                    }
                }
            }
        }
    }
    else if(gvar_7EB9C > 4) {
        __format = "config_parameter.token_type != 0x%x, it is 0x%x\n";
        param3 = 81;
        ptr0 = param1;
        snprintf(&__ptr1, 0x800, __format, param3, ptr0);
        sub_2E584(4, &__ptr1, 0);
    }

    return 0;
}
