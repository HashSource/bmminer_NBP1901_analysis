int sub_321B8(int param0, int param1, int param2) {
    int v0;
    int __ptr1;
    int v1;
    int v2;
    uint32_t v3;
    int v4;
    uint32_t v5;
    int v6;
    int v7;
    int v8 = v1;
    int v9 = v4;
    int v10 = v2;
    uint32_t v11 = v5;
    int v12 = v6;
    uint32_t v13 = v3;
    int v14 = v7;
    int v15 = param0;
    int* ptr0 = &v0;
    if(param0 == 0) {
    loc_321DC:
        if(gvar_7EB9C > 3) {
            __ptr1 = 1702129486;
            int v16 = 1684086842;
            int v17 = 1850307172;
            int v18 = 0x76726574;
            int v19 = 0x6f206c61;
            int v20 = 1868767346;
            int v21 = 1970169202;
            int v22 = 1936269421;
            int v23 = 1953459744;
            int v24 = 0x696e6920;
            int v25 = 1818323316;
            int v26 = 0x64657a69;
            short v27 = 2606;
            char v28 = 0;
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        gvar_99EDDC = 0x1ffff;
    }
    else {
        int v29 = param1;
        int v30 = param2;
        param0 = sub_1E160();
        if(param0 == 0) {
            goto loc_321DC;
        }
        else {
            param0 = sub_1E120();
            if(param0 == 0) {
                goto loc_321DC;
            }
            uint32_t v31 = sub_1E160();
            param0 = sub_1E130();
            int v32 = param0;
            if(param0 == 0) {
                UDF(0);
                return param0;
            }
            int v33 = (int)(v31 * 0x1000000);
            if(param0 != SOCK_STREAM) {
                int v34 = SOCK_STREAM;
                do {
                    v34 *= 2;
                }
                while((uint32_t)param0 > (uint32_t)v34);
                v33 = sub_5FAF8(v33, v34);
            }
            v31 = &gvar_99EDDC;
            int v35 = sub_5FAF8(v33 * param1 * param2 / 100, v15);
            v6 = v35;
            gvar_99EDDC = (uint32_t)v35;
            v3 = sub_1E160();
            param0 = sub_1E130();
            if(param0 == 0) {
                UDF(0);
                return param0;
            }
            int v36 = (int)(v3 * 0x1000000);
            if(param0 != SOCK_STREAM) {
                int v37 = SOCK_STREAM;
                do {
                    v37 *= 2;
                }
                while((uint32_t)param0 > (uint32_t)v37);
                v36 = sub_5FAF8(v36, v37);
            }
            if((gvar_99EDBC & 0x4) != 0 && gvar_99EDCA != 0) {
                gvar_99EDDC = (uint32_t)((uint32_t)*(char*)&gvar_99EDCA * 1000 + (uint32_t)*((char*)&gvar_99EDCA + SOCK_STREAM));
            }
            param0 = sub_44C84(v35);
            if(gvar_7EB9C > 3) {
                int v38 = sub_5FAF8(v36 * 25, v15);
                snprintf(&__ptr1, 0x800, "freq = %d, percent = %d, hcn = %d, timeout = %d\n", v15, param2, v38 * param1, v35);
                return sub_2E584(3, &__ptr1, 0);
            }
        }
    }
    return param0;
}
