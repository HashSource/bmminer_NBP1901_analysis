int sub_38C70(int param0, int param1) {
    short v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] sweep_type = 0x%X, pattern_file_path = %s\n", param0, param1);
        sub_2E584(4, &__ptr1, 0);
        if(param0 - 160 > SOCK_STREAM) {
        loc_38CAC:
            sub_356C4(20, 0xFF);
            if(gvar_7EB9C <= 3) {
                return -1;
            }
            snprintf(&__ptr1, 0x800, "Invalid sweep type 0x%X\n", param0);
            sub_2E584(3, &__ptr1, 0);
            return -1;
        }
        if(gvar_7EB9C > 4) {
            __ptr1 = 0x4245445b;
            v9 = 0x205d4755;
            v8 = 1869376609;
            v7 = 1702125923;
            v6 = 0x6d656d20;
            v5 = 544830063;
            v4 = 544370534;
            v3 = 0x74746170;
            v2 = 544109157;
            v1 = 0x74736574;
            v0 = 2606;
            char v10 = 0;
            sub_2E584(4, &__ptr1, 0);
        }
    loc_38D54:
        uint32_t v11 = gvar_4FCB3C;
        if(v11 == 0) {
            void* ptr0 = calloc(68, 1);
            v11 = ptr0;
            gvar_4FCB3C = (uint32_t)ptr0;
            if(ptr0 == 0) {
                sub_356C4(13, 0xFF);
                if(gvar_7EB9C > 3) {
                    __ptr1 = 1818845510;
                    v9 = 544175136;
                    v8 = 1869376609;
                    v7 = 1702125923;
                    v6 = 0x6d656d20;
                    v5 = 544830063;
                    v4 = 544370534;
                    v3 = 1684956531;
                    v2 = 1919907616;
                    v1 = 1868767339;
                    *(int*)&v0 = 2019914862;
                    int v12 = 667252;
                    sub_2E584(3, &__ptr1, 0);
                }
                return -1;
            }
            *(int*)((int)ptr0 + 8) = 0;
            *(int*)((int)ptr0 + 12) = 0;
            *(int*)((int)ptr0 + 16) = 0;
            *(int*)((int)ptr0 + 20) = 0;
        }
        *(int*)v11 = param0;
        if(param0 == 160) {
            int v13 = sub_38450();
            *(int*)(v11 + 4) = v13;
        }
        else {
            int v14 = sub_37574();
            *(int*)(v11 + 4) = v14;
        }
        return *(int*)(*(int*)(gvar_4FCB3C + 4) + 4)(param1);
    }
    else if(param0 - 160 <= SOCK_STREAM) {
        goto loc_38D54;
    }
    else {
        goto loc_38CAC;
    }
}
