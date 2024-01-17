int sub_2F258(int param0, int param1, int param2, int param3) {
    char __ptr1;
    int result;
    int* ptr0 = __errno_location();
    snprintf(&__ptr1, 0x800, "\n", ptr0[0], param0, param1, param2, param3);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return result;
}
