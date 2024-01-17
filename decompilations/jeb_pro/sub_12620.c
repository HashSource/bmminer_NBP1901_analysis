int sub_12620(int param0, int param1, size_t __n1, int param3) {
    uint32_t v0;
    uint32_t v1;
    int v2;
    char v3;
    int v4;
    uint32_t v5;
    int v6;
    uint32_t v7;
    int v8;
    char v9;
    char v10;
    int v11;
    char v12;
    char v13;
    __int128 v14;
    char __s2;
    uint32_t v15;
    char v16;
    int v17;
    int v18;
    char v19;
    uint8_t v20;
    int __s;
    int __ptr1;
    char v21;
    char __set;
    char __s1;
    char v22;
    int v23 = param0;
    int __act = &sub_28878;
    int __src = param1;
    int v24 = 0;
    sigemptyset(&__set);
    sigaction(SIGTERM, &__act, &g592464);
    sigaction(SIGINT, &__act, &g594524);
    sigaction(SIGABRT, &__act, &g58E35C);
    sem_init(&g80F40, 0, 0);
    sub_29070(&g590408, "main", 2771);
    int v25 = *(int*)__src;
    memset(&__s, 0, 0x100);
    memset(&__s1, 0, 64);
    snprintf((char*)&__s1, 64, "pidof %s", v25);
    FILE* __stream = popen((char*)&__s1, "\n");
    if(__stream != 0) {
    loc_1273C:
        char* ptr0 = fgets((char*)&__s, 0x100, __stream);
        while(ptr0 != 0) {
            if(gvar_482A5D == 0) {
                goto loc_1273C;
            }
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6) {
                snprintf(&__ptr1, 0x800, "pidof %s command result is: %s\n", v25, &__s);
                sub_2E584(7, &__ptr1, 0);
                if(gvar_482A5D == 0) {
                    goto loc_1273C;
                }
                if(gvar_590404 != 0) {
                    goto loc_127FC;
                }
            }
            if(gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                goto loc_1273C;
            }
        loc_127FC:
            size_t v26 = strlen((char*)&__s);
            snprintf(&__ptr1, 0x800, "strlen is: %d\n", v26);
            sub_2E584(7, &__ptr1, 0);
            ptr0 = fgets((char*)&__s, 0x100, __stream);
        }
        char* ptr1 = NULL;
        char* ptr2 = NULL;
        pclose(__stream);
        void* ptr3 = &__s;
        char* ptr4 = (char*)&g1;
        while(SOCK_STREAM) {
            size_t v27 = strlen((char*)&__s);
            v10 = v27 >= (uint32_t)ptr4;
            if(v10 == 0) {
                break;
            }
            memset(&__s2, 0, 32);
            unsigned short** ptr5 = __ctype_b_loc();
            int v28 = (uint32_t)*(char*)ptr3;
            ptr3 = (int)ptr3 + SOCK_STREAM;
            v9 = (ptr5[0][v28] & 0x2000) == 0;
            if(v9 == 0) {
                strncpy((char*)&__s2, &ptr1[&__s], (size_t)((char*)(ptr4 - ptr1) - SOCK_STREAM));
                long v29 = strtol((char*)&__s2, NULL, 10);
                if(v29 > 0) {
                    ++ptr2;
                    if(gvar_482A5D == 0 || (gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6)) {
                        goto loc_12934;
                    }
                    else {
                        snprintf(&__ptr1, 0x800, "Parsed proc id is: %d\n", v29);
                        ptr1 = ptr4;
                        sub_2E584(7, &__ptr1, 0);
                    }
                }
                else {
                loc_12934:
                    ptr1 = ptr4;
                }
            }
            ++ptr4;
        }
        if(ptr2 != 0) {
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
                snprintf(&__ptr1, 0x800, " %d instance of %s is  already Running on this machine", ptr2, v25);
                sub_2E584(3, &__ptr1, 0);
            }
            if(ptr2 != SOCK_STREAM) {
                snprintf(&__ptr1, 0x800, "%s is forbidden to start twice, will exit immediately!", *(int*)__src);
                sub_2E584(3, &__ptr1, SOCK_STREAM);
            }
        }
    }
    else if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        snprintf(&__ptr1, 0x800, " app-service:%s Not Found!!!", v25);
        sub_2E584(7, &__ptr1, 0);
    }
    int* ptr6 = (int*)&gvar_58E354;
    sub_52F1C("/etc/bitmain_category.conf");
    void* ptr7 = calloc(1, 0x1664);
    gvar_592460 = (uint32_t)ptr7;
    uint32_t* ptr8 = &gvar_58E34C;
    void* ptr9 = calloc(1, 0x188);
    gvar_58E354 = (uint32_t)ptr9;
    void* ptr10 = calloc(1, 64);
    int v30 = v23;
    *(void**)((int)ptr10 + 36) = ptr9;
    *(void**)((int)ptr9 + 20) = ptr7;
    gvar_58E34C = (uint32_t)ptr10;
    sub_2BC2C(v30, __src);
    sub_2AEF4();
    int v31 = sub_2823C();
    if(v31 != 0) {
        sub_31D58(4, "socket init failed!", __n1);
    }
    int v32 = sub_339EC(v31, param1, __n1, param3);
    if(v32 != 0) {
        sub_31D58(4, "basic init failed!", __n1);
    }
    void* ptr11 = calloc(1, 64);
    gvar_590400 = (uint32_t)ptr11;
    pthread_attr_init((pthread_attr_t*)&__s1);
    pthread_attr_setstacksize((pthread_attr_t*)&__s1, 0x200000);
    int __arg = (int)gvar_590400;
    int v33 = sub_30B10(__arg, (pthread_attr_t*)&__s1, &sub_283E4, (void*)__arg);
    if(v33 != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2)) {
        snprintf(&__ptr1, 0x800, "%s: create thread for get api status failed\n", "main");
        sub_2E584(3, &__ptr1, 0);
    }
    pthread_detach(*(pthread_t*)(gvar_590400 + 12));
    pthread_mutex_t* __mutex = *(pthread_mutex_t**)(*(*ptr8 + 9) + 20);
    int v34 = pthread_mutex_init(__mutex + 28, NULL);
    if(v34 != 0) {
        sub_28FB8("bitmain_soc_prepare", 1933);
    }
    sub_29070(__mutex, "bitmain_soc_prepare", 1934);
    sub_29070(__mutex + 96, "bitmain_soc_prepare", 1935);
    sub_29070(__mutex + 0x22e, "bitmain_soc_prepare", 1936);
    sub_29070(__mutex + 1020, "bitmain_soc_prepare", 1937);
    int* ptr12 = (int*)&ptr_a__version_file;
    memset(&__ptr1, 0, 32);
    int v35 = v20;
    int v36 = gvar_80F64;
    char v37 = v19;
    __ptr1 = (uint32_t)81 | ((uint32_t)(((uint32_t)(((uint16_t)__ptr1 >>> 8) & 0xFF) | ((uint32_t)26 << 8)) & 0xffffff) << 8);
    int v38 = ~(((uint32_t)(v35 & SOCK_STREAM) | ((uint32_t)(v36 & SOCK_STREAM) << SOCK_STREAM) | ((uint32_t)((v35 >>> 2) & 0x3fffffff) << 2)) * 0x40000000);
    uint32_t v39 = gvar_7EB4C;
    uint32_t v40 = gvar_80F68;
    uint32_t v41 = gvar_7EB50;
    v19 = v37 | 0x7;
    v20 = ~(v38 >>> 30);
    uint32_t v42 = (uint32_t)13833 | ((uint32_t)(uint8_t)v40 << 16) | ((uint32_t)80 << 24);
    int v43 = (uint32_t)0xa0a | ((uint32_t)(uint16_t)(v43 >>> 16) << 16);
    uint32_t v44 = (uint32_t)600 | ((uint32_t)(uint16_t)(v44 >>> 16) << 16);
    uint32_t v45 = (uint32_t)(uint16_t)v39 | ((uint32_t)(uint16_t)v41 << 16);
    uint32_t v46 = (uint32_t)4 | ((uint32_t)(((uint32_t)(((uint16_t)v46 >>> 8) & 0xFF) | ((uint32_t)400 << 8)) & 0xffffff) << 8);
    int v47 = sub_31590((int)&__ptr1, 30);
    v44 = (uint32_t)(uint16_t)v44 | ((uint32_t)(uint16_t)v47 << 16);
    uint32_t v48 = v15;
    uint32_t v49 = v46;
    uint32_t v50 = v44;
    int v51 = v43;
    uint32_t v52 = v48;
    uint32_t __src1 = v49;
    uint32_t v53 = v50;
    int v54 = sub_34828(__ptr1, *(char**)&v20, v42, v45, v51, v52, __src1, v53);
    if(v54 == 0) {
        sub_31D58(4, "soc init failed!", __n1);
    }
    sub_31D58(2, 0, __n1);
    pthread_mutex_lock(&g80F20);
    if(gvar_80F38 != 0) {
        if(gvar_7EB9C > 3) {
            __ptr1 = 1918989427;
            *(int**)&v20 = (int*)&g68742074;
            v42 = 1633886309;
            v45 = 0x64656863;
            v43 = 0x626f6a20;
            v15 &= 0xffffff00;
            sub_2E584(3, &__ptr1, 0);
        }
        sub_2B330(gvar_80F3C, gvar_80F38);
    }
    pthread_mutex_unlock(&g80F20);
    char* ptr13 = (char*)&gvar_590404;
    sub_32CA8();
    char* ptr14 = &__ptr1;
    uint32_t* ptr15 = (uint32_t*)&g80768;
