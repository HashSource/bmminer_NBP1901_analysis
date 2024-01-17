int sub_53604() {
    int v0;
    int result;
    sub_5DF98(NULL, "src/zlog.c", 304, "------zlog_fini start------");
    int v1 = pthread_rwlock_wrlock(&g58DE1C);
    if(v1 == 0) {
        if(gvar_58DE3C == 0) {
            sub_5DF98(&g2, "src/zlog.c", 312, "before finish, must zlog_init() or dzlog_init() fisrt");
        }
        else {
            sub_52D68();
            gvar_58DE3C = 0;
        }
        sub_5DF98(NULL, "src/zlog.c", 320, "------zlog_fini end------");
        result = pthread_rwlock_unlock(&g58DE1C);
        if(result != 0) {
            v0 = result;
            result = sub_5DF98(&g2, "src/zlog.c", 323, "pthread_rwlock_unlock fail, rc=[%d]");
        }
        return result;
    }
    v0 = v1;
    return sub_5DF98(&g2, "src/zlog.c", 0x133, "pthread_rwlock_wrlock fail, rc[%d]");
}
