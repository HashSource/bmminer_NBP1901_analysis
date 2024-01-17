int sub_55568(int param0, int param1) {
    if(param0 == 0) {
        return 0;
    }
    int v0 = param1 + 7;
    if(v0 >= 7) {
        v0 = param1;
    }
    int v1 = param1 & 0x7;
    int v2 = (uint32_t)*(char*)((v0 >> 3) + param0 + 1032);
    if(param1 <= 0) {
        v1 = 0 - ((0 - param1) & 0x7);
    }
    return (v2 >> (7 - v1)) & SOCK_STREAM;
}
