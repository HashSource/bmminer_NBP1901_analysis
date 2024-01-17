int sub_27B70() {
    int v0;
    int v1;
    int __ptr1;
    char __attr;
    short v2;
    if(gvar_80758 == 0) {
        pthread_attr_init(&__attr);
        pthread_attr_setstacksize(&__attr, 0x200000);
        void* __arg = calloc(1, 64);
        gvar_80758 = (uint32_t)__arg;
        int v3 = sub_30B10((int)__arg, &__attr, &sub_2647C, __arg);
        if(v3 != 0) {
            if(gvar_7EB9C <= 3) {
                return -1;
            }
            __ptr1 = 1634038371;
            v1 = 1948280180;
            v0 = 1634038376;
            *(int*)&v2 = 0x61662064;
            int v4 = 0x64656c69;
            short v5 = 10;
            sub_2E584(3, &__ptr1, 0);
            return -1;
        }
        pthread_detach(*(pthread_t*)(gvar_80758 + 12));
        if(gvar_7EB9C > 3) {
            __ptr1 = 1634038371;
            v1 = 1948280180;
            v0 = 1634038376;
            v2 = 2660;
            char v6 = 0;
            sub_2E584(3, &__ptr1, 0);
            return 0;
        }
    }
    return 0;
}
