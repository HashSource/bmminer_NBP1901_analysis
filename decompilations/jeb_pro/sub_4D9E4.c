int sub_4D9E4(uint32_t* param0, void* __src, size_t param2) {
    size_t v0;
    int* ptr0 = *(param0 + 2);
    size_t __n = param2;
    int* ptr1 = *(param0 + SOCK_STREAM);
    if((uint32_t)(int*)((int)ptr0 - (int)ptr1) > __n) {
        v0 = *param0;
        memcpy((void*)((int)ptr1 + v0), __src, __n);
        param2 = *param0;
        char* ptr2 = (char*)((int)*(param0 + SOCK_STREAM) + __n);
        *(param0 + SOCK_STREAM) = (char*)((int)*(param0 + SOCK_STREAM) + __n);
        *(param2 + ptr2) = 0;
        return 0;
    }
    if((int*)((int)(int*)((int)ptr0 >>> 31) | __n == -1) == 0 && -2 - __n >= (uint32_t)ptr1) {
        size_t v1 = (size_t)((char*)((int)ptr1 + __n) + SOCK_STREAM);
        size_t v2 = (size_t)((int)ptr0 * 2) > v1 ? (size_t)((int)ptr0 * 2): v1;
        size_t __dest = sub_4D880(v2);
        v0 = __dest;
        if(v0 != 0) {
            memcpy((void*)__dest, *param0, *(size_t*)(param0 + SOCK_STREAM));
            sub_4D898(*param0);
            ptr1 = *(param0 + SOCK_STREAM);
            *param0 = v0;
            *(size_t*)(param0 + 2) = v2;
            memcpy((void*)((int)ptr1 + v0), __src, __n);
            param2 = *param0;
            char* ptr2 = (char*)((int)*(param0 + SOCK_STREAM) + __n);
            *(param0 + SOCK_STREAM) = (char*)((int)*(param0 + SOCK_STREAM) + __n);
            *(param2 + ptr2) = 0;
            return 0;
        }
    }
    return -1;
}
