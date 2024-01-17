int* sub_53D3C(int param0) {
    int* ptr0;
    int* result;
    if(param0 != 0) {
        int v0 = pthread_rwlock_rdlock(&g58DE1C);
        if(v0 == 0) {
            if(gvar_58DE3C == 0) {
                sub_5DF98(&g2, "src/zlog.c", 513, "never call zlog_init() or dzlog_init() before");
            }
            else {
                void* ptr1 = pthread_getspecific(gvar_58DE08);
                if(ptr1 == 0) {
                    sub_5DF98(&g2, "src/zlog.c", 519, "thread not found, maybe not use zlog_put_mdc before");
                }
                else {
                    result = sub_581B8(*(uint32_t**)((int)ptr1 + 4), param0);
                    if(result != 0) {
                        int v1 = pthread_rwlock_unlock(&g58DE1C);
                        if(v1 != 0) {
                            ptr0 = v1;
                            sub_5DF98(&g2, "src/zlog.c", 531, "pthread_rwlock_unlock fail, rc=[%d]");
                            return NULL;
                        }
                        return result;
                    }
                    ptr0 = param0;
                    sub_5DF98(&g2, "src/zlog.c", 525, "key[%s] not found in mdc");
                }
            }
            result = pthread_rwlock_unlock(&g58DE1C);
            if(result == 0) {
                return result;
            }
            ptr0 = result;
            sub_5DF98(&g2, "src/zlog.c", 538, "pthread_rwlock_unlock fail, rc=[%d]");
            return NULL;
        }
        ptr0 = v0;
        sub_5DF98(&g2, "src/zlog.c", 508, "pthread_rwlock_rdlock fail, rc[%d]");
        return NULL;
    }
    sub_5DF98(&g2, "src/zlog.c", 504, "key is null or 0");
    return NULL;
}
