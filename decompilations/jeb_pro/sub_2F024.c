int* sub_2F024(int* param0) {
    int* ptr0 = (int*)&g7ECA0;
    int* ptr1 = param0 + 34;
    do {
        int v0 = *(ptr0 + SOCK_STREAM);
        ++ptr0;
        *ptr1 = v0;
        ++ptr1;
    }
    while(param0 + 42 != ptr1);
    *(param0 + SOCK_STREAM) = 0;
    *param0 = 0;
    return param0;
}
