void* sub_37F08() {
    void* __ptr;
    void* __ptr1;
    uint32_t v0 = sub_1E0F0();
    if(v0 == 0) {
        __ptr1 = gvar_4FCB38;
    }
    else {
        int v1 = 0;
        __ptr1 = gvar_4FCB38;
        while(SOCK_STREAM) {
            int v2 = v1 + 2107946;
            ++v1;
            __ptr = *(void**)((int*)(v2 * 4 + (int)__ptr1) + SOCK_STREAM);
            if(__ptr != 0) {
                free(__ptr);
                __ptr1 = gvar_4FCB38;
                *((int*)(v2 * 4 + (int)__ptr1) + SOCK_STREAM) = 0;
            }
            if(v1 != v0) {
                continue;
            }
            break;
        }
    }
    free(__ptr1);
    gvar_4FCB38 = 0;
    return __ptr;
}
