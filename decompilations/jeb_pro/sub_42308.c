int sub_42308(int param0) {
    char __ptr1;
    int v0 = sub_43014();
    if(v0 == param0) {
        return 0x100;
    }
    int v1 = sub_4301C();
    if(v1 == param0) {
        return 0x101;
    }
    snprintf(&__ptr1, 0x800, "unmaped port = %d\n", param0);
    sub_2E584(0, &__ptr1, 0);
    return 258;
}
