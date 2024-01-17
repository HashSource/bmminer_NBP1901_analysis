int sub_2A3C4(uint32_t* param0) {
    int v0;
    char* ptr0;
    char* ptr1;
    char __ptr1;
    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        int* ptr2 = *(param0 + 9);
        int v1 = *(int*)(*(ptr2 + SOCK_STREAM) + 8);
        ptr1 = *(char**)(ptr2 + 2);
        snprintf(&__ptr1, 0x800, "%s %d: invalid nonce - HW error", v1, ptr1);
        sub_2E584(7, &__ptr1, 0);
    }
    int v2 = pthread_mutex_lock(&g5944F4);
    if(v2 != 0) {
        int* ptr3 = __errno_location();
        int v3 = ptr3[0];
        ptr1 = "bmminer.c";
        ptr0 = "inc_hw_errors";
        v0 = 1446;
        snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v3, "bmminer.c", "inc_hw_errors", 1446);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    int* ptr4 = *(param0 + 9);
    int v4 = *(ptr4 + 11) + SOCK_STREAM;
    ++gvar_58E348;
    *(ptr4 + 11) = v4;
    int v5 = pthread_mutex_unlock(&g5944F4);
    if(v5 != 0) {
        int* ptr5 = __errno_location();
        int v6 = ptr5[0];
        ptr1 = "bmminer.c";
        ptr0 = "inc_hw_errors";
        v0 = 1449;
        snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v6, "bmminer.c", "inc_hw_errors", 1449);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    int result = gvar_7ECC4{sub_2F250}();
    int v7 = *(int*)(*(*(param0 + 9) + SOCK_STREAM) + 84);
    if(v7 != 0) {
        result = v7((int)param0);
    }
    return result;
}
