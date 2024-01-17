int sub_52930(int* param0) {
    char __s;
    char __s1;
    if(gvar_5859E8 != 0) {
        void* __mutex = malloc(36);
        pthread_mutex_init((pthread_mutex_t*)__mutex, NULL);
        int __fd = (int)gvar_585A04;
        int __buf = 0;
        memset(&__s, 0, 252);
        sprintf(&__buf, "%x regist %s", 63, param0);
        uint32_t v0 = gvar_5859E0;
        size_t v1 = strlen(&__buf);
        send(__fd, &__buf, v1 + SOCK_STREAM, 0);
        int __dest = 0;
        memset(&__s1, 0, 124);
        while(gvar_5859E0 == v0) {
            usleep(1000);
        }
        memcpy(&__dest, (void*)(v0 * 128 + 0x585a08), 128);
        __isoc99_sscanf();
        return -4;
    }
    return -1;
}
