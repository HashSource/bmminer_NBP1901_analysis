void* sub_5ED04(uint32_t* param0, int param1, int param2, int param3, size_t param4) {
    void* dstbuf;
    int v0;
    size_t __n;
    uint32_t v1;
    int v2;
    void* __src;
    char v3;
    int v4 = param3;
    if(param0[0] != 0) {
        int v5 = param2;
        char v6 = v4 == 0;
        char v7 = SOCK_STREAM;
        if(v4 == 0) {
            v6 = v5 == -1;
            v7 = (uint32_t)v5 >= -1;
        }
        uint32_t* ptr0 = param0;
        __src = &v3;
        if(v7 == 0 || v6 != 0) {
            do {
                v2 = (uint32_t)v5 / 10;
                int v8 = v5 - v2 * 10;
                v5 = v2;
                *(char*)((int)__src - SOCK_STREAM) = (uint8_t)v8 + 48;
                __src = (int)__src - SOCK_STREAM;
            }
            while(v2 != 0);
        }
        else {
            do {
                sub_60120(v5, v4, 10, 0);
                *(char*)((int)__src - SOCK_STREAM) = (uint8_t)param2 + 48;
                __src = (int)__src - SOCK_STREAM;
                v5 = sub_60120(v5, v4, 10, 0);
                v4 = param1;
            }
            while((v5 | v4) != 0);
        }
        size_t v9 = param4;
        size_t __n1 = (size_t)((int)&v3 - (int)__src);
        void* __s = (void*)ptr0[SOCK_STREAM];
        uint32_t v10 = ptr0[2];
        if(v9 > __n1) {
            v1 = (int)__s + v9;
            __n = v9 - __n1;
            if(v10 < v1) {
                goto loc_5EE30;
            }
            else {
                goto loc_5ED90;
            }
        }
        v1 = (int)__s + __n1;
        if(v10 >= v1) {
            __n = 0;
            goto loc_5EDB0;
        }
        else {
            v9 = __n1;
            __n = 0;
        loc_5EE30:
            v0 = sub_5E558(ptr0, v9 - (int)(int*)(v10 - (int)__s));
            v6 = v0 == 0;
        }
        if(v0 <= 0) {
            if(v6 == 0) {
                sub_5DF98(&g2, "src/buf.c", 0x199, "zlog_buf_resize fail");
                return &gFFFFFFFF;
            }
            __s = ptr0[SOCK_STREAM];
            v1 = (int)__s + v9;
        loc_5ED90:
            if(__n != 0) {
                memset(__s, 48, __n);
                __s = ptr0[SOCK_STREAM];
            }
        loc_5EDB0:
            memcpy((void*)((int)__s + __n), __src, __n1);
            dstbuf = NULL;
            ptr0[SOCK_STREAM] = v1;
        }
        else {
            uint32_t v11 = ptr0[5];
            sub_5DF98(&g2, "src/buf.c", 393, "conf limit to %ld, can\'t extend, so output");
            void* __s1 = (void*)ptr0[SOCK_STREAM];
            size_t v12 = (size_t)(ptr0[2] - (int)__s1);
            v6 = v12 == __n;
            v7 = v12 >= __n;
            if(v7 == 0 || v6 != 0) {
                __n = v12;
            }
            else {
                __n1 = v12 - __n;
            }
            if(v7 == 0 || v6 != 0) {
                __n1 = 0;
            }
            if(__n != 0) {
                memset(__s1, 48, __n);
                __s1 = ptr0[SOCK_STREAM];
            }
            dstbuf = memcpy((void*)((int)__s1 + __n), __src, __n1);
            int v13 = (uint32_t)*(char*)&ptr0[7];
            uint32_t v14 = ptr0[SOCK_STREAM] + v12;
            if(v13 == 0) {
                dstbuf = &g1;
            }
            ptr0[SOCK_STREAM] = v14;
            if(v13 != 0) {
                sub_5E680(ptr0);
                return &g1;
            }
        }
        return dstbuf;
    }
    sub_5DF98(&g2, "src/buf.c", 342, "pre-use of zlog_buf_resize fail, so can\'t convert");
    return &gFFFFFFFF;
}
