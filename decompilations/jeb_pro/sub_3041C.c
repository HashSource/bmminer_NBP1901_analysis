int sub_3041C(int* param0) {
    int result;
    int v0;
    int __req;
    int v1;
    sub_30024((int)&__req);
    int v2 = *param0;
    int v3 = *(param0 + SOCK_STREAM) + v1;
    v1 += *(param0 + SOCK_STREAM);
    int v4 = v2 + __req;
    __req += v2;
    if(v3 < 0) {
        do {
            v0 = v3;
            v3 += 1000000000;
            --v4;
        }
        while(v0 < -1000000000);
        __req = v4;
        v1 = v3;
    }
    else if(v3 > 999999999) {
        int v5 = v4 + SOCK_STREAM;
        int v6 = v3 - 1000000000;
        if(v6 > 999999999) {
            v5 = v4 + 2;
            v6 = -2000000000;
        }
        __req = v5;
        if(v3 - 1000000000 > 999999999) {
            v6 += v3;
        }
        v1 = v6;
    }
    do {
        result = clock_nanosleep(SOCK_STREAM, SOCK_STREAM, &__req, NULL);
    }
    while(result == 4);
    return result;
}