alab1:
    while(SOCK_STREAM) {
        pthread_mutex_t* __mutex4 = (pthread_mutex_t*)&g4FCAD0;
    loc_12D24:
        while(SOCK_STREAM) {
            uint32_t* ptr16 = ptr15;
            while(SOCK_STREAM) {
                if(*(char*)(*ptr6 + 364) == 0) {
                    pthread_mutex_t* __mutex1 = __mutex4;
                    uint32_t* ptr17 = *ptr8;
                    uint32_t* ptr18 = *ptr8;
                    pthread_mutex_t* __mutex2 = *(pthread_mutex_t**)(ptr17[9] + 20);
                    pthread_mutex_t* __mutex3 = *(pthread_mutex_t**)(ptr17[9] + 20);
                    pthread_mutex_lock(__mutex1);
                    int v55 = pthread_mutex_lock(__mutex2);
                    if(v55 != 0) {
                        int* ptr19 = __errno_location();
                        char* __ptr1_1 = ptr14;
                        int v56 = ptr19[0];
                        v51 = "bmminer.c";
                        v52 = "bitmain_c5_scanhash";
                        __src1 = 2063;
                        snprintf(__ptr1_1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v56, "bmminer.c", "bitmain_c5_scanhash", 2063);
                        sub_2E584(3, __ptr1_1, SOCK_STREAM);
                    }
                    pthread_rwlock_t* __rwlock = (pthread_rwlock_t*)(__mutex3 + 6);
                    pthread_rwlock_t* ptr20 = (pthread_rwlock_t*)(__mutex3 + 6);
                    int v57 = pthread_rwlock_rdlock(__rwlock);
                    if(v57 != 0) {
                        int* ptr21 = __errno_location();
                        char* __ptr1_2 = ptr14;
                        int v58 = ptr21[0];
                        v51 = "bmminer.c";
                        v52 = "bitmain_c5_scanhash";
                        __src1 = 2063;
                        snprintf(__ptr1_2, 0x800, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v58, "bmminer.c", "bitmain_c5_scanhash", 2063);
                        sub_2E584(3, __ptr1_2, SOCK_STREAM);
                    }
                    int v59 = pthread_mutex_unlock(__mutex3);
                    if(v59 != 0) {
                        int* ptr22 = __errno_location();
                        char* __ptr1_3 = ptr14;
                        int v60 = ptr22[0];
                        v51 = "bmminer.c";
                        v52 = "bitmain_c5_scanhash";
                        __src1 = 2063;
                        snprintf(__ptr1_3, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v60, "bmminer.c", "bitmain_c5_scanhash", 2063);
                        sub_2E584(3, __ptr1_3, SOCK_STREAM);
                    }
                    int v61 = 0;
                    int v62 = 0;
                loc_12DB0:
                    while(gvar_5955D0 != 0) {
                        while(SOCK_STREAM) {
                            int v63 = 0;
                            int v64 = (int)*(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955E8);
                            uint32_t v65 = *(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955D4);
                            uint32_t v66 = gvar_5955CC * 60 + &gvar_5955C8;
                            uint32_t v67 = *(uint32_t*)(v66 + 24);
                            uint32_t v68 = *(uint32_t*)(v66 + 28);
                            v23 = *(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955EC);
                            uint32_t v69 = *(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955D8);
                            uint32_t v70 = *(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955DC);
                            uint32_t v71 = (uint32_t)(((*(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955DC) * 0x100) & 0xff0000) | ((*(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955DC) >>> 8) & 0xff00) | (*(uint32_t*)(gvar_5955CC * 60 + (int)&gvar_5955DC) * 0x1000000) | (v70 >>> 24));
                            do {
                                ++v63;
                            }
                            while(v63 != 32);
                            if(gvar_482A5D != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                uint32_t v72 = v71;
                                char* __ptr1_4 = ptr14;
                                v8 = v64;
                                v7 = v72;
                                __src1 = v67;
                                v53 = v68;
                                v52 = v69;
                                v51 = v65;
                                snprintf(__ptr1_4, 0x800, "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n", "bitmain_c5_scanhash", v51, v52, __src1, v53, v8);
                                sub_2E584(7, __ptr1_4, 0);
                            }
                            uint32_t v73 = gvar_5955CC;
                            v9 = v73 == 509;
                            v10 = v73 >= 509;
                            uint32_t v74 = v10 != 0 && v9 == 0 ? 0: gvar_5955CC;
                            int* ptr23 = (int*)(__mutex3 + 43);
                            if(v10 == 0 || v9 != 0) {
                                ++v74;
                            }
                            gvar_5955CC = v74;
                            int v75 = v64;
                            int* ptr24 = *(ptr16 + 513);
                            --gvar_5955D0;
                            if(v75 == ptr24) {
                                int* ptr25 = *(ptr16 + 0x202);
                                v75 = v69;
                                ptr24 = ptr25;
                                v9 = ptr25 == v69;
                                if(ptr25 == v69) {
                                    int v76 = sub_1E29C(v23);
                                    if(v76 != SOCK_STREAM) {
                                        continue loc_12DB0;
                                    }
                                }
                                else {
                                loc_12F64:
                                    *(int*)(ptr16 + 513) = v64;
                                    *(ptr16 + 0x202) = v69;
                                    if(gvar_482A5D != 0) {
                                        if(*ptr13 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                                            v6 = *(ptr12 + 296);
                                            v5 = v6 - v65;
                                            goto loc_12FC4;
                                        }
                                        else {
                                            char* __ptr1_5 = ptr14;
                                            v51 = v23 + SOCK_STREAM;
                                            snprintf(__ptr1_5, 0x800, "%s: Chain ID J%d ...\n", "bitmain_c5_scanhash", v51);
                                            sub_2E584(7, __ptr1_5, 0);
                                            v4 = gvar_482A5D;
                                            v75 = gvar_482A5D;
                                            ptr24 = NULL;
                                        }
                                        if(v4 != 0) {
                                            int v77 = (int)*ptr13;
                                            v6 = *(ptr12 + 296);
                                            v75 = v77;
                                            ptr24 = NULL;
                                            v5 = v6 - v65;
                                            if(v75 == 0) {
                                            loc_12FC4:
                                                if(gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                                                    v10 = v5 >= SOCK_STREAM;
                                                    if(v5 == SOCK_STREAM) {
                                                    loc_136C4:
                                                        ptr23 = __mutex3 + 505;
                                                    loc_13234:
                                                        uint32_t v78 = v71;
                                                        v51 = v67;
                                                        int* ptr26 = (int*)ptr18;
                                                        __src1 = v78;
                                                        v52 = v68;
                                                        sub_2A264(ptr26, &v11, ptr23, (int)ptr23, v51, (int)v52, (int)__src1);
                                                        void* __src3 = v11;
                                                        __int128 v79 = (unsigned __int128)(uint64_t)v14 | ((unsigned __int128)*(int64_t*)((int)__src3 + 312) << 64);
                                                        *(int*)&v16 = ptr23[0];
                                                        *(int64_t*)&v71 = (uint64_t)(v79 >>> 0x40X);
                                                        int v80 = sub_60180((int)(v79 >>> 0x40X), (int)(v79 >>> 0x60X));
                                                        int v81 = v80;
                                                        int v82 = param1;
                                                        if((gvar_80F7C == param1 && gvar_80F78 == v80) == 0) {
                                                            uint32_t v83 = 0;
                                                            uint32_t v84 = 0;
                                                            gvar_80F78 = (uint32_t)v81;
                                                            gvar_80F7C = (uint32_t)v82;
                                                            gvar_80F80 = 0;
                                                            gvar_80F84 = 0;
                                                            if((v81 | v82) == 0) {
                                                                v83 = 0xffffffff;
                                                                v84 = 0xffffffff;
                                                            }
                                                            else {
                                                                int v85 = v81;
                                                                int v86 = v82;
                                                                while(SOCK_STREAM) {
                                                                    char v87 = (v86 & SOCK_STREAM) != 0;
                                                                    v86 >>>= SOCK_STREAM;
                                                                    v3 = v87;
                                                                    v85 = (uint32_t)((v85 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)v3 << 31);
                                                                    uint32_t v88 = v83 + SOCK_STREAM;
                                                                    uint32_t v89 = (uint32_t)((uint32_t)(v83 >= -1) + v84);
                                                                    if((v85 | v86) == 0) {
                                                                        break;
                                                                    }
                                                                    v83 = v88;
                                                                    v84 = v89;
                                                                }
                                                            }
                                                            gvar_80F80 = v83;
                                                            gvar_80F84 = v84;
                                                            if(gvar_482A5D != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                                                v79 = (unsigned __int128)(uint64_t)v79 | ((unsigned __int128)*(int64_t*)&v71 << 64);
                                                                v51 = v81;
                                                                v52 = v82;
                                                                char* __ptr1_6 = ptr14;
                                                                v8 = v83;
                                                                v7 = v84;
                                                                *(double*)&__src1 = (double)(v79 >>> 0x40X);
                                                                snprintf(__ptr1_6, 0x800, "%s: pool_diff:%lld work_diff:%f pool_diff_bit:%lld ...\n", "hashtest_submit", v51, *(double*)&__src1, v8);
                                                                sub_2E584(7, __ptr1_6, 0);
                                                            }
                                                        }
                                                        v14 = (unsigned __int128)(uint64_t)v79 | ((unsigned __int128)gvar_7EAB0 << 64);
                                                        *(int64_t*)&v71 = (uint64_t)(v14 >>> 0x40X);
                                                        int v90 = sub_60180((int)(v14 >>> 0x40X), (int)(v14 >>> 0x60X));
                                                        uint32_t v91 = gvar_80F88;
                                                        uint32_t v92 = gvar_80F8C;
                                                        int v93 = v90;
                                                        int v94 = param1;
                                                        v9 = param1 == v92;
                                                        v10 = (uint32_t)param1 >= v92;
                                                        if(param1 == v92) {
                                                            v9 = v90 == v91;
                                                        }
                                                        if(v9 == 0) {
                                                            uint32_t v95 = 0;
                                                            gvar_80F88 = (uint32_t)v93;
                                                            gvar_80F8C = (uint32_t)v94;
                                                            uint32_t v96 = 0;
                                                            if((v93 | v94) == 0) {
                                                                v95 = 0xffffffff;
                                                                v96 = 0xffffffff;
                                                            }
                                                            else {
                                                                int v97 = v93;
                                                                int v98 = v94;
                                                                int* ptr27 = (int*)&gvar_80F88;
                                                                while(SOCK_STREAM) {
                                                                    char v99 = (v98 & SOCK_STREAM) != 0;
                                                                    v98 >>>= SOCK_STREAM;
                                                                    v3 = v99;
                                                                    v97 = (uint32_t)((v97 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)v3 << 31);
                                                                    uint32_t v100 = v95 + SOCK_STREAM;
                                                                    uint32_t v101 = (uint32_t)((uint32_t)(v95 >= -1) + v96);
                                                                    if((v97 | v98) == 0) {
                                                                        break;
                                                                    }
                                                                    v95 = v100;
                                                                    v96 = v101;
                                                                }
                                                            }
                                                            gvar_80F90 = v95;
                                                            gvar_80F94 = v96;
                                                            if(gvar_482A5D != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                                                v14 = (unsigned __int128)(uint64_t)v14 | ((unsigned __int128)*(int64_t*)&v71 << 64);
                                                                v51 = v93;
                                                                v52 = v94;
                                                                char* __ptr1_7 = ptr14;
                                                                v8 = v95;
                                                                v7 = v96;
                                                                *(double*)&__src1 = (double)(v14 >>> 0x40X);
                                                                snprintf(__ptr1_7, 0x800, "%s:net_diff:%lld current_diff:%f net_diff_bit %lld ...\n", "hashtest_submit", v51, *(double*)&__src1, v8);
                                                                sub_2E584(7, __ptr1_7, 0);
                                                            }
                                                        }
                                                        int* ptr28 = (int*)((int)__src3 + 128);
                                                        int v102 = *(ptr28 + SOCK_STREAM);
                                                        int v103 = *(ptr28 + 2);
                                                        int v104 = *(ptr28 + 3);
                                                        int v105 = *(int*)((int)__src3 + 128);
                                                        int v106 = v102;
                                                        int v107 = v103;
                                                        int v108 = v104;
                                                        int v109 = *(ptr28 + 5);
                                                        int v110 = *(ptr28 + 6);
                                                        int v111 = *(ptr28 + 7);
                                                        int v112 = *(ptr28 + 4);
                                                        int v113 = v109;
                                                        int v114 = v110;
                                                        int v115 = v111;
                                                        __s = 80;
                                                        int v116 = 0;
                                                        int* ptr29 = (int*)((int)__src3 + 64);
                                                        int v117 = *(ptr29 + SOCK_STREAM);
                                                        int v118 = *(ptr29 + 2);
                                                        int __src2 = *(int*)((int)__src3 + 64);
                                                        int v119 = v117;
                                                        int v120 = v118;
                                                        sub_316B0(&v13, &__src2, 12);
                                                        __src2 = v64;
                                                        sub_316B0(&v22, &__src2, 4);
                                                        sub_2327C((uint32_t*)&__s, (char*)&__src2);
                                                        memset(&__s, 0, 232);
                                                        sub_23430(&__src2, 32, (char*)&__s2);
                                                        int* ptr30 = &v17;
                                                        uint32_t* ptr31 = &v11;
                                                        do {
                                                            int v121 = *(ptr30 + SOCK_STREAM);
                                                            ++ptr30;
                                                            v75 = &v12;
                                                            ptr24 = ptr30;
                                                            ptr31[SOCK_STREAM] = (uint32_t)(uint8_t)(v121 >>> 24) | ((uint32_t)(uint8_t)(v121 >>> 16) << 8) | ((uint32_t)(uint8_t)(v121 >>> 8) << 16) | ((uint32_t)(uint8_t)v121 << 24);
                                                            ++ptr31;
                                                        }
                                                        while(ptr24 != &v12);
                                                        int v122 = v17;
                                                        if(v122 == 0) {
                                                            int* ptr32 = &v17;
                                                            while(SOCK_STREAM) {
                                                                int v123 = *(ptr32 - SOCK_STREAM);
                                                                --ptr32;
                                                                if(v123 == 0) {
                                                                    ++v122;
                                                                    if(v122 != 7) {
                                                                        continue;
                                                                    }
                                                                    break;
                                                                }
                                                                v2 = v122 >> 31;
                                                            loc_13574:
                                                                v70 = gvar_80F84;
                                                                uint32_t v124 = v70 >>> 5;
                                                                int v125 = (v70 * 0x8000000) | (gvar_80F80 >>> 5);
                                                                v9 = v124 == v2;
                                                                v10 = v124 >= v2;
                                                                if(v124 == v2) {
                                                                    v9 = v125 == v122;
                                                                    v10 = v125 >= v122;
                                                                }
                                                                if(v10 == 0 || v9 != 0) {
                                                                    uint32_t v126 = sub_1E160();
                                                                    int v127 = sub_51978(v64, (int)v126);
                                                                    int v128 = sub_51970(v64);
                                                                    if(gvar_482A5D != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                                                        int v129 = v23;
                                                                        char* __ptr1_8 = ptr14;
                                                                        __src1 = v128;
                                                                        v51 = v129;
                                                                        v52 = v127;
                                                                        snprintf(__ptr1_8, 0x800, "%s: chain %d which_asic_nonce %d which_core_nonce %d", "hashtest_submit", v51, v52, __src1);
                                                                        sub_2E584(7, __ptr1_8, 0);
                                                                    }
                                                                    uint32_t v130 = gvar_80F80;
                                                                    int v131 = (v23 * 0x100 + v127) * 8;
                                                                    int* ptr33 = (int*)((int)&v21 - ((gvar_80F84 * 0x8000000) | (v130 >>> 5)) * 4);
                                                                    uint32_t v132 = *(uint32_t*)((int)&gvar_99CD98 + v131);
                                                                    int v133 = *(ptr33 - 637);
                                                                    v70 = *(uint32_t*)((int)&gvar_99CD9C + v131);
                                                                    uint32_t v134 = v132;
                                                                    *(uint32_t*)((int)&gvar_99CD98 + v131) = v132 + SOCK_STREAM;
                                                                    *(uint32_t*)((int)&gvar_99CD9C + v131) = (uint32_t)((uint32_t)(v134 >= -1) + v70);
                                                                    if(-1 >>> v130 <= ((uint32_t)(uint8_t)(v133 >>> 24) | ((uint32_t)(uint8_t)(v133 >>> 16) << 8) | ((uint32_t)(uint8_t)(v133 >>> 8) << 16) | ((uint32_t)(uint8_t)v133 << 24))) {
                                                                        int v135 = v18;
                                                                        if(((uint32_t)(uint8_t)(v135 >>> 24) | ((uint32_t)(uint8_t)(v135 >>> 16) << 8) | ((uint32_t)(uint8_t)(v135 >>> 8) << 16) | ((uint32_t)(uint8_t)v135 << 24)) <= 0xfffffe) {
                                                                            int v136 = v61;
                                                                            int v137 = v23 * 8;
                                                                            uint32_t v138 = *(uint32_t*)((int)&gvar_99ED98 + v137);
                                                                            uint32_t v139 = (uint32_t)((uint32_t)(v138 >= 0xffffff00) + *(uint32_t*)((int)&gvar_99ED9C + v137));
                                                                            int v140 = v136;
                                                                            v61 = v136 + 0x100;
                                                                            int v141 = v62;
                                                                            *(uint32_t*)((int)&gvar_99ED98 + v137) = v138 + 0x100;
                                                                            *(uint32_t*)((int)&gvar_99ED9C + v137) = v139;
                                                                            v62 = (uint32_t)(v140 >= 0xffffff00) + v141;
                                                                        }
                                                                    }
                                                                    else {
                                                                        int v142 = v23 * 8;
                                                                        uint32_t v143 = v16;
                                                                        uint32_t v144 = *(uint32_t*)((int)&gvar_99ED98 + v142);
                                                                        uint32_t v145 = v144 + 0x100;
                                                                        int v146 = (int)ptr18;
                                                                        uint32_t v147 = (uint32_t)((uint32_t)(v144 >= 0xffffff00) + *(uint32_t*)((int)&gvar_99ED9C + v142));
                                                                        *(uint32_t*)((int)&gvar_99ED98 + v142) = v145;
                                                                        *(uint32_t*)((int)&gvar_99ED9C + v142) = v147;
                                                                        sub_2ACEC(v146, __src3, v64, v143);
                                                                        int v148 = v61;
                                                                        int v149 = v61;
                                                                        v61 = v148 + 0x100;
                                                                        v62 += (uint32_t)(v149 >= 0xffffff00);
                                                                    }
                                                                }
                                                            loc_135A4:
                                                                sub_2A1E0((int)&v11, "bmminer.c", "bitmain_c5_scanhash", 2153);
                                                                continue loc_12DB0;
                                                            }
                                                            v122 = 7;
                                                            v2 = 0;
                                                            goto loc_13574;
                                                        }
                                                        else {
                                                            int v150 = sub_1E29C(v23);
                                                            if(v150 == SOCK_STREAM) {
                                                                if(gvar_482A5D != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                                                    char* __ptr1_9 = ptr14;
                                                                    *(int*)&__ptr1_9[0] = 'h';
                                                                    *(int*)&__ptr1_9[4] = '2';
                                                                    *(int*)&__ptr1_9[8] = ' ';
                                                                    *(short*)&__ptr1_9[12] = 'o';
                                                                    __ptr1_9[14] = 0;
                                                                    sub_2E584(7, __ptr1_9, 0);
                                                                }
                                                                sub_2A3C4(ptr18);
                                                                sub_1E6E0(v23);
                                                            }
                                                            if(gvar_482A5D != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                                                char* __ptr1_10 = ptr14;
                                                                snprintf(__ptr1_10, 0x800, "%s: HASH2_32[7] != 0", "hashtest_submit");
                                                                sub_2E584(7, __ptr1_10, 0);
                                                            }
                                                        }
                                                        goto loc_135A4;
                                                    }
                                                    else if(v10 == 0) {
                                                        goto loc_13234;
                                                    }
                                                    else if(v5 == 2) {
                                                        ptr23 = __mutex3 + 967;
                                                        goto loc_13234;
                                                    }
                                                    else {
                                                        goto loc_12FF8;
                                                    }
                                                }
                                            }
                                            char* __ptr1_11 = ptr14;
                                            __src1 = v5;
                                            v51 = v6;
                                            v52 = v65;
                                            snprintf(__ptr1_11, 0x800, "%s: given_id:%d job_id:%d switch:%d  ...\n", "bitmain_c5_scanhash", v51, v52, __src1);
                                            sub_2E584(7, __ptr1_11, 0);
                                        }
                                    }
                                    int v151 = *(ptr12 + 296) - v65;
                                    v10 = v151 >= SOCK_STREAM;
                                    if(v151 == SOCK_STREAM) {
                                        goto loc_136C4;
                                    }
                                    if(v10 == 0) {
                                        goto loc_13234;
                                    }
                                    if(v151 == 2) {
                                        ptr23 = __mutex3 + 967;
                                        goto loc_13234;
                                    }
                                    if(*ptr13 == 0 && gvar_482A5C == 0) {
                                    loc_12FF8:
                                        if((int)gvar_7EBA0 <= 2) {
                                        loc_1302C:
                                            int v152 = sub_1E29C(v23);
                                            if(v152 != SOCK_STREAM) {
                                                continue loc_12DB0;
                                            }
                                            goto loc_1303C;
                                        }
                                    }
                                    char* __ptr1_12 = ptr14;
                                    snprintf(__ptr1_12, 0x800, "%s: job_id non\'t found ...\n", "bitmain_c5_scanhash");
                                    sub_2E584(3, __ptr1_12, 0);
                                    goto loc_1302C;
                                }
                            }
                            else {
                                goto loc_12F64;
                            }
                            if(gvar_482A5D != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                                char* __ptr1_13 = ptr14;
                                int v153 = 29295;
                                *(int*)&__ptr1_13[0] = 'r';
                                *(int*)&__ptr1_13[4] = 'a';
                                *(int*)&__ptr1_13[8] = 'o';
                                *(int*)&__ptr1_13[12] = ' ';
                                char* ptr34 = __ptr1_13 + 16;
                                *(short*)&ptr34[0] = (char)v153;
                                ptr34[2] = (char)(v153 >>> 16);
                                sub_2E584(7, __ptr1_13, 0);
                            }
                        loc_1303C:
                            sub_2A3C4(ptr18);
                            sub_1E6E0(v23);
                            if(gvar_5955D0 != 0) {
                                continue;
                            }
                            break loc_12DB0;
                        }
                    }
                    int v154 = v61;
                    pthread_rwlock_t* __rwlock1 = ptr20;
                    uint32_t v155 = gvar_99EE08;
                    uint32_t v156 = (uint32_t)((uint32_t)__carry__(gvar_99EE08, v154) + gvar_99EE0C + v62);
                    gvar_99EE08 = v155 + v154;
                    gvar_99EE0C = v156;
                    int v157 = pthread_rwlock_unlock(__rwlock1);
                    if(v157 != 0) {
                        int* ptr35 = __errno_location();
                        char* __ptr1_14 = ptr14;
                        int v158 = ptr35[0];
                        v51 = "bmminer.c";
                        v52 = "bitmain_c5_scanhash";
                        __src1 = 2156;
                        snprintf(__ptr1_14, 0x800, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", v158, "bmminer.c", "bitmain_c5_scanhash", 2156);
                        sub_2E584(3, __ptr1_14, SOCK_STREAM);
                    }
                    gvar_7ECC4{sub_2F250}();
                    pthread_mutex_unlock(__mutex4);
                    sub_304D4(SOCK_STREAM);
                    int v159 = v61;
                    int v160 = v62;
                    if((v159 | v160) == 0) {
                        continue;
                    }
                    int v161 = v159;
                    int v162 = v160 * 0x80000000;
                    ptr15 = ptr16;
                    int v163 = v160;
                    int v164 = v161 * 0x80000000;
                    int v165 = gvar_482A5D;
                    int v166 = v164;
                    int v167 = v164 - v161;
                    int v168 = ((v161 >>> SOCK_STREAM) | v162) + ~v163 + (uint32_t)(v161 <= v166);
                    int v169 = v167;
                    int v170 = v167 * 2;
                    v1 = v170 + v161;
                    v0 = v168 * 2 + (uint32_t)__carry__(v170, v161) + ((uint32_t)__carry__(v169, v169) + v163);
                    if(v165 != 0 && (*ptr13 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                        uint32_t v171 = v0;
                        char* __ptr1_15 = ptr14;
                        v51 = v1;
                        v52 = v171;
                        snprintf(__ptr1_15, 0x800, "%s: hashes %llu ...\n", "bitmain_c5_scanhash", v51);
                        sub_2E584(7, __ptr1_15, 0);
                    }
                    if((v1 | v0) == 0) {
                        continue loc_12D24;
                    }
                    break loc_12D24;
                }
                break alab1;
            }
        }
        int v172 = sub_600C4(v1, v0);
        __int128 v173 = (unsigned __int128)(uint64_t)v14 | ((unsigned __int128)((uint64_t)v172 | ((uint64_t)param1 << 32)) << 64);
        VDIV.F64((uint64_t)v14, (uint64_t)(v173 >>> 0x40X), 0x41cdcd6500000000L);
        v14 = (unsigned __int128)(uint64_t)v173 | ((unsigned __int128)((uint64_t)v173 + gvar_80F50) << 64);
        gvar_80F50 = (uint64_t)(v14 >>> 0x40X);
    }
    int v174 = sem_destroy(&g80F40);
    sub_194DC(v174, param1, __n1);
    sub_53604();
    return 0;
}
