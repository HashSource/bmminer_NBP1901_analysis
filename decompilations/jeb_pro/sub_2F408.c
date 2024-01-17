void* sub_2F408(size_t param0, int param1, int param2, int param3) {
    char __ptr1;
    void* result = malloc((param0 & 0x3) != 0 ? (size_t)((param0 & 0xfffffffc) + 4): param0);
    if(result != 0) {
        return result;
    }
    snprintf(&__ptr1, 0x800, "Failed to malloc size %d from %s %s:%d", (param0 & 0x3) != 0 ? (size_t)((param0 & 0xfffffffc) + 4): param0, param1, param2, param3);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return NULL;
}
