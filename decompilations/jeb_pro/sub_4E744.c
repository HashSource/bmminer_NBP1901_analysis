char* sub_4E744(char* __src) {
    if(__src == 0) {
        return 0;
    }
    size_t __n = strlen(__src);
    return sub_4E700((int)__src, (int)__n);
}
