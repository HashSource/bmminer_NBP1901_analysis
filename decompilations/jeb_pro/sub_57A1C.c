int sub_57A1C(uint32_t* param0, uint32_t* param1) {
    int v0;
    uint32_t* ptr0;
    uint32_t* ptr1 = *(param0 + 2049);
    int* ptr2 = *(param1 + 7);
    int* ptr3 = *(ptr1 + SOCK_STREAM);
    int v1 = *ptr2;
    if((int)ptr3 > 0) {
        ptr0 = param1;
        v0 = 0;
    }
    *(ptr2 + SOCK_STREAM) = v1;
    if((int)ptr3 > 0) {
        do {
            int* ptr4 = *(uint32_t*)(v0 * 4 + (int)*ptr1);
            ++v0;
            int v2 = *(ptr4 + 2314)((int)ptr4, (int)ptr0, (int)ptr2);
            if(v2 != 0) {
                return -1;
            }
            ptr1 = *(param0 + 2049);
            ptr2 = *(ptr1 + SOCK_STREAM);
        }
        while((int)ptr2 > v0);
    }
    return 0;
}
