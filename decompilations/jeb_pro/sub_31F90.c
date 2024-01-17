int sub_31F90(int param0, int param1, size_t __n) {
    char __ptr1;
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "Chain %d PIC reset failed.\n", param0);
        sub_2E584(3, &__ptr1, 0);
    }
    sub_1E200(param0, 0);
    sub_356C4(4, param0);
    sub_31D58(8, "PIC reset failed.\n", __n);
    return -1;
}
