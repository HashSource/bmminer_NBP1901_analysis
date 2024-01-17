int sub_5521C() {
    int v0;
    uint32_t v1;
    int v2 = pthread_rwlock_rdlock(&g58DE1C);
    if(v2 == 0) {
        sub_5DF98(&g1, "src/zlog.c", 951, "------zlog_profile start------ ");
        sub_5DF98(&g1, "src/zlog.c", 952, "is init:[%d]");
        v1 = gvar_58DE18;
        sub_5DF98(&g1, "src/zlog.c", 953, "init version:[%d]");
        sub_56B38(gvar_99EEC8, &g1);
        sub_58414(gvar_58DE14, &g1);
        sub_55CCC(gvar_58DE0C, &g1);
        if(gvar_58DE10 != 0) {
            sub_5DF98(&g1, "src/zlog.c", 958, "-default_category-");
            sub_557C4(gvar_58DE10, &g1);
        }
        sub_5DF98(&g1, "src/zlog.c", 961, "------zlog_profile end------ ");
        v0 = pthread_rwlock_unlock(&g58DE1C);
        if(v0 == 0) {
            return 0;
        }
        v1 = v0;
        return sub_5DF98(&g2, "src/zlog.c", 964, "pthread_rwlock_unlock fail, rc=[%d]");
    }
    v1 = v2;
    return sub_5DF98(&g2, "src/zlog.c", 948, "pthread_rwlock_wrlock fail, rc[%d]");
}
