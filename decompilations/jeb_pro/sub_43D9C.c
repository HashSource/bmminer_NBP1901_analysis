int sub_43D9C(void* __ptr5) {
    int v0;
    int v1;
    void* ptr0 = *(void**)__ptr5;
    while((int*)((int)__ptr5 + 4) != ptr0) {
        void* ptr1 = *(void**)ptr0;
        if((int*)((int)__ptr5 + 4) != ptr1) {
            ptr0 = ptr1;
            continue;
        }
        void* ptr2 = *(void**)((int)ptr0 + 4);
        if((int*)((int)__ptr5 + 4) != ptr2) {
            ptr0 = ptr2;
            continue;
        }
        uint32_t* __ptr = *(uint32_t**)((int)ptr0 + 16);
        if(*(int*)((int)__ptr5 + 28) != 0) {
            sub_44000(__ptr, &v0);
            *(int*)((int)__ptr5 + 28)(v0);
            __ptr = *(uint32_t**)((int)ptr0 + 16);
        }
        sub_44074(__ptr);
        uint32_t* __ptr1 = *(uint32_t**)((int)ptr0 + 20);
        if(__ptr1 != 0) {
            if(*(int*)((int)__ptr5 + 32) != 0) {
                sub_44000(__ptr1, &v1);
                *(int*)((int)__ptr5 + 32)(v1);
                __ptr1 = *(uint32_t**)((int)ptr0 + 20);
            }
            sub_44074(__ptr1);
        }
        void* ptr3 = *(void**)((int)ptr0 + 8);
        if(ptr3 != 0) {
            void* __ptr2 = *(void**)ptr3;
            if(__ptr2 != ptr2) {
                free(__ptr2);
                ptr0 = ptr3;
                *(void**)ptr3 = ptr2;
                continue;
            }
            void* __ptr3 = *(void**)((int)ptr3 + 4);
            ptr0 = ptr3;
            if(__ptr3 == ptr2) {
                continue;
            }
            free(__ptr3);
            *(void**)((int)ptr3 + 4) = ptr2;
            continue;
        }
        void* __ptr4 = ptr0;
        ptr0 = ptr2;
        free(__ptr4);
    }
    free(__ptr5);
    return 0;
}
