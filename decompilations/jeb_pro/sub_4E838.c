int sub_4E838(int* param0, int __src, int __n) {
    if(__src != 0) {
        int v0 = sub_4DFEC(__src, __n);
        if(v0 != 0) {
            return sub_4E7A0(param0, (void*)__src, (size_t)__n);
        }
    }
    return -1;
}
