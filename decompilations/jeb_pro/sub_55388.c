int sub_55388(char* __src, void* param1) {
    int v0;
    if(__src != 0) {
        if(param1 != 0) {
            int v1 = pthread_rwlock_wrlock(&g58DE1C);
            if(v1 == 0) {
                int result = (int)gvar_58DE3C;
                if(result == 0) {
                    sub_5DF98(&g2, "src/zlog.c", 988, "never call zlog_init() or dzlog_init() before");
                }
                else {
                    void* __ptr = sub_58304(__src, param1);
                    if(__ptr == 0) {
                        sub_5DF98(&g2, "src/zlog.c", 0x3e3, "zlog_record_new fail");
                        result = -1;
                    }
                    else {
                        result = sub_5DAC0(gvar_58DE14, (int*)__ptr, (uint32_t*)__ptr);
                        if(result == 0) {
                            int* ptr0 = *(uint32_t*)(gvar_99EEC8 + 0x2448);
                            if(*(ptr0 + SOCK_STREAM) > 0) {
                                int v2 = 0;
                                do {
                                    int* ptr1 = *(int**)(v2 * 4 + *ptr0);
                                    ++v2;
                                    sub_5BCCC(ptr1, gvar_58DE14);
                                    ptr0 = *(uint32_t*)(gvar_99EEC8 + 0x2448);
                                }
                                while(*(ptr0 + SOCK_STREAM) > v2);
                            }
                        }
                        else {
                            sub_582A0((char*)__ptr);
                            sub_5DF98(&g2, "src/zlog.c", 1002, "zc_hashtable_put fail");
                        }
                    }
                }
                int v3 = pthread_rwlock_unlock(&g58DE1C);
                if(v3 == 0) {
                    return result;
                }
                v0 = v3;
                sub_5DF98(&g2, "src/zlog.c", 1013, "pthread_rwlock_unlock fail, rd=[%d]");
                return -1;
            }
            v0 = v1;
            sub_5DF98(&g2, "src/zlog.c", 983, "pthread_rwlock_rdlock fail, rd[%d]");
            return -1;
        }
        sub_5DF98(&g2, "src/zlog.c", 0x3d3, "record_output is null or 0");
        return -1;
    }
    sub_5DF98(&g2, "src/zlog.c", 978, "rname is null or 0");
    return -1;
}
