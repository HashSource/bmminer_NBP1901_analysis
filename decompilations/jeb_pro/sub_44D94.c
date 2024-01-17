int sub_44D94(int* param0) {
    int result = 0;
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    sub_40314(4, &result);
    sub_40314(5, &v0);
    sub_40314(4, &v1);
    sub_40314(5, &v2);
    *param0 = result;
    *(param0 + SOCK_STREAM) = v0;
    *(param0 + 2) = v1;
    *(param0 + 3) = v2;
    return result;
}
