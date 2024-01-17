void* sub_5BE70(int param0, uint32_t* param1, uint32_t* param2) {
    int* ptr0 = *(param1 + 2);
    if(*(ptr0 + 95) == 0) {
        __pid_t v0 = getpid();
        *(__pid_t*)(ptr0 + 95) = v0;
        ptr0 = *(param1 + 2);
        int v1 = *(ptr0 + 95);
        if(*(ptr0 + 96) != v1) {
            *(ptr0 + 96) = v1;
            int __n = sprintf((char*)(ptr0 + 97), "%u");
            int* ptr1 = *(param1 + 2);
            *(ptr1 + 105) = __n;
            return sub_5F0D4(param2, (void*)(ptr1 + 97), (size_t)__n);
        }
    }
    return sub_5F0D4(param2, (void*)(ptr0 + 97), *(size_t*)(ptr0 + 105));
}
