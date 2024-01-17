void* sub_30934(char* __s) {
    char __ptr1;
    if(__s == 0) {
        void* ptr0 = malloc(7);
        if(ptr0 == 0) {
            int v0 = 3407;
            char* ptr1 = "str_text";
            snprintf(&__ptr1, 0x800, "Failed to malloc null in %s %s():%d", "util.c", "str_text", 3407);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
            sub_2A574();
        }
        else {
            *(int*)ptr0 = 0x6c756e28;
            *(short*)((int)ptr0 + 4) = 10604;
            *(char*)((int)ptr0 + 6) = 0;
        }
    }
    size_t v1 = strlen(__s);
    void* result = sub_2F408(v1 * 4 + 5, "util.c", "str_text", 3412);
    char* ptr2 = __s - SOCK_STREAM;
    char* __s1 = (char*)result;
    do {
        int v2 = (uint32_t)*(ptr2 + SOCK_STREAM);
        ++ptr2;
        if(v2 - 32 > 94) {
            sprintf(__s1, "0x%02x");
            __s1 += 4;
            if(*ptr2 != 0) {
                continue;
            }
            break;
        }
        __s1[0] = (char)v2;
        ++__s1;
    }
    while(*ptr2 != 0);
    __s1[0] = 0;
    return result;
}
