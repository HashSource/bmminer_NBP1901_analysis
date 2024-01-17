int* sub_55F6C(int* param0, int __src, int* param2) {
    if(param0 != 0) {
        int* result = sub_5DA58(param0, __src);
        if(result != 0) {
            return result;
        }
        char* __ptr = sub_558E4((char*)__src, param2);
        if(__ptr != 0) {
            int v0 = sub_5DAC0((uint32_t*)param0, (int*)__ptr, (uint32_t*)__ptr);
            if(v0 == 0) {
                return (int*)__ptr;
            }
            sub_5DF98(&g2, "src/category_table.c", 119, "zc_hashtable_put fail");
            sub_55870(__ptr);
            return 0;
        }
        sub_5DF98(&g2, "src/category_table.c", 114, "zc_category_new fail");
        return 0;
    }
    sub_5DF98(&g2, "src/category_table.c", 105, "categories is null or 0");
    return NULL;
}
