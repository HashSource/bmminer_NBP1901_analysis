char* sub_56E0C(void* __ptr2) {
    if(__ptr2 != 0) {
        char* __mutex = *(char**)((int)__ptr2 + 5160);
        if(__mutex != 0) {
            sub_58750(__mutex);
        }
        void* __ptr1 = *(void**)((int)__ptr2 + 0x2440);
        if(__ptr1 != 0) {
            sub_57B24(__ptr1);
        }
        char* __ptr = *(char**)((int)__ptr2 + 9264);
        if(__ptr != 0) {
            sub_5766C(__ptr);
        }
        void* __ptr1_1 = *(void**)((int)__ptr2 + 0x2444);
        if(__ptr1_1 != 0) {
            sub_5D580(__ptr1_1);
        }
        void* __ptr1_2 = *(void**)((int)__ptr2 + 0x2448);
        if(__ptr1_2 != 0) {
            sub_5D580(__ptr1_2);
        }
        free(__ptr2);
        return sub_5DF98(NULL, "src/conf.c", 90, "zlog_conf_del[%p]");
    }
    return sub_5DF98(&g2, "src/conf.c", 83, "a_conf is null or 0");
}
