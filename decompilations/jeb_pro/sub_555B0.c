int sub_555B0(char* __s2, int* param1, uint32_t* param2) {
    char* ptr0;
    void* __ptr1 = (void*)*(int*)&__s2[0x448];
    if(__ptr1 != 0) {
        sub_5D580(__ptr1);
    }
    memset((void*)(__s2 + 1032), 0, 32);
    void* ptr1 = sub_5D4C0(0);
    *(int*)&__s2[0x448] = (char)ptr1;
    if(ptr1 != 0) {
        if((int)*param2 > 0) {
            uint32_t v0 = 0;
            int v1 = 0;
            char* ptr2 = NULL;
            do {
                char* __s1 = *(char**)(v1 * 4 + *param1);
                int v2 = sub_5BBE8(__s1, __s2);
                if(v2 != 0) {
                    int v3 = sub_5D694(*(int*)&__s2[0x448], (uint32_t)__s1);
                    if(v3 != 0) {
                        sub_5DF98(&g2, "src/category.c", 81, "zc_arrylist_add fail");
                        sub_5D580(*(int*)&__s2[0x448]);
                        *(int*)&__s2[0x448] = 0;
                        return -1;
                    }
                    char* ptr3 = __s2 + 1031;
                    char* ptr4 = __s1 + 0x1007;
                    do {
                        int v4 = (uint32_t)ptr3[SOCK_STREAM];
                        ++ptr3;
                        int v5 = (uint32_t)ptr4[SOCK_STREAM];
                        ++ptr4;
                        ptr3[0] = (uint8_t)v4 | (uint8_t)v5;
                    }
                    while(__s2 + 1063 != ptr3);
                    ++ptr2;
                }
                ++v1;
                int v6 = sub_5BB9C(__s1);
                ptr0 = *param2;
                if(v6 != 0) {
                    v0 = __s1;
                }
            }
            while((int)ptr0 > v1);
            if(ptr2 == 0 && v0 == 0) {
                sub_5DF98(NULL, "src/category.c", 103, "category[%s], no match rules & no wastebin_rule");
            }
            else if(ptr2 == 0) {
                char* ptr5 = __s2;
                sub_5DF98(NULL, "src/category.c", 95, "category[%s], no match rules, use wastebin_rule");
                int v7 = sub_5D694(*(int*)&__s2[0x448], v0);
                if(v7 != 0) {
                    sub_5DF98(&g2, "src/category.c", 97, "zc_arrylist_add fail");
                    sub_5D580(*(int*)&__s2[0x448]);
                    *(int*)&__s2[0x448] = 0;
                    return -1;
                }
                uint32_t v8 = v0 + 0x1007;
                ptr0 = __s2 + 1031;
                do {
                    int v9 = (uint32_t)ptr0[SOCK_STREAM];
                    ++ptr0;
                    param1 = (uint32_t)*(char*)(v8 + SOCK_STREAM);
                    ++v8;
                    ptr0[0] = (uint8_t)param1 | (uint8_t)v9;
                }
                while(__s2 + 1063 != ptr0);
            }
            return 0;
        }
        sub_5DF98(NULL, "src/category.c", 103, "category[%s], no match rules & no wastebin_rule");
        return 0;
    }
    sub_5DF98(&g2, "src/category.c", 72, "zc_arraylist_new fail");
    return -1;
}
