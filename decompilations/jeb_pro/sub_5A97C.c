char* sub_5A97C(char* __ptr) {
    void* ptr0;
    if(__ptr != 0) {
        void* __ptr1 = *(int*)&__ptr[0x1434];
        if(__ptr1 != 0) {
            sub_5D580(__ptr1);
            *(int*)&__ptr[0x1434] = 0;
        }
        int __fd = *(int*)&__ptr[5176];
        if(__fd != 0) {
            int v0 = close(__fd);
            if(v0 != 0) {
                int* ptr1 = __errno_location();
                ptr0 = ptr1[0];
                sub_5DF98(&g2, "src/rule.c", 949, "close fail, maybe cause by write, errno[%d]");
            }
        }
        FILE* __stream = *(int*)&__ptr[6240];
        if(__stream != 0) {
            int v1 = pclose(__stream);
            if(v1 == -1) {
                int* ptr2 = __errno_location();
                ptr0 = ptr2[0];
                sub_5DF98(&g2, "src/rule.c", 954, "pclose fail, errno[%d]");
            }
        }
        void* __ptr1_1 = *(int*)&__ptr[6236];
        if(__ptr1_1 != 0) {
            sub_5D580(__ptr1_1);
            *(int*)&__ptr[6236] = 0;
        }
        ptr0 = __ptr;
        sub_5DF98(NULL, "src/rule.c", 961, "zlog_rule_del[%p]");
        free(__ptr);
        return __ptr;
    }
    return sub_5DF98(&g2, "src/rule.c", 942, "a_rule is null or 0");
}
