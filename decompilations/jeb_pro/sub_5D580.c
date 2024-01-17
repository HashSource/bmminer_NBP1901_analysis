void* sub_5D580(void* __ptr1) {
    if(__ptr1 == 0) {
        return 0;
    }
    void* __ptr = *(void**)__ptr1;
    if(*(int*)((int)__ptr1 + 12) != 0) {
        int v0 = *(int*)((int)__ptr1 + 4);
        if(v0 > 0) {
            int v1 = 0;
            while(SOCK_STREAM) {
                int v2 = *(int*)(v1 * 4 + (int)__ptr);
                ++v1;
                if(v2 != 0) {
                    *(int*)((int)__ptr1 + 12)(v2, v0, (int)__ptr);
                    __ptr = *(void**)__ptr1;
                    v0 = *(int*)((int)__ptr1 + 4);
                }
                if(v0 > v1) {
                    continue;
                }
                break;
            }
        }
    }
    if(__ptr != 0) {
        free(__ptr);
    }
    free(__ptr1);
    return __ptr1;
}
