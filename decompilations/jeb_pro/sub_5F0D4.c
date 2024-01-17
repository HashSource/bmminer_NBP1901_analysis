void* sub_5F0D4(uint32_t* param0, void* __src, size_t __n) {
    void* dstbuf;
    void* __dest = (void*)param0[SOCK_STREAM];
    uint32_t v0 = param0[2];
    uint32_t v1 = (uint32_t)(__n + (int)__dest);
    if(v0 < v1) {
        int v2 = sub_5E558(param0, __n - (int)(int*)(v0 - (int)__dest));
        if(v2 <= 0) {
            if(v2 != 0) {
                sub_5DF98(&g2, "src/buf.c", 533, "zlog_buf_resize fail");
                return &gFFFFFFFF;
            }
            __dest = param0[SOCK_STREAM];
            v1 = __n + (int)__dest;
            memcpy(__dest, __src, __n);
            dstbuf = NULL;
            param0[SOCK_STREAM] = v1;
            return dstbuf;
        }
        uint32_t v3 = param0[5];
        sub_5DF98(&g2, "src/buf.c", 525, "conf limit to %ld, can\'t extend, so output");
        void* __dest1 = (void*)param0[SOCK_STREAM];
        size_t __n1 = (size_t)(param0[2] - (int)__dest1);
        dstbuf = memcpy(__dest1, __src, __n1);
        int v4 = (uint32_t)*(char*)&param0[7];
        uint32_t v5 = param0[SOCK_STREAM] + __n1;
        if(v4 == 0) {
            dstbuf = &g1;
        }
        param0[SOCK_STREAM] = v5;
        if(v4 != 0) {
            sub_5E680(param0);
            return &g1;
        }
    }
    else {
        memcpy(__dest, __src, __n);
        dstbuf = NULL;
        param0[SOCK_STREAM] = v1;
    }
    return dstbuf;
}
