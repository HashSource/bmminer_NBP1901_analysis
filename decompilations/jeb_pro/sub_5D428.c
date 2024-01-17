int sub_5D428(uint32_t* param0, int* param1, int param2) {
    void* __ptr = *param0;
    int v0 = *param1 * 2;
    if(param2 > v0) {
        v0 = param2;
    }
    void* ptr0 = realloc(__ptr, (size_t)(v0 * 4));
    if(ptr0 != 0) {
        int v1 = *param1;
        *param0 = ptr0;
        param2 = v0 - v1;
        if(param2 != 0) {
            memset((void*)(v1 * 4 + (int)ptr0), 0, (size_t)(param2 * 4));
        }
        *param1 = v0;
        return 0;
    }
    int* ptr1 = __errno_location();
    int v2 = ptr1[0];
    sub_5DF98(&g2, "src/zc_arraylist.c", 67, "realloc fail, errno[%d]");
    return -1;
}
