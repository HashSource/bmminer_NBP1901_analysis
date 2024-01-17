void* sub_58008() {
    int v0;
    void* __ptr = calloc(1, 4);
    if(__ptr != 0) {
        v0 = &sub_57E98;
        void* ptr0 = sub_5D7B8(20, &sub_5DF18, &sub_5DF44, 0, &sub_57E98);
        *(void**)__ptr = ptr0;
        if(ptr0 != 0) {
            return __ptr;
        }
        sub_5DF98(&g2, "src/mdc.c", 78, "zc_hashtable_new fail");
        sub_57F94((char*)__ptr);
        return NULL;
    }
    int* ptr1 = __errno_location();
    v0 = ptr1[0];
    sub_5DF98(&g2, "src/mdc.c", 69, "calloc fail, errno[%d]");
    return 0;
}
