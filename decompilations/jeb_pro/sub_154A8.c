int sub_154A8(int param0) {
    uint32_t __s1 = sub_1E0C0();
    int v0 = strcmp((char*)__s1, "BHB28601");
    if(v0 != 0) {
        uint32_t __s1_1 = sub_1E0C0();
        int v1 = strcmp((char*)__s1_1, "BHB28501");
        if(v1 != 0) {
            int v2 = sub_153EC(param0, 0);
            return (int)(uint16_t)v2;
        }
    }
    int v3 = sub_153EC(param0, SOCK_STREAM);
    return (int)(uint16_t)v3;
}
