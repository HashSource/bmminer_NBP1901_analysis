int sub_4BF2C(int param0) {
    char __buf;
    char v0;
    int v1;
    char v2;
    char v3;
    if(gvar_5051C0 != 0) {
        return param0;
    }
    int v4 = param0;
    param0 = SOCK_STREAM;
    uint8_t v5 = gvar_5051C4;
    gvar_5051C4 = 1;
    if(v5 == 0) {
        if(v4 == 0) {
            int __fd = open64("/dev/urandom", 0);
            if(__fd == -1) {
            loc_4C008:
                gettimeofday((timeval*)&__buf, NULL);
                int v6 = *(int*)&__buf ^ v1;
                param0 = getpid();
                v4 = param0 ^ v6;
            }
            else {
                ssize_t v7 = read(__fd, &__buf, 4);
                close(__fd);
                if(v7 == 4) {
                    param0 = __buf;
                    v4 = (uint32_t)v2 | ((uint32_t)((uint32_t)v0 | ((uint32_t)((uint16_t)v3 | ((uint16_t)__buf << 8)) << 8)) << 8);
                }
                else {
                    goto loc_4C008;
                }
            }
            if(v4 == 0) {
                v4 = SOCK_STREAM;
            }
        }
        DMB();
        gvar_5051C0 = (uint32_t)v4;
        return param0;
    }
    do {
        param0 = sched_yield();
        DMB();
    }
    while(gvar_5051C0 == 0);
    return param0;
}
