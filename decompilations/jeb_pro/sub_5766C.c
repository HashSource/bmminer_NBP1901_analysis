char* sub_5766C(char* __ptr) {
    if(__ptr != 0) {
        void* __ptr1 = *(int*)&__ptr[0x2004];
        if(__ptr1 != 0) {
            sub_5D580(__ptr1);
        }
        void* ptr0 = __ptr;
        sub_5DF98(NULL, "src/format.c", 49, "zlog_format_del[%p]");
        free(__ptr);
        return __ptr;
    }
    return sub_5DF98(&g2, "src/format.c", 45, "a_format is null or 0");
}
