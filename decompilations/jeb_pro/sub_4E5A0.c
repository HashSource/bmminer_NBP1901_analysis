uint32_t* sub_4E5A0(uint32_t* param0) {
    if(param0 == 0) {
        return 0;
    }
    return *param0 == SOCK_STREAM ? *(param0 + 3): NULL;
}
