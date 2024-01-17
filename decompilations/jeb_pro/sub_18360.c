int sub_18360(int param0, char* __s, size_t __maxlen) {
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && *(char*)(v0 + 28) != 0) {
        if(__s != 0) {
            size_t v1 = strlen(*(char**)(*(int*)(param0 * 4 + v0) + 16));
            if(v1 < __maxlen) {
                snprintf(__s, __maxlen, "\n");
                return 0;
            }
        }
        return -2;
    }
    if(gvar_7EB9C <= 3) {
        return -1;
    }
    return sub_169C0(param0);
}
