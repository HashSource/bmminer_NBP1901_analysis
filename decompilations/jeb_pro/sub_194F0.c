int sub_194F0() {
    int v0;
    int result;
    char __ptr1;
    int v1 = SOCK_STREAM;
    sleep(1);
loc_19508:
    do {
        ++v1;
        sleep(1);
        if(v1 <= 29) {
            goto loc_19508;
        }
        int v2 = sub_15508();
        result = sub_1572C();
        v0 = v2 - result;
        if(v0 < 0) {
            v0 = 0 - v0;
        }
    }
    while(v0 > 5 && v1 != 180);
    if(gvar_7EB9C > 3) {
        int v3 = sub_15508();
        int v4 = sub_1572C();
        int v5 = v3 - v4;
        if(v5 < 0) {
            v5 = 0 - v5;
        }
        snprintf(&__ptr1, 0x800, "Slept %d seconds, diff = %d.\n", v1, v5);
        result = sub_2E584(3, &__ptr1, 0);
    }
    return result;
}
