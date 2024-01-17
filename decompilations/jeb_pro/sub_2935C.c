char* sub_2935C(char* __dest) {
    char* __src1 = (char*)gvar_58E3F0;
    if(__src1 == 0 || __src1[0] == 0) {
        char* ptr0 = getenv("HOME");
        if(ptr0 == 0) {
        loc_293B4:
            __dest[0] = 0;
        }
        else {
            char* ptr1 = getenv("HOME");
            if(ptr1[0] == 0) {
                goto loc_293B4;
            }
            else {
                char* __src = getenv("HOME");
                char* ptr2 = stpcpy(__dest, __src);
                *(short*)&ptr2[0] = '/';
            }
        }
        size_t v0 = strlen(__dest);
        int* ptr3 = (int*)(v0 + __dest);
        *(int*)&__dest[v0] = 0x6d6d622e;
        *(ptr3 + SOCK_STREAM) = 0x72656e69;
        *(short*)(ptr3 + 2) = 47;
        mkdir(__dest, 0x1ff);
        size_t v1 = strlen(__dest);
        int* ptr4 = (int*)(v1 + __dest);
        *(int*)&__dest[v1] = 1768779106;
        *(ptr4 + SOCK_STREAM) = 0x2e72656e;
        *(char*)(ptr4 + 3) = 0;
        *(ptr4 + 2) = 0x666e6f63;
        return &g696D6D62;
    }
    return strcpy(__dest, __src1);
}
