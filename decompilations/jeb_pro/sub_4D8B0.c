size_t sub_4D8B0(void* __src, size_t __n) {
    size_t result = __n + SOCK_STREAM;
    if(result != 0) {
        void* __dest = ptr_→malloc{malloc}(result);
        result = __dest;
        if(result != 0) {
            memcpy(__dest, __src, __n);
            *(char*)(__n + result) = 0;
        }
    }
    return result;
}
