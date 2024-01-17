int* sub_2FFD0(int* param0, int* param1) {
    *param0 = *param1;
    *(param0 + SOCK_STREAM) = *(param1 + SOCK_STREAM) * 1000;
    return param0;
}
