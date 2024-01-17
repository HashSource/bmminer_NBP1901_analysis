int sub_44B54(char* __s, size_t __maxlen) {
    int v0 = 0;
    int v1 = 0;
    sub_40314(31, &v0);
    sub_40314(32, &v1);
    return snprintf(__s, __maxlen, "%08x%08x", v1);
}
