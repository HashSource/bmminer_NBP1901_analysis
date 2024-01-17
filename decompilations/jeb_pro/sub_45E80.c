int sub_45E80(int param0) {
    char __ptr1;
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "open_pic", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
