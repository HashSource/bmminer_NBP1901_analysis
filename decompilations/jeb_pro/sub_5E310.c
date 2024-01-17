void* sub_5E310(char* __s, int param1) {
    char __src1;
    char __format;
    char __name;
    char* __src = __s;
    size_t v0 = strlen(__s);
loc_5E40C:
    do {
        char* __dest = strchr(__src, 37);
        __src = __dest + SOCK_STREAM;
        if(__src != SOCK_STREAM) {
            memset(&__format, 0, 0x1001);
            memset(&__name, 0, 0x1001);
            memset(&__src1, 0, 0x1001);
            int v1 = 0;
            __isoc99_sscanf();
            if(__s == SOCK_STREAM) {
                __format = 37;
                __src = __dest + SOCK_STREAM;
                char v2 = 115;
            }
            else {
                v1 = 0;
                *(short*)&__format = '%';
                char v3 = 0;
            }
            __isoc99_sscanf();
            if(__s == 0) {
                goto loc_5E40C;
            }
            if(__src[-1] == 41) {
                getenv(&__name);
                int __n = snprintf(&__src1, 0x1001, &__format);
                if((uint32_t)__n <= 0x1000) {
                    v0 = (int)(int*)(v0 - (int)(int*)(__src - __dest)) + __n;
                    if(param1 - SOCK_STREAM >= v0) {
                        size_t v4 = strlen(__src);
                        memmove((void*)(__n + __dest), __src, v4 + SOCK_STREAM);
                        memcpy(__dest, &__src1, (size_t)__n);
                        goto loc_5E40C;
                    }
                    sub_5DF98(&g2, "src/zc_util.c", 137, "repalce env_value[%s] cause overlap");
                    return &gFFFFFFFF;
                }
                __errno_location();
                size_t v5 = (size_t)__n;
                sub_5DF98(&g2, "src/zc_util.c", 131, "snprintf fail, errno[%d], evn_value_len[%d]");
                return &gFFFFFFFF;
            }
            sub_5DF98(&g2, "src/zc_util.c", 124, "in string[%s] can\'t find match )");
            return &gFFFFFFFF;
        }
    }
    while(__src != SOCK_STREAM);
    return 0;
}
