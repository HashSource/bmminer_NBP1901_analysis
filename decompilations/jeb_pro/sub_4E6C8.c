char* sub_4E6C8(char* __src) {
    if(__src == 0) {
        return 0;
    }
    size_t __n = strlen(__src);
    return sub_4E144(__src, __n, 0);
}
