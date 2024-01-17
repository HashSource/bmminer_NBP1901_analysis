char* sub_5F474(char* __ptr) {
    if(__ptr != 0) {
        void* ptr0 = __ptr;
        sub_5DF98(NULL, "src/level.c", 34, "zlog_level_del[%p]");
        free(__ptr);
        return __ptr;
    }
    return sub_5DF98(&g2, "src/level.c", 33, "a_level is null or 0");
}
