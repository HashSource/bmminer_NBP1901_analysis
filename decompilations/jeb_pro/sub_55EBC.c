int* sub_55EBC(uint32_t* param0) {
    int* result;
    if(param0 != 0) {
        result = sub_5DE60(param0);
        int* ptr0 = result;
        if(ptr0 == 0) {
            return result;
        }
        do {
            sub_55B28(ptr0[2]);
            result = sub_5DEA8(param0, ptr0);
            ptr0 = result;
        }
        while(ptr0 != 0);
        return result;
    }
    return sub_5DF98(&g2, "src/category_table.c", 78, "categories is null or 0");
}
