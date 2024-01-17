int* sub_536F4(int __src) {
    int* result;
    if(__src != 0) {
        int v0 = __src;
        sub_5DF98(NULL, "src/zlog.c", 335, "------zlog_get_category[%s] start------");
        int v1 = pthread_rwlock_wrlock(&g58DE1C);
        if(v1 == 0) {
            if(gvar_58DE3C == 0) {
                sub_5DF98(&g2, "src/zlog.c", 343, "never call zlog_init() or dzlog_init() before");
            }
            else {
                result = sub_55F6C(gvar_58DE0C, __src, *(int**)(gvar_99EEC8 + 0x2448));
                if(result != 0) {
                    sub_5DF98(NULL, "src/zlog.c", 357, "------zlog_get_category[%s] success, end------ ");
                    int v2 = pthread_rwlock_unlock(&g58DE1C);
                    if(v2 != 0) {
                        v0 = v2;
                        sub_5DF98(&g2, "src/zlog.c", 360, "pthread_rwlock_unlock fail, rc=[%d]");
                        return NULL;
                    }
                    return result;
                }
                sub_5DF98(&g2, "src/zlog.c", 0x161, "zlog_category_table_fetch_category[%s] fail");
            }
            v0 = __src;
            sub_5DF98(&g2, "src/zlog.c", 365, "------zlog_get_category[%s] fail, end------ ");
            result = pthread_rwlock_unlock(&g58DE1C);
            if(result == 0) {
                return result;
            }
            v0 = result;
            sub_5DF98(&g2, "src/zlog.c", 368, "pthread_rwlock_unlock fail, rc=[%d]");
            return NULL;
        }
        v0 = v1;
        sub_5DF98(&g2, "src/zlog.c", 338, "pthread_rwlock_wrlock fail, rc[%d]");
        return NULL;
    }
    sub_5DF98(&g2, "src/zlog.c", 334, "cname is null or 0");
    return NULL;
}
