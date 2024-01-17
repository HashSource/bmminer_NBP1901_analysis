size_t sub_4E700(int __src, int __n) {
    if(__src != 0) {
        int v0 = sub_4DFEC(__src, __n);
        if(v0 != 0) {
            return sub_4E144((void*)__src, (size_t)__n, 0);
        }
    }
    return 0;
}
