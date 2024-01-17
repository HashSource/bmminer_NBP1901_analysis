int sub_53A94(int param0, int param1) {
    int result;
    int v0;
    if(param0 != 0) {
        if(param1 != 0) {
            int v1 = pthread_rwlock_rdlock(&g58DE1C);
            if(v1 == 0) {
                if(gvar_58DE3C == 0) {
                    sub_5DF98(&g2, "src/zlog.c", 472, "never call zlog_init() or dzlog_init() before");
                loc_53AF4:
                    int v2 = pthread_rwlock_unlock(&g58DE1C);
                    if(v2 != 0) {
                        v0 = v2;
                        sub_5DF98(&g2, "src/zlog.c", 492, "pthread_rwlock_unlock fail, rc=[%d]");
                    }
                    return -1;
                }
                void* ptr0 = pthread_getspecific(gvar_58DE08);
                uint32_t* __pointer = (uint32_t*)ptr0;
                int v3 = (int)gvar_58DE18;
                if(ptr0 == 0) {
                    uint32_t v4 = gvar_99EEC8;
                    __pointer = sub_5D07C(v3, *(size_t*)(v4 + 1052), *(char**)(v4 + 1056), *(size_t*)(v4 + 9292));
                    if(__pointer == 0) {
                        sub_5DF98(&g2, "src/zlog.c", 476, "zlog_thread_new fail");
                        goto loc_53AF4;
                    }
                    else {
                        int v5 = pthread_setspecific(gvar_58DE08, __pointer);
                        if(v5 == 0) {
                            v3 = gvar_58DE18;
                        }
                        else {
                            sub_5CFA8((char*)__pointer);
                            v0 = v5;
                            sub_5DF98(&g2, "src/zlog.c", 476, "pthread_setspecific fail, rd[%d]");
                            goto loc_53AF4;
                        }
                    }
                }
                if(__pointer[0] != v3) {
                    uint32_t v6 = gvar_99EEC8;
                    int v7 = sub_5D290(__pointer, *(size_t*)(v6 + 1052), *(char**)(v6 + 1056));
                    if(v7 == 0) {
                        v7 = sub_5D3B0((int*)__pointer, *(size_t*)(gvar_99EEC8 + 9292));
                        if(v7 == 0) {
                            __pointer[0] = gvar_58DE18;
                            goto loc_53B80;
                        }
                    }
                    v0 = v7;
                    sub_5DF98(&g2, "src/zlog.c", 476, "zlog_thread_resize_msg_buf fail, rd[%d]");
                    goto loc_53AF4;
                }
            loc_53B80:
                int v8 = sub_580C0(__pointer[SOCK_STREAM]);
                if(v8 != 0) {
                    int v9 = param1;
                    v0 = param0;
                    sub_5DF98(&g2, "src/zlog.c", 479, "zlog_mdc_put fail, key[%s], value[%s]");
                    goto loc_53AF4;
                }
                result = pthread_rwlock_unlock(&g58DE1C);
                if(result != 0) {
                    v0 = result;
                    sub_5DF98(&g2, "src/zlog.c", 485, "pthread_rwlock_unlock fail, rc=[%d]");
                    return -1;
                }
                return result;
            }
            v0 = v1;
            sub_5DF98(&g2, "src/zlog.c", 467, "pthread_rwlock_wrlock fail, rc[%d]");
            return -1;
        }
        sub_5DF98(&g2, "src/zlog.c", 463, "value is null or 0");
        return -1;
    }
    sub_5DF98(&g2, "src/zlog.c", 462, "key is null or 0");
    return -1;
}
