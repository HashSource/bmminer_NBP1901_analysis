int sub_1F8B0(int param0) {
    short __src;
    char __ptr1;
    *(int*)&__src = 0;
    if(param0 == 0) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_rate_unit");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    __src = 0x4847;
    char v0 = 0;
    char* ptr0 = sub_4E744(&__src);
    return sub_4EFD4((int*)param0, "rate_unit", ptr0);
}
