void* sub_20788(int* param0, int param1) {
    char __s;
    char __ptr1;
    void* buf = memset(&__s, 0, 32);
    if(param0 == 0 || (uint32_t)param1 > 3) {
        if((gvar_590404 == 0 && gvar_482A5C == 0) && (int)gvar_7EBA0 <= 2) {
            return buf;
        }
        snprintf(&__ptr1, 0x800, "%s: input bad param\n", "api_miner_chain_sn");
        return sub_2E584(3, &__ptr1, 0);
    }
    sub_17FD8(param1, (char*)&__s, 32);
    char* ptr0 = sub_4E744((char*)&__s);
    return sub_4EFD4(param0, "\n", ptr0);
}
