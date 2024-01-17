void* sub_5C358(int* param0, uint32_t* param1, uint32_t* param2) {
    size_t __n;
    int* ptr0 = *(param1 + 2);
    int v0 = *(param0 + 1027);
    void* ptr1 = *(void**)(ptr0 + 79);
    int v1 = *(ptr0 + 93);
    tm* __tp = (tm*)(ptr0 + 82);
    void* __timer = ptr1;
    char* __src = (char*)(v0 * 0x100c + v1);
    if(ptr1 == 0) {
        gettimeofday((timeval*)(ptr0 + 79), NULL);
        ptr0 = *(param1 + 2);
        ptr1 = *(void**)(ptr0 + 79);
        __timer = *(void**)(ptr0 + 79);
    }
    if(*(ptr0 + 81) != ptr1) {
        localtime_r(&__timer, __tp);
        ptr1 = __timer;
        *(void**)(*(param1 + 2) + 81) = __timer;
    }
    if(*(int*)&__src[0x1008] == ptr1) {
        __n = *(int*)&__src[0x1004];
    }
    else {
        size_t v2 = strftime(__src, 0x1001, (char*)(param0 + 2), __tp);
        void* ptr2 = __timer;
        __n = v2;
        *(int*)&__src[0x1004] = (char)v2;
        *(int*)&__src[0x1008] = (char)ptr2;
    }
    return sub_5F0D4(param2, __src, __n);
}
