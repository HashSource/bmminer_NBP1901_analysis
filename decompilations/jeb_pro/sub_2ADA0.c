int sub_2ADA0(char* __s2_1) {
    char __s;
    char __src1;
    char __s2;
    char __src;
    int v0;
    memset(&__s, 0, 32);
    memset(&__src1, 0, 32);
    memset(&__s2, 0, 40);
    memset(&__src, 0, 59);
    int v1 = 0;
    sub_302A0(&v0);
    do {
        int v2 = v0 - v1;
        ++v1;
        v0 = v2;
        tm* ptr0 = localtime((time_t*)&v0);
        int v3 = ptr0->tm_year;
        int v4 = ptr0->tm_sec;
        int v5 = ptr0->tm_min;
        int v6 = ptr0->tm_hour;
        int v7 = ptr0->tm_mday;
        snprintf((char*)&__s2, 40, "[%d-%02d-%02d %02d:%02d:%02d]", v3 + 1900, ptr0->tm_mon + SOCK_STREAM, v7, v6, v5, v4);
        snprintf((char*)&__src, 59, "\n", "BITMAIN_OPENSOURCE", &__s2);
        sub_2F1EC(&__src, 59, (char*)&__src1);
        sub_2F1EC(&__src1, 32, (char*)&__s);
        int v8 = strncmp((char*)&__s, __s2_1, 32);
        if(v8 == 0) {
            puts("socket auth pass!!!!!!!!!!!!!!!!!!!!");
            return SOCK_STREAM;
        }
    }
    while(v1 != 4);
    return 0;
}
