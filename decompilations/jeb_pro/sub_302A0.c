// Stale decompilation - Refresh this view to re-decompile this code
int sub_302A0(int* param0) {
    int __tp;
    int v0;
    clock_gettime(SOCK_STREAM, &__tp);
    *param0 = __tp;
    *(param0 + SOCK_STREAM) = v0 / 1000;
    return v0 * 274877907;
}
