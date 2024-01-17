int sub_3F970(int param0, int param1) {
    int v0;
    char v1 = param0 < 3;
    char v2 = param0 == 3;
    char v3 = (((param0 - 3) ^ param0) & (param0 ^ 0x3)) < 0;
    if(param0 <= 3) {
        v1 = param1 < 0xFF;
        v2 = param1 == 0xFF;
        v3 = (((param1 - 0xFF) ^ param1) & (param1 ^ 0xFF)) < 0;
    }
    if((v2 == 0 && v3 == v1)) {
        return param0;
    }
    pthread_mutex_lock(&g4FCB4C);
    int v4 = 4;
    do {
        v0 = v4;
        --v4;
    }
    while(v0 != SOCK_STREAM);
    return pthread_mutex_unlock(&g4FCB4C);
}
