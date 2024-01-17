int sub_3B298(int param0, int param1, int param2, int param3) {
    int v0;
    char v1;
    __int128 v2;
    int v3;
    int v4;
    int v5;
    char v6;
    char v7;
    int v8;
    int v9;
    short v10;
    int v11;
    int v12;
    int v13;
    int v14;
    short v15;
    char v16;
    char v17;
    __int128 v18;
    int v19;
    int v20;
    short __ptr1;
    char v21;
    int64_t v22 = (uint64_t)v18;
    int64_t v23 = (uint64_t)(v18 >>> 0x40X);
    int v24 = param0;
    if(gvar_7EB9C > 3) {
        *(int*)&__ptr1 = 'D';
        v14 = 544302450;
        v13 = 1768846708;
        v12 = 0x6220676e;
        v11 = 1667855201;
        v10 = 2606;
        v9 = &v17;
        v17 = 0;
        sub_2E584(3, &__ptr1, 0);
    }
    uint32_t v25 = gvar_4FCB40;
    memset((void*)(v25 + 4), 0, 48);
    *(int*)v25 = v24;
    sub_39A7C();
    sub_361E4(**(uint32_t**)gvar_4FCB40);
    int result = sub_3AC6C();
    if(result == 0) {
        uint32_t v26 = gvar_4FCB40;
        char* ptr0 = (char*)&gvar_482A70;
        int* ptr1 = *(int**)v26;
        __int128 v27 = (unsigned __int128)*(ptr1 + SOCK_STREAM) | ((unsigned __int128)((v27 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
        VCVT.F32.U32(*(ptr1 + SOCK_STREAM), *(ptr1 + SOCK_STREAM));
        sub_1A470(0xFF, gvar_482A70, (uint32_t)*(char*)(ptr1 + 5));
        if(gvar_7EB9C > 3) {
            __ptr1 = 10;
            sub_2EA54(3, &__ptr1, 0);
            uint32_t v28 = gvar_7EB9C;
            v8 = gvar_7EB9C;
            v7 = (int)v28 < 3;
            v6 = (((v28 - 3) ^ v28) & (v28 ^ 0x3)) < 0;
            if(v28 > 3) {
                *(int*)&__ptr1 = '>';
                v14 = 544162848;
                v13 = 1768846708;
                v12 = 0x7020676e;
                v11 = 0x6c617261;
                *(int*)&v10 = 778855788;
                v9 = &v15;
                v15 = 10;
                sub_2E584(3, &__ptr1, 0);
            }
        }
        int v29 = 0;
        do {
            int v30 = sub_1E29C(v29);
            if(v30 != 0) {
                sub_3962C(v29, SOCK_STREAM);
            }
            ++v29;
        }
        while(v29 != 4);
        uint32_t v31 = gvar_7EB9C;
        int* ptr2 = *(int**)gvar_4FCB40;
        int v32 = *(ptr2 + SOCK_STREAM);
        int v33 = *(ptr2 + 4);
        int v34 = *(ptr2 + 3);
        int v35 = v33;
        int v36 = v34;
        if(v31 > 3) {
            int v37 = v34;
            int v38 = v35;
            *(int*)&v16 = v32;
            v5 = v38;
            snprintf(&__ptr1, 0x800, "freq_prev = %d, freq_start = %d, freq_step = %d, freq_min = %d\n", v32, *(int*)&v16, v5, v37);
            sub_2E584(3, &__ptr1, 0);
        }
        int v39 = v36;
        int v40 = v32;
        v4 = 0;
        if(v39 <= (uint32_t)v32) {
            int* ptr3 = (int*)&gvar_7EDD0;
            int v41 = 0x80a894;
            while(SOCK_STREAM) {
                if(gvar_7EB9C > 3) {
                    __ptr1 = 10;
                    sub_2EA54(3, &__ptr1, 0);
                    if(gvar_7EB9C <= 3) {
                        goto loc_3B3CC;
                    }
                    else {
                        snprintf(&__ptr1, 0x800, ">>>> freq_curr = %d\n", v40);
                        sub_2E584(3, &__ptr1, 0);
                        v3 = sub_39998();
                        if(v3 == 0) {
                        loc_3B710:
                            result = 0;
                            if(gvar_7EB9C > 3) {
                                *(int*)&__ptr1 = 'A';
                                v14 = 1684104562;
                                v13 = 1751326841;
                                v12 = 544106849;
                                v11 = 0x656e6f64;
                                *(int*)&v10 = 2019893292;
                                *(int*)&v15 = 170816617;
                                char v42 = 0;
                                sub_2E584(3, &__ptr1, 0);
                            }
                            goto loc_3B4E0;
                        }
                        else {
                            goto loc_3B3D8;
                        }
                    }
                }
                else {
                loc_3B3CC:
                    v3 = sub_39998();
                    if(v3 == 0) {
                        goto loc_3B710;
                    }
                loc_3B3D8:
                    int v43 = 0;
                    do {
                        int v44 = sub_1E29C(v43);
                        if(v44 != 0) {
                            int v45 = sub_397A0(v43);
                            if(v45 == SOCK_STREAM) {
                                char* ptr4 = *(char**)gvar_4FCB40;
                                char* ptr5 = ptr0;
                                int v46 = *ptr3;
                                v2 = (unsigned __int128)(v2 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v46 << 96);
                                int v47 = (int)*ptr5;
                                char* ptr6 = (char*)v40;
                                VCVT.F32.S32((uint32_t)v27, (uint32_t)(v2 >>> 0x60X));
                                *(int*)&v16 = (uint32_t)*(ptr4 + 21);
                                sub_1AAE4(v43, v47, v32, ptr6, v16);
                            }
                        }
                        ++v43;
                    }
                    while(v43 != 4);
                    v32 = v40;
                    result = sub_3AC6C();
                    if(result == 0) {
                        sub_321B8(v40, gvar_7EB58, 20);
                        int v48 = sub_3A86C(&v40);
                        int v49 = sub_391F4(v48);
                        do {
                            int v50 = sub_1E29C(result);
                            if(v50 != 0) {
                                int v51 = sub_397A0(result);
                                if(v51 == SOCK_STREAM) {
                                    sub_3A054((uint32_t)result, v49);
                                }
                            }
                            ++result;
                        }
                        while(result != 4);
                        int v52 = 0;
                        do {
                            int v53 = sub_1E29C(v52);
                            if(v53 != 0) {
                                int v54 = sub_397A0(v52);
                                int v55 = v54;
                                if(v54 == SOCK_STREAM) {
                                    int* ptr7 = *(int**)gvar_4FCB40;
                                    v27 = (unsigned __int128)*(ptr7 + 7) | ((unsigned __int128)((unsigned __int128)*(ptr7 + 8) | ((unsigned __int128)((uint64_t)*(ptr7 + 9) | ((uint64_t)(uint32_t)(v27 >>> 0x60X) << 32)) << 32)) << 32);
                                    int v56 = sub_39B60(v52);
                                    v7 = v56 < 0;
                                    v1 = v56 == 0;
                                    if(v56 == 0) {
                                        *(int*)(v52 * 4 + gvar_4FCB40 + 20) = v55;
                                    }
                                    else {
                                        sub_3962C(v52, 2);
                                    }
                                    sub_3A828(v52, (int*)v49);
                                    int* ptr8 = (int*)(v52 * 4 + gvar_4FCB40);
                                    v2 = (unsigned __int128)(v2 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*(ptr8 + 9) << 96);
                                    VCMPE.F32((uint32_t)v27, (uint32_t)(v2 >>> 0x60X));
                                    VMRS((uint8_t)2 | ((uint8_t)v1 << 2) | ((uint8_t)v7 << 3), v19);
                                    if((v1 == 0 && v7 == 0)) {
                                        *(ptr8 + 9) = (uint32_t)v27;
                                    }
                                }
                            }
                            ++v52;
                        }
                        while(v52 != 4);
                        int v57 = 0;
                        int* ptr9 = (int*)(v49 + v41);
                        int* ptr10 = (int*)(v4 * 16 + (int)&v21);
                        do {
                            v8 = sub_1E29C(v57);
                            ++v57;
                            if(v8 != 0) {
                                param3 = *ptr9;
                            }
                            ++ptr10;
                            if(v8 != 0) {
                                param2 = v40;
                            }
                            ++ptr9;
                            if(v8 != 0) {
                                *(ptr10 - SOCK_STREAM) = param3;
                                *(int*)(v4 * 4 + (int)&v20) = param2;
                            }
                        }
                        while(v57 != 4);
                        ++v4;
                        int v58 = v40 - v35;
                        int v59 = v36;
                        v40 = v58;
                        if(v59 <= (uint32_t)v58) {
                            continue;
                        }
                        break;
                    }
                    if(gvar_7EB9C > 3) {
                        *(int*)&__ptr1 = 'S';
                        v14 = 0x746c6f76;
                        v13 = 0x20656761;
                        v12 = 1818845542;
                        v11 = 0x202c6465;
                        *(int*)&v10 = 1953069157;
                        v15 = 2606;
                        char v60 = 0;
                        sub_2E584(3, &__ptr1, 0);
                    }
                    goto loc_3B4E0;
                }
            }
        }
        result = 0;
    loc_3B4E0:
        int v61 = 0;
        __int128 v62 = (unsigned __int128)(uint64_t)((unsigned __int128)5.0 | ((unsigned __int128)((v18 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32)) | ((unsigned __int128)1.5 << 64);
        int v63 = sub_1E29C(0);
        if(v63 == 0) {
        loc_3B4FC:
            do {
                ++v61;
                if(v61 == 4) {
                    return result;
                }
                v0 = sub_1E29C(v61);
            }
            while(v0 == 0);
        }
        v9 = v61 * 4;
        int v64 = 0;
        int* ptr11 = (int*)(v9 + (int)&v21);
        int v65 = v4 - SOCK_STREAM;
        int v66 = 0;
        while(SOCK_STREAM) {
            v7 = v65 > v66;
            v1 = v65 == v66;
            v6 = (((v66 - v65) ^ v66) & (v65 ^ v66)) < 0;
            char v67 = v65 <= (uint32_t)v66;
            if(v65 > v66) {
                v2 = (unsigned __int128)*ptr11 | ((unsigned __int128)((v2 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                VCMPE.F32(*ptr11, (uint32_t)v62);
                VMRS((uint8_t)v6 | ((uint8_t)v67 << SOCK_STREAM) | ((uint8_t)v1 << 2) | ((uint8_t)v7 << 3), v19);
                if(v7 == 0) {
                    ptr11 += 4;
                    v2 = (unsigned __int128)(uint64_t)v2 | ((unsigned __int128)*ptr11 << 64) | ((unsigned __int128)(uint32_t)(v2 >>> 0x60X) << 96);
                    VCVT.F64.F32((uint64_t)v2, (uint32_t)v2);
                    ++v66;
                    VCVT.F64.F32((uint64_t)(v2 >>> 0x40X), (uint32_t)(v2 >>> 0x40X));
                    VMUL.F64((uint64_t)(v2 >>> 0x40X), (uint64_t)(v2 >>> 0x40X), (uint64_t)(v62 >>> 0x40X));
                    VCMP.F64((uint64_t)v2, (uint64_t)(v2 >>> 0x40X));
                    VMRS((uint8_t)v6 | ((uint8_t)v67 << SOCK_STREAM) | ((uint8_t)v1 << 2) | ((uint8_t)0 << 3), v19);
                    if(v1 != 0 || v6 != 0) {
                        continue;
                    }
                    v64 = v66;
                    continue;
                }
                v64 = v66;
            }
            break;
        }
        uint32_t v68 = gvar_7EB9C;
        int v69 = *(int*)(v64 * 4 + (int)&v20);
        *(int*)(gvar_4FCB40 + v9 + 4) = *(int*)(v64 * 4 + (int)&v20);
        if(v68 <= 3) {
            goto loc_3B4FC;
        }
        v5 = v69;
        *(int*)&v16 = v64;
        snprintf(&__ptr1, 0x800, "chain %d best level %d, freq %d\n", v61, *(int*)&v16, v5);
        sub_2E584(3, &__ptr1, 0);
        goto loc_3B4FC;
    }
    return result;
}
