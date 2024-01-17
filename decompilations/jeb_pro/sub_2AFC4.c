int sub_2AFC4(char* __s2_1, int param1) {
    char __ptr1;
    if(param1 != 32 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2)) {
        snprintf(&__ptr1, 0x800, "invald hash size %d\n", param1);
        sub_2E584(3, &__ptr1, 0);
    }
    int v0 = sub_2ADA0(__s2_1);
    gvar_482A88 = (uint8_t)v0;
    return 0;
}
