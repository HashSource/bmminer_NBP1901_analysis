int sub_389F0(int param0) {
    int __s;
    char v0;
    uint32_t v1 = gvar_4FCB3C;
    if(v1 != 0 && *(int*)(v1 + 4) != 0) {
        void* __arg = &__s;
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        int v5 = 0;
        int v6 = 0;
        memset(&__s, 0, 48);
        do {
            int v7 = sub_1E29C(v2);
            if(v7 != 0 && *(int*)((v2 + 2) * 4 + gvar_4FCB3C) == SOCK_STREAM) {
                *(int*)__arg = v2;
                *(int*)((int)__arg + 4) = 0;
                *(int*)((int)__arg + 8) = param0;
                pthread_create((pthread_t*)(v2 * 4 + (int)&v3), NULL, &sub_3883C, __arg);
                pthread_detach(*(pthread_t*)(v2 * 4 + (int)&v3));
            }
            ++v2;
            __arg = (int)__arg + 12;
        }
        while(v2 != 4);
        int v8 = 0;
        while(SOCK_STREAM) {
            param0 = sub_1E29C(v8);
            if(param0 != 0 && *((uint32_t*)(v8 * 4 + &v0) - 516) != 0 && *(uint32_t*)((uint32_t)(v8 * 12 + &v0) - 2044) == 0) {
                v8 = 0;
                usleep(&loc_186A0);
                continue;
            }
            ++v8;
            if(v8 == 4) {
                return param0;
            }
        }
    }
    else if(gvar_7EB9C > 3) {
        __s = 1684955464;
        int v9 = 0x6920656c;
        int v10 = 0x554e2073;
        int v11 = 0xa2e4c4c;
        char v12 = 0;
        param0 = sub_2E584(3, (char*)&__s, 0);
    }
    return param0;
}
