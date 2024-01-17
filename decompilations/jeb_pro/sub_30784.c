char* sub_30784(char* param0, int* param1) {
    char* __s1 = param0;
    int v0 = 0;
    char* __s2 = "http:";
    size_t __n = 5;
    *(param1 + 46) = 0;
    int v1 = strncmp(__s1, __s2, __n);
    while(v1 != 0) {
        ++v0;
        __s2 = *(void**)(v0 * 8 + (int)&ptr_aHttp_);
        if(__s2 == 0) {
            return __s1;
        }
        __n = strlen(__s2);
        v1 = strncmp(__s1, __s2, __n);
    }
    char* ptr0 = strchr(__s1, 124);
    if(ptr0 != 0) {
        ptr0[0] = 0;
        void* __dest = sub_2F408((size_t)((int)(int*)(ptr0 - __s1) + (SOCK_STREAM - __n)), "util.c", "get_proxy", 0x2ee);
        char* __src = &__s1[__n];
        *(void**)(param1 + 46) = __dest;
        __s1 = ptr0 + SOCK_STREAM;
        strcpy((char*)__dest, __src);
        sub_30610(*(char**)(param1 + 46), (uint32_t*)(param1 + 151), (uint32_t*)(param1 + 152));
        *(uint32_t*)(param1 + 45) = *(uint32_t*)(v0 * 8 + (int)&gvar_654D0);
    }
    return __s1;
}
