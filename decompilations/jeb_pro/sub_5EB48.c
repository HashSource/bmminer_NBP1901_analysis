void* sub_5EB48(uint32_t* param0, size_t param1, size_t param2) {
    void* dstbuf;
    size_t __n;
    uint32_t v0;
    size_t v1;
    char v2;
    if(param0[0] != 0) {
        void* __src = &v2;
        do {
            v1 = param1 / 10;
            uint32_t v3 = param1 - v1 * 10;
            param1 = v1;
            *(char*)((int)__src - SOCK_STREAM) = (uint8_t)v3 + 48;
            __src = (int)__src - SOCK_STREAM;
        }
        while(v1 != 0);
        size_t __n2 = (size_t)((int)&v2 - (int)__src);
        size_t __n1 = param2;
        void* __s = (void*)param0[SOCK_STREAM];
        uint32_t v4 = param0[2];
        if(param2 > __n2) {
            v0 = (int)__s + param2;
            __n = param2 - __n2;
            if(v4 < v0) {
                goto loc_5EC10;
            }
            else {
                goto loc_5EBB8;
            }
        }
        v0 = (int)__s + __n2;
        __n = param1;
        if(v4 < v0) {
            __n1 = __n2;
        loc_5EC10:
            int v5 = sub_5E558(param0, __n1 - (int)(int*)(v4 - (int)__s));
            if(v5 == 0) {
                __s = param0[SOCK_STREAM];
                v0 = (int)__s + __n1;
            loc_5EBB8:
                if(__n != 0) {
                    memset(__s, 48, __n);
                    __s = param0[SOCK_STREAM];
                }
            }
            else if(v5 > 0) {
                uint32_t v6 = param0[5];
                sub_5DF98(&g2, "src/buf.c", 302, "conf limit to %ld, can\'t extend, so output");
                void* __s1 = (void*)param0[SOCK_STREAM];
                size_t v7 = (size_t)(param0[2] - (int)__s1);
                char v8 = v7 == __n;
                char v9 = v7 >= __n;
                if(v9 == 0 || v8 != 0) {
                    __n = v7;
                }
                else {
                    __n1 = v7 - __n;
                }
                if(v9 == 0 || v8 != 0) {
                    __n1 = 0;
                }
                if(__n != 0) {
                    memset(__s1, 48, __n);
                    __s1 = param0[SOCK_STREAM];
                }
                dstbuf = memcpy((void*)((int)__s1 + __n), __src, __n1);
                int v10 = (uint32_t)*(char*)&param0[7];
                uint32_t v11 = param0[SOCK_STREAM] + v7;
                if(v10 == 0) {
                    dstbuf = &g1;
                }
                param0[SOCK_STREAM] = v11;
                if(v10 == 0) {
                    return dstbuf;
                }
                sub_5E680(param0);
                return &g1;
            }
            else {
                sub_5DF98(&g2, "src/buf.c", 318, "zlog_buf_resize fail");
                return &gFFFFFFFF;
            }
        }
        memcpy((void*)((int)__s + __n), __src, __n2);
        dstbuf = NULL;
        param0[SOCK_STREAM] = v0;
        return dstbuf;
    }
    sub_5DF98(&g2, "src/buf.c", 0x114, "pre-use of zlog_buf_resize fail, so can\'t convert");
    return &gFFFFFFFF;
}
