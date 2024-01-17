int* sub_58414(uint32_t* param0, char* param1) {
    int* result;
    if(param0 != 0) {
        uint32_t* ptr0 = param0;
        sub_5DF98(param1, "src/record_table.c", 22, "-record_table[%p]-");
        result = sub_5DE60(param0);
        for(int* i = result; i != 0; i = result) {
            sub_58240(i[2], param1);
            result = sub_5DEA8(param0, i);
        }
        return result;
    }
    return sub_5DF98(&g2, "src/record_table.c", 21, "records is null or 0");
}
