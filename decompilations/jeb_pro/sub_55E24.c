int sub_55E24(uint32_t* param0, int* param1) {
    if(param0 != 0) {
        int* ptr0 = sub_5DE60(param0);
        if(ptr0 == 0) {
            return 0;
        }
        do {
            int v0 = sub_55A28(ptr0[2], param1);
            if(v0 != 0) {
                sub_5DF98(&g2, "src/category_table.c", 66, "zlog_category_update_rules fail, try rollback");
                return -1;
            }
            ptr0 = sub_5DEA8(param0, ptr0);
        }
        while(ptr0 != 0);
        return 0;
    }
    sub_5DF98(&g2, "src/category_table.c", 62, "categories is null or 0");
    return -1;
}
