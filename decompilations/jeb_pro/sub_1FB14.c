int sub_1FB14(int param0, uint32_t param1) {
    char __ptr1;
    if(param0 == 0 || param1 > 3) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_frequency");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    uint32_t v0 = sub_1A2E0(param1);
    size_t v1 = sub_4E990((int)v0, (int)(v0 >> 31));
    return sub_4EFD4((int*)param0, "freq_avg", (void*)v1);
}
