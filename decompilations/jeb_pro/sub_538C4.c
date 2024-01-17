int sub_538C4(int __src) {
    if(__src != 0) {
        int v0 = __src;
        sub_5DF98(NULL, "src/zlog.c", 379, "------dzlog_set_category[%s] start------");
        int v1 = pthread_rwlock_wrlock(&g58DE1C);
        if(v1 == 0) {
            if(gvar_58DE3C == 0) {
                sub_5DF98(&g2, "src/zlog.c", 387, "never call zlog_init() or dzlog_init() before");
            }
            else {
                int* ptr0 = sub_55F6C(gvar_58DE0C, __src, *(int**)(gvar_99EEC8 + 0x2448));
                gvar_58DE10 = (uint32_t)ptr0;
                if(ptr0 != 0) {
                    sub_5DF98(NULL, "src/zlog.c", 400, "------dzlog_set_category[%s] end, success------ ");
                    int v2 = pthread_rwlock_unlock(&g58DE1C);
                    if(v2 == 0) {
                        return 0;
                    }
                    v0 = v2;
                    sub_5DF98(&g2, "src/zlog.c", 403, "pthread_rwlock_unlock fail, rc=[%d]");
                    return -1;
                }
                sub_5DF98(&g2, "src/zlog.c", 396, "zlog_category_table_fetch_category[%s] fail");
            }
            v0 = __src;
            sub_5DF98(&g2, "src/zlog.c", 408, "------dzlog_set_category[%s] end, fail------ ");
            int v3 = pthread_rwlock_unlock(&g58DE1C);
            if(v3 == 0) {
                return -1;
            }
            v0 = v3;
            sub_5DF98(&g2, "src/zlog.c", 411, "pthread_rwlock_unlock fail, rc=[%d]");
            return -1;
        }
        v0 = v1;
        sub_5DF98(&g2, "src/zlog.c", 382, "pthread_rwlock_wrlock fail, rc[%d]");
        return -1;
    }
    sub_5DF98(&g2, "src/zlog.c", 377, "cname is null or 0");
    return -1;
}
