int sub_24F04() {
    int __ptr1;
    char __addr1;
    prctl(PR_SET_NAME, "http");
loc_24F68:
    do {
        int __fd = socket(AF_INET, SOCK_STREAM, 6);
        gvar_7E2EC = (uint32_t)__fd;
        if(__fd >= 0) {
            int v0 = 0;
            int v1 = 0;
            int __addr = -1407778814;
            int v2 = 0;
            int v3 = bind(__fd, &__addr, 16);
            if(v3 < 0) {
                goto loc_2517C;
            }
            else {
                int v4 = listen(gvar_7E2EC, 100);
                if(v4 >= 0) {
                    goto loc_24FC4;
                }
            }
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                __builtin_strcpy(&__ptr1, "http listen failed! try again after 10s...");
                sub_2E584(5, &__ptr1, 0);
                goto loc_251D4;
            loc_2517C:
                if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                    __builtin_strcpy(&__ptr1, "http port bind failed! try again after 10s...");
                    sub_2E584(5, &__ptr1, 0);
                }
            }
        loc_251D4:
            close(gvar_7E2EC);
            gvar_7E2EC = 0xffffffff;
            sleep(10);
            goto loc_2516C;
        }
        else {
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
                __builtin_strcpy(&__ptr1, "socket creating failed, try again after 10s...");
                sub_2E584(5, &__ptr1, 0);
            }
            sleep(10);
        loc_2516C:
            if(gvar_7F9F8 == 0) {
                goto loc_24F68;
            }
            goto loc_24FC4;
        }
    }
    while(SOCK_STREAM);
loc_24FC4:
    if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
        __builtin_strcpy(&__ptr1, "start listen on 6060 ...");
        sub_2E584(5, &__ptr1, 0);
    }
    if(gvar_7F9F8 == 0) {
    loc_25044:
        do {
            usleep(10000);
            int __fd1 = (int)gvar_7E2EC;
            int __addr_len = 16;
            int __fd2 = accept(__fd1, &__addr1, &__addr_len);
            int v5 = __fd2;
            int v6 = gvar_7F9F8;
            if(__fd2 != -1) {
                if(v6 == 0) {
                    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                        snprintf(&__ptr1, 0x800, "one client connected sock=%d", v5);
                        sub_2E584(7, &__ptr1, 0);
                    }
                    sub_24398(v5);
                    if(gvar_7F9F8 == 0) {
                        goto loc_25044;
                    }
                }
                else {
                    close(__fd2);
                }
                goto loc_250E8;
            }
        }
        while(v6 == 0);
    }
loc_250E8:
    close(gvar_7E2EC);
    gvar_7E2EC = 0xffffffff;
    return 0;
}
