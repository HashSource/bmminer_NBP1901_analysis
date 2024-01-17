char* sub_3D678(char* param0, uint32_t* param1) {
    char* dststr;
    size_t __n = strlen(*param1);
    *param0 = 34;
    char* __src = *param1;
    if(__n <= 78) {
        char* ptr0 = __n + param0;
        dststr = strncpy(param0 + SOCK_STREAM, __src, __n);
        *(ptr0 + SOCK_STREAM) = 34;
        if(__n != 78) {
            *(ptr0 + 2) = 0;
        }
        return dststr;
    }
    dststr = strncpy(param0 + SOCK_STREAM, __src, 78);
    *(param0 + 79) = 34;
    return dststr;
}
