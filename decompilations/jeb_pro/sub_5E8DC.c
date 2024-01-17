int sub_5E8DC(uint32_t* param0, char* __format, __gnuc_va_list __arg) {
    uint32_t v0;
    size_t v1;
    char* ptr0;
    if(param0[0] != 0) {
        uint32_t v2 = param0[3];
        char* __s = param0[SOCK_STREAM];
        __gnuc_va_list v3 = __arg;
        size_t __maxlen = (size_t)(v2 - __s);
        int v4 = vsnprintf(__s, __maxlen, __format, __arg);
        if((__maxlen > (uint32_t)v4 ? ~v4 >>> 31: 0) == 0) {
            if(v4 >= 0) {
                if(__maxlen > (uint32_t)v4) {
                    return 0;
                }
                int v5 = sub_5E558(param0, SOCK_STREAM - __maxlen + v4);
                if(v5 <= 0) {
                    if(v5 == 0) {
                        char* __s1 = (char*)param0[SOCK_STREAM];
                        uint32_t v6 = param0[3];
                        v3 = __arg;
                        size_t __maxlen1 = (size_t)(v6 - __s1);
                        int v7 = vsnprintf(__s1, __maxlen1, __format, __arg);
                        if(v7 >= 0) {
                            param0[SOCK_STREAM] += v7;
                            return 0;
                        }
                        __errno_location();
                        sub_5DF98(&g2, "src/buf.c", 252, "vsnprintf fail, errno[%d]");
                        ptr0 = __format;
                        v1 = __maxlen1;
                        v0 = v7;
                        sub_5DF98(&g2, "src/buf.c", 253, "nwrite[%d], size_left[%ld], format[%s]");
                        return -1;
                    }
                    sub_5DF98(&g2, "src/buf.c", 243, "zlog_buf_resize fail");
                    return -1;
                }
                v0 = param0[5];
                sub_5DF98(&g2, "src/buf.c", 234, "conf limit to %ld, can\'t extend, so truncate");
                char* __s2 = (char*)param0[SOCK_STREAM];
                uint32_t v8 = param0[3];
                v3 = __arg;
                size_t __maxlen2 = (size_t)(v8 - __s2);
                vsnprintf(__s2, __maxlen2, __format, __arg);
                int v9 = (uint32_t)*(char*)&param0[7];
                param0[SOCK_STREAM] = (uint32_t)(__maxlen2 - SOCK_STREAM + param0[SOCK_STREAM]);
                if(v9 == 0) {
                    return SOCK_STREAM;
                }
                sub_5E680(param0);
                return SOCK_STREAM;
            }
            __errno_location();
            sub_5DF98(&g2, "src/buf.c", 226, "vsnprintf fail, errno[%d]");
            v1 = __maxlen;
            ptr0 = __format;
            v0 = v4;
            sub_5DF98(&g2, "src/buf.c", 227, "nwrite[%d], size_left[%ld], format[%s]");
            return -1;
        }
        param0[SOCK_STREAM] += v4;
        return 0;
    }
    sub_5DF98(&g2, "src/buf.c", 214, "pre-use of zlog_buf_resize fail, so can\'t convert");
    return -1;
}
