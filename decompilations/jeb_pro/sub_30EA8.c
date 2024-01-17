void* sub_30EA8(void* __dest, void* __src, size_t __n, uint32_t param3, int param4, int param5) {
    char* __format;
    char __ptr1;
    if((int)__n >= SOCK_STREAM) {
        if(__dest == 0) {
            if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
                return __dest;
            }
            __format = "ERR: Asked to memcpy %u bytes to NULL from %s %s():%d";
        }
        else if(__src != 0) {
            return memcpy(__dest, __src, __n);
        }
        else {
            if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
                return __dest;
            }
            __format = "ERR: Asked to memcpy %u bytes from NULL from %s %s():%d";
        }
        snprintf(&__ptr1, 0x800, __format, __n, param3, param4, param5);
        return sub_2E584(3, &__ptr1, 0);
    }
    if(gvar_590404 == 0 && gvar_482A5C == 0 && (int)gvar_7EBA0 <= 2) {
        return __dest;
    }
    __format = "ERR: Asked to memcpy %u bytes from %s %s():%d";
    snprintf(&__ptr1, 0x800, __format, __n, param3, param4, param5);
    return sub_2E584(3, &__ptr1, 0);
}
