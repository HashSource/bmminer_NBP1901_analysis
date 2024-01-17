void* sub_58304(char* __src, void* param1) {
    char* ptr0;
    if(__src != 0) {
        if(param1 != 0) {
            void* __dest = calloc(1, 1032);
            if(__dest != 0) {
                size_t v0 = strlen(__src);
                if(v0 <= 0x400) {
                    memcpy(__dest, __src, v0 + SOCK_STREAM);
                    *(void**)((int)__dest + 0x404) = param1;
                    sub_58240((int*)__dest, NULL);
                    return __dest;
                }
                ptr0 = __src;
                sub_5DF98(&g2, "src/record.c", 41, "name[%s] is too long");
                sub_582A0((char*)__dest);
                return NULL;
            }
            int* ptr1 = __errno_location();
            ptr0 = ptr1[0];
            sub_5DF98(&g2, "src/record.c", 36, "calloc fail, errno[%d]");
            return 0;
        }
        sub_5DF98(&g2, "src/record.c", 32, "output is null or 0");
        return NULL;
    }
    sub_5DF98(&g2, "src/record.c", 31, "name is null or 0");
    return NULL;
}
