size_t sub_4E8B0(char* __format, __gnuc_va_list __arg) {
    int __n = vsnprintf(NULL, 0, __format, __arg);
    if(__n != 0) {
        size_t __src = sub_4D880((size_t)(__n + SOCK_STREAM));
        if(__src != 0) {
            vsnprintf((char*)__src, (size_t)(__n + SOCK_STREAM), __format, __arg);
            int v0 = sub_4DFEC((int)__src, __n);
            if(v0 != 0) {
                return sub_4E144((void*)__src, (size_t)__n, SOCK_STREAM);
            }
            sub_4D898((void*)__src);
        }
        return 0;
    }
    return sub_4E700("\n", 0);
}
