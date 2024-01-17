int sub_2CB2C(int param0, int param1) {
    int v0;
    int v1;
    int result;
    short __ptr1;
    if(gvar_7EB9C > 4) {
        *(int*)&__ptr1 = 10;
        int v2 = 1629515885;
        int v3 = 543385971;
        int v4 = 1668181870;
        int v5 = 1970151525;
        int v6 = 0x7265626d;
        int v7 = 0xa2e2e2e;
        char v8 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    int v9 = 0;
    int v10 = 0;
    char* __format = "Chain[%d] total nonce number = %d\n";
    do {
        result = sub_1E29C(v10);
        if(result != 0) {
            if(gvar_7EB9C > 4) {
                snprintf(&__ptr1, 0x800, "Chain[%d]:\n", v10);
                sub_2E584(4, &__ptr1, 0);
            }
            result = sub_1E0F0();
            int v11 = result;
            int v12 = 0;
            if(result > 0) {
                int v13 = 0;
                do {
                    uint32_t v14 = sub_1E120();
                    if((int)v14 <= 0) {
                        v1 = 0;
                    }
                    else {
                        int v15 = v13 + v9;
                        v1 = 0;
                        int v16 = v15 * 0x1000 + 0x82124;
                        int v17 = (v15 * 0x400 + v14) * 4 + 0x82124;
                        do {
                            int v18 = *(int*)(v16 + 4);
                            v16 += 4;
                            v1 += v18;
                        }
                        while(v17 != v16);
                        v12 += v1;
                    }
                    if(gvar_7EB9C > 4) {
                        v0 = v1;
                        snprintf(&__ptr1, 0x800, "IC[%03d] = %-10d ", v13, v0);
                        sub_2E584(4, &__ptr1, 0);
                    }
                    ++v13;
                    uint32_t v19 = sub_1E100();
                    result = sub_5FD8C(v13, (int)v19);
                    if(param1 == 0 && gvar_7EB9C > 4) {
                        __ptr1 = 10;
                        result = sub_2E584(4, &__ptr1, param1);
                    }
                }
                while(v13 != v11);
            }
            if(gvar_7EB9C > 4) {
                v0 = v12;
                snprintf(&__ptr1, 0x800, __format, v10, v0);
                result = sub_2E584(4, &__ptr1, 0);
                if(gvar_7EB9C > 4) {
                    __ptr1 = 10;
                    result = sub_2E584(4, &__ptr1, 0);
                }
            }
        }
        ++v10;
        v9 += 0x100;
    }
    while(v10 != 4);
    return result;
}
