void* sub_58500() {
    int v0 = &sub_582A0;
    void* result = sub_5D7B8(20, &sub_5DF18, &sub_5DF44, 0, &sub_582A0);
    if(result != 0) {
        sub_58414((uint32_t*)result, NULL);
        return result;
    }
    sub_5DF98(&g2, "src/record_table.c", 49, "zc_hashtable_new fail");
    return 0;
}
