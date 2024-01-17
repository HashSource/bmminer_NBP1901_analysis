int sub_48834(int param0, int param1) {
    char v0;
    short result;
    char v1 = (uint8_t)((param1 + 137) >>> 8);
    int v2 = -2096715179;
    char v3 = (uint8_t)param1 - 119;
    *(short*)&v0 = 0;
    int v4 = 0;
    v0 = (uint8_t)param1;
    *(int*)&result = 0;
    int v5 = sub_48520(param0, &v2, 8, &v4, 8);
    if(v5 == 0) {
        return result;
    }
    return sub_487E8();
}
