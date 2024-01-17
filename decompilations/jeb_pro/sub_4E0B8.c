void* sub_4E0B8(int* param0, int param1, int param2) {
    int v0 = *(param0 + 2);
    void* __src = *(void**)(param0 + 4);
    if(*(param0 + 3) + param1 > v0) {
        int v1 = v0 * 2;
        v0 += param1;
        int v2 = v1 >= v0 ? v1: v0;
        size_t __dest = sub_4D880((size_t)(v2 * 4));
        if(__dest == 0) {
            return NULL;
        }
        *(param0 + 2) = v2;
        *(size_t*)(param0 + 4) = __dest;
        if(param2 != 0) {
            memcpy((void*)__dest, __src, (size_t)(*(param0 + 3) * 4));
            sub_4D898(__src);
            return *(void**)(param0 + 4);
        }
    }
    return __src;
}
