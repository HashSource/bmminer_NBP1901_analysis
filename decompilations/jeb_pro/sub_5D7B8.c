void* sub_5D7B8(size_t __nmemb, int param1, int param2, int param3, int param4) {
    int v0;
    int v1 = param2;
    void* __ptr = calloc(1, 28);
    if(__ptr != 0) {
        void* ptr0 = calloc(__nmemb, 4);
        *(void**)((int)__ptr + 4) = ptr0;
        if(ptr0 != 0) {
            param2 = param4;
            *(size_t*)((int)__ptr + 8) = __nmemb;
            *(int*)((int)__ptr + 12) = param1;
            *(int*)((int)__ptr + 16) = v1;
            *(int*)((int)__ptr + 20) = param3;
            *(int*)((int)__ptr + 24) = param2;
            *(int*)__ptr = 0;
            return __ptr;
        }
        int* ptr1 = __errno_location();
        v0 = ptr1[0];
        sub_5DF98(&g2, "src/zc_hashtable.c", 44, "calloc fail, errno[%d]");
        free(__ptr);
        return NULL;
    }
    int* ptr2 = __errno_location();
    v0 = ptr2[0];
    sub_5DF98(&g2, "src/zc_hashtable.c", 38, "calloc fail, errno[%d]");
    return 0;
}
