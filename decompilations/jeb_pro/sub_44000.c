int sub_44000(uint32_t* param0, uint32_t* param1) {
    size_t __size = *(size_t*)(param0 + SOCK_STREAM);
    void* __dest = malloc(__size);
    *param1 = __dest;
    if(__dest != 0) {
        memcpy(__dest, *param0, __size);
        return 0;
    }
    return 3;
}
