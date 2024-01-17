int* sub_31980(char* __dest2, int param1) {
    uint32_t v0;
    int v1;
    short __dest1;
    char __s;
    char v2;
    int v3 = 0;
    char* __format = "Chain%d:{";
    do {
        v1 = v3 + SOCK_STREAM;
        int v4 = sub_1E29C(v3);
        if(v4 != 0) {
            *(int*)&__dest1 = '{';
            memset(&__s, 0, 2044);
            int v5 = v3 * 16;
            int __src = 0;
            int v6 = 0;
            int v7 = 0;
            int v8 = 0;
            int v9 = 0;
            sprintf(&__src, __format, v1);
            char* ptr0 = stpcpy(&__dest1 + SOCK_STREAM, &__src);
            uint32_t v10 = gvar_482A60;
            char* __dest = ptr0;
            uint32_t v11 = 0;
            int v12 = v10 - (int)v10 / 60 * 60 - SOCK_STREAM;
            int v13 = v12 - param1;
            do {
                int v14 = v12 < 0 ? v12 + 60: v12;
                --v12;
                v11 += *(uint32_t*)((v3 * 0x3c00 + v14) * 8 + (int)&gvar_483AA0);
            }
            while(v13 != v12);
            sprintf(&__src, "N%d=%d", 0, v11);
            strcpy(__dest, &__src);
            int v15 = SOCK_STREAM;
            uint32_t v16 = sub_1E0F0();
            int v17 = (v5 - v3) * 0x400;
            if((int)v16 > SOCK_STREAM) {
                do {
                    uint32_t v18 = gvar_482A60;
                    uint32_t v19 = 0;
                    int v20 = v15 * 60 + v17;
                    int v21 = v18 - (int)v18 / 60 * 60 - SOCK_STREAM;
                    int v22 = v21 - param1;
                    do {
                        int v23 = v21 < 0 ? v21 + 60: v21;
                        --v21;
                        v19 += *(uint32_t*)((v23 + v20) * 8 + (int)&gvar_483AA0);
                    }
                    while(v22 != v21);
                    sprintf(&__src, ",N%d=%d", v15, v19);
                    ++v15;
                    strcat(&__dest1, &__src);
                    v0 = sub_1E0F0();
                }
                while((int)v0 > v15);
            }
            size_t v24 = strlen(&__dest1);
            *(short*)(v24 + &__dest1) = 11389;
            *(v24 + &v2) = 0;
            strcat(__dest2, &__dest1);
        }
        v3 = v1;
    }
    while(v1 != 4);
    size_t v25 = strlen(__dest2);
    __dest2[v25 - SOCK_STREAM] = 0;
    return (int*)(v25 + __dest2);
}
