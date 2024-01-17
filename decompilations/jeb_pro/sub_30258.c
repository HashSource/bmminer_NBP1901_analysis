char* sub_30258(uint32_t* param0, char* __accept) {
    char* __s = *param0;
    if(__s != 0) {
        char* ptr0 = strpbrk(__s, __accept);
        if(ptr0 != 0) {
            ptr0[0] = 0;
            *param0 = ptr0 + SOCK_STREAM;
            return __s;
        }
    }
    *param0 = NULL;
    return __s;
}
