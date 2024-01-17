int sub_3EFF0(int param0, int param1, int param2, int param3) {
    char __src2;
    char __s2;
    char __s3;
    int64_t v0;
    int v1;
    __int128 v2;
    __int128 v3;
    __int128 v4;
    int v5;
    __int128 v6;
    int v7 = param0;
    int64_t v8 = (uint64_t)v4;
    int v9 = param1;
    memset(&__src2, 0, 0x2000);
    uint32_t __s1 = sub_1E0C0();
    int v10 = strcmp((char*)__s1, "BHB28601");
    if(v10 == 0) {
    loc_3F04C:
        int v11 = (int)(uint8_t)v7;
        int v12 = (int)(uint8_t)v7;
        pthread_mutex_lock(&g7F7EC);
        sub_16330(SOCK_STREAM, param1, param2, param3);
        usleep(20000);
        sub_51478(v11);
        usleep(20000);
        sub_514A4(v11);
        usleep(20000);
        uint32_t v13 = sub_1E0E0();
        ptr5 = v13;
        if(v13 != 0) {
            int v14 = 0;
            do {
                uint32_t v15 = sub_1E100();
                if(v15 != 0) {
                    int v16 = 0;
                loc_3F134:
                    do {
                        uint32_t v17 = sub_1E100();
                        int v18 = (int)(v17 * v14 + v16);
                        uint32_t v19 = sub_1E160();
                        uint32_t v20 = v19 * v18;
                        v58 = sub_14ED0(v18);
                        int v21 = v7;
                        uint32_t v22 = v20;
                        if(v58 == 0) {
                            int v23 = sub_2C06C(176, v22, v21);
                            int v24 = v7;
                            uint32_t v25 = v20;
                            if((v23 & 0x4) == 0) {
                                int v26 = (int)gvar_4FCB48;
                                if(v26 == 0) {
                                    v26 = sub_536F4("bmminer_adc");
                                    gvar_4FCB48 = (uint32_t)v26;
                                }
                                v1 = 20;
                                v5 = 22;
                                v83 = (uint64_t)v23 | ((uint64_t)(uint32_t)(v83 >>> 32L) << 32);
                                v82 = (uint64_t)v7 | ((uint64_t)v18 << 32);
                                v87 = "chain::%d, asic::%d adc control vm sample not ready %08x.\n";
                                v88 = 45;
                                sub_54CB0(v26, "log/adc_sample.c", 16, "get_adc_data_with_addr", 22, 45, 20, "chain::%d, asic::%d adc control vm sample not ready %08x.\n");
                                goto loc_3F128;
                            }
                            else {
                                int v27 = sub_2C06C(180, v25, v24);
                                int v28 = sub_2C06C(184, v20, v7);
                                __int128 v29 = (unsigned __int128)(uint64_t)v3 | ((unsigned __int128)0x3ff999999999999aL << 64);
                                ++v16;
                                VCVT.F64.U32((uint64_t)((unsigned __int128)(uint32_t)(uint16_t)(v27 & 0xfff) | ((unsigned __int128)((v6 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)), (uint32_t)(uint16_t)(v27 & 0xfff));
                                __int128 v30 = (unsigned __int128)(uint64_t)((unsigned __int128)(uint32_t)(uint16_t)(v27 & 0xfff) | ((unsigned __int128)((v6 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)) | ((unsigned __int128)(uint32_t)(uint16_t)((v28 >>> 16) & 0xfff) << 64) | ((unsigned __int128)(uint32_t)(v6 >>> 0x60X) << 96);
                                VCVT.F64.U32((uint64_t)((unsigned __int128)(uint32_t)(uint16_t)((v27 >>> 16) & 0xfff) | ((unsigned __int128)((v2 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)), (uint32_t)(uint16_t)((v27 >>> 16) & 0xfff));
                                VCVT.F64.U32((uint64_t)(v30 >>> 0x40X), (uint32_t)(v30 >>> 0x40X));
                                VMUL.F64((uint64_t)v30, (uint64_t)v30, 0x3ff999999999999aL);
                                __int128 v31 = (unsigned __int128)(uint64_t)((unsigned __int128)(uint32_t)(uint16_t)((v27 >>> 16) & 0xfff) | ((unsigned __int128)((v2 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)) | ((unsigned __int128)(uint32_t)(uint16_t)(v28 & 0xfff) << 64) | ((unsigned __int128)(uint32_t)(v2 >>> 0x60X) << 96);
                                VMUL.F64((uint64_t)((unsigned __int128)(uint32_t)(uint16_t)((v27 >>> 16) & 0xfff) | ((unsigned __int128)((v2 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)), (uint64_t)((unsigned __int128)(uint32_t)(uint16_t)((v27 >>> 16) & 0xfff) | ((unsigned __int128)((v2 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)), 0x3ff999999999999aL);
                                VCVT.F64.U32((uint64_t)(v31 >>> 0x40X), (uint32_t)(v31 >>> 0x40X));
                                VMUL.F64((uint64_t)(v30 >>> 0x40X), (uint64_t)(v30 >>> 0x40X), 0x3ff999999999999aL);
                                int64_t* ptr0 = (int64_t*)(v18 * 32 + (int)&__src2);
                                VNMLS.F64((uint64_t)(v29 >>> 0x40X), (uint64_t)v30, 0x3f40000000000000L);
                                __int128 v32 = (unsigned __int128)0x3ff999999999999aL | ((unsigned __int128)(uint64_t)(v30 >>> 0x40X) << 64);
                                VMUL.F64((uint64_t)(v31 >>> 0x40X), (uint64_t)(v31 >>> 0x40X), 0x3ff999999999999aL);
                                VNMLS.F64((uint64_t)v32, (uint64_t)v31, 0x3f40000000000000L);
                                __int128 v33 = (unsigned __int128)0x3ff999999999999aL | ((unsigned __int128)(uint64_t)(v31 >>> 0x40X) << 64);
                                VNMLS.F64(0x3ff999999999999aL, (uint64_t)(v32 >>> 0x40X), 0x3f40000000000000L);
                                __int128 v34 = (unsigned __int128)(uint64_t)v32 | ((unsigned __int128)0x3ff999999999999aL << 64);
                                *ptr0 = (uint64_t)(v29 >>> 0x40X);
                                VNMLS.F64((uint64_t)(v34 >>> 0x40X), (uint64_t)(v33 >>> 0x40X), 0x3f40000000000000L);
                                v3 = (unsigned __int128)(uint64_t)v29 | ((unsigned __int128)((uint64_t)v34 + (uint64_t)(v29 >>> 0x40X)) << 64);
                                *(int64_t*)(v18 * 8 + (int)&v0) = (uint64_t)v33;
                                *(ptr0 + SOCK_STREAM) = (uint64_t)(v3 >>> 0x40X);
                                v6 = (unsigned __int128)((uint64_t)(v34 >>> 0x40X) + (uint64_t)v34) | ((unsigned __int128)(uint64_t)(v34 >>> 0x40X) << 64);
                                v2 = (unsigned __int128)(uint64_t)v33 | ((unsigned __int128)((uint64_t)v33 + (uint64_t)(v6 >>> 0x40X)) << 64);
                                *(ptr0 + 2) = (uint64_t)v6;
                                *(ptr0 + 3) = (uint64_t)(v2 >>> 0x40X);
                                if(v16 != v15) {
                                    goto loc_3F134;
                                }
                                goto loc_3F244;
                            }
                        }
                        else {
                        loc_3F128:
                            ++v16;
                        }
                    }
                    while(v16 != v15);
                loc_3F244:
                }
                ++v14;
            }
            while(v14 != ptr5);
        }
        uint32_t v35 = sub_1E0E0();
        __src1 = v35;
        if(v35 != 0) {
            int v36 = 0;
            int v37 = "[C: %d], [D: %d]";
            __src = "bmminer_adc";
            __format1 = v7;
            do {
                int v38 = (int)gvar_4FCB48;
                if(v38 == 0) {
                    v38 = sub_536F4(__src);
                    gvar_4FCB48 = (uint32_t)v38;
                }
                v1 = 20;
                v88 = 67;
                v87 = v37;
                v5 = 16;
                v82 = (uint64_t)__format1 | ((uint64_t)v36 << 32);
                sub_54CB0(v38, "log/adc_sample.c", 16, "dump_adc_voltage", 16, 67, 20, v87);
                uint32_t v39 = sub_1E100();
                if(v39 != 0) {
                    int v40 = 0;
                    do {
                        memset(&__s2, 0, 0x100);
                        uint32_t v41 = sub_1E100();
                        int v42 = v41 * v36 + v40;
                        uint32_t v43 = sub_1E100();
                        v58 = sub_5F880(v40, (int)(v43 - SOCK_STREAM));
                        double* ptr1 = (double*)(v42 * 32 + (int)&__src2);
                        int64_t* ptr2 = (int64_t*)(v42 * 8 + (int)&v0);
                        int v44 = v42;
                        if(v58 == SOCK_STREAM) {
                            __int128 v45 = (unsigned __int128)*ptr2 | ((unsigned __int128)*(ptr1 + 3) << 64);
                            ++v40;
                            v83 = (uint64_t)(v45 >>> 0x40X);
                            v84 = (uint64_t)v45;
                            __int128 v46 = (unsigned __int128)*(ptr1 + 2) | ((unsigned __int128)*(ptr1 + SOCK_STREAM) << 64);
                            *(double*)&v1 = (double)(v46 >>> 0x40X);
                            v82 = (uint64_t)v46;
                            *(double*)&v5 = *ptr1;
                            snprintf(&__s2, 0x100, "{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f\n", v44, *(double*)&v5, *(double*)&v1, v82, v83, v84);
                            int v47 = (int)gvar_4FCB48;
                            if(v47 == 0) {
                                goto loc_3F428;
                            }
                        }
                        else {
                            ++v40;
                            __int128 v48 = (unsigned __int128)*(ptr1 + 3) | ((unsigned __int128)*ptr2 << 64);
                            v84 = (uint64_t)(v48 >>> 0x40X);
                            __int128 v49 = (unsigned __int128)(uint64_t)v48 | ((unsigned __int128)*(ptr1 + 2) << 64);
                            v83 = (uint64_t)v48;
                            double v50 = *(ptr1 + SOCK_STREAM);
                            v82 = (uint64_t)(v49 >>> 0x40X);
                            v2 = (unsigned __int128)v50 | ((unsigned __int128)*ptr1 << 64);
                            *(double*)&v1 = v50;
                            *(double*)&v5 = (double)(v2 >>> 0x40X);
                            snprintf(&__s2, 0x100, "{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f", v44, *(double*)&v5, *(double*)&v1, v82, v83, v84);
                            v47 = gvar_4FCB48;
                            if(v47 == 0) {
                            loc_3F428:
                                v47 = sub_536F4(__src);
                                gvar_4FCB48 = (uint32_t)v47;
                            }
                        }
                        v1 = 20;
                        v88 = 81;
                        v5 = 16;
                        v82 = (uint64_t)&__s2 | ((uint64_t)(uint32_t)(v82 >>> 32L) << 32);
                        v87 = "\n";
                        sub_54CB0(v47, "log/adc_sample.c", 16, "dump_adc_voltage", 16, 81, 20, "\n");
                    }
                    while(v40 != v39);
                }
                ++v36;
            }
            while(v36 != __src1);
            v7 = __format1;
        }
        sub_513FC(v12);
        usleep(20000);
        sub_16330(0, param1, param2, param3);
        usleep(20000);
        pthread_mutex_unlock(&g7F7EC);
    }
    else {
        uint32_t __s1_1 = sub_1E0C0();
        int v51 = strcmp((char*)__s1_1, "BHB28701");
        if(v51 == 0) {
            goto loc_3F04C;
        }
        else {
            uint32_t v52 = sub_1E0F0();
            if(v52 != 0) {
                int v53 = 0;
                int v54 = v9;
                int v55 = (int)(uint8_t)v7;
                int v56 = 0;
                char* ptr3 = &__s2;
                do {
                    int v57 = v56;
                    ++v56;
                    int v58 = sub_14ED0(v57);
                    int v59 = v53;
                    int v60 = v55;
                    if(v58 == 0) {
                        sub_5146C(v60, v59);
                        usleep(5000);
                        sub_51508(v55, v53);
                        usleep(10000);
                        *(int64_t*)&ptr3[0] = 0;
                    }
                    v53 += v54;
                    ptr3 += 8;
                }
                while(v56 != v52);
            }
            usleep(&loc_186A0);
            uint32_t v61 = sub_1E0E0();
            char* __format1 = (char*)v61;
            if(v61 != 0) {
                v4 = (unsigned __int128)0x3a000000 | ((unsigned __int128)((v4 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                int v62 = 0;
                int __src = "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f";
                do {
                    uint32_t v63 = sub_1E100();
                    if(v63 != 0) {
                        int v64 = 0;
                    loc_3F614:
                        do {
                            uint32_t v65 = sub_1E100();
                            int v66 = (int)(v65 * v62 + v64);
                            int v67 = sub_14ED0(v66);
                            if(v67 == 0) {
                                uint32_t v68 = (uint32_t)(v66 * v9);
                                memset(&__s3, 0, 128);
                                int v69 = sub_2C06C(176, v68, v7);
                                int v70 = v69;
                                if((v69 & 0x4) == 0) {
                                    int v71 = (int)gvar_4FCB48;
                                    if(v71 == 0) {
                                        v71 = sub_536F4("bmminer_adc");
                                        gvar_4FCB48 = (uint32_t)v71;
                                    }
                                    v87 = "chain::%d, asic::%d adc control vm sample not ready %08x.\n";
                                    v5 = 17;
                                    v83 = (uint64_t)v70 | ((uint64_t)(uint32_t)(v83 >>> 32L) << 32);
                                    v82 = (uint64_t)v7 | ((uint64_t)v66 << 32);
                                    v88 = 141;
                                    v1 = 20;
                                    sub_54CB0(v71, "log/adc_sample.c", 16, "check_adc_voltage", 17, 141, 20, "chain::%d, asic::%d adc control vm sample not ready %08x.\n");
                                    goto loc_3F608;
                                }
                                else {
                                    int v72 = sub_2C06C(180, v68, v7);
                                    int v73 = sub_2C06C(184, v68, v7);
                                    __int128 v74 = (unsigned __int128)(uint64_t)v3 | ((unsigned __int128)0x3ff3020c60000000L << 64);
                                    __int128 v75 = (unsigned __int128)(uint32_t)(uint16_t)(v72 & 0xfff) | ((unsigned __int128)((v6 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                                    VCVT.F32.S32((uint32_t)(uint16_t)(v72 & 0xfff), (uint32_t)(uint16_t)(v72 & 0xfff));
                                    __int128 v76 = (unsigned __int128)(uint32_t)(uint16_t)((v72 >>> 16) & 0xfff) | ((unsigned __int128)((v2 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                                    VCVT.F32.S32((uint32_t)(uint16_t)((v72 >>> 16) & 0xfff), (uint32_t)(uint16_t)((v72 >>> 16) & 0xfff));
                                    VMUL.F32((uint32_t)v75, (uint32_t)v75, (uint32_t)v4);
                                    char* __format = (char*)__src;
                                    VMUL.F32((uint32_t)v76, (uint32_t)v76, (uint32_t)v4);
                                    VCVT.F64.F32((uint64_t)v75, (uint32_t)v75);
                                    __int128 v77 = (unsigned __int128)(uint64_t)v75 | ((unsigned __int128)(uint32_t)(uint16_t)(v73 & 0xfff) << 64) | ((unsigned __int128)(uint32_t)(v75 >>> 0x60X) << 96);
                                    VCVT.F32.S32((uint32_t)(v77 >>> 0x40X), (uint32_t)(v77 >>> 0x40X));
                                    VNMLS.F64((uint64_t)(v74 >>> 0x40X), (uint64_t)v77, 0x3ff3020c60000000L);
                                    VCVT.F64.F32((uint64_t)v76, (uint32_t)v76);
                                    __int128 v78 = (unsigned __int128)(uint64_t)v76 | ((unsigned __int128)(uint32_t)(uint16_t)((v73 >>> 16) & 0xfff) << 64) | ((unsigned __int128)(uint32_t)(v76 >>> 0x60X) << 96);
                                    VMUL.F32((uint32_t)(v77 >>> 0x40X), (uint32_t)(v77 >>> 0x40X), (uint32_t)v4);
                                    VCVT.F32.S32((uint32_t)(v78 >>> 0x40X), (uint32_t)(v78 >>> 0x40X));
                                    int64_t* ptr4 = (int64_t*)(v66 * 32 + (int)&__src2);
                                    VCVT.F64.F32((uint64_t)(v77 >>> 0x40X), (uint32_t)(v77 >>> 0x40X));
                                    VMUL.F32((uint32_t)(v78 >>> 0x40X), (uint32_t)(v78 >>> 0x40X), (uint32_t)v4);
                                    __int128 v79 = (unsigned __int128)(uint64_t)(v74 >>> 0x40X) | ((unsigned __int128)(uint64_t)(v77 >>> 0x40X) << 64);
                                    v3 = (unsigned __int128)(uint64_t)v74 | ((unsigned __int128)0x3ff3020c60000000L << 64);
                                    *(double*)&v5 = (double)v79;
                                    VNMLS.F64((uint64_t)(v3 >>> 0x40X), (uint64_t)v78, 0x3ff3020c60000000L);
                                    __int128 v80 = (unsigned __int128)0x3ff3020c60000000L | ((unsigned __int128)(uint64_t)(v78 >>> 0x40X) << 64);
                                    VCVT.F64.F32((uint64_t)(v80 >>> 0x40X), (uint32_t)(v80 >>> 0x40X));
                                    VNMLS.F64((uint64_t)v80, (uint64_t)(v79 >>> 0x40X), 0x3ff3020c60000000L);
                                    *(double*)&v1 = (double)(v3 >>> 0x40X);
                                    v6 = (unsigned __int128)(uint64_t)v79 | ((unsigned __int128)(uint64_t)v80 << 64);
                                    __int128 v81 = (unsigned __int128)0x3ff3020c60000000L | ((unsigned __int128)(uint64_t)(v80 >>> 0x40X) << 64);
                                    int64_t v82 = (uint64_t)(v6 >>> 0x40X);
                                    VNMLS.F64((uint64_t)v81, (uint64_t)(v81 >>> 0x40X), 0x3ff3020c60000000L);
                                    int64_t v83 = (uint64_t)v81;
                                    v2 = (unsigned __int128)(uint64_t)((unsigned __int128)(uint64_t)v81 | ((unsigned __int128)((uint64_t)v6 + (uint64_t)(v3 >>> 0x40X) + (uint64_t)(v6 >>> 0x40X)) << 64)) | ((unsigned __int128)((uint64_t)(((unsigned __int128)(uint64_t)v81 | ((unsigned __int128)((uint64_t)v6 + (uint64_t)(v3 >>> 0x40X) + (uint64_t)(v6 >>> 0x40X)) << 64)) >>> 0x40X) + (uint64_t)((unsigned __int128)(uint64_t)v81 | ((unsigned __int128)((uint64_t)v6 + (uint64_t)(v3 >>> 0x40X) + (uint64_t)(v6 >>> 0x40X)) << 64))) << 64);
                                    *(ptr4 + 3) = (uint64_t)((unsigned __int128)(uint64_t)v81 | ((unsigned __int128)((uint64_t)v6 + (uint64_t)(v3 >>> 0x40X) + (uint64_t)(v6 >>> 0x40X)) << 64));
                                    *ptr4 = (uint64_t)v6;
                                    *(ptr4 + SOCK_STREAM) = (uint64_t)(v3 >>> 0x40X);
                                    VMUL.F64((uint64_t)v2, (uint64_t)(v2 >>> 0x40X), 0x3fd0000000000000L);
                                    *(ptr4 + 2) = (uint64_t)(v6 >>> 0x40X);
                                    int64_t v84 = (uint64_t)(v2 >>> 0x40X);
                                    int64_t v85 = (uint64_t)v2;
                                    *(int64_t*)(v66 * 8 + &__s2) = (uint64_t)v2;
                                    sprintf((char*)&__s3, __format, v7, v66, *(double*)&v5, *(double*)&v1, v82, v83, v84);
                                    int v86 = (int)gvar_4FCB48;
                                    if(v86 == 0) {
                                        v86 = sub_536F4("bmminer_adc");
                                        gvar_4FCB48 = (uint32_t)v86;
                                    }
                                    int v87 = "asic adc:%s";
                                    v5 = 17;
                                    ++v64;
                                    v82 = (uint64_t)&__s3 | ((uint64_t)(uint32_t)(v82 >>> 32L) << 32);
                                    int v88 = 157;
                                    v1 = 20;
                                    sub_54CB0(v86, "log/adc_sample.c", 16, "check_adc_voltage", 17, 157, 20, "asic adc:%s");
                                    if(v64 != v63) {
                                        goto loc_3F614;
                                    }
                                    goto loc_3F7C8;
                                }
                            }
                            else {
                            loc_3F608:
                                ++v64;
                            }
                        }
                        while(v64 != v63);
                    loc_3F7C8:
                    }
                    ++v62;
                }
                while(v62 != __format1);
            }
            uint32_t v89 = sub_1E0E0();
            char* ptr5 = (char*)v89;
            if(v89 != 0) {
                v9 = v7;
                int v90 = 0;
                __src = "chain %2d %s";
                __format1 = "domain %2d:";
                int __src1 = "bmminer_adc";
                do {
                    int v91 = sprintf((char*)&__s3, __format1, v90);
                    uint32_t v92 = sub_1E100();
                    if(v92 != 0) {
                        int v93 = 0;
                        do {
                            sub_1E100();
                            ++v93;
                            int v94 = sprintf((char*)(v91 + (int)&__s3), "\t%.2f");
                            v91 += v94;
                        }
                        while(v93 != v92);
                    }
                    int v95 = (int)gvar_4FCB48;
                    if(v95 == 0) {
                        v95 = sub_536F4(__src1);
                        gvar_4FCB48 = (uint32_t)v95;
                    }
                    v1 = 20;
                    v5 = 17;
                    v88 = 169;
                    ++v90;
                    v82 = (uint64_t)v9 | ((uint64_t)&__s3 << 32);
                    v87 = __src;
                    sub_54CB0(v95, "log/adc_sample.c", 16, "check_adc_voltage", 17, 169, 20, v87);
                }
                while(v90 != ptr5);
                v7 = v9;
            }
        }
    }
    pthread_mutex_lock(&g4FCB4C);
    memcpy((void*)(v7 * 0x2000 + 5229416), &__src2, 0x2000);
    pthread_mutex_unlock(&g4FCB4C);
    return 0;
}
