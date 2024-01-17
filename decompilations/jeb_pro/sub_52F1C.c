int sub_52F1C(char* param0) {
    int result;
    sub_5DF98(NULL, "src/zlog.c", 119, "------zlog_init start------");
    char* ptr0 = "1.2.12";
    char* ptr1 = "16:28:36";
    char* ptr2 = "Dec  6 2022";
    sub_5DF98(NULL, "src/zlog.c", 120, "------compile time[%s %s], version[%s]------");
    int v0 = pthread_rwlock_wrlock(&g58DE1C);
    if(v0 == 0) {
        if(gvar_58DE3C == 0) {
            int v1 = sub_52DCC(param0);
            if(v1 == 0) {
                uint32_t v2 = gvar_58DE18 + SOCK_STREAM;
                gvar_58DE3C = 1;
                gvar_58DE18 = v2;
                sub_5DF98(NULL, "src/zlog.c", 142, "------zlog_init success end------");
                result = pthread_rwlock_unlock(&g58DE1C);
                if(result != 0) {
                    ptr2 = result;
                    sub_5DF98(&g2, "src/zlog.c", 145, "pthread_rwlock_unlock fail, rc=[%d]");
                    return -1;
                }
                return result;
            }
            ptr2 = param0;
            sub_5DF98(&g2, "src/zlog.c", 135, "zlog_init_inner[%s] fail");
        }
        else {
            sub_5DF98(&g2, "src/zlog.c", 129, "already init, use zlog_reload pls");
        }
        sub_5DF98(&g2, "src/zlog.c", 150, "------zlog_init fail end------");
        int v3 = pthread_rwlock_unlock(&g58DE1C);
        if(v3 == 0) {
            return -1;
        }
        ptr2 = v3;
        sub_5DF98(&g2, "src/zlog.c", 0x99, "pthread_rwlock_unlock fail, rc=[%d]");
        return -1;
    }
    ptr2 = v0;
    sub_5DF98(&g2, "src/zlog.c", 124, "pthread_rwlock_wrlock fail, rc[%d]");
    return -1;
}
