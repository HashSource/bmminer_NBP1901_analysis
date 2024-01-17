int sub_3A86C(int param0) {
    int v0;
    int v1;
    int __ptr1;
    char v2;
    int v3;
    int v4;
    int v5;
    uint32_t* ptr0 = &gvar_4FCB3C;
    uint32_t v6 = gvar_4FCB3C;
    uint32_t* ptr1 = &gvar_7EB9C;
    uint32_t v7 = gvar_7EB9C;
    if(v6 != 0 && *(uint32_t*)(v6 + 4) != 0) {
        int v8 = param0;
        if(v7 <= 3) {
            char* __ptr1_1 = &__ptr1;
        }
        else {
            __ptr1_1 = &__ptr1;
            __ptr1 = 1953784144;
            int v9 = 544109157;
            int v10 = 0x74736574;
            int v11 = 1635021600;
            *(int*)&v2 = 0x2e2e7472;
            short v12 = 2606;
            char v13 = 0;
            sub_2E584(3, &__ptr1, 0);
        }
        int v14 = sub_302A0(&v3);
        sub_398BC(v14);
        int v15 = sub_452B0();
        sub_452D0(v15 | &ELFHeader);
        int v16 = v8;
        int* ptr2 = gvar_4FCB3C;
        int v17 = *ptr2;
        *(ptr2 + 16) = SOCK_STREAM;
        if(v17 == 161) {
            sub_3893C(v16);
        }
        else {
            sub_389F0(v16);
        }
        uint32_t* ptr3 = ptr0;
        int v18 = 0;
        do {
            int v19 = sub_1E29C(v18);
            if(v19 != 0 && *(int*)((v18 + 2) * 4 + (int)*ptr3) == SOCK_STREAM) {
                int v20 = 3;
                do {
                    int v21 = sub_39584(v18);
                    v19 = &loc_186A0;
                    if(v21 == 0) {
                        v19 = usleep(&loc_186A0);
                        --v20;
                    }
                    else {
                        goto loc_3A930;
                    }
                }
                while(v20 != 0);
            loc_3A930:
            }
            ++v18;
        }
        while(v18 != 4);
        int* ptr4 = *ptr0;
        int v22 = 0;
        int v23 = 0x80a894;
        *(ptr4 + 16) = 0;
        int v24 = sub_391F4(v19);
        int v25 = v24;
        int v26 = v24 + 4231164;
        int v27 = v24 + 0x400000;
        do {
            int v28 = sub_1E29C(v22);
            if(v28 != 0 && *(int*)((v22 + 2) * 4 + (int)*ptr0) == SOCK_STREAM) {
                uint32_t v29 = sub_1E0F0();
                uint32_t v30 = v29;
                if(v29 != 0) {
                    int v31 = v22;
                    int v32 = v22 * 0x100;
                    int v33 = v22 * 64;
                    int v34 = 0;
                    do {
                        uint32_t v35 = sub_1E100();
                        int v36 = v34;
                        int v37 = sub_5F880(v36, (int)v35);
                        uint32_t v38 = sub_1E130();
                        if(v38 != 0) {
                            int v39 = 0;
                            int v40 = (v37 + v33) * 4 + v25 + 0x80a000;
                            int v41 = v36 * 9 + v31 * 0x900;
                            int v42 = (v36 + v32) * 0x1000 + v26;
                            do {
                                uint32_t v43 = sub_1E150();
                                uint32_t v44 = sub_1E150();
                                int v45 = (int)(v44 * v39);
                                ++v39;
                                uint32_t v46 = sub_1E130();
                                int v47 = sub_5F880(v45, (int)v46);
                                int v48 = *(int*)(v42 + 4);
                                v42 += 4;
                                int* ptr5 = (int*)((v43 * v37 + v47 + v33) * 4 + v25 + 0x80a000);
                                int* ptr6 = (int*)((v48 + v41) * 4 + v25 + 0x400000);
                                *(ptr5 + 4) += v48;
                                *(int*)(v40 + 1040) += v48;
                                ++*ptr6;
                            }
                            while(v39 != v38);
                        }
                        int v49 = v34 + SOCK_STREAM;
                        ++v34;
                    }
                    while(v49 != v30);
                    v22 = v31;
                }
                uint32_t v50 = sub_1E0F0();
                if(v50 != 0) {
                    char* ptr7 = (char*)(v22 * 0x2400 + v27);
                    int* ptr8 = (int*)(v50 * 36 + ptr7);
                    do {
                        int* ptr9 = (int*)(ptr7 + 32);
                        int* ptr10 = (int*)ptr7;
                        do {
                            *(ptr10 + SOCK_STREAM) += *ptr10;
                            ++ptr10;
                        }
                        while(ptr9 != ptr10);
                        ptr7 += 36;
                    }
                    while(ptr7 != ptr8);
                }
                sub_38B6C(v22, v25);
                *(int*)(v22 * 4 + v25 + v23) = v5;
            }
            ++v22;
        }
        while(v22 != 4);
        sub_302A0((int*)(__ptr1_1 - 8));
        param0 = v1;
        uint32_t* ptr11 = ptr1;
        v6 = v0 - v3;
        if(v1 > v4) {
            --v6;
        }
        if(*ptr11 > 3) {
            snprintf(__ptr1_1, 0x800, "Pattern test done, time cost %lds\n", v6);
            param0 = sub_2E584(3, __ptr1_1, 0);
            return param0;
        }
    }
    else if(v7 > 3) {
        __ptr1 = 1684955464;
        v9 = 0x6920656c;
        v10 = 0x554e2073;
        v11 = 0xa2e4c4c;
        v2 = 0;
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
