int sub_4E804(int* param0, char* __src) {
    if(__src != 0) {
        size_t __n = strlen(__src);
        return sub_4E7A0(param0, __src, __n);
    }
    return -1;
}
