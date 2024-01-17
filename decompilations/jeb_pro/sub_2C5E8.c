int sub_2C5E8(int param0, int param1) {
    char v0;
    short v1;
    int v2;
    int v3;
    int v4;
    int __ptr1;
    if(gvar_482A89 == 0) {
        return param0;
    }
    int v5 = (uint32_t)*(char*)param0;
    int v6 = param0;
    if((v5 & 0x80) == 0) {
        if(gvar_7EB9C <= 3) {
            return param0;
        }
        __ptr1 = 0x20212121;
        v4 = 1668181870;
        v3 = 1852383333;
        v2 = 1768710518;
        v1 = 2660;
        char v7 = 0;
        return sub_2E584(3, &__ptr1, 0);
    }
    int v8 = v5 & 0x40;
    if((v5 & 0x40) != 0) {
        if(gvar_7EB9C > 3) {
            __ptr1 = 0x20212121;
            v4 = 1668181870;
            v3 = 1919098981;
            v2 = 1919230051;
            *(int*)&v1 = 175271794;
            v0 = 0;
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        ++gvar_5955C0;
        return param0;
    }
    pthread_mutex_lock(&g4FCAD0);
    if(gvar_5955D0 <= 510) {
        uint32_t v9 = gvar_5955C8;
        uint32_t v10 = v9 * 16;
        int v11 = (int)(uint16_t)(*(short*)(v6 + 2) & 0x7fff);
        uint32_t v12 = (v10 - v9) * 4 + &gvar_5955C8;
        *(int*)(v12 + 16) = v11;
        *(int*)(v12 + 32) = *(int*)(v6 + 4);
        *(int*)(v12 + 36) = (uint32_t)*(char*)v6 & 0xf;
        int v13 = sub_4466C(v11);
        uint32_t v14 = gvar_7EB9C;
        *(int*)(v12 + 12) = v13;
        if(v14 > 4) {
            snprintf(&__ptr1, 0x800, "blk ver = 0x%x\n", (uint32_t)*(short*)(v6 + 9));
            sub_2E584(4, &__ptr1, v8);
        }
        uint32_t v15 = (v10 - v9) * 4;
        uint32_t v16 = v15 + &gvar_5955C8;
        int v17 = sub_44680(v11);
        *(int*)(v16 + 20) = v17;
        int v18 = sub_44654(v11);
        *(int*)(v16 + 24) = v18;
        *(int*)(v16 + 28) = param1;
        sub_44698(v11, (char*)(v15 + &gvar_5955F0), &g20);
        int v19 = *(int*)(v16 + 32);
        int v20 = *(int*)(v16 + 36);
        int v21 = sub_51970(v19);
        uint32_t v22 = sub_1E160();
        int v23 = sub_51978(v19, (int)v22);
        if(v20 <= 3) {
            uint32_t v24 = sub_1E0F0();
            if(v24 <= (uint32_t)v23) {
                goto loc_2C80C;
            }
            else {
                uint32_t v25 = sub_1E120();
                if((v19 != 0 ? v25 <= (uint32_t)v21: SOCK_STREAM) != 0) {
                    goto loc_2C80C;
                }
                int v26 = v20 * 0x100 + v23;
                int v27 = v26 + 4;
                int v28 = v26 * 0x400 + v21 + 0x404;
                int v29 = *(int*)(v28 * 4 + 0x81118);
                int v30 = *(int*)(v27 * 4 + 0x81118) + SOCK_STREAM;
                ++*(int*)(v20 * 4 + 0x81118);
                *(int*)(v27 * 4 + 0x81118) = v30;
                *(int*)(v28 * 4 + 0x81118) = v29 + SOCK_STREAM;
            }
        }
        else {
        loc_2C80C:
            if(gvar_7EB9C > 4) {
                snprintf(&__ptr1, 0x800, "buf [%x] is error!\n", v19);
                sub_2E584(4, &__ptr1, 0);
                if(gvar_7EB9C > 4) {
                    snprintf(&__ptr1, 0x800, "chain = %d, chip = %d, core = %d\n", v20, v23, v21);
                    sub_2E584(4, &__ptr1, 0);
                }
            }
        }
        uint32_t v31 = gvar_5955D0;
        uint32_t v32 = gvar_5955C8 + SOCK_STREAM;
        char v33 = v32 == 510;
        char v34 = v32 >= 510;
        gvar_5955C8 = v32;
        if((v34 != 0 && v33 == 0)) {
            v32 = 0;
        }
        uint32_t v35 = v31 + SOCK_STREAM;
        if((v34 != 0 && v33 == 0)) {
            gvar_5955C8 = v32;
        }
        gvar_5955D0 = v35;
        gvar_81110 = 0;
    }
    else if(gvar_81110 == 0) {
        if(gvar_7EB9C > 3) {
            __ptr1 = 1668181870;
            v4 = 1701994341;
            v3 = 0x6f5f6461;
            v2 = 1646294133;
            *(int*)&v1 = 0x65666675;
            *(int*)&v0 = 1936269426;
            int v36 = 0x6c756620;
            int v37 = 663916;
            sub_2E584(3, &__ptr1, 0);
        }
        gvar_81110 = 1;
    }
    return pthread_mutex_unlock(&g4FCAD0);
}
