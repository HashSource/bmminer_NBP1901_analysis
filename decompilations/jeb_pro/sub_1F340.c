int sub_1F340(int param0) {
    char __ptr1;
    if(param0 != 0) {
        uint32_t v0 = sub_31D38();
        size_t v1 = sub_4E990((int)v0, 0);
        param0 = sub_4EFD4((int*)param0, "inited", (void*)v1);
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_inited");
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
