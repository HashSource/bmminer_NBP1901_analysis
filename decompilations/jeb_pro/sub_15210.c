uint32_t sub_15210(uint32_t param0) {
    char __ptr1;
    uint32_t v0 = sub_1E170();
    if(v0 == 0) {
        return 0;
    }
    int v1 = 0;
    pthread_mutex_lock(&g7F7C0);
    gvar_7F7B0 = param0;
    sub_14F20();
    do {
        int v2 = sub_1E29C(v1);
        if(v2 != 0) {
            int v3 = sub_146C8(v1);
            if(v3 != 0) {
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "calibration sensor on chain %d failed", v1);
                    sub_2E584(3, &__ptr1, 0);
                }
                gvar_7F7BC = 1;
                pthread_mutex_unlock(&g7F7C0);
                return 0xffffffff;
            }
        }
        ++v1;
    }
    while(v1 != 4);
    gvar_7F7BC = 1;
    pthread_mutex_unlock(&g7F7C0);
    return 0;
}
