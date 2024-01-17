int sub_4D954(uint32_t* param0) {
    *(param0 + 2) = 16;
    *(param0 + SOCK_STREAM) = 0;
    size_t v0 = sub_4D880(16);
    *param0 = v0;
    if(v0 != 0) {
        *(char*)v0 = 0;
        return 0;
    }
    return -1;
}
