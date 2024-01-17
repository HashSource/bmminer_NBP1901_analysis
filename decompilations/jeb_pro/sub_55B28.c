void* sub_55B28(int* param0) {
    if(param0 != 0) {
        void* __ptr1 = *(void**)(param0 + 0x113);
        if(__ptr1 != 0) {
            sub_5D580(__ptr1);
            *(param0 + 0x113) = 0;
            return memset((void*)(param0 + 266), 0, 32);
        }
        return sub_5DF98(&g1, "src/category.c", 178, "a_category->fit_rules_backup is NULL, never update before");
    }
    return sub_5DF98(&g2, "src/category.c", 176, "a_category is null or 0");
}
