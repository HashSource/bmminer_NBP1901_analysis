void* sub_2A1A4(void* __s) {
    free(*(void**)((int)__s + 288));
    free(*(void**)((int)__s + 308));
    free(*(void**)((int)__s + 328));
    free(*(void**)((int)__s + 320));
    return memset(__s, 0, 448);
}
