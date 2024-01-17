int sub_28E18(int param0, int param1) {
    char __ptr1;
    int* ptr0 = __errno_location();
    snprintf(&__ptr1, 0x800, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", ptr0[0], "bmminer.c", param0, param1);
    return sub_2E584(3, &__ptr1, SOCK_STREAM);
}
