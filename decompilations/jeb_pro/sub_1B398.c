int sub_1B398() {
    char __ptr1;
    size_t __nmemb = gvar_58DFBC;
    size_t __nmemb1 = gvar_58E004;
    void* ptr0 = calloc(__nmemb, 0x210);
    int __ptr = (int)ptr0;
    gvar_58E018 = (uint32_t)ptr0;
    if(ptr0 != 0) {
        void* ptr1 = calloc(__nmemb1, 8);
        gvar_58E020 = (uint32_t)ptr1;
        if(ptr1 != 0) {
            gvar_58E010 = 1;
            return 0;
        }
        if(gvar_7EB9C > 3) {
            snprintf(&__ptr1, 0x800, "malloc %d runtime_fan failed\n", __nmemb1);
            sub_2E584(3, &__ptr1, 0);
            __ptr = gvar_58E018;
        }
        free((void*)__ptr);
        return 0x80000400;
    }
    if(gvar_7EB9C <= 3) {
        return 0x80000400;
    }
    snprintf(&__ptr1, 0x800, "malloc %d runtime_chain failed\n", __nmemb);
    sub_2E584(3, &__ptr1, __ptr);
    return 0x80000400;
}
