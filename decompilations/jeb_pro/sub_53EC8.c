int sub_53EC8(int param0) {
    int v0;
    int result;
    if(param0 != 0) {
        int v1 = pthread_rwlock_rdlock(&g58DE1C);
        if(v1 == 0) {
            if(gvar_58DE3C == 0) {
                sub_5DF98(&g2, "src/zlog.c", 0x22e, "never call zlog_init() or dzlog_init() before");
            }
            else {
                void* ptr0 = pthread_getspecific(gvar_58DE08);
                if(ptr0 == 0) {
                    sub_5DF98(&g2, "src/zlog.c", 0x234, "thread not found, maybe not use zlog_put_mdc before");
                }
                else {
                    sub_58238(*(uint32_t**)((int)ptr0 + 4), param0);
                }
            }
            result = pthread_rwlock_unlock(&g58DE1C);
            if(result != 0) {
                v0 = result;
                result = sub_5DF98(&g2, "src/zlog.c", 573, "pthread_rwlock_unlock fail, rc=[%d]");
            }
            return result;
        }
        v0 = v1;
        return sub_5DF98(&g2, "src/zlog.c", 0x229, "pthread_rwlock_rdlock fail, rc[%d]");
    }
    return sub_5DF98(&g2, "src/zlog.c", 0x225, "key is null or 0");
}
