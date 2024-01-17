char* sub_558E4(char* __src, int* param1) {
    void* ptr0;
    if(__src != 0) {
        if(param1 != 0) {
            size_t v0 = strlen(__src);
            if(v0 <= 0x400) {
                void* __dest = calloc(1, 1104);
                if(__dest != 0) {
                    memcpy(__dest, __src, v0 + SOCK_STREAM);
                    *(char*)((int)__dest + 0x404) = (char)v0;
                    int v1 = sub_555B0((char*)__dest, param1, (uint32_t*)(param1 + SOCK_STREAM));
                    if(v1 == 0) {
                        sub_557C4((uint32_t*)__dest, NULL);
                        return (char*)__dest;
                    }
                    sub_5DF98(&g2, "src/category.c", 135, "zlog_category_fit_rules fail");
                    sub_55870((char*)__dest);
                    return NULL;
                }
                int* ptr1 = __errno_location();
                ptr0 = ptr1[0];
                sub_5DF98(&g2, "src/category.c", 129, "calloc fail, errno[%d]");
                return 0;
            }
            ptr0 = __src;
            sub_5DF98(&g2, "src/category.c", 124, "name[%s] too long");
            return NULL;
        }
        sub_5DF98(&g2, "src/category.c", 120, "\n");
        return NULL;
    }
    sub_5DF98(&g2, "src/category.c", 119, "name is null or 0");
    return NULL;
}
