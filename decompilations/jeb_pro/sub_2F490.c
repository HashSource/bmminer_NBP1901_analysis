void* sub_2F490(size_t __nmemb, size_t param1, int param2, int param3, int param4) {
    char __ptr1;
    void* result = calloc(__nmemb, (param1 & 0x3) != 0 ? (size_t)((param1 & 0xfffffffc) + 4): param1);
    if(result != 0) {
        return result;
    }
    snprintf(&__ptr1, 0x800, "Failed to calloc memb %d size %d from %s %s:%d", __nmemb, (param1 & 0x3) != 0 ? (size_t)((param1 & 0xfffffffc) + 4): param1, param2, param3, param4);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return NULL;
}
