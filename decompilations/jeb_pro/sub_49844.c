int sub_49844() {
    int v0 = 601;
    int v1 = 0;
    do {
        sub_40314(12, &v1);
        int result = v1 >>> 31;
        if(v1 >>> 31 != 0) {
            return result;
        }
        usleep(5000);
        --v0;
    }
    while(v0 != 0);
    return 0;
}
