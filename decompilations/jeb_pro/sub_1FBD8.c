int sub_1FBD8(int param0, int param1) {
    char __ptr1;
    int v0 = (uint32_t)param1 > 3;
    if(param0 == 0) {
        v0 = SOCK_STREAM;
    }
    int __src = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    if(v0 != 0) {
        if((gvar_590404 == 0 && gvar_482A5C == 0) && (int)gvar_7EBA0 <= 2) {
            return param0;
        }
        snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_rate_ideal");
        return sub_2E584(3, &__ptr1, 0);
    }
    sub_19DE4(param1);
    snprintf(&__src, 16, "\n");
    char* ptr0 = sub_4E744(&__src);
    return sub_4EFD4((int*)param0, "rate_ideal", ptr0);
}
