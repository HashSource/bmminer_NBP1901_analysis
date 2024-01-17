int sub_3FA64(int param0) {
    int v0;
    int __ptr1;
    char v1;
    int __fd = socket(AF_INET, SOCK_STREAM, 0);
    if(__fd >= 0) {
        __builtin_strcpy(&v0, "eth0");
        int v2 = ioctl(__fd, 35111, &v0);
        if(v2 >= 0) {
            char* ptr0 = &v1;
            char* ptr1 = (char*)(param0 - SOCK_STREAM);
            do {
                char v3 = *(ptr0 + SOCK_STREAM);
                ++ptr0;
                *(ptr1 + SOCK_STREAM) = v3;
                ++ptr1;
            }
            while(param0 + 5 != ptr1);
            close(__fd);
            return 0;
        }
        __builtin_strcpy(&__ptr1, "error ioctl");
        sub_2E584(0, &__ptr1, 0);
        close(__fd);
        return -2;
    }
    __builtin_strcpy(&__ptr1, "error sock");
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
