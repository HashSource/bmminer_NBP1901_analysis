char* sub_4F8A8(short* param0, char* __src) {
    size_t v0 = strlen(__src);
    if(v0 > 79) {
        *(param0 + 6) = 0x2e2e;
        *(char*)(param0 + 7) = '.';
        return strncpy((char*)param0 + 15, &__src[v0 - 76], 77);
    }
    return strncpy((char*)(param0 + 6), __src, v0 + SOCK_STREAM);
}
