char* sub_55870(char* __ptr) {
    if(__ptr != 0) {
        void* __ptr1 = *(int*)&__ptr[0x448];
        if(__ptr1 != 0) {
            sub_5D580(__ptr1);
        }
        void* ptr0 = __ptr;
        sub_5DF98(NULL, "src/category.c", 40, "zlog_category_del[%p]");
        free(__ptr);
        return __ptr;
    }
    return sub_5DF98(&g2, "src/category.c", 38, "a_category is null or 0");
}
