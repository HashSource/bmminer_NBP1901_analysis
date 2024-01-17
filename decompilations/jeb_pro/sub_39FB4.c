int sub_39FB4(int param0, int param1, size_t __n, int param3) {
    char __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Board init, is_power_off = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    int v0 = 0;
    do {
        int v1 = sub_1E29C(v0);
        if(v1 != 0) {
            sub_5198C((int)(uint8_t)v0, param1, (int)__n, param3);
        }
        ++v0;
    }
    while(v0 != 4);
    unsigned int v2 = sub_3345C();
    int result = sub_33E34((int)v2, param1, __n);
    sub_304D4(10);
    sub_281B8();
    sub_304D4(10);
    return result;
}
