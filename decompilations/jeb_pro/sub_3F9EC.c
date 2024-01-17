int sub_3F9EC(int param0, int param1) {
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
    double v4 = (double)0.0;
    int64_t* ptr0 = (int64_t*)((param0 * 0x100 + param1) * 32 + 5229416);
    int v5 = 4;
    do {
        __int128 v6 = (unsigned __int128)(uint64_t)v6 | ((unsigned __int128)*ptr0 << 64);
        ++ptr0;
        v0 = v5;
        --v5;
        v4 += (uint64_t)(v6 >>> 0x40X);
    }
    while(v0 != SOCK_STREAM);
    param0 = pthread_mutex_unlock(&g4FCB4C);
    VMUL.F64(0.25, v4, 0.25);
    return param0;
}
