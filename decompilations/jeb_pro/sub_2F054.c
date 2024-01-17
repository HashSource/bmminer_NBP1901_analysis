void* sub_2F054(int param0, void* __src, size_t param2) {
    int v0 = *(int*)(param0 + 4);
    size_t __n = (size_t)(64 - v0) < param2 ? (size_t)(64 - v0): param2;
    void* dstbuf = memcpy((void*)(v0 + param0 + 8), __src, __n);
    int v1 = *(int*)(param0 + 4) + param2;
    if(v1 <= 63) {
        *(int*)(param0 + 4) = v1;
        return dstbuf;
    }
    uint32_t v2 = param2 - __n;
    int* ptr0 = (int*)((int)__src + __n);
    sub_2EE28(param0, (int*)(param0 + 8), &g1);
    sub_2EE28(param0, ptr0, (int*)(v2 >>> 6));
    dstbuf = memcpy((int*)(param0 + 8), (void*)((v2 & 0xffffffc0) + (int)ptr0), v2 & 0x3f);
    v1 = *(int*)param0;
    *(size_t*)(param0 + 4) = v2 & 0x3f;
    *(int**)param0 = (int*)((int)(int*)((int)(int*)((char*)(v2 >>> 6) + SOCK_STREAM) * 64) + v1);
    return dstbuf;
}
