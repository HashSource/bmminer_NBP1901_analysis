int sub_4A540(void* __ptr, size_t __size, FILE* __s) {
    size_t cnt_written = fwrite(__ptr, __size, 1, __s);
    int result = cnt_written - SOCK_STREAM;
    if(result != 0) {
        result = -1;
    }
    return result;
}
