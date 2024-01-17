void* sub_43FA4(void* __src, size_t __size) {
    void* __ptr = malloc(8);
    if(__ptr != 0) {
        *(size_t*)((int)__ptr + 4) = __size;
        void* __dest = malloc(__size);
        *(void**)__ptr = __dest;
        if(__dest == 0) {
            free(__ptr);
            return NULL;
        }
        memcpy(__dest, __src, __size);
    }
    return __ptr;
}
