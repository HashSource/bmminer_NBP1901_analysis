void* sub_5F1CC(uint32_t* param0, void* param1, size_t param2, size_t param3, int param4, size_t param5, size_t param6) {
    void* dstbuf;
    size_t __n;
    void* __src = param1;
    size_t v0 = param5;
    size_t __n2 = param6;
    if(param0[0] != 0) {
        size_t __n1 = param3;
        int v1 = param2 < __n2;
        uint32_t* ptr0 = param0;
        if(__n2 == 0) {
            v1 = SOCK_STREAM;
        }
        uint32_t* ptr1 = param0 + SOCK_STREAM;
        void* __dest1 = (void*)ptr1[0];
        uint32_t v2 = ptr1[SOCK_STREAM];
        if(v1 != 0) {
            __n2 = param2;
        }
        char v3 = v0 != 0 ? __n2 >= v0: SOCK_STREAM;
        int* ptr2 = (int*)(v2 - (int)__dest1);
        if(v3 == 0) {
            __n = v0 - __n2;
        }
        else {
            v0 = __n2;
        }
        if(v3 != 0) {
            __n = 0;
        }
        if((uint32_t)ptr2 < v0) {
            int v4 = sub_5E558(ptr0, v0 - (int)ptr2);
            char v5 = v4 == 0;
            if(v4 > 0) {
                uint32_t v6 = ptr0[5];
                sub_5DF98(&g2, "src/buf.c", 592, "conf limit to %ld, can\'t extend, so output");
                void* __dest = (void*)ptr0[SOCK_STREAM];
                size_t v7 = (size_t)(ptr0[2] - (int)__dest);
                if(__n1 == 0) {
                    if(v7 <= __n) {
                        __n = v7;
                    }
                    else {
                        __n1 = v7 - __n;
                    }
                    if(__n != 0) {
                        memset(__dest, param4 == 0 ? 32: 48, __n);
                        __dest = ptr0[SOCK_STREAM];
                    }
                    dstbuf = memcpy((void*)((int)__dest + __n), __src, __n1);
                }
                else {
                    if(__n2 >= v7) {
                        __n2 = v7;
                    }
                    else {
                        memset((void*)((int)__dest + __n2), 32, v7 - __n2);
                        __dest = ptr0[SOCK_STREAM];
                    }
                    dstbuf = memcpy(__dest, __src, __n2);
                }
                int v8 = (uint32_t)*(char*)&ptr0[7];
                uint32_t v9 = ptr0[SOCK_STREAM] + v7;
                if(v8 == 0) {
                    dstbuf = &g1;
                }
                ptr0[SOCK_STREAM] = v9;
                if(v8 == 0) {
                    return dstbuf;
                }
                sub_5E680(ptr0);
                return &g1;
            }
            else if(v5 == 0) {
                sub_5DF98(&g2, "src/buf.c", 624, "zlog_buf_resize fail");
                return &gFFFFFFFF;
            }
            __dest1 = ptr0[SOCK_STREAM];
        }
        if(__n1 == 0) {
            if(__n != 0) {
                memset(__dest1, param4 == 0 ? 32: 48, __n);
                __dest1 = ptr0[SOCK_STREAM];
            }
            memcpy((void*)((int)__dest1 + __n), __src, __n2);
        }
        else {
            if(__n != 0) {
                memset((void*)((int)__dest1 + __n2), 32, __n);
                __dest1 = ptr0[SOCK_STREAM];
            }
            memcpy(__dest1, __src, __n2);
        }
        dstbuf = NULL;
        ptr0[SOCK_STREAM] += v0;
        return dstbuf;
    }
    sub_5DF98(&g2, "src/buf.c", 0x232, "pre-use of zlog_buf_resize fail, so can\'t convert");
    return &gFFFFFFFF;
}
