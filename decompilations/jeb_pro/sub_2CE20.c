int sub_2CE20() {
    int v0;
    int result;
    short __ptr1;
    if(gvar_7EB9C > 4) {
        *(int*)&__ptr1 = 10;
        int v1 = 0x6420706d;
        int v2 = 1767992687;
        int v3 = 0x6f6e206e;
        int v4 = 0x2065636e;
        int v5 = 1651340654;
        int v6 = 774795877;
        short v7 = 2606;
        char v8 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    int v9 = 0;
    char* __format = "Chain[%d]:\n";
    do {
        result = sub_1E29C(v9);
        if(result != 0) {
            if(gvar_7EB9C > 4) {
                snprintf(&__ptr1, 0x800, __format, v9);
                sub_2E584(4, &__ptr1, 0);
            }
            int v10 = 0;
            int v11 = 0;
            while(SOCK_STREAM) {
                uint32_t v12 = sub_1E0E0();
                uint32_t v13 = sub_1E150();
                result = v9;
                if((int)(v13 * v12) <= v11) {
                    break;
                }
                int v14 = sub_2CD30(result, v11);
                v10 += v14;
                if(gvar_7EB9C > 4) {
                    v0 = v14;
                    snprintf(&__ptr1, 0x800, "D[%02d]:%-10d ", v11, v0);
                    sub_2E584(4, &__ptr1, 0);
                }
                uint32_t v15 = sub_1E150();
                sub_5FD8C(v11 + SOCK_STREAM, (int)v15);
                if(v11 == 0) {
                    if(gvar_7EB9C <= 4) {
                        v10 = 0;
                    }
                    else {
                        v0 = v10;
                        snprintf(&__ptr1, 0x800, "D_BIG[%02d]:%-10d\n", 0, v0);
                        v10 = 0;
                        sub_2E584(4, &__ptr1, 0);
                    }
                }
                ++v11;
            }
            if(gvar_7EB9C > 4) {
                __ptr1 = 10;
                result = sub_2E584(4, &__ptr1, 0);
            }
        }
        ++v9;
    }
    while(v9 != 4);
    return result;
}
