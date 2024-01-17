int sub_53FE0() {
    int v0;
    int result;
    int v1 = pthread_rwlock_rdlock(&g58DE1C);
    if(v1 == 0) {
        if(gvar_58DE3C == 0) {
            sub_5DF98(&g2, "src/zlog.c", 591, "never call zlog_init() or dzlog_init() before");
        }
        else {
            void* ptr0 = pthread_getspecific(gvar_58DE08);
            if(ptr0 == 0) {
                sub_5DF98(&g2, "src/zlog.c", 0x255, "thread not found, maybe not use zlog_put_mdc before");
            }
            else {
                sub_581B0(*(uint32_t**)((int)ptr0 + 4));
            }
        }
        result = pthread_rwlock_unlock(&g58DE1C);
        if(result != 0) {
            v0 = result;
            result = sub_5DF98(&g2, "src/zlog.c", 606, "pthread_rwlock_unlock fail, rc=[%d]");
        }
        return result;
    }
    v0 = v1;
    return sub_5DF98(&g2, "src/zlog.c", 586, "pthread_rwlock_rdlock fail, rc[%d]");
}
