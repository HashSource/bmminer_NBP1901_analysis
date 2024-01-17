void* sub_31018(char* param0, char* __s) {
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0;
    char v6 = 0;
    sub_2F8E8(&v1, __s);
    *param0 = 118;
    *(param0 + SOCK_STREAM) = 169;
    *(param0 + 2) = 20;
    void* result = sub_30EA8((void*)(param0 + 3), (void*)(&v1 + SOCK_STREAM), 20, "util.c", "address_to_pubkeyhash", 966);
    *(param0 + 23) = 0x88;
    *(param0 + 24) = 172;
    return result;
}
