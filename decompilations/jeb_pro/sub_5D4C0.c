void* sub_5D4C0(int param0) {
    int v0;
    void* __ptr = calloc(1, 16);
    if(__ptr != 0) {
        *(int*)((int)__ptr + 12) = param0;
        *(int*)((int)__ptr + 8) = 32;
        *(int*)((int)__ptr + 4) = 0;
        void* ptr0 = calloc(32, 4);
        *(void**)__ptr = ptr0;
        if(ptr0 != 0) {
            return __ptr;
        }
        int* ptr1 = __errno_location();
        v0 = ptr1[0];
        sub_5DF98(&g2, "src/zc_arraylist.c", 32, "calloc fail, errno[%d]");
        free(__ptr);
        return NULL;
    }
    int* ptr2 = __errno_location();
    v0 = ptr2[0];
    sub_5DF98(&g2, "src/zc_arraylist.c", 22, "calloc fail, errno[%d]");
    return 0;
}
