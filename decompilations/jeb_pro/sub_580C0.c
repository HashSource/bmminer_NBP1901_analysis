int sub_580C0(uint32_t* param0) {
    void* __ptr = calloc(1, 0x808);
    if(__ptr != 0) {
        snprintf((char*)__ptr, 1025, "\n");
        int v0 = snprintf((char*)((int)__ptr + 1025), 1025, "\n");
        *(int*)((int)__ptr + 2052) = v0;
        int v1 = sub_5DAC0(*param0, (int*)__ptr, (uint32_t*)__ptr);
        if(v1 == 0) {
            return 0;
        }
        sub_5DF98(&g2, "src/mdc.c", 101, "zc_hashtable_put fail");
        sub_57E98(__ptr);
        return -1;
    }
    int* ptr0 = __errno_location();
    int v2 = ptr0[0];
    sub_5DF98(&g2, "src/mdc.c", 54, "calloc fail, errno[%d]");
    sub_5DF98(&g2, "src/mdc.c", 96, "zlog_mdc_kv_new failed");
    return -1;
}
