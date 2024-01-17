int sub_362A0(int param0) {
    char* ptr0;
    char* ptr1;
    short v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int __ptr1;
    char v6;
    FILE* ptr2 = sub_36218();
    if(ptr2 != 0) {
        if(gvar_7EB9C <= 3) {
            return 0;
        }
        __ptr1 = 0x65657753;
        v5 = 1818304624;
        v4 = 1684104562;
        v3 = 1868832889;
        v2 = 0x202c656e;
        v1 = 1953069157;
        v0 = 2606;
        char v7 = 0;
        sub_2E584(3, &__ptr1, 0);
        return 0;
    }
    sub_302A0(&v6);
    uint32_t v8 = gvar_7EB9C;
    gvar_4FCB30 = 2;
    if(v8 > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Sweep init, sweep_type = 0x%X.\n", param0);
        sub_2E584(4, &__ptr1, 0);
        if(param0 - 160 > SOCK_STREAM) {
        loc_36368:
            sub_356C4(20, 0xFF);
            if(gvar_7EB9C > 3) {
                ptr0 = &__ptr1;
                ptr1 = "Sweep type error, exit.\n";
            loc_36490:
                char v9 = *(int*)&ptr1[4];
                char v10 = *(int*)&ptr1[8];
                char v11 = *(int*)&ptr1[12];
                *(int*)&ptr0[0] = *(int*)&ptr1[0];
                *(int*)&ptr0[4] = v9;
                *(int*)&ptr0[8] = v10;
                *(int*)&ptr0[12] = v11;
                char v12 = *(int*)&ptr1[20];
                int v13 = *(int*)&ptr1[24];
                *(int*)&ptr0[16] = *(int*)&ptr1[16];
                *(int*)&ptr0[20] = v12;
                ptr0[24] = (char)v13;
                sub_2E584(3, &__ptr1, 0);
            }
            gvar_4FCB30 = 1;
            return -1;
        }
        if(gvar_7EB9C > 4) {
            __ptr1 = 0x4245445b;
            v5 = 0x205d4755;
            v4 = 1869376577;
            v3 = 1702125923;
            v2 = 0x6d656d20;
            v1 = 544830063;
            *(int*)&v0 = 544370534;
            int v14 = 0x65657773;
            int v15 = 667248;
            sub_2E584(4, &__ptr1, 0);
        }
    loc_36400:
        uint32_t v16 = gvar_4FCB28;
        if(v16 == 0) {
            void* ptr3 = calloc(4220, 1);
            v16 = ptr3;
            gvar_4FCB28 = (uint32_t)ptr3;
            if(ptr3 == 0) {
                sub_356C4(13, 0xFF);
                if(gvar_7EB9C <= 3) {
                    gvar_4FCB30 = 1;
                    return -1;
                }
                ptr1 = "\n";
                __ptr1 = 1818845510;
                v5 = 544175136;
                v4 = 1869376609;
                v3 = 1702125923;
                ptr0 = &v2;
                goto loc_36490;
            }
        }
        *(int*)v16 = param0;
        int v17 = 0;
        *(int*)(v16 + 4) = 0x477fff00;
        do {
            int v18 = sub_1E29C(v17);
            if(v18 != 0) {
                uint32_t v19 = sub_1E0F0();
                if((int)v19 > 0) {
                    uint32_t v20 = gvar_4FCB28;
                    int v21 = (v17 * 0x100 + v19) * 4 + v20 + 8;
                    int* ptr4 = (int*)(v17 * 0x400 + v20 + 8);
                    do {
                        *(ptr4 + SOCK_STREAM) = 300;
                        ++ptr4;
                    }
                    while(v21 != ptr4);
                }
            }
            ++v17;
        }
        while(v17 != 4);
        sub_356C4(15, 0xFF);
        if(gvar_7EB9C > 3) {
            snprintf(&__ptr1, 0x800, "Unknown miner type(%d).\n", 2);
            sub_2E584(3, &__ptr1, 0);
        }
    }
    else if(param0 - 160 <= SOCK_STREAM) {
        goto loc_36400;
    }
    else {
        goto loc_36368;
    }
    gvar_4FCB30 = 1;
    return -1;
}
