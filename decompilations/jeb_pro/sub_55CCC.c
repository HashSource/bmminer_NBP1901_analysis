int* sub_55CCC(uint32_t* param0, char* param1) {
    int* result;
    if(param0 != 0) {
        uint32_t* ptr0 = param0;
        sub_5DF98(param1, "src/category_table.c", 22, "-category_table[%p]-");
        result = sub_5DE60(param0);
        for(int* i = result; i != 0; i = result) {
            sub_557C4(i[2], param1);
            result = sub_5DEA8(param0, i);
        }
        return result;
    }
    return sub_5DF98(&g2, "src/category_table.c", 21, "categories is null or 0");
}
