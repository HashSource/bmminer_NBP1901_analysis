void* sub_5A66C(size_t param0, void* param1, uint32_t* param2, int param3) {
    void* __dest = param1;
    int* ptr0 = (int*)param3;
    char* ptr1 = strrchr((char*)(param0 + SOCK_STREAM), 34);
    char* ptr2 = ptr1;
    if(ptr1 != 0) {
        size_t __n = (size_t)(ptr1 - (char*)(param0 + SOCK_STREAM));
        if(__n <= 0x400) {
            memcpy(__dest, (char*)(param0 + SOCK_STREAM), __n);
            void* result = sub_5E310((char*)__dest, 1025);
            if(result == 0) {
                char* ptr3 = strchr((char*)__dest, 37);
                if(ptr3 != 0) {
                    void* __ptr1 = sub_5D4C0(&sub_5C6F4);
                    param3 = *(char*)__dest;
                    if(param3 != 0) {
                    loc_5A728:
                        do {
                            void* __ptr = sub_5C758((char*)__dest, &ptr2, ptr0, param3);
                            if(__ptr != 0) {
                                int v0 = sub_5D694((uint32_t*)__ptr1, (uint32_t)__ptr);
                                if(v0 == 0) {
                                    __dest = ptr2;
                                    param3 = *(char*)__dest;
                                    if(param3 == 0) {
                                        goto loc_5A774;
                                    }
                                    else {
                                        goto loc_5A728;
                                    }
                                }
                                sub_5DF98(&g2, "src/rule.c", 0x227, "zc_arraylist_add fail");
                                if(__ptr1 != 0) {
                                    sub_5D580(__ptr1);
                                }
                                sub_5C6F4((char*)__ptr);
                                return &gFFFFFFFF;
                            }
                            sub_5DF98(&g2, "src/rule.c", 0x222, "zlog_spec_new fail");
                            if(__ptr1 != 0) {
                                sub_5D580(__ptr1);
                                return &gFFFFFFFF;
                            }
                            result = &gFFFFFFFF;
                            return result;
                        }
                        while(SOCK_STREAM);
                    }
                loc_5A774:
                    *param2 = __ptr1;
                    return NULL;
                }
                return result;
            }
            sub_5DF98(&g2, "src/rule.c", 0x210, "zc_str_replace_env fail");
            return &gFFFFFFFF;
        }
        size_t v1 = __n;
        int v2 = 0x400;
        sub_5DF98(&g2, "src/rule.c", 521, "file_path too long %ld > %ld");
        return &gFFFFFFFF;
    }
    v1 = param0;
    sub_5DF98(&g2, "src/rule.c", 516, "matching \" not found in conf line[%s]");
    return &gFFFFFFFF;
}
