void* sub_5D950(uint32_t* param0) {
    void* __ptr;
    void* ptr0;
    int* ptr1 = *(param0 + 2);
    if(ptr1 != 0) {
        int* ptr2 = *(param0 + SOCK_STREAM);
        int v0 = 0;
        do {
            void* ptr3 = *(void**)(v0 * 4 + (int)ptr2);
            int* ptr4 = (int*)(v0 * 4 + (int)ptr2);
            if(ptr3 != 0) {
                do {
                    int* ptr5 = *(param0 + 5);
                    ptr0 = *(void**)((int)ptr3 + 16);
                    if(ptr5 != 0) {
                        ptr5(*(int*)((int)ptr3 + 4));
                    }
                    int* ptr6 = *(param0 + 6);
                    if(ptr6 != 0) {
                        ptr6(*(int*)((int)ptr3 + 8));
                    }
                    __ptr = ptr3;
                    ptr3 = ptr0;
                    free(__ptr);
                }
                while(ptr0 != 0);
                ptr2 = *(param0 + SOCK_STREAM);
                ptr1 = *(param0 + 2);
                ptr4 = v0 * 4 + (int)ptr2;
            }
            ++v0;
            *ptr4 = 0;
        }
        while((uint32_t)ptr1 > v0);
    }
    *param0 = NULL;
    return __ptr;
}
