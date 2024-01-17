int sub_2A578() {
    int result;
    int __info;
    char __s;
    char __ptr1;
    int v0 = sysinfo(&__info);
    if(v0 == 0) {
        gvar_58E344 = __info;
        gvar_5903F8 = __info + SOCK_STREAM;
        result = sprintf(&__s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", __info, __info + SOCK_STREAM);
        if((gvar_590404 == 0 && gvar_482A5C == 0) && (int)gvar_7EBA0 <= 4) {
            return result;
        }
        snprintf(&__ptr1, 0x800, "\n");
        return sub_2E584(5, &__ptr1, 0);
    }
    int* ptr0 = __errno_location();
    int __errnum = ptr0[0];
    char* ptr1 = strerror(__errnum);
    sprintf(&__s, "Failed to get sysinfo, errno:%u, reason:%s\n", __errnum, ptr1);
    result = time(NULL);
    gvar_58E344 = (uint32_t)result;
    gvar_5903F8 = (uint32_t)(result + SOCK_STREAM);
    return result;
}
