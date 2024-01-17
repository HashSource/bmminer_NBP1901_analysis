void* sub_25C08(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    int v4;
    short v5;
    uint32_t v6 = sub_1E0E0();
    uint32_t v7 = sub_1E150();
    int v8 = (int)(v7 * v6);
    void* __ptr = malloc((size_t)(v8 * 4));
    if(__ptr != 0) {
        int v9 = 0;
        do {
            int v10 = sub_1E29C(v9);
            if(v10 != 0 && v8 != 0) {
                int* ptr0 = (int*)((int)__ptr - 4);
                int v11 = 0;
                int v12 = 0;
                int v13 = 0;
                do {
                    int v14 = sub_2CD30(v9, v13);
                    ++v13;
                    int v15 = v11;
                    v11 += v14;
                    v12 += (uint32_t)__carry__(v14, v15);
                    *(ptr0 + SOCK_STREAM) = v14;
                    ++ptr0;
                }
                while(v13 != v8);
                int v16 = sub_60120(v11, v12, v8, 0);
                char v17 = param1 == 0;
                char v18 = SOCK_STREAM;
                if(param1 == 0) {
                    v17 = v16 == 4999;
                    v18 = (uint32_t)v16 >= 4999;
                }
                if((v18 != 0 && v17 == 0)) {
                    int v19 = (uint32_t)((v16 >>> SOCK_STREAM) & 0x7fffffff) | ((uint32_t)((param1 & SOCK_STREAM) != 0) << 31);
                    if((param1 >>> SOCK_STREAM != 0 ? param1 >>> SOCK_STREAM <= 0: *(int*)__ptr >= v19) != 0) {
                        void* ptr1 = __ptr;
                        int v20 = 0;
                        do {
                            ++v20;
                            if(v13 == v20) {
                                goto loc_25C44;
                            }
                            else {
                                v4 = *(int*)((int)ptr1 + 4);
                                ptr1 = (int)ptr1 + 4;
                            }
                        }
                        while((param1 >>> SOCK_STREAM != 0 ? param1 >>> SOCK_STREAM <= 0: v19 <= v4) != 0);
                    }
                    if(gvar_7EB9C > 3) {
                        __ptr1 = 1634561860;
                        v3 = 1965059689;
                        v2 = 1818321518;
                        v1 = 1701015137;
                        v0 = 1885431840;
                        *(int*)&v5 = 0x656e6570;
                        int v21 = 663908;
                        sub_2E584(3, &__ptr1, 0);
                    }
                    free(__ptr);
                    return &g1;
                }
            }
        loc_25C44:
            ++v9;
        }
        while(v9 != 4);
        free(__ptr);
        return NULL;
    }
    if(gvar_7EB9C <= 3) {
        return NULL;
    }
    __ptr1 = 1818845542;
    v3 = 1629512805;
    v2 = 0x636f6c6c;
    v1 = 0x6d656d20;
    v0 = 0x2179726f;
    v5 = 10;
    sub_2E584(3, &__ptr1, 0);
    return NULL;
}
