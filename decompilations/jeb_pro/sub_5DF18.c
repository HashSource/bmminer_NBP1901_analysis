int sub_5DF18(char* param0) {
    int v0;
    int v1 = (uint32_t)*param0;
    int i;
    for(i = 0x1505; v1 != 0; i += v0) {
        v0 = i * 32 + v1;
        v1 = (uint32_t)*(param0 + SOCK_STREAM);
        ++param0;
    }
    return i;
}
