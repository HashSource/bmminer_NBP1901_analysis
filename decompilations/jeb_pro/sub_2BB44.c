int sub_2BB44(int param0, int param1, size_t __n) {
    char __ptr1;
    if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
        snprintf(&__ptr1, 0x800, "%s %d\n", "bitmain_shutdown_cb", param1);
        param0 = sub_2E584(5, &__ptr1, 0);
    }
    sub_31CAC(param0, param1, __n);
    sub_2FE84(gvar_80758);
    sub_2FE84(gvar_80754);
    sub_2FE84(gvar_80750);
    sub_2FE84(gvar_590400);
    sub_44A88();
    *(char*)(gvar_58E354 + 364) = SOCK_STREAM;
    return 0;
}
