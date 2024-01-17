int sub_20C28(int param0) {
    char __ptr1;
    if(param0 != 0) {
        char* ptr0 = sub_4E744(&g99EDE0);
        param0 = sub_4EFD4((int*)param0, "miner_id", ptr0);
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_id");
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
