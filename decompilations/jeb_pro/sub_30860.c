void* sub_30860(char* __ptr, char* __src) {
    size_t v0 = strlen(__src);
    if(v0 == 0) {
        return __ptr;
    }
    size_t v1 = v0 + SOCK_STREAM;
    if(__ptr != 0) {
        size_t v2 = strlen(__ptr);
        size_t v3 = v2 + v1;
        if((v3 & 0x3) != 0) {
            v3 = (v3 & 0xfffffffc) + 4;
        }
        void* __s2 = sub_2F408(v3, "util.c", "realloc_strcat", 3382);
        sprintf((char*)__s2, "\n", __ptr, __src);
        free(__ptr);
        return __s2;
    }
    if((v1 & 0x3) != 0) {
        v0 = v1 & 0xfffffffc;
    }
    if((v1 & 0x3) == 0) {
        v0 = v1;
    }
    if((v1 & 0x3) != 0) {
        v0 += 4;
    }
    void* __dest = sub_2F408(v0, "util.c", "realloc_strcat", 3382);
    strcpy((char*)__dest, __src);
    return __dest;
}
