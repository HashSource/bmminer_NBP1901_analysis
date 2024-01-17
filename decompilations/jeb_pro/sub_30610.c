int sub_30610(char* __haystack, uint32_t* param1, uint32_t* param2) {
    char* ptr0;
    size_t v0;
    char __s2;
    short __s3;
    char* __s = __haystack;
    *param1 = __haystack;
    char* ptr1 = strstr(__haystack, "//");
    if(ptr1 != 0) {
        __s = ptr1 + 2;
    }
    char* ptr2 = strchr(__s, 91);
    char* __s1 = strchr(__s, 93);
    char* ptr3 = __s1 == 0 ? __s1: &g1;
    if(ptr2 == 0) {
        ptr3 = NULL;
    }
    if((__s1 > ptr2 ? (int*)((int)ptr3 & SOCK_STREAM): NULL) == 0) {
        __s1 = __s;
    }
    char* ptr4 = strchr(__s1, 58);
    size_t v1 = strlen(__s);
    if(ptr4 == 0) {
        v0 = v1;
        ptr0 = NULL;
    loc_306B4:
        if((int)v0 > 0) {
            snprintf(&__s2, 254, "%.*s");
            if(ptr0 != 0) {
                snprintf(&__s3, 6, "%.*s");
                char* ptr5 = strpbrk(&__s3, "/#");
                if(ptr5 != 0) {
                    ptr5[0] = 0;
                }
            }
            __strdup();
            *param2 = __haystack;
            __strdup();
            *param1 = __haystack;
            return SOCK_STREAM;
        }
    }
    else {
        v0 = ptr4 - __s;
        ptr0 = ~v0 + v1;
        if((int)ptr0 > 0) {
            goto loc_306B4;
        }
    }
    return 0;
}
