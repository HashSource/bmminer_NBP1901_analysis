int sub_498A0(char* param0) {
    int v0 = 601;
    int v1 = 0;
    do {
        sub_40314(12, &v1);
        int v2 = v1;
        if(v2 >>> 31 != 0) {
            *param0 = (uint8_t)v2;
            return v2 >>> 31;
        }
        usleep(5000);
        --v0;
    }
    while(v0 != 0);
    return 0;
}
