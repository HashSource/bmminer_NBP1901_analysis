void* sub_5E70C(void* __ptr1) {
    void* __ptr = *(void**)__ptr1;
    if(__ptr != 0) {
        free(__ptr);
    }
    void* ptr0 = __ptr1;
    sub_5DF98(NULL, "src/buf.c", 82, "zlog_buf_del[%p]");
    free(__ptr1);
    return __ptr1;
}
