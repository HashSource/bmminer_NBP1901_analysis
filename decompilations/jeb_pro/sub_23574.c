int sub_23574(int param0, char* param1, size_t param2, int param3) {
    long v0;
    long v1;
    int v2;
    char* __format;
    char* __format2;
    int __delim;
    int v3;
    int v4;
    int __ptr1;
    short v5;
    short v6;
    int v7;
    double v8;
    char* __s = param1;
    char* __s1 = (char*)(param0 + 4);
    int v9 = param0;
    size_t __maxlen = param2;
    int v10 = strncmp(__s1, "/rate", 5);
    if(v10 == 0) {
        if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
            __builtin_strcpy(&__ptr1, "cmd : get rate");
            sub_2E584(7, &__ptr1, 0);
        }
        int v11 = sub_1A18C();
        sub_234D8(__s, __maxlen, v11, param3);
        return 0;
    }
    v10 = strncmp(__s1, "/ideal_rate", 11);
    if(v10 == 0) {
        if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
            __ptr1 = 543452515;
            v4 = 0x6567203a;
            v3 = 1684611188;
            *(int*)&v6 = 543973733;
            __builtin_strcpy(&v5, "rate");
            sub_2E584(7, &__ptr1, 0);
        }
        uint32_t v12 = sub_1A014();
        sub_234D8(__s, __maxlen, (int)v12, param3);
        return 0;
    }
    v10 = strncmp(__s1, "/max_rate", 9);
    if(v10 == 0) {
        if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
            __builtin_strcpy(&__ptr1, "cmd : get max rate");
            sub_2E584(7, &__ptr1, 0);
        }
        uint32_t v13 = sub_19E68();
        sub_234D8(__s, __maxlen, (int)v13, param3);
        return 0;
    }
    v10 = strncmp(__s1, "/miner_status", 13);
    if(v10 == 0 && (gvar_482A5D == 0 || (gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6))) {
        return 0;
    }
    else if(v10 == 0) {
        __builtin_strcpy(&__ptr1, "cmd : get miner status");
        sub_2E584(7, &__ptr1, 0);
        return 0;
    }
    v10 = strncmp(__s1, "/productName", 12);
    if(v10 != 0) {
        v10 = strncmp(__s1, "/get_sn", 7);
        if(v10 == 0) {
            if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                __builtin_strcpy(&__ptr1, "cmd : get miner sn");
                sub_2E584(7, &__ptr1, 0);
            }
            if(gvar_7F8F8 != 0) {
                snprintf(__s, 0x100, "\n");
                return 0;
            }
            *(int*)&__s[0] = 'n';
            *(int*)&__s[4] = 'i';
            *(int*)&__s[8] = ' ';
            *(int*)&__s[12] = 's';
            *(int*)&__s[16] = 'e';
            *(int*)&__s[20] = 'n';
            *(int*)&__s[24] = 'a';
            return 0;
        }
        v10 = strncmp(__s1, "/set_sn", 7);
        if(v10 == 0) {
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                __builtin_strcpy(&__ptr1, "cmd : set miner sn, doesn\'t spport");
                sub_2E584(5, &__ptr1, 0);
            }
            snprintf(__s, 20, "doesn\'t support sn set in Release mode");
            return 0;
        }
        v10 = strncmp(__s1, "/readreg", 8);
        if(v10 == 0) {
            __delim = (uint32_t)45 | ((uint32_t)(uint16_t)(__delim >>> 16) << 16);
            char* ptr0 = strtok(__s1, &__delim);
            if(ptr0 != 0) {
                char* __nptr = strtok(NULL, &__delim);
                if(__nptr != 0) {
                    long v14 = strtol(__nptr, NULL, 10);
                    char* __nptr1 = strtok(NULL, &__delim);
                    if(__nptr1 != 0) {
                        long v15 = strtol(__nptr1, NULL, 10);
                        char* __nptr2 = strtok(NULL, &__delim);
                        if(__nptr2 != 0) {
                            long v16 = strtol(__nptr2, NULL, 16);
                            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                                snprintf(&__ptr1, 0x800, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", v9, v14, v15, v16);
                                sub_2E584(5, &__ptr1, 0);
                            }
                            uint32_t v17 = sub_1E160();
                            v7 = (long)sub_2C06C((uint32_t)v16, v17 * v15, (int)v14);
                            snprintf(__s, __maxlen, "reg 0x%08x of asic %2d @ chain %2d, val = 0x%08x", v16, v15, v14);
                            return 0;
                        }
                    }
                }
            }
        }
        else {
            v10 = strncmp(__s1, "/readcorereg", 12);
            if(v10 == 0) {
                short __delim1 = 45;
                memset(&__delim, 0, 0x400);
                char* ptr1 = strtok(__s1, &__delim1);
                if(ptr1 != 0) {
                    char* __nptr3 = strtok(NULL, &__delim1);
                    if(__nptr3 != 0) {
                        long v18 = strtol(__nptr3, NULL, 10);
                        char* __nptr4 = strtok(NULL, &__delim1);
                        if(__nptr4 != 0) {
                            long v19 = strtol(__nptr4, NULL, 10);
                            char* __nptr5 = strtok(NULL, &__delim1);
                            if(__nptr5 != 0) {
                                long v20 = strtol(__nptr5, NULL, 16);
                                if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                                    v7 = v20;
                                    v1 = v19;
                                    snprintf(&__ptr1, 0x800, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", v9, v18, v1, v7);
                                    sub_2E584(5, &__ptr1, 0);
                                }
                                int v21 = sub_2C2E8((int)v20, (int)v19, (int)v18, (uint32_t)&__delim);
                                if(v21 != 0) {
                                    snprintf(__s, __maxlen, "500 server error");
                                    return 0;
                                }
                                uint32_t v22 = sub_1E120();
                                __format2 = v22;
                                if((int)v22 <= 0) {
                                    return 0;
                                }
                                int v23 = 0;
                                __format = "asic\t%03d\tcore\t%03d\treg\t0x%02x\tval\t0x%08x\n";
                                do {
                                    long v24 = *(long*)(v23 * 4 + &__delim);
                                    v0 = v23;
                                    v1 = v20;
                                    ++v23;
                                    v7 = v24;
                                    int v25 = snprintf(&__s[v21], __maxlen - v21, __format, v19, v0, v20, v24);
                                    v21 += v25;
                                }
                                while(v23 != __format2);
                                return 0;
                            }
                        }
                    }
                }
            }
            else {
                v10 = strncmp(__s1, "/resetcore", 10);
                if(v10 == 0) {
                    __delim = (uint32_t)45 | ((uint32_t)(uint16_t)(__delim >>> 16) << 16);
                    char* ptr2 = strtok(__s1, &__delim);
                    if(ptr2 != 0) {
                        char* __nptr6 = strtok(NULL, &__delim);
                        if(__nptr6 != 0) {
                            long v26 = strtol(__nptr6, NULL, 10);
                            char* __nptr7 = strtok(NULL, &__delim);
                            if(__nptr7 != 0) {
                                long v27 = strtol(__nptr7, NULL, 10);
                                if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                                    v1 = v27;
                                    snprintf(&__ptr1, 0x800, "recvBuf = %s, chain = %d, asic = %d\n", v9, v26, v1);
                                    sub_2E584(5, &__ptr1, 0);
                                }
                                snprintf(__s, __maxlen, "reset chain %d asic %d core success!!!.", v26, v27);
                                return 0;
                            }
                        }
                    }
                }
                else {
                    int v28 = strncmp(__s1, "/nonce", 6);
                    if(v28 == 0) {
                        __format2 = "asic[%03d]=%-8d ";
                        char* __format3 = "domain %02d %s total=%-8u\n";
                        char* __format1 = "\n asic nonce number for chain[%d]...\n";
                        int v29 = 0;
                        int v30 = 0;
                        memset(&__ptr1, 0, 0x100);
                        int v31 = 0;
                        __format = __s;
                        int v32 = 0;
                        int result = 0;
                        size_t v33 = __maxlen;
                        do {
                            int v34 = sub_1E29C(v31);
                            if(v34 != 0) {
                                size_t __maxlen1 = v33 - v32;
                                char* __s2 = &__format[v32];
                                v32 += 36;
                                snprintf(__s2, __maxlen1, __format1, v31);
                                uint32_t v35 = sub_1E0F0();
                                if(v35 != 0) {
                                    int v36 = 0;
                                    do {
                                        int v37 = sub_2CDFC(v31, v36);
                                        v30 += v37;
                                        v2 = v36 + SOCK_STREAM;
                                        sub_2CDFC(v31, v36);
                                        int v38 = snprintf(v29 + &__ptr1, (size_t)(0x100 - v29), __format2, v36);
                                        uint32_t v39 = sub_1E100();
                                        sub_5FADC(v2, (int)v39);
                                        param2 = param1;
                                        v29 += v38;
                                        if(param1 == 0) {
                                            size_t v40 = param2;
                                            uint32_t v41 = sub_1E100();
                                            int v42 = sub_5F880(v36, (int)v41);
                                            v1 = v30;
                                            v30 = v40;
                                            int v43 = snprintf(&__format[v32], v33 - v32, __format3, v42, &__ptr1, v1);
                                            v29 = v30;
                                            v32 += v43;
                                        }
                                        v36 = v2;
                                    }
                                    while(v2 != v35);
                                }
                            }
                            ++v31;
                        }
                        while(v31 != 4);
                        return result;
                    }
                    int v44 = strncmp(__s1, "/adc", 4);
                    if(v44 == 0) {
                        int v45 = 0;
                        int v46 = 0;
                        __format = "\t\t\td0\td1\td2\td3\tsum\tavg\n";
                        do {
                            int v47 = sub_1E29C(v46);
                            if(v47 != 0) {
                                size_t __maxlen2 = __maxlen - v45;
                                char* __s3 = &__s[v45];
                                v45 += 23;
                                snprintf(__s3, __maxlen2, __format);
                                uint32_t v48 = sub_1E0F0();
                                __format2 = v48;
                                if(v48 != 0) {
                                    int v49 = 0;
                                    do {
                                        sub_3F92C(v46, v49, NULL);
                                        sub_3F92C(v46, v49, &g1);
                                        sub_3F92C(v46, v49, &g2);
                                        __int128 v50 = (unsigned __int128)v8 | ((unsigned __int128)v8 << 64);
                                        sub_3F92C(v46, v49, &g3);
                                        sub_3F970(v46, v49);
                                        __int128 v51 = (unsigned __int128)v8 | ((unsigned __int128)v8 << 64);
                                        sub_3F9EC(v46, v49);
                                        v0 = v49;
                                        *(double*)&v7 = v8;
                                        int64_t v52 = (uint64_t)(v51 >>> 0x40X);
                                        int64_t v53 = (uint64_t)v51;
                                        ++v49;
                                        int64_t v54 = (uint64_t)(v50 >>> 0x40X);
                                        int64_t v55 = (uint64_t)v50;
                                        int v56 = snprintf(&__s[v45], __maxlen - v45, "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", v46, v0, *(double*)&v7, v55, v54, v53, v52, v8);
                                        v45 += v56;
                                    }
                                    while(v49 != __format2);
                                }
                            }
                            ++v46;
                        }
                        while(v46 != 4);
                        return 0;
                    }
                    v10 = strncmp(__s1, "/flush", 6);
                    if(v10 == 0) {
                        sub_452F8();
                        return 0;
                    }
                    v10 = strncmp(__s1, "/power", 6);
                    if(v10 != 0) {
                        return -1;
                    }
                    __ptr1 = 0;
                    __isoc99_sscanf();
                    if(param0 == SOCK_STREAM) {
                        sub_192C8(0);
                        *(double*)&v0 = v8;
                        snprintf(__s, __maxlen, "chain %d power is %.2f", 0);
                        return 0;
                    }
                }
            }
        }
        snprintf(__s, __maxlen, "404 not found");
        return 0;
    }
    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        __ptr1 = 543452515;
        v4 = 0x6567203a;
        v3 = 1768759412;
        *(int*)&v6 = 544367982;
        __builtin_strcpy(&v5, "type");
        sub_2E584(7, &__ptr1, 0);
    }
    snprintf(__s, 0x100, "\n");
    return 0;
}
