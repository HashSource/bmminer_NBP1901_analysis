int sub_39584(int param0) {
    char __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Check if recv nonce enough, chain = %d.\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v0 = gvar_4FCB3C;
    if(v0 != 0) {
        int* ptr0 = *(uint32_t*)(v0 + 4);
        if(ptr0 != 0) {
            return *(ptr0 + 10)(param0);
        }
    }
    if(gvar_7EB9C <= 3) {
        return SOCK_STREAM;
    }
    return sub_388F4();
}
