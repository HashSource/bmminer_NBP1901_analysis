int* sub_2FEC0(int* param0, int* param1) {
    int v0 = *(param1 + SOCK_STREAM);
    int v1 = *param0 - *param1;
    *param1 = *param0 - *param1;
    int v2 = *(param0 + SOCK_STREAM) - v0;
    *(param1 + SOCK_STREAM) = *(param0 + SOCK_STREAM) - v0;
    if(v2 < 0) {
        *param1 = v1 - SOCK_STREAM;
        *(param1 + SOCK_STREAM) = v2 + 1000000;
    }
    return param0;
}
