int sub_20528(int param0, int param1) {
    char __ptr1;
    if(param0 == 0 || (uint32_t)param1 > 3) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_hw");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    int v0 = sub_1E7BC(param1);
    size_t v1 = sub_4E990(v0, v0 >> 31);
    return sub_4EFD4((int*)param0, "hw", (void*)v1);
}
