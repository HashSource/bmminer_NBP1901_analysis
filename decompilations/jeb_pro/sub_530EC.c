int sub_530EC(char* param0, int __src) {
    int result;
    sub_5DF98(NULL, "src/zlog.c", 162, "------dzlog_init start------");
    char* ptr0 = "1.2.12";
    char* ptr1 = "16:28:36";
    char* ptr2 = "Dec  6 2022";
    sub_5DF98(NULL, "src/zlog.c", 164, "------compile time[%s %s], version[%s]------");
    int v0 = pthread_rwlock_wrlock(&g58DE1C);
    if(v0 == 0) {
        if(gvar_58DE3C == 0) {
            int v1 = sub_52DCC(param0);
            if(v1 == 0) {
                int* ptr3 = sub_55F6C(gvar_58DE0C, __src, *(int**)(gvar_99EEC8 + 0x2448));
                gvar_58DE10 = (uint32_t)ptr3;
                if(ptr3 != 0) {
                    ++gvar_58DE18;
                    gvar_58DE3C = 1;
                    sub_5DF98(NULL, "src/zlog.c", 194, "------dzlog_init success end------");
                    result = pthread_rwlock_unlock(&g58DE1C);
                    if(result != 0) {
                        ptr2 = result;
                        sub_5DF98(&g2, "src/zlog.c", 197, "pthread_rwlock_unlock fail, rc=[%d]");
                        return -1;
                    }
                    return result;
                }
                ptr2 = __src;
                sub_5DF98(&g2, "src/zlog.c", 0xbb, "zlog_category_table_fetch_category[%s] fail");
            }
            else {
                ptr2 = param0;
                sub_5DF98(&g2, "src/zlog.c", 178, "zlog_init_inner[%s] fail");
            }
        }
        else {
            sub_5DF98(&g2, "src/zlog.c", 173, "already init, use zlog_reload pls");
        }
        sub_5DF98(&g2, "src/zlog.c", 202, "------dzlog_init fail end------");
        int v2 = pthread_rwlock_unlock(&g58DE1C);
        if(v2 == 0) {
            return -1;
        }
        ptr2 = v2;
        sub_5DF98(&g2, "src/zlog.c", 205, "pthread_rwlock_unlock fail, rc=[%d]");
        return -1;
    }
    ptr2 = v0;
    sub_5DF98(&g2, "src/zlog.c", 168, "pthread_rwlock_wrlock fail, rc[%d]");
    return -1;
}
