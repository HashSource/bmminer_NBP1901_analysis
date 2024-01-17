int sub_42488(int param0) {
    char __ptr1;
    snprintf(&__ptr1, 0x800, "gpio port %d is not a supported key\n", param0);
    return sub_2E584(SOCK_STREAM, &__ptr1, 0);
}
