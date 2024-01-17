int sub_377D8(int param0) {
    int v0;
    int v1;
    int* ptr0;
    int* ptr1;
    int v2;
    uint32_t v3;
    short __ptr1;
    int v4;
    char v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int __dest;
    char v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20 = param0;
    int* ptr2 = (int*)&gvar_7EB9C;
    sub_302A0(&v4);
    if(gvar_7EB9C > 3) {
        __ptr1 = 10;
        sub_2EA54(3, &__ptr1, 0);
        if(gvar_7EB9C <= 3) {
            goto loc_3780C;
        }
        else {
            snprintf(&__ptr1, 0x800, ">>>> Send work for chain %d.\n", v20);
            sub_2E584(3, &__ptr1, 0);
            uint32_t v21 = sub_1E0F0();
            v3 = v21;
            if(v21 != 0) {
                goto loc_37838;
            }
        loc_37C40:
            v2 = v3;
        }
    }
    else {
    loc_3780C:
        uint32_t v22 = sub_1E0F0();
        v3 = v22;
        if(v22 == 0) {
            goto loc_37C40;
        }
    loc_37838:
        v2 = 0;
        int v23 = 0;
        int v24 = 0;
        int v25 = 2107946;
        int v26 = v20 * 6656 + 8432812;
        int v27 = SOCK_STREAM << v20;
        while(SOCK_STREAM) {
            int v28 = *(int*)((v24 + v25) * 4 + gvar_4FCB38 + 4);
            uint32_t v29 = sub_1E130();
            uint32_t v30 = v29;
            if(v29 != 0) {
                int v31 = v27;
                int v32 = v2;
                int* ptr3 = (int*)(v28 + 20);
                int v33 = 0;
                *(int*)&v5 = (uint32_t)(uint8_t)~(~(v20 * 0x2000000) >>> 25);
                do {
                    int* ptr4 = ptr3;
                    int v34 = v33 & 0x3;
                    int v35 = 0;
                    do {
                        int v36 = sub_44ED4();
                        while((v36 & v31) == 0) {
                            ++v32;
                            usleep(1000);
                            v36 = sub_44ED4();
                        }
                        int* ptr5 = &v12;
                        int* ptr6 = ptr4 + 7;
                        int* ptr7 = ptr4 - 5;
                        int* ptr8 = ptr4 - 5;
                        do {
                            int v37 = *ptr7;
                            ptr7 += 4;
                            int v38 = *(ptr7 - 3);
                            int* ptr9 = ptr5;
                            int v39 = *(ptr7 - 2);
                            ptr5 += 4;
                            int v40 = *(ptr7 - SOCK_STREAM);
                            *ptr9 = v37;
                            *(ptr9 + SOCK_STREAM) = v38;
                            *(ptr9 + 2) = v39;
                            *(ptr9 + 3) = v40;
                        }
                        while(ptr6 != ptr7);
                        int v41 = 0;
                        *ptr5 = *ptr7;
                        memset((void*)((char*)&v18 + 2), 0, 146);
                        int v42 = *(ptr4 - 3);
                        int* ptr10 = ptr4 - 3;
                        int v43 = v32;
                        int v44 = v23 * 52 + v26;
                        int v45 = *(ptr10 + SOCK_STREAM);
                        int v46 = v34;
                        v18 = (uint32_t)(uint8_t)v18 | ((uint32_t)v5 << 8) | ((uint32_t)(uint16_t)(v18 >>> 16) << 16);
                        int v47 = *(ptr10 + 2);
                        char v48 = v48 + SOCK_STREAM;
                        int v49 = v42;
                        int v50 = v45;
                        int __src = v47;
                        int* ptr11 = &v6;
                        int v51 = v31;
                        int v52 = (v23 & 0x7f) | v35;
                        int* ptr12 = ptr8 + 12;
                        v18 = (uint32_t)SOCK_STREAM | ((uint32_t)((v18 >>> 8) & 0xffffff) << 8);
                        do {
                            int* ptr13 = (int*)(gvar_4FCB38 + v44);
                            if(v41 == v46) {
                                int* ptr14 = (int*)(v41 * 32 + (int)&v9);
                                int v53 = *(ptr4 + SOCK_STREAM);
                                int v54 = *(ptr4 + 2);
                                *(int*)(v41 * 32 + (int)&v9) = *ptr4;
                                int v55 = *(ptr4 + 3);
                                int* ptr15 = ptr8;
                                *(ptr14 + SOCK_STREAM) = v53;
                                *(ptr14 + 3) = v55;
                                int v56 = *(ptr4 + 4);
                                *(ptr14 + 2) = v54;
                                int v57 = *(ptr4 + 5);
                                int v58 = *(ptr4 + 6);
                                *(ptr14 + 4) = v56;
                                int v59 = *(ptr4 + 7);
                                *(ptr14 + 5) = v57;
                                *(ptr14 + 6) = v58;
                                *(ptr14 + 7) = v59;
                                do {
                                    ptr15 += 4;
                                    ptr13 += 4;
                                    int v60 = *(ptr15 - 3);
                                    int v61 = *(ptr15 - 2);
                                    int v62 = *(ptr15 - SOCK_STREAM);
                                    ptr1 = ptr12;
                                    *(ptr13 - 4) = *(ptr15 - 4);
                                    *(ptr13 - 3) = v60;
                                    *(ptr13 - 2) = v61;
                                    *(ptr13 - SOCK_STREAM) = v62;
                                }
                                while(ptr15 != ptr1);
                                *ptr13 = *ptr12;
                            }
                            else {
                                int v63 = v16;
                                int v64 = v14;
                                int v65 = v13;
                                int* ptr16 = &v12;
                                int* ptr17 = (int*)(v41 * 32 + (int)&v9);
                                *ptr17 = *(int*)&v48;
                                *(ptr17 + SOCK_STREAM) = v63;
                                *(ptr17 + 2) = v64;
                                *(ptr17 + 3) = v65;
                                int* ptr18 = ptr17 + 4;
                                int v66 = v8;
                                int v67 = v7;
                                int v68 = v6;
                                *ptr18 = v11;
                                *(ptr18 + SOCK_STREAM) = v66;
                                *(ptr18 + 2) = v67;
                                *(ptr18 + 3) = v68;
                                do {
                                    ptr0 = ptr16;
                                    ptr16 += 4;
                                    ptr13 += 4;
                                    int v69 = *(ptr0 + SOCK_STREAM);
                                    int v70 = *(ptr0 + 2);
                                    int v71 = *(ptr0 + 3);
                                    *(ptr13 - 4) = *ptr0;
                                    *(ptr13 - 3) = v69;
                                    *(ptr13 - 2) = v70;
                                    *(ptr13 - SOCK_STREAM) = v71;
                                }
                                while(ptr0 + 4 != ptr11);
                                *ptr13 = *ptr16;
                            }
                            ++v41;
                            v44 += 52;
                        }
                        while(v41 != 4);
                        v31 = v51;
                        ptr4 += 13;
                        int v72 = v23 + 4;
                        v32 = v43;
                        memcpy(&__dest, &__src, 132);
                        v1 = v35 + 128;
                        v35 += 128;
                        sub_1EEB8(v18, v52, v49, v50, __dest, v10);
                        v23 = v72 < 128 ? v72: 0;
                    }
                    while(v1 != 0x400);
                    ptr3 += 104;
                    v0 = v33 + SOCK_STREAM;
                    ++v33;
                }
                while(v0 != v30);
                v2 = v32;
                v27 = v31;
            }
            int v73 = v24 + SOCK_STREAM;
            ++v24;
            if(v73 != v3) {
                continue;
            }
            break;
        }
    }
    sub_302A0(&v17);
    int v74 = v17 - v4;
    int v75 = *ptr2;
    if(v19 > v15) {
        --v74;
    }
    if(v75 > 3) {
        snprintf(&__ptr1, 0x800, "Send work for chain %d done, time cost %lds, sleep_count = %d\n", v20, v74, v2);
        sub_2E584(3, &__ptr1, 0);
    }
    return 0;
}
