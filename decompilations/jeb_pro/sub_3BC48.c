int sub_3BC48(int param0, int param1) {
    int result;
    short __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Dump freq table, chain = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0) {
            char v1 = param0 != 0xFF ? param0 == v0: SOCK_STREAM;
            if(v1 != 0) {
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "chain = %d\n", v0);
                    sub_2EA54(3, &__ptr1, !v1);
                }
                result = sub_1E0F0();
                int v2 = result;
                uint32_t v3 = gvar_7EB9C;
                if(result != 0) {
                    int v4 = 0;
                    do {
                        if(v3 > 3) {
                            snprintf(&__ptr1, 0x800, "[%3d]:%-3d", v4);
                            sub_2EA54(3, &__ptr1, 0);
                            if(gvar_7EB9C > 3) {
                                *(int*)&__ptr1 = ' ';
                                sub_2EA54(3, &__ptr1, 0);
                            }
                        }
                        ++v4;
                        uint32_t v5 = sub_1E100();
                        result = sub_5FADC(v4, (int)v5);
                        v3 = gvar_7EB9C;
                        if(param1 == 0 && v3 > 3) {
                            __ptr1 = 10;
                            result = sub_2EA54(3, &__ptr1, param1);
                            v3 = gvar_7EB9C;
                        }
                    }
                    while(v4 != v2);
                }
                if(v3 > 3) {
                    __ptr1 = 10;
                    result = sub_2EA54(3, &__ptr1, 0);
                }
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
