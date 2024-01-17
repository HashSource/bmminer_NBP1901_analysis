time_t sub_26094() {
    char __ptr1;
    if(gvar_7EB9C > 3) {
        int* ptr0 = __errno_location();
        int __errnum = ptr0[0];
        char* ptr1 = strerror(__errnum);
        snprintf(&__ptr1, 0x800, "Failed to get sysinfo, errno = %u, reason = %s.\n", __errnum, ptr1);
        sub_2E584(3, &__ptr1, 0);
    }
    return time(NULL);
}
