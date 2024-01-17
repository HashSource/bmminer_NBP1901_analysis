uint32_t* sub_231A4(uint32_t* param0, void* __src, size_t param2) {
    size_t __n = param2;
    uint32_t v0 = param0[0];
    uint32_t* ptr0 = param0;
    void* __src1 = __src;
    size_t v1 = param2;
    param2 += v0;
    char v2 = __carry__(v0, v1);
    int v3 = v0 & 0x3f;
    if(v2 != 0) {
        v0 = param0[SOCK_STREAM];
    }
    param0[0] = param2;
    if(v2 != 0) {
        param0[SOCK_STREAM] = v0 + SOCK_STREAM;
    }
    if(v3 != 0 && (int)(size_t)(64 - v3) <= (int)__n) {
        __n -= 64 - v3;
        memcpy((void*)((int*)((int)param0 + v3) + 10), __src, (size_t)(64 - v3));
        __src1 = (size_t)(64 - v3) + (int)__src1;
        v3 = 0;
        param0 = sub_20D44(ptr0, param0 + 10);
    }
    if((int)__n > 63) {
        int* ptr1 = (int*)((((__n - 64) >>> 6) + SOCK_STREAM) * 64 + (int)__src1);
        do {
            uint32_t* ptr2 = (uint32_t*)__src1;
            __src1 = (int)__src1 + 64;
            param0 = sub_20D44(ptr0, ptr2);
        }
        while(__src1 != ptr1);
        __n = __n - 64 - ((__n - 64) >>> 6) * 64;
    }
    if((int)__n <= 0) {
        return param0;
    }
    return memcpy((void*)((int*)((int)ptr0 + v3) + 10), __src1, __n);
}
