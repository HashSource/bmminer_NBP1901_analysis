void* sub_5E680(uint32_t* param0) {
    int* ptr0 = *(param0 + SOCK_STREAM);
    void* ptr1 = *param0;
    void* __dest = (void*)((int)ptr0 - (int)*(param0 + 264));
    if(__dest < ptr1) {
        __dest = ptr1;
    }
    return memcpy(__dest, (void*)(param0 + 7), (size_t)((int)ptr0 - (int)__dest));
}
