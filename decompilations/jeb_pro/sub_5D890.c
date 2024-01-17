char* sub_5D890(char* __ptr2) {
    void* ptr0;
    if(__ptr2 != 0) {
        void* __ptr1 = *(int*)&__ptr2[4];
        char v0 = *(int*)&__ptr2[8];
        if(v0 != 0) {
            int v1 = 0;
            do {
                void* ptr1 = *(void**)(v1 * 4 + (int)__ptr1);
                if(ptr1 != 0) {
                    do {
                        char v2 = *(int*)&__ptr2[20];
                        ptr0 = *(void**)((int)ptr1 + 16);
                        if(v2 != 0) {
                            v2(*(int*)((int)ptr1 + 4));
                        }
                        char v3 = *(int*)&__ptr2[24];
                        if(v3 != 0) {
                            v3(*(int*)((int)ptr1 + 8));
                        }
                        void* __ptr = ptr1;
                        ptr1 = ptr0;
                        free(__ptr);
                    }
                    while(ptr0 != 0);
                    __ptr1 = *(int*)&__ptr2[4];
                    v0 = *(int*)&__ptr2[8];
                }
                ++v1;
            }
            while((uint8_t)v0 > v1);
        }
        if(__ptr1 != 0) {
            free(__ptr1);
        }
        free(__ptr2);
        return __ptr2;
    }
    void* ptr2 = NULL;
    return sub_5DF98(&g2, "src/zc_hashtable.c", 68, "a_table[%p] is NULL, just do nothing");
}
