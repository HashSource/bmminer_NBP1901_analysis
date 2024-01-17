int* sub_300E0(int* param0, int* param1) {
    int v0;
    int v1 = *(param0 + SOCK_STREAM);
    int v2 = *param0 + *param1;
    *param0 += *param1;
    int v3 = *(param1 + SOCK_STREAM) + v1;
    *(param0 + SOCK_STREAM) = *(param1 + SOCK_STREAM) + v1;
    if(v3 > 999999999) {
        int v4 = v2 + SOCK_STREAM;
        int v5 = v3 - 1000000000;
        if(v5 > 999999999) {
            v4 = v2 + 2;
            v5 = -2000000000;
        }
        *param0 = v4;
        if(v3 - 1000000000 > 999999999) {
            v5 += v3;
        }
        *(param0 + SOCK_STREAM) = v5;
        return param0;
    }
    if(v3 >= 0) {
        return param0;
    }
    do {
        v0 = v3;
        v3 += 1000000000;
        --v2;
    }
    while(v0 < -1000000000);
    *param0 = v2;
    *(param0 + SOCK_STREAM) = v3;
    return param0;
}
