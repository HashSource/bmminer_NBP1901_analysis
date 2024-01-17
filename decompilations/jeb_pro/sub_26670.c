int sub_26670(int param0, int param1) {
    int v0;
    uint32_t v1;
    int64_t v2;
    __int128 v3;
    __int128 v4;
    __int128 v5;
    int64_t v6 = (uint64_t)v4;
    sub_32530();
    uint32_t v7 = gvar_7FA5C;
    uint32_t v8 = v7 >> 31;
    if((((uint32_t)(((int64_t)v7 * 0x66666667L) >>> 32L) >> SOCK_STREAM) - v8) * 5 == v7) {
        if(gvar_80F58 == SOCK_STREAM) {
            memset(&gvar_7FA60, 0, 320);
            memset(&gvar_7FBA0, 0, 32);
            memset(&gvar_7FBC0, 0, 32);
            gvar_7FBE0 = 0;
            gvar_7FBF0 = 0;
            gvar_80F58 = 0;
            gvar_7FBE4 = 0;
            gvar_7FBE8 = 0;
            gvar_7FBEC = 0;
            gvar_7FBF4 = 0;
            gvar_7FBF8 = 0;
            gvar_7FBFC = 0;
        }
        time_t v9 = sub_26104();
        uint32_t* ptr0 = (uint32_t*)&gvar_7FBA0;
        __int128 v10 = (unsigned __int128)0x41efffffffe00000L | ((unsigned __int128)v2 << 64);
        __int128 v11 = 0x41CDCD65000000000000000000000000X;
        uint32_t* ptr1 = (uint32_t*)&gvar_7FBC0;
        int v12 = 0;
        v4 = (unsigned __int128)(int)(v9 - gvar_7FA3C) | ((unsigned __int128)((v4 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
        int v13 = 0x66666667;
        int* ptr2 = (int*)&gvar_7FBF0;
        gvar_7FA3C = (uint32_t)v9;
        int v14 = 0;
        do {
            int v15 = v12 * 4;
            int v16 = sub_1E29C(v12);
            v1 = v12 * 8;
            uint32_t v17 = v1 + &gvar_99ED98;
            if(v16 != 0) {
                uint32_t v18 = *(uint32_t*)(v17 + 4);
                uint32_t v19 = *(uint32_t*)(v12 * 4 + (int)&gvar_7FBE0);
                int v20 = (v15 + v12) * 2;
                int* ptr3 = ptr2;
                int v21 = v20;
                uint32_t v22 = v19 + SOCK_STREAM;
                int64_t v23 = (int64_t)v22 * v13;
                int* ptr4 = (uint32_t)v23;
                int v24 = *(int*)(v12 * 4 + (int)ptr3);
                uint32_t* ptr5 = (uint32_t*)((v19 + v20) * 8 + &gvar_7FA00);
                v0 = v24;
                int v25 = ((uint32_t)(v23 >>> 32L) >> 2) - (v22 >> 31);
                if(v0 <= 9) {
                    ptr4 = ptr3;
                }
                uint32_t v26 = *ptr1;
                int v27 = v25 * 5;
                if(v0 <= 9) {
                    ++v24;
                    *(int*)(v12 * 4 + (int)ptr4) = v24;
                }
                uint32_t v28 = v22 - v27 * 2;
                uint32_t v29 = *(uint32_t*)((int)&gvar_99ED98 + v1);
                uint32_t v30 = *(ptr0 + SOCK_STREAM);
                *(uint32_t*)(v12 * 4 + (int)&gvar_7FBE0) = v28;
                uint32_t v31 = *ptr0;
                uint32_t v32 = *(ptr1 + SOCK_STREAM);
                *ptr0 = v29;
                uint32_t v33 = v29 - v31;
                *(ptr0 + SOCK_STREAM) = v18;
                uint32_t v34 = ~v30 + (uint32_t)(v29 >= v31) + v18;
                *(ptr5 + 24) = v33;
                uint32_t v35 = v33 + v26;
                *(ptr5 + 25) = v34;
                v1 = (uint32_t)__carry__(v33, v26) + v34 + v32;
                *ptr1 = v35;
                *(ptr1 + SOCK_STREAM) = v1;
                int v36 = sub_600B4(v35, v1);
                __int128 v37 = (unsigned __int128)(uint64_t)v3 | ((unsigned __int128)((uint64_t)v36 | ((uint64_t)param1 << 32)) << 64);
                VCVT.F64.S32((uint64_t)v3, (uint32_t)v4);
                VMUL.F64((uint64_t)v5, (uint64_t)(v37 >>> 0x40X), (uint64_t)v10);
                __int128 v38 = (unsigned __int128)(v37 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v24 << 96);
                VCVT.F64.S32((uint64_t)(v38 >>> 0x40X), (uint32_t)(v38 >>> 0x60X));
                VDIV.F64((uint64_t)(v5 >>> 0x40X), (uint64_t)v5, (uint64_t)(v38 >>> 0x40X));
                v3 = (unsigned __int128)(uint64_t)v38 | ((unsigned __int128)(uint64_t)v38 << 64);
                VDIV.F64((uint64_t)v38, (uint64_t)(v5 >>> 0x40X), (uint64_t)(v3 >>> 0x40X));
                VDIV.F64((uint64_t)(v10 >>> 0x40X), (uint64_t)v3, (uint64_t)(v11 >>> 0x40X));
                sub_1E4C0(v12);
                v11 = (unsigned __int128)((uint64_t)v11 + (uint64_t)(v10 >>> 0x40X)) | ((unsigned __int128)(uint64_t)(v11 >>> 0x40X) << 64);
                uint32_t v39 = *ptr1;
                int* ptr6 = (int*)((v28 + v21) * 8 + &gvar_7FA00);
                int v40 = *(ptr6 + 24);
                uint32_t v41 = (uint32_t)(~*(ptr6 + 25) + (uint32_t)(v40 <= v39) + *(ptr1 + SOCK_STREAM));
                *ptr1 = v39 - v40;
                *(ptr1 + SOCK_STREAM) = v41;
            }
            ++v12;
            ptr0 += 2;
            ptr1 += 2;
        }
        while(v12 != 4);
        int v42 = v14;
        sub_1E2B4();
        sprintf(&g80FB8, "\n");
        if(gvar_80F5C == SOCK_STREAM) {
            gvar_7FC00 = 0;
            gvar_7FC04 = 0;
            memset(&gvar_7FC08, 0, 2880);
            gvar_80748 = 0;
            gvar_80F5C = 0;
        }
        time_t v43 = sub_26104();
        uint32_t v44 = gvar_99EE08;
        uint32_t v45 = gvar_99EE0C;
        uint32_t v46 = gvar_7FA40;
        gvar_7FA40 = (uint32_t)v43;
        if((v44 | v45) == 0) {
            v7 = gvar_7FA5C;
            v8 = v7 >> 31;
        }
        else {
            int v47 = (int)(v43 - v46);
            uint32_t v48 = gvar_7FC00;
            uint32_t v49 = v44 - v48;
            uint32_t v50 = ~gvar_7FC04 + (uint32_t)(v48 <= v44) + v45;
            uint32_t v51 = v49 * 0x80000000;
            uint32_t v52 = v51 - v49;
            uint32_t v53 = v52 * 2;
            int v54 = sub_600B4(v49 + v53, (uint32_t)(((v50 * 0x80000000) | (v49 >>> SOCK_STREAM)) * 2 + (uint32_t)(v49 <= v51) * 2 + ((uint32_t)__carry__(v49, v53) + (uint32_t)__carry__(v52, v52)) - v50 - 2));
            v0 = v47;
            __int128 v55 = (unsigned __int128)((uint64_t)v54 | ((uint64_t)param1 << 32)) | ((unsigned __int128)0x41cdcd6500000000L << 64);
            v1 = gvar_80748;
            int64_t* ptr7 = (int64_t*)&gvar_7FC08;
            VDIV.F64((uint64_t)v55, (uint64_t)v55, (uint64_t)(v55 >>> 0x40X));
            if(v0 != 0) {
                VMOVNE((uint32_t)(v55 >>> 0x60X), v47);
                VCVTNE.F64.S32((uint64_t)(v55 >>> 0x40X), (uint32_t)(v55 >>> 0x60X));
            }
            uint32_t v56 = v1 + SOCK_STREAM;
            gvar_80748 = v1 + SOCK_STREAM;
            int64_t* ptr8 = (int64_t*)((v1 - ((uint32_t)(((v1 >>> 3) * 0x16c16c17L) >>> 32L) >>> 2) * 360) * 8 + &gvar_7FA00);
            if(v0 != 0) {
                VDIVNE.F64((uint64_t)v55, (uint64_t)v55, (uint64_t)(v55 >>> 0x40X));
            }
            __int128 v57 = (unsigned __int128)(uint64_t)v55;
            *(ptr8 + 65) = (uint64_t)v55;
            do {
                int v58 = v42;
                ++v42;
                if(v56 == v58) {
                loc_26A70:
                    v3 = (unsigned __int128)(uint32_t)v57 | ((unsigned __int128)v56 << 32) | ((unsigned __int128)(uint64_t)(v57 >>> 0x40X) << 64);
                    VCVT.F64.S32((uint64_t)v3, (uint32_t)(v3 >>> 0x20X));
                loc_26A78:
                    VDIV.F64((uint64_t)(v5 >>> 0x40X), (uint64_t)(v3 >>> 0x40X), (uint64_t)v3);
                    gvar_80FC8 = (uint64_t)(v5 >>> 0x40X);
                    sub_1E2D8();
                    v7 = gvar_7FA5C;
                    uint32_t v59 = gvar_99EE0C;
                    v8 = v7 >> 31;
                    gvar_7FC00 = gvar_99EE08;
                    gvar_7FC04 = v59;
                    goto loc_266B4;
                }
                else {
                    __int128 v60 = (unsigned __int128)*ptr7 | ((unsigned __int128)(uint64_t)(v57 >>> 0x40X) << 64);
                    ++ptr7;
                    v57 = (unsigned __int128)(uint64_t)v60 | ((unsigned __int128)((uint64_t)(v60 >>> 0x40X) + (uint64_t)v60) << 64);
                }
            }
            while(v42 != 360);
            if(v56 < 360) {
                goto loc_26A70;
            }
            v3 = (unsigned __int128)0x4076800000000000L | ((unsigned __int128)(uint64_t)(v57 >>> 0x40X) << 64);
            goto loc_26A78;
        }
    }
loc_266B4:
    int64_t v61 = (int64_t)v7 * 0x66666667L;
    int v62 = (int)v61;
    if((((uint32_t)(v61 >>> 32L) >> 2) - v8) * 10 == v7) {
        v62 = sub_31D38();
        if(v62 == 2) {
            v62 = sub_2D158(2, param1);
        }
        v7 = gvar_7FA5C;
    }
    uint32_t v63 = v7 + SOCK_STREAM;
    param1 = v63 >> 31;
    gvar_7FA5C = v63;
    if(((((uint32_t)(((int64_t)v63 * 0xffffffff88888889L) >>> 32L) + v63) >> 5) - param1) * 60 == v63) {
        sub_3264C(v62, param1);
        v63 = gvar_7FA5C;
        int v64 = 1800;
        param1 = v63 >> 31;
        if(((((uint32_t)(((int64_t)v63 * -1851608123L) >>> 32L) + v63) >> 10) - param1) * 1800 == v63) {
        loc_26780:
            v64 = sub_26134(1800, param1);
            v63 = gvar_7FA5C;
            param1 = v63 >> 31;
        }
        if(((((uint32_t)(((int64_t)v63 * 0xffffffff88888889L) >>> 32L) + v63) >> 5) - param1) * 60 == v63) {
            sub_2CB2C(v64, param1);
            sub_2CE20();
            v63 = gvar_7FA5C;
            param1 = v63 >> 31;
        }
    }
    else if(((((uint32_t)(((int64_t)v63 * -1851608123L) >>> 32L) + v63) >> 10) - param1) * 1800 == v63) {
        goto loc_26780;
    }
    if(((((uint32_t)(((int64_t)v63 * -1851608123L) >>> 32L) + v63) >> 9) - param1) * 900 == v63) {
        sub_26250();
    }
    return 0;
}
