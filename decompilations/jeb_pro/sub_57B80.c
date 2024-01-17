int sub_57B80(uint32_t* param0, void* param1) {
    void* __ptr = sub_5F4D8(param1);
    if(__ptr != 0) {
        int v0 = sub_5D5F0(param0, *(int*)__ptr, (uint32_t)__ptr);
        if(v0 == 0) {
            return 0;
        }
        sub_5DF98(&g2, "src/level_list.c", 90, "zc_arraylist_set fail");
        void* ptr0 = param1;
        sub_5DF98(&g2, "src/level_list.c", 96, "line[%s]");
        sub_5F474((char*)__ptr);
        return -1;
    }
    sub_5DF98(&g2, "src/level_list.c", 85, "zlog_level_new fail");
    return -1;
}
