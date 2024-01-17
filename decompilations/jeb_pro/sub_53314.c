int sub_53314(char* param0) {
    uint32_t v0;
    char* ptr0 = param0;
    sub_5DF98(NULL, "src/zlog.c", 219, "------zlog_reload start------");
    int result = pthread_rwlock_wrlock(&g58DE1C);
    if(result == 0) {
        if(gvar_58DE3C != 0) {
            if(ptr0 == 0) {
                ptr0 = gvar_99EEC8;
            }
            if(ptr0 == -1) {
                ptr0 = gvar_99EEC8;
                if((uint8_t)*(int*)&ptr0[9276] >= gvar_58DE40) {
                    goto loc_53494;
                }
            }
            int v1 = 0;
            gvar_58DE40 = 0;
            char* __ptr2 = sub_56EB8(ptr0);
            if(__ptr2 == 0) {
                sub_5DF98(&g2, "src/zlog.c", 250, "zlog_conf_new fail");
                sub_5DF98(&g1, "src/zlog.c", 0x118, "zlog_reload fail, use old conf file, still working");
            }
            else {
                int* ptr1 = (int*)*(int*)&__ptr2[0x2448];
                if(ptr1[SOCK_STREAM] > 0) {
                    do {
                        int* ptr2 = *(int**)(v1 * 4 + ptr1[0]);
                        ++v1;
                        sub_5BCCC(ptr2, gvar_58DE14);
                        ptr1 = *(int*)&__ptr2[0x2448];
                    }
                    while(ptr1[SOCK_STREAM] > v1);
                }
                int v2 = sub_55E24(gvar_58DE0C, ptr1);
                if(v2 == 0) {
                    uint32_t* ptr3 = (uint32_t*)gvar_58DE0C;
                    ++gvar_58DE18;
                    sub_55EBC(ptr3);
                    sub_56E0C(gvar_99EEC8);
                    gvar_99EEC8 = (uint32_t)__ptr2;
                    sub_5DF98(NULL, "src/zlog.c", 271, "------zlog_reload success, total init verison[%d] ------");
                    int v3 = pthread_rwlock_unlock(&g58DE1C);
                    if(v3 != 0) {
                        v0 = v3;
                        sub_5DF98(&g2, "src/zlog.c", 0x112, "pthread_rwlock_unlock fail, rc=[%d]");
                        return -1;
                    }
                    return result;
                }
                sub_5DF98(&g2, "src/zlog.c", 260, "zlog_category_table_update fail");
                sub_5DF98(&g1, "src/zlog.c", 0x118, "zlog_reload fail, use old conf file, still working");
                sub_56E0C(__ptr2);
            }
            v0 = gvar_58DE18;
            sub_5DF98(&g2, "src/zlog.c", 0x11b, "------zlog_reload fail, total init version[%d] ------");
            int v4 = pthread_rwlock_unlock(&g58DE1C);
            if(v4 == 0) {
                return -1;
            }
            v0 = v4;
            sub_5DF98(&g2, "src/zlog.c", 0x11e, "pthread_rwlock_unlock fail, rc=[%d]");
            return -1;
        }
        sub_5DF98(&g2, "src/zlog.c", 227, "never call zlog_init() or dzlog_init() before");
    loc_53494:
        sub_5DF98(NULL, "src/zlog.c", 0x123, "------zlog_reload do nothing------");
        int v5 = pthread_rwlock_unlock(&g58DE1C);
        if(v5 == 0) {
            return result;
        }
        v0 = v5;
        sub_5DF98(&g2, "src/zlog.c", 294, "pthread_rwlock_unlock fail, rc=[%d]");
        return -1;
    }
    v0 = result;
    sub_5DF98(&g2, "src/zlog.c", 222, "pthread_rwlock_wrlock fail, rc[%d]");
    return -1;
}
