uint32_t* sub_43EC4(int param0, uint32_t* param1) {
    for(uint32_t* i = *(param1 + SOCK_STREAM); i != param0 + 4; i = *(param1 + SOCK_STREAM)) {
        param1 = i;
    }
    return param1;
}
