char* sub_31268(char* param0, int param1) {
    if(param1 == SOCK_STREAM) {
        return param0;
    }
    char* ptr0 = param0 - SOCK_STREAM;
    int v0 = 0;
    param0 += param1;
    do {
        ++v0;
        int v1 = (uint32_t)*(ptr0 + SOCK_STREAM);
        ++ptr0;
        char v2 = *(param0 - SOCK_STREAM);
        --param0;
        *ptr0 = v2;
        *param0 = (uint8_t)v1;
    }
    while(~v0 + param1 > v0);
    return param0;
}
