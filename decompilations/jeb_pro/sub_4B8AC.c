// Stale decompilation - Refresh this view to re-decompile this code
void* sub_4B8AC(void* param0) {
    void* ptr0;
    int* ptr1 = (int*)((int)param0 + 12);
    void* ptr2 = *(void**)((int)param0 + 16);
    if(ptr2 == ptr1) {
        return param0;
    }
    do {
        int* ptr3 = *(uint32_t*)((int)ptr2 + 20);
        ptr0 = *(void**)((int)ptr2 + 4);
        if(ptr3 != 0 && *(ptr3 + SOCK_STREAM) != -1) {
            DMB();
            int v0 = *(ptr3 + SOCK_STREAM) - SOCK_STREAM;
            --*(ptr3 + SOCK_STREAM);
            if(v0 == 0) {
                sub_4EB6C((int)ptr3, 0, 0);
            }
        }
        void* ptr4 = ptr2;
        ptr2 = ptr0;
        param0 = sub_4D898(ptr4);
    }
    while(ptr0 != ptr1);
    return param0;
}
