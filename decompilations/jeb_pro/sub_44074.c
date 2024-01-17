void* sub_44074(void* __ptr) {
    if(__ptr == 0) {
        return 0;
    }
    free(*(void**)__ptr);
    free(__ptr);
    return __ptr;
}
