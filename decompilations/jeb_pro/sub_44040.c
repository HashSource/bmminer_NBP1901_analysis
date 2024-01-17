void* sub_44040(uint32_t* param0, void* __src, size_t __size) {
    free(*param0);
    void* __dest = malloc(__size);
    *param0 = __dest;
    return memcpy(__dest, __src, __size);
}
