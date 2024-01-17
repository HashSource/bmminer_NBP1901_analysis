int sub_4E87C(int* param0, char* __src) {
    if(__src != 0) {
        size_t __n = strlen(__src);
        return sub_4E838(param0, (int)__src, (int)__n);
    }
    return -1;
}
