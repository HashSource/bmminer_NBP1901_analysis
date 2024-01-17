int sub_38110(int param0) {
    short v0;
    int v1 = param0;
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v2 = 0x205d4755;
        int v3 = 0x65657246;
        int v4 = 0x6d656d20;
        int v5 = 544830063;
        int v6 = 544370534;
        *(int*)&v0 = 0x73207773;
        int v7 = 0x70656577;
        short v8 = 2606;
        char v9 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v10 = gvar_4FCB38;
    if(v10 == 0) {
        void* ptr0 = calloc(0x8114ac, 1);
        int v11 = (int)ptr0;
        gvar_4FCB38 = (uint32_t)ptr0;
        if(ptr0 == 0) {
            goto loc_38410;
        }
        else {
            uint32_t v12 = sub_1E0F0();
            if(v12 == 0) {
                v10 = gvar_4FCB38;
            }
            else {
                uint32_t v13 = 0;
            loc_382F4:
                do {
                    uint32_t v14 = sub_1E130();
                    v10 = gvar_4FCB38;
                    void* ptr1 = malloc(v14 * 416);
                    uint32_t v15 = (v13 + 2107946) * 4 + v10;
                    v11 = ptr1;
                    ++v13;
                    *(void**)(v15 + 4) = ptr1;
                    if(ptr1 != 0) {
                        if(v12 == v13) {
                            goto loc_38148;
                        }
                        else {
                            goto loc_382F4;
                        }
                    }
                    if(gvar_7EB9C <= 3) {
                        goto loc_3832C;
                    }
                    else {
                        __ptr1 = 1818845510;
                        v2 = 544175136;
                        v3 = 1869376609;
                        v4 = 1702125923;
                        v5 = 0x6d656d20;
                        v6 = 544830063;
                        *(int*)&v0 = 544370534;
                        v7 = 0x6b726f77;
                        *(int*)&v8 = 667251;
                        sub_2E584(3, &__ptr1, v11);
                        uint32_t v16 = gvar_4FCB38;
                        goto loc_383C4;
                    }
                }
                while(SOCK_STREAM);
            }
        }
    }
loc_38148:
    *(int*)v10 = v1;
    char* __filename = *(char**)gvar_4FCB38;
    FILE* ptr2 = fopen64(__filename, "\n");
    int v17 = (int)ptr2;
    FILE* __stream = ptr2;
    if(ptr2 == 0) {
        if(gvar_7EB9C > 3) {
            snprintf(&__ptr1, 0x800, "Fail to open pattern file %s.\n", __filename);
            sub_2E584(3, &__ptr1, v17);
        }
    loc_3823C:
        sub_356C4(22, 0xFF);
        result = -1;
        if(gvar_7EB9C > 3) {
            __ptr1 = 1684107084;
            v2 = 1952542752;
            v3 = 0x6e726574;
            v4 = 0x6c696620;
            v5 = 0x61662065;
            v6 = 0x64656c69;
            v0 = 2606;
            char v18 = 0;
            sub_2E584(3, &__ptr1, 0);
        }
    }
    else {
        uint32_t v19 = sub_1E0F0();
        if(v19 != 0) {
            int v20 = 0;
        loc_38184:
            do {
                uint32_t v21 = sub_1E130();
                if(v21 == 0) {
                    uint32_t v22 = 0;
                }
                else {
                    v22 = 0;
                    int v23 = 0;
                loc_3819C:
                    do {
                        int v24 = v23;
                        ++v23;
                        uint32_t v25 = sub_37FA0(&__stream, v20, v24, 8);
                        v22 += v25;
                        if(v23 != v21) {
                            goto loc_3819C;
                        }
                        goto loc_381C0;
                    }
                    while(SOCK_STREAM);
                }
            loc_381C0:
                uint32_t v26 = sub_1E130();
                if(v26 * 8 <= v22) {
                    ++v20;
                    if(v20 != v19) {
                        goto loc_38184;
                    }
                    goto loc_381DC;
                }
                else {
                    if(gvar_7EB9C > 3) {
                        uint32_t v27 = sub_1E130();
                        uint32_t v28 = v22;
                        uint32_t v29 = v27 * 8;
                        snprintf(&__ptr1, 0x800, "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n", v20, v28, v29);
                        sub_2E584(3, &__ptr1, 0);
                    }
                    fclose(__stream);
                    goto loc_3823C;
                }
            }
            while(SOCK_STREAM);
        }
    loc_381DC:
        int result = 0;
        fclose(__stream);
    }
    sub_44970();
    sub_44880(4);
    return result;
loc_38410:
    if(gvar_7EB9C > 3) {
        __ptr1 = 1818845510;
        v2 = 544175136;
        v3 = 1869376609;
        v4 = 1702125923;
        v5 = 0x6d656d20;
        v6 = 544830063;
        *(int*)&v0 = 544370534;
        v7 = 0x73207773;
        *(int*)&v8 = 0x70656577;
        int v30 = 0x78746320;
        int v31 = 667252;
        sub_2E584(3, &__ptr1, v11);
        v16 = gvar_4FCB38;
    loc_383C4:
        if(v16 != 0) {
        loc_3832C:
            sub_37F08();
        }
    }
    sub_356C4(13, 0xFF);
    return -1;
}
