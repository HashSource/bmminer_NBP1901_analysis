char* sub_5C6F4(char* __ptr) {
    if(__ptr != 0) {
        void* ptr0 = __ptr;
        sub_5DF98(NULL, "src/spec.c", 461, "zlog_spec_del[%p]");
        free(__ptr);
        return __ptr;
    }
    return sub_5DF98(&g2, "src/spec.c", 0x1cc, "a_spec is null or 0");
}
