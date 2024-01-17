int sub_2F1EC(void* __src, size_t param1, char* param2) {
    char v0;
    int* ptr0 = (int*)&g7ECA0;
    int* ptr1 = &v0;
    do {
        int v1 = *(ptr0 + SOCK_STREAM);
        ++ptr0;
        *ptr1 = v1;
        ++ptr1;
    }
    while(ptr0 != 0x7ecc0);
    int v2 = 0;
    int v3 = 0;
    sub_2F054(&v2, __src, param1);
    return sub_2F100(&v2, param2);
}
