int sub_2974C(int* param0, uint32_t param1) {
    __int128 v0;
    int v1;
    int v2;
    int v3;
    int v4;
    short __ptr1;
    char __src3;
    char __dest1;
    char __src1;
    char __dest;
    int v5;
    char v6;
    char v7;
    char v8;
    char v9;
    char __src4;
    __int128 v10;
    pthread_mutex_t* __mutex = (pthread_mutex_t*)(param0 + 53);
    int* ptr0 = param0;
    void* __dest2 = (void*)param1;
    int v11 = pthread_mutex_lock(__mutex);
    if(v11 == 0) {
        v4 = "bmminer.c";
    }
    else {
        int* ptr1 = __errno_location();
        int v12 = ptr1[0];
        v4 = "bmminer.c";
        v3 = "bmminer.c";
        v2 = "gen_stratum_work";
        snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v12, "bmminer.c", "gen_stratum_work", 0x4f4);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    pthread_rwlock_t* __rwlock = (pthread_rwlock_t*)(ptr0 + 59);
    int v13 = pthread_rwlock_wrlock(__rwlock);
    if(v13 != 0) {
        int* ptr2 = __errno_location();
        snprintf(&__ptr1, 0x800, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", ptr2[0], v4, "gen_stratum_work", &g4F4);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    int* ptr3 = ptr0 + 156;
    int v14 = *(ptr0 + 0x188);
    int v15 = *ptr3;
    int v16 = *(ptr3 + SOCK_STREAM);
    int v17 = *(ptr0 + 394);
    size_t __n = *(size_t*)(ptr0 + 158);
    v3 = "gen_stratum_work";
    int __src = v15;
    int v18 = v16;
    v2 = 1273;
    int* ptr4 = (int*)((int)__dest2 + 304);
    sub_30EA8((void*)(v17 + v14), &__src, __n, "bmminer.c", "gen_stratum_work", 1273);
    int v19 = *(ptr0 + 156);
    int v20 = *(ptr0 + 157);
    *(ptr0 + 156) = v19 + SOCK_STREAM;
    *(ptr0 + 157) = (uint32_t)(v19 >= -1) + v20;
    *(int*)((int)__dest2 + 296) = v19;
    *(int*)((int)__dest2 + 300) = v20;
    *(int*)((int)__dest2 + 304) = *(ptr0 + 158);
    int v21 = pthread_rwlock_unlock(__rwlock);
    if(v21 == 0) {
        int v22 = pthread_rwlock_rdlock(__rwlock);
        if(v22 == 0) {
            goto loc_29830;
        }
        else {
            goto loc_2A024;
        }
    }
    else {
        int* ptr5 = __errno_location();
        int v23 = ptr5[0];
        v2 = "gen_stratum_work";
        v3 = v4;
        snprintf(&__ptr1, 0x800, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", v23, v3, "gen_stratum_work", &g4FF);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        int v24 = pthread_rwlock_rdlock(__rwlock);
        if(v24 == 0) {
            goto loc_29830;
        }
    loc_2A024:
        int* ptr6 = __errno_location();
        int v25 = ptr6[0];
        v2 = "gen_stratum_work";
        v3 = v4;
        snprintf(&__ptr1, 0x800, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v25, v3, "gen_stratum_work", &g4FF);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        int v26 = pthread_mutex_unlock(__mutex);
        if(v26 != 0) {
            goto loc_2A074;
        loc_29830:
            int v27 = pthread_mutex_unlock(__mutex);
            if(v27 != 0) {
            loc_2A074:
                int* ptr7 = __errno_location();
                snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", ptr7[0], v4, "gen_stratum_work", &g4FF);
                sub_2E584(3, &__ptr1, SOCK_STREAM);
            }
        }
    }
    sub_2F1EC(*(void**)(ptr0 + 0x188), *(size_t*)(ptr0 + 393), &__ptr1);
    sub_2F1EC(&__ptr1, 32, &__src1);
    v2 = 1283;
    v3 = "gen_stratum_work";
    sub_30EA8(&__dest, &__src1, 32, "bmminer.c", "gen_stratum_work", 1283);
    if(*(ptr0 + 427) > 0) {
        int v28 = 0;
        do {
            void* __src2 = *(void**)(v28 * 4 + *(ptr0 + 169));
            ++v28;
            sub_30EA8(&__dest1, __src2, 32, "bmminer.c", "gen_stratum_work", 1287);
            sub_2F1EC(&__dest, 64, &__ptr1);
            sub_2F1EC(&__ptr1, 32, &__src1);
            v2 = 1289;
            v3 = "gen_stratum_work";
            sub_30EA8(&__dest, &__src1, 32, "bmminer.c", "gen_stratum_work", 1289);
        }
        while(*(ptr0 + 427) > v28);
    }
    int* ptr8 = &v6;
    int* ptr9 = &v18;
    do {
        int v29 = *(ptr8 + SOCK_STREAM);
        ++ptr8;
        *(ptr9 + SOCK_STREAM) = (uint32_t)(uint8_t)(v29 >>> 24) | ((uint32_t)(uint8_t)(v29 >>> 16) << 8) | ((uint32_t)(uint8_t)(v29 >>> 8) << 16) | ((uint32_t)(uint8_t)v29 << 24);
        ++ptr9;
    }
    while(ptr8 != &v7);
    sub_30EA8(__dest2, (void*)(ptr0 + 395), 112, "bmminer.c", "gen_stratum_work", 1298);
    v2 = 1299;
    v3 = "gen_stratum_work";
    sub_30EA8((void*)((int)__dest2 + 36), &__src1, 32, "bmminer.c", "gen_stratum_work", 1299);
    int* ptr10 = ptr0 + 456;
    int v30 = *(ptr10 + SOCK_STREAM);
    *(int*)((int)__dest2 + 312) = *ptr10;
    *(int*)((int)__dest2 + 316) = v30;
    __strdup();
    *(uint32_t*)((int)__dest2 + 288) = param0;
    __strdup();
    *(uint32_t*)((int)__dest2 + 320) = param0;
    __strdup();
    *(uint32_t*)((int)__dest2 + 308) = param0;
    int v31 = pthread_rwlock_unlock(__rwlock);
    if(v31 != 0) {
        int* ptr11 = __errno_location();
        int v32 = ptr11[0];
        v2 = "gen_stratum_work";
        v3 = v4;
        snprintf(&__ptr1, 0x800, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", v32, v3, "gen_stratum_work", &g51E);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    gvar_7ECC4{sub_2F250}();
    if(gvar_482A5D != 0) {
        void* __ptr = sub_2F670((int)__dest2, &g70);
        void* __ptr2 = sub_2F670((int)&__src1, &g20);
        if(gvar_482A5D != 0) {
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6) {
                snprintf(&__ptr1, 0x800, "Generated stratum merkle %s", __ptr2);
                sub_2E584(7, &__ptr1, 0);
                if(gvar_482A5D != 0 && gvar_590404 != 0) {
                    goto loc_29DEC;
                }
                else if(gvar_482A5D != 0) {
                    goto loc_29DC0;
                }
            }
            else {
            loc_29DC0:
                if(gvar_482A5C != 0 || (int)gvar_7EBA0 > 6) {
                loc_29DEC:
                    snprintf(&__ptr1, 0x800, "Generated stratum header %s", __ptr);
                    sub_2E584(7, &__ptr1, 0);
                    if(gvar_482A5D == 0) {
                        goto loc_29E88;
                    }
                    else if(gvar_590404 != 0) {
                        goto loc_29E50;
                    }
                }
                if(gvar_482A5C == 0 && (int)gvar_7EBA0 <= 6) {
                    goto loc_29E88;
                }
            loc_29E50:
                int v33 = *(int*)((int)__dest2 + 288);
                int v34 = *(ptr4 - SOCK_STREAM);
                v3 = *(ptr4 - 2);
                v2 = v34;
                snprintf(&__ptr1, 0x800, "Work job_id %s nonce2 %llu ntime %s", v33, v3, v2);
                sub_2E584(7, &__ptr1, 0);
            }
        }
    loc_29E88:
        free(__ptr);
        free(__ptr2);
    }
    int* ptr12 = (int*)((int)__dest2 - 4);
    int* ptr13 = &v8;
    do {
        int v35 = *(ptr12 + SOCK_STREAM);
        ++ptr12;
        *(ptr13 + SOCK_STREAM) = (uint32_t)(uint8_t)(v35 >>> 24) | ((uint32_t)(uint8_t)(v35 >>> 16) << 8) | ((uint32_t)(uint8_t)(v35 >>> 8) << 16) | ((uint32_t)(uint8_t)v35 << 24);
        ++ptr13;
    }
    while(ptr13 != &v9);
    sub_2F024((int*)&__ptr1);
    sub_2F054((int)&__ptr1, &__src3, 64);
    v2 = 1029;
    v3 = "calc_midstate";
    sub_30EA8((void*)((int)__dest2 + 128), &__src4, 32, "bmminer.c", "calc_midstate", 1029);
    sub_294B8((void*)((int)__dest2 + 160), param1);
    ++gvar_5945B4;
    time_t v36 = time(NULL);
    time_t v37 = v36 - gvar_80B98;
    char v38 = v37 < 5;
    char v39 = v37 == 5;
    char v40 = (((int)(v37 - 5) ^ v37) & (int)(v37 ^ 0x5)) < 0;
    char v41 = (uint32_t)v37 >= 5;
    if(v37 > 5) {
        v37 = time(NULL);
        uint32_t v42 = gvar_5945B4;
        gvar_80B98 = (uint32_t)v37;
        gvar_80B9C = v42;
    }
    int64_t v43 = *(int64_t*)((int)__dest2 + 312);
    *(char*)((int)__dest2 + 0x11c) = SOCK_STREAM;
    *(uint32_t*)((int)__dest2 + 260) = ptr0;
    VCMP.F64(v43, 0);
    VMRS((uint8_t)v40 | ((uint8_t)v41 << SOCK_STREAM) | ((uint8_t)v39 << 2) | ((uint8_t)v38 << 3), v5);
    *(int*)((int)__dest2 + 248) = 0;
    *(char*)((int)__dest2 + 0x118) = 0;
    *(int*)((int)__dest2 + 336) = 0;
    *(char*)((int)__dest2 + 440) = 83;
    *(int*)((int)__dest2 + 244) = 60;
    if(v39 == 0) {
        *(int64_t*)((int)__dest2 + 376) = v43;
        (uint64_t)param0 | ((uint64_t)param1 << 32) = round((uint64_t)v37 | ((uint64_t)83 << 32));
        v1 = sub_60180((int)v43, (int)(v43 >>> 32L));
    }
    else {
        int v44 = sub_600B4(*(uint32_t*)((int)__dest2 + 184), *(uint32_t*)((int)__dest2 + 188));
        VMUL.F64(0x4bf0000000000000L, (uint64_t)v44 | ((uint64_t)param1 << 32), 0x4bf0000000000000L);
        int v45 = sub_600B4(*(uint32_t*)((int)__dest2 + 176), *(uint32_t*)((int)__dest2 + 180));
        VMLA.F64(0x4bf0000000000000L, (uint64_t)v45 | ((uint64_t)param1 << 32), 0x47f0000000000000L);
        int v46 = sub_600B4(*(uint32_t*)((int)__dest2 + 168), *(uint32_t*)((int)__dest2 + 172));
        __int128 v47 = (unsigned __int128)((uint64_t)v46 | ((uint64_t)param1 << 32)) | ((unsigned __int128)0x43f0000000000000L << 64);
        VMLA.F64(0x4bf0000000000000L, (uint64_t)v46 | ((uint64_t)param1 << 32), (uint64_t)(v47 >>> 0x40X));
        int v48 = sub_600B4(*(uint32_t*)((int)__dest2 + 160), *(uint32_t*)((int)__dest2 + 164));
        v0 = (unsigned __int128)(uint64_t)v47 | ((unsigned __int128)(((uint64_t)v48 | ((uint64_t)param1 << 32)) + 6.277101735386681E57) << 64);
        VCMP.F64((uint64_t)(v0 >>> 0x40X), 0);
        VMRS((uint8_t)v40 | ((uint8_t)v41 << SOCK_STREAM) | ((uint8_t)v39 << 2) | ((uint8_t)v38 << 3), v5);
        v43 = 0x4defffe000000000L;
        v1 = -1;
        *(int64_t*)((int)__dest2 + 376) = 0x4defffe000000000L;
    }
    *(int64_t*)(ptr0 + 120) = v43;
    int v49 = *(int*)((int)__dest2 + 260);
    int v50 = sub_60120(v1, -1, 0xa4c68000, 232830);
    __int128 v51 = (unsigned __int128)0x408f400000000000L | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v50 << 96)) >>> 0x40X) << 64);
    VCVT.F64.S32((uint64_t)(v10 >>> 0x40X), (uint32_t)(v51 >>> 0x60X));
    __ptr1 = 69;
    VDIV.F64((uint64_t)(v51 >>> 0x40X), (uint64_t)(v10 >>> 0x40X), (uint64_t)v51);
    *(double*)&v3 = (double)(v51 >>> 0x40X);
    snprintf((char*)(v49 + 48), 8, "%.3g%s", *(double*)&v3, 69);
    __int128 v52 = (unsigned __int128)(uint64_t)v51 | ((unsigned __int128)*(int64_t*)(ptr0 + 116) << 64);
    VCMP.F64((uint64_t)(v52 >>> 0x40X), v43);
    VMRS(10, v5);
    VCMPE.F64((uint64_t)(v52 >>> 0x40X), v43);
    VMRS(10, v5);
    VCMP.F64((uint64_t)(v52 >>> 0x40X), 0);
    VMRS(10, v5);
    __int128 v53 = (unsigned __int128)(uint64_t)v52 | ((unsigned __int128)*(int64_t*)(ptr0 + 118) << 64);
    VCMP.F64((uint64_t)(v53 >>> 0x40X), v43);
    VMRS(10, v5);
    VCMPE.F64((uint64_t)(v53 >>> 0x40X), v43);
    VMRS(10, v5);
    *(int64_t*)(ptr0 + 118) = v43;
    *(ptr0 + 123) = SOCK_STREAM;
    return sub_302A0((int*)((int)__dest2 + 264));
}
