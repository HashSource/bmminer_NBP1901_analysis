int sub_4A4FC(void* __src, size_t __n, uint32_t* param2) {
    int* ptr0 = *(param2 + SOCK_STREAM);
    int* ptr1 = (int*)(__n + (int)ptr0);
    if(*param2 >= ptr1) {
        memcpy((void*)(*(param2 + 2) + (int)ptr0), __src, __n);
        ptr1 = *(param2 + SOCK_STREAM) + __n;
    }
    *(param2 + SOCK_STREAM) = ptr1;
    return 0;
}
