uint32_t* sub_57C30() {
    void* __ptr1 = sub_5D4C0(&sub_5F474);
    if(__ptr1 != 0) {
        int v0 = sub_57B80((uint32_t*)__ptr1, "* = 0, LOG_INFO");
        if(v0 == 0) {
            int v1 = sub_57B80((uint32_t*)__ptr1, "DEBUG = 20, LOG_DEBUG");
            if(v1 == 0) {
                int v2 = sub_57B80((uint32_t*)__ptr1, "INFO = 40, LOG_INFO");
                if(v2 == 0) {
                    int v3 = sub_57B80((uint32_t*)__ptr1, "NOTICE = 60, LOG_NOTICE");
                    if(v3 == 0) {
                        int v4 = sub_57B80((uint32_t*)__ptr1, "WARN = 80, LOG_WARNING");
                        if(v4 == 0) {
                            int v5 = sub_57B80((uint32_t*)__ptr1, "ERROR = 100, LOG_ERR");
                            if(v5 == 0) {
                                int v6 = sub_57B80((uint32_t*)__ptr1, "FATAL = 120, LOG_ALERT");
                                if(v6 == 0) {
                                    int v7 = sub_57B80((uint32_t*)__ptr1, "UNKNOWN = 254, LOG_ERR");
                                    if(v7 == 0) {
                                        int v8 = sub_57B80((uint32_t*)__ptr1, "! = 255, LOG_INFO");
                                        if(v8 == 0) {
                                            return (uint32_t*)__ptr1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        sub_5DF98(&g2, "src/level_list.c", 67, "zlog_level_set_default fail");
        sub_5D580(__ptr1);
        return NULL;
    }
    sub_5DF98(&g2, "src/level_list.c", 62, "zc_arraylist_new fail");
    return 0;
}
