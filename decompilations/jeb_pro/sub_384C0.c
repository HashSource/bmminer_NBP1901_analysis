int sub_384C0(int param0) {
    char __ptr1;
    if(gvar_7EB9C <= SOCK_STREAM) {
        return 0xFF;
    }
    snprintf(&__ptr1, 0x800, "input value error: %c\n", param0);
    sub_2E584(SOCK_STREAM, &__ptr1, 0);
    return 0xFF;
}
