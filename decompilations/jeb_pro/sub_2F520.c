void* sub_2F520(void* __ptr, size_t param1, int param2, int param3, int param4) {
    char __ptr1;
    void* result = realloc(__ptr, (param1 & 0x3) != 0 ? (size_t)((param1 & 0xfffffffc) + 4): param1);
    if(result != 0) {
        return result;
    }
    snprintf(&__ptr1, 0x800, "Failed to realloc size %d from %s %s:%d", (param1 & 0x3) != 0 ? (size_t)((param1 & 0xfffffffc) + 4): param1, param2, param3, param4);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return NULL;
}
