int sub_157F8(int param0, int param1) {
    uint32_t __s1 = sub_1E0C0();
    int v0 = strcmp((char*)__s1, "BHB28601");
    if(v0 != 0) {
        uint32_t __s1_1 = sub_1E0C0();
        int v1 = strcmp((char*)__s1_1, "BHB28501");
        if(v1 != 0) {
            return sub_14D60(param0, 0, param1);
        }
    }
    return sub_14D60(param0, SOCK_STREAM, param1);
}
