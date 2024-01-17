char* sub_57F94(char* __ptr) {
    if(__ptr != 0) {
        char* __ptr2 = *(int*)&__ptr[0];
        if(__ptr2 != 0) {
            sub_5D890(__ptr2);
        }
        void* ptr0 = __ptr;
        sub_5DF98(NULL, "src/mdc.c", 37, "zlog_mdc_del[%p]");
        free(__ptr);
        return __ptr;
    }
    return sub_5DF98(&g2, "src/mdc.c", 35, "a_mdc is null or 0");
}
