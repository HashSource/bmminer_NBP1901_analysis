char* sub_582A0(char* __ptr) {
    if(__ptr != 0) {
        void* ptr0 = __ptr;
        sub_5DF98(NULL, "src/record.c", 22, "zlog_record_del[%p]");
        free(__ptr);
        return __ptr;
    }
    return sub_5DF98(&g2, "src/record.c", 21, "a_record is null or 0");
}
