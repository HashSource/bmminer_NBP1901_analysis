int sub_43414(void* __ptr) {
    if(__ptr == 0) {
        return 0;
    }
    int result = sub_43D9C(*(void**)__ptr);
    free(__ptr);
    return result;
}
