int sub_17FD8(int param0, char* __s, size_t __maxlen) {
    char __ptr1;
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && *(char*)(v0 + 28) != 0) {
        if(__s != 0) {
            size_t v1 = strlen(*(char**)(*(int*)(param0 * 4 + v0) + 3));
            param0 = v1 + SOCK_STREAM;
            if(v1 + SOCK_STREAM <= __maxlen) {
                return snprintf(__s, __maxlen, "\n");
            }
        }
    }
    else if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "No hash board sn, chain = %d.\n", param0);
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
