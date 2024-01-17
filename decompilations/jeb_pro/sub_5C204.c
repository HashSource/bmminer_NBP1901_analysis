void* sub_5C204(int param0, uint32_t* param1, uint32_t* param2) {
    int* ptr0 = *(param1 + 2);
    char* __src = *(char**)(ptr0 + 68);
    char* ptr1 = strrchr(__src, 47);
    size_t __n = *(size_t*)(ptr0 + 69);
    if(ptr1 != 0) {
        return sub_5F0D4(param2, (void*)(ptr1 + SOCK_STREAM), (size_t)((char*)((int)(int*)(__n + __src) - (int)ptr1) - SOCK_STREAM));
    }
    return sub_5F0D4(param2, __src, __n);
}
