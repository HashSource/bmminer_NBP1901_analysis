int sub_2F33C(int param0, int param1) {
    char __ptr1;
    int result;
    int* ptr0 = __errno_location();
    snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", ptr0[0], "util.c", param0, param1);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return result;
}
