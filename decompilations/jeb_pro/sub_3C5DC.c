int sub_3C5DC(int param0, int param1, size_t __n) {
    int v0;
    int* ptr0;
    __int128 v1;
    int v2;
    int v3;
    char v4;
    char v5;
    __useconds_t __useconds;
    char* __format1;
    __useconds_t __useconds;
    char* __format1;
    char* ptr1;
    uint32_t v6;
    char v7;
    uint32_t v8;
    int v9;
    int* ptr2;
    int result;
    int v10;
    short v11;
    int v12;
    int v13;
    int v14;
    int v15;
    short v16;
    int v17;
    int v18;
    char v19;
    char v20;
    short v21;
    short v22;
    short __ptr1;
    short v23;
    int64_t v24;
    if(gvar_7EB9C > 3) {
        v15 = "\n";
        *(int*)&__ptr1 = 'D';
        v14 = 544302450;
        v13 = 1768846708;
        v12 = 0x6620676e;
        *(int*)&v21 = 778399337;
        v11 = 10;
        sub_2E584(3, &__ptr1, 0);
    }
    int v25 = 0;
    do {
        int v26 = sub_1E29C(v25);
        if(v26 != 0) {
            uint32_t v27 = sub_1E0F0();
            v10 = v27;
            if(v27 != 0) {
                uint32_t v28 = gvar_4FCB44;
                int v29 = v25 * 0x100 + v27;
                int v30 = *(int*)v28;
                int v31 = v29 * 4 + v28;
                int v32 = v25 * 0x400 + v28;
                int v33 = v25 * 4 + v30;
                do {
                    *(int*)(v32 + 4) = *(int*)(v33 + 4);
                    v32 += 4;
                    v10 = v32;
                }
                while(v31 != v32);
            }
        }
        ++v25;
    }
    while(v25 != 4);
    sub_361E4(**(uint32_t**)gvar_4FCB44);
    uint32_t v34 = gvar_4FCB44;
    memcpy((void*)(v34 + 0x1014), (void*)(v34 + 4), 0x1000);
    if(gvar_7EB9C > 3) {
        __ptr1 = 10;
        sub_2EA54(3, &__ptr1, 0);
        uint32_t v35 = gvar_7EB9C;
        v10 = gvar_7EB9C;
        if(v35 > 3) {
            *(int*)&__ptr1 = '>';
            v14 = 544162848;
            v13 = 0x71657266;
            v12 = 1853191200;
            v15 = 667244;
            *(int*)&v21 = 0x20676e69;
            *(int*)&v11 = 0x656e6966;
            *(int*)&v16 = 1918988320;
            *(int*)&v23 = 0x656c6c61;
            int v36 = 667244;
            sub_2E584(3, &__ptr1, 0);
        }
    }
    int v37 = 0;
    do {
        int v38 = sub_1E29C(v37);
        if(v38 != 0) {
            v10 = sub_3BAE4(v37);
            int v39 = 2;
            int v40 = v37;
            if(v10 == 0) {
                v39 = SOCK_STREAM;
                v40 = v37;
            }
            sub_3962C(v40, v39);
        }
        ++v37;
    }
    while(v37 != 4);
    __int128 v41 = (unsigned __int128)v24 | ((unsigned __int128)0x3fef5c28f5c28f5cL << 64);
    char* __format = "is_need_serial = %d\n";
    int* ptr3 = (int*)&gvar_4FCB44;
    int v42 = 0x808ffc;
loc_3C6A4:
    int v43 = sub_39998();
    if(v43 == 0) {
        result = 0;
        ptr2 = ptr3;
    loc_3D1D0:
        if(gvar_7EB9C > 3) {
            *(int*)&__ptr1 = 'D';
            v14 = 1701996064;
            v13 = 1970544753;
            v12 = 0x676e696e;
            *(int*)&v21 = 1852401184;
            *(int*)&v11 = 0x65722065;
            *(int*)&v16 = 1953265011;
            v23 = 0xa3a;
            v7 = 0;
            sub_2E584(3, &__ptr1, 0);
        }
    }
    else {
        if(gvar_7EB9C > 3) {
            snprintf(&__ptr1, 0x800, __format, 0);
            sub_2E584(3, &__ptr1, 0);
            if(gvar_7EB9C > 3) {
                __ptr1 = 10;
                sub_2EA54(3, &__ptr1, 0);
                if(gvar_7EB9C > 3) {
                    *(int*)&__ptr1 = '>';
                    v14 = 544162848;
                    v13 = 0x676e6973;
                    v12 = 0x6720656c;
                    *(int*)&v21 = 1701077362;
                    *(int*)&v11 = 1853191200;
                    *(int*)&v16 = 0x2e676e69;
                    v15 = &v23;
                    v23 = 10;
                    sub_2E584(3, &__ptr1, 0);
                }
            }
        }
        int v44 = 0;
        do {
            int v45 = sub_1E29C(v44);
            if(v45 != 0) {
                int v46 = sub_397A0(v44);
                if(v46 == SOCK_STREAM && gvar_7EB9C > 3) {
                    v15 = *(int*)(v44 * 4 + ptr3[0] + 12308);
                    v9 = *(int*)(v44 * 4 + ptr3[0] + 12308);
                    snprintf(&__ptr1, 0x800, "chain = %d, grade = %d\n", v44, v9);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
            ++v44;
        }
        while(v44 != 4);
        if(gvar_7EB9C > 3) {
            int v47 = 2606;
            *(int*)&__ptr1 = 'B';
            v14 = 1852383332;
            v13 = 1931506793;
            v12 = 0x74726174;
            v21 = (uint16_t)v47;
            v15 = &v20;
            v20 = (uint8_t)(v47 >>> 16);
            sub_2E584(3, &__ptr1, 0);
        }
        int v48 = *ptr3[0];
        result = sub_39FB4(*(int*)(v48 + 40), param1, __n, v48);
        if(result != 0) {
            ptr2 = ptr3;
            if(gvar_7EB9C <= 3) {
                sub_3BC48(0xFF, ptr2[0] + 4);
                return result;
            }
            *(int*)&__ptr1 = 'B';
            v14 = 1852383332;
            v13 = 0x66207469;
            v12 = 0x656c6961;
            *(int*)&v21 = 1696607332;
            *(int*)&v11 = 779381112;
            v16 = 10;
            sub_2E584(3, &__ptr1, 0);
            v8 = gvar_7EB9C;
        loc_3D068:
            if(v8 <= 3) {
                sub_3BC48(0xFF, ptr2[0] + 4);
                return result;
            }
            *(int*)&__ptr1 = 'P';
            v14 = 0x6c656c6c;
            v13 = 1853191200;
            v12 = 0x20676e69;
            *(int*)&v21 = 1818845542;
            *(int*)&v11 = 0x202c6465;
            *(int*)&v16 = 1953069157;
            v23 = 2606;
            v7 = 0;
            sub_2E584(3, &__ptr1, 0);
            goto loc_3D1D0;
        }
        sub_39A7C();
        int v49 = ptr3[0];
        int v50 = 0;
        *(int*)(v49 + 12324) = 0;
        int* ptr4 = (int*)(v49 + 12324);
        *(ptr4 + SOCK_STREAM) = 0;
        *(ptr4 + 2) = 0;
        *(ptr4 + 3) = 0;
        memset(&__ptr1, 0, 0x1000);
        do {
            int v51 = sub_1E29C(v50);
            if(v51 != 0) {
                int v52 = sub_397A0(v50);
                if(v52 == SOCK_STREAM) {
                    uint32_t v53 = sub_1E0F0();
                    if(v53 != 0) {
                        int v54 = ptr3[0];
                        int v55 = v50 * 0x400;
                        int v56 = v54 + v55;
                        int* ptr5 = (int*)(v55 + &__ptr1);
                        int v57 = (v50 * 0x100 + v53) * 4 + v54;
                        do {
                            int v58 = *(int*)(v56 + 4);
                            v56 += 4;
                            *ptr5 = v58;
                            ++ptr5;
                        }
                        while(v57 != v56);
                    }
                }
                else {
                    int v59 = sub_3B8A0(v50, ptr3[0] + 4);
                    if(*(int*)(*(int*)ptr3[0] + 24) < (uint32_t)v59) {
                        uint32_t v60 = sub_1E0F0();
                        if(v60 != 0) {
                            int v61 = v50 * 0x100 + v60;
                            int v62 = ptr3[0];
                            int* ptr6 = (int*)(v50 * 0x400 + &__ptr1);
                            int* ptr7 = (int*)(v61 * 4 + &__ptr1);
                            do {
                                *ptr6 = *(int*)(*(int*)v62 + 24);
                                ++ptr6;
                            }
                            while(ptr7 != ptr6);
                        }
                    }
                    else {
                        uint32_t v63 = sub_1E0F0();
                        if(v63 != 0) {
                            int v64 = ptr3[0];
                            int v65 = v50 * 0x400;
                            int v66 = v64 + v65;
                            int* ptr8 = (int*)(v65 + &__ptr1);
                            int v67 = (v50 * 0x100 + v63) * 4 + v64;
                            do {
                                int v68 = *(int*)(v66 + 4);
                                v66 += 4;
                                *ptr8 = v68;
                                ++ptr8;
                            }
                            while(v67 != v66);
                        }
                    }
                }
            }
            ++v50;
        }
        while(v50 != 4);
        uint32_t v69 = sub_19AB4();
        uint32_t v70 = sub_361F4();
        if(v70 != v69) {
            int v71 = sub_36208();
            v6 = gvar_7EDD0;
            char* ptr9 = *ptr3[0];
            result = v71;
            ptr1 = &gvar_482A70;
            VCVT.F32.S32(v6, v6);
            sub_1AD08((int)&__ptr1, gvar_482A70, (uint32_t)*(ptr9 + 36));
            if(result == 0) {
                __format1 = "is_single_grade_done = %d\n";
                __useconds = 1000000;
                goto loc_3C8F8;
            }
            else {
                ptr2 = ptr3;
                v8 = gvar_7EB9C;
                goto loc_3D068;
            }
        }
        v6 = gvar_7EDD0;
        char* ptr10 = *(char**)ptr3[0];
        ptr1 = &gvar_482A70;
        VCVT.F32.S32(v6, v6);
        sub_1AD08((int)&__ptr1, gvar_482A70, (uint32_t)*(ptr10 + 36));
        __format1 = "is_single_grade_done = %d\n";
        __useconds = 1000000;
        goto loc_3C8F8;
    }
    sub_3BC48(0xFF, ptr2[0] + 4);
    return result;
loc_3C8F8:
    int v72 = sub_39998();
    if(v72 == 0) {
        uint32_t v73 = gvar_7EB9C;
        v10 = gvar_7EB9C;
        v5 = v73 == 3;
        v4 = v73 >= 3;
        if(v4 == 0 || v5 != 0) {
            goto loc_3C6A4;
        }
        v3 = SOCK_STREAM;
        goto loc_3CE98;
    }
    else {
        v2 = 0;
    }
    do {
        int v74 = sub_1E29C(v2);
        if(v74 != 0) {
            int v75 = sub_397A0(v2);
            if(v75 == SOCK_STREAM) {
                v15 = sub_3B8A0(v2, ptr3[0] + 0x1014);
                if(gvar_7EB9C > 3) {
                    uint32_t v76 = *(uint32_t*)(*(int*)ptr3[0] + 24);
                    v9 = v15;
                    *(uint32_t*)&v22 = v76;
                    snprintf(&__ptr1, 0x800, "chain = %d, freq_avg = %d, freq_threshold = %d\n", v2, v9, *(uint32_t*)&v22);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
        }
        ++v2;
    }
    while(v2 != 4);
    v3 = SOCK_STREAM;
    int v77 = 0;
    do {
        int v78 = sub_1E29C(v77);
        if(v78 != 0) {
            int v79 = sub_397A0(v77);
            if(v79 == SOCK_STREAM) {
                v15 = v77 * 4 + ptr3[0] + 0x3000;
                uint32_t v80 = *(uint32_t*)(v15 + 36);
                if(gvar_7EB9C > 3) {
                    *(uint32_t*)&v22 = v80;
                    v15 = *(int*)(v15 + 20);
                    v9 = v15;
                    snprintf(&__ptr1, 0x800, "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n", v77, v9, *(uint32_t*)&v22);
                    sub_2E584(3, &__ptr1, 0);
                    v80 = *(uint32_t*)(v77 * 4 + ptr3[0] + 12324);
                }
                if(v80 == 0) {
                    v3 = 0;
                }
            }
        }
        ++v77;
    }
    while(v77 != 4);
    uint32_t v81 = gvar_7EB9C;
    v5 = v81 == 3;
    v4 = v81 >= 3;
    if((v4 != 0 && v5 == 0)) {
    loc_3CE98:
        snprintf(&__ptr1, 0x800, __format1, v3);
        sub_2E584(3, &__ptr1, 0);
    }
    v10 = v3;
    if(v3 != 0) {
        goto loc_3C6A4;
    }
    char* ptr11 = "chain = %d, asic = %d, freq = %d\n";
    int v82 = "chain = %d, grade_curr = %d, freq_target = %d\n";
    do {
        int v83 = sub_1E29C(v3);
        if(v83 != 0) {
            int v84 = sub_397A0(v3);
            if(v84 == SOCK_STREAM) {
                uint32_t v85 = *(uint32_t*)(v3 * 4 + ptr3[0] + 12324);
                if(v85 == 0) {
                    uint32_t v86 = sub_1E0F0();
                    if(v86 == 0) {
                        v15 = *(int*)ptr3[0];
                    }
                    else {
                        int v87 = ptr3[0];
                        int v88 = v3 * 0x400;
                        int v89 = v3 * 0x100 + v86;
                        v86 = 0;
                        v15 = *(int*)v87;
                        int* ptr12 = (int*)(v89 * 4 + v87);
                        int* ptr13 = (int*)(v87 + v88) + 1029;
                        int* ptr14 = (int*)(v87 + v88);
                        while(SOCK_STREAM) {
                            int v90 = *(ptr14 + SOCK_STREAM);
                            ++ptr14;
                            *ptr13 = v90;
                            ++ptr13;
                            if(*(ptr13 + 0x3ff) == SOCK_STREAM) {
                                v86 = v90 - *(int*)(v15 + 32);
                                *(uint32_t*)(ptr13 - SOCK_STREAM) = (uint32_t)(v90 - *(int*)(v15 + 32));
                            }
                            if(ptr12 != ptr14) {
                                continue;
                            }
                            break;
                        }
                    }
                    if(*(char*)(v15 + 37) != 0) {
                        sub_1A46C();
                    }
                    v1 = (unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v86 << 96);
                    VCVT.F32.U32(v6, (uint32_t)(v1 >>> 0x60X));
                    sub_502C0(&v17, &v19, 0);
                    uint32_t v91 = gvar_7EB9C;
                    uint32_t v92 = (uint32_t)(uint16_t)v92 | ((uint32_t)v19 << 16) | ((uint32_t)(uint8_t)(v92 >>> 24) << 24);
                    if(v91 > 3) {
                        int v93 = ptr3[0];
                        *(uint32_t*)&v22 = v86;
                        char* __format2 = (char*)v82;
                        v15 = *(int*)(v3 * 4 + v93 + 12308);
                        v9 = *(int*)(v3 * 4 + v93 + 12308);
                        snprintf(&__ptr1, 0x800, __format2, v3, v9, *(uint32_t*)&v22);
                        sub_2E584(3, &__ptr1, 0);
                    }
                    uint32_t v94 = sub_1E0F0();
                    uint32_t v95 = v94;
                    uint32_t v96 = v94;
                    int v97 = ptr3[0];
                    if(v95 != 0) {
                        ptr0 = ptr3;
                        int v98 = v3 * 0x100;
                        do {
                            if(*(int*)(v85 * 4 + v98 * 4 + (v97 + 0x1014)) == v86) {
                                if(gvar_7EB9C > 3) {
                                    char* __format3 = ptr11;
                                    *(uint32_t*)&v22 = v86;
                                    snprintf(&__ptr1, 0x800, __format3, v3, v85);
                                    sub_2E584(3, &__ptr1, 0);
                                }
                                uint32_t v99 = sub_1E160();
                                int v100 = (int)(uint16_t)v99 * (int)(uint16_t)v85;
                                uint32_t v101 = v92;
                                ++v85;
                                char* ptr15 = (char*)*ptr1;
                                v9 = v17;
                                *(uint32_t*)&v22 = v101;
                                sub_1F164(v3, 0, (int)(uint8_t)v100, ptr15, v9, v22);
                                usleep(__useconds);
                                uint32_t v102 = v96;
                                uint32_t v103 = v85;
                                v97 = ptr0[0];
                                if(v102 != v103) {
                                    continue;
                                }
                                break;
                            }
                            ++v85;
                        }
                        while(v85 != v96);
                        ptr3 = ptr0;
                    }
                    sub_3BC48(v3, v97 + 0x1014);
                }
            }
        }
        ++v3;
    }
    while(v3 != 4);
    int v104 = 0;
    int v105 = sub_3B94C(0xFF, ptr3[0] + 0x1014);
    sub_321B8(v105, gvar_7EB58, 20);
    int v106 = sub_3BA18(0xFF, ptr3[0] + 0x1014);
    int v107 = sub_3A86C(&v106);
    int v108 = sub_391F4(v107);
    do {
        int v109 = sub_1E29C(v104);
        if(v109 != 0) {
            int v110 = sub_397A0(v104);
            int v111 = v104 + 3080;
            if(v110 == SOCK_STREAM) {
                uint32_t v112 = (uint32_t)v104;
                int v113 = v108;
                if(*(int*)(v111 * 4 + ptr3[0] + 4) == 0) {
                    sub_3A054(v112, v113);
                }
            }
        }
        ++v104;
    }
    while(v104 != 4);
    int v114 = v42;
    int v115 = 0;
    ptr0 = v108;
    ptr11 = v114 + v108;
    int v116 = sub_1E29C(0);
    if(v116 == 0) {
    loc_3CA3C:
        do {
            ++v115;
            if(v115 == 4) {
                goto loc_3C8F8;
            }
            v0 = sub_1E29C(v115);
        }
        while(v0 == 0);
    }
    int v117 = sub_397A0(v115);
    if(v117 != SOCK_STREAM) {
        goto loc_3CA3C;
    }
    int v118 = *(int*)(v115 * 4 + ptr3[0] + 12324);
    if(v118 != 0) {
        goto loc_3CA3C;
    }
    uint32_t v119 = sub_1E0F0();
    uint32_t v120 = v119;
    char v121 = v119 >= 0x80000000;
    char v122 = v119 == 0;
    char v123 = 0;
    char v124 = SOCK_STREAM;
    if((int)v120 > 0) {
        char* ptr16 = ptr11;
        int v125 = v115 * 0x100;
        v82 = v115;
        int* ptr17 = (int*)&ptr16[v115 * 0x400];
        int* ptr18 = ptr3;
        int v126 = v125;
        uint32_t v127 = v120;
        do {
            int v128 = *(ptr17 + SOCK_STREAM);
            ++ptr17;
            v41 = (unsigned __int128)v128 | ((unsigned __int128)((v41 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
            uint32_t v129 = sub_1E130();
            VCVT.F64.U32((uint64_t)v41, (uint32_t)v41);
            int v130 = v118 + v126 + 2052;
            ++v118;
            v1 = (unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(v129 * 8) << 96);
            int v131 = v130;
            VCVT.F64.S32((uint64_t)(v1 >>> 0x40X), (uint32_t)(v1 >>> 0x60X));
            VMUL.F64((uint64_t)(v1 >>> 0x40X), (uint64_t)(v1 >>> 0x40X), (uint64_t)(v41 >>> 0x40X));
            VCMPE.F64((uint64_t)v41, (uint64_t)(v1 >>> 0x40X));
            VMRS((uint8_t)v123 | ((uint8_t)v124 << SOCK_STREAM) | ((uint8_t)v122 << 2) | ((uint8_t)v121 << 3), v18);
            if(v124 == 0 || v122 != 0) {
                v131 = ptr18[0];
            }
            if((v124 != 0 && v122 == 0)) {
                v130 = ptr18[0];
            }
            else {
                v131 += v130 * 4;
            }
            if((v124 != 0 && v122 == 0)) {
                v131 = v131 * 4 + v130;
            }
            else {
                *(int*)(v131 + 4) = SOCK_STREAM;
            }
            if((v124 != 0 && v122 == 0)) {
                *(int*)(v131 + 4) = 0;
            }
            v121 = v118 > (int)v127;
            v122 = v118 == v127;
            v123 = (((v127 - v118) ^ v127) & (v118 ^ v127)) < 0;
            v124 = v118 <= v127;
        }
        while(v118 != v127);
        ptr3 = ptr18;
        v115 = v82;
    }
    uint32_t v132 = sub_1E0F0();
    if((int)v132 > 0) {
        int v133 = ptr3[0];
        int v134 = 0;
        int v135 = (v115 * 0x100 + v132) * 4 + v133 + 0x2010;
        int v136 = v115 * 0x400 + v133 + 0x2010;
        do {
            int v137 = *(int*)(v136 + 4);
            v136 += 4;
            v134 += v137;
        }
        while(v135 != v136);
        if(v134 == 0) {
            goto loc_3D024;
        }
    }
    else {
    loc_3D024:
        sub_3962C(v115, 2);
    }
    uint32_t v138 = sub_1E0F0();
    int v139 = ptr3[0];
    if(v138 != 0) {
        int v140 = v115 * 0x400;
        int v141 = (v115 * 0x100 + v138) * 4 + v139;
        int v142 = v140 + 0x1010;
        int v143 = v140 + v139;
        int v144 = v142 + v139;
        do {
            int v145 = *(int*)(v144 + 4);
            v144 += 4;
            *(int*)(v143 + 4) = v145;
            v143 += 4;
        }
        while(v141 != v143);
    }
    uint32_t v146 = gvar_7EB9C;
    int v147 = v115 * 4;
    v15 = v147 + v139;
    char v148 = (int)v146 < 3;
    char v149 = v146 == 3;
    char v150 = (((v146 - 3) ^ v146) & (v146 ^ 0x3)) < 0;
    char v151 = v146 >= 3;
    *(int*)(v15 + 0x1004) = SOCK_STREAM;
    if((v151 != 0 && v149 == 0)) {
        v15 = *(int*)(v15 + 12308);
        v9 = v15;
        snprintf(&__ptr1, 0x800, "Update freq result of high grade, chain = %d, grade_curr = %d.\n", v115, v9);
        sub_2E584(3, &__ptr1, 0);
    }
    sub_3A828(v115, ptr0);
    int v152 = v115;
    int* ptr19 = (int*)(ptr3[0] + v147 + 0x3000);
    v1 = (unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)*(ptr19 + 13) << 96);
    VCMPE.F32(v6, (uint32_t)(v1 >>> 0x60X));
    VMRS((uint8_t)v150 | ((uint8_t)v151 << SOCK_STREAM) | ((uint8_t)v149 << 2) | ((uint8_t)v148 << 3), v18);
    if((v149 == 0 && v150 == v148)) {
        *(uint32_t*)(ptr19 + 13) = v6;
    }
    int v153 = sub_3BAE4(v152);
    if(v153 == 0) {
        goto loc_3CA3C;
    }
    sub_3962C(v115, 2);
    goto loc_3CA3C;
}
