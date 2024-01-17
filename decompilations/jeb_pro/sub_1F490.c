int sub_1F490(int param0) {
    char __ptr1;
    int __src = 0;
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    if(param0 == 0) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_rate_5s");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    sub_1E2C8();
    snprintf(&__src, 16, "\n");
    char* ptr0 = sub_4E744(&__src);
    return sub_4EFD4((int*)param0, "rate_5s", ptr0);
}
