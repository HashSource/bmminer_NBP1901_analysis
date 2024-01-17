int sub_41E38(int param0, int param1, int* param2) {
    char __ptr1;
    if(param2 == 0) {
        return -3;
    }
    pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262568));
    if(param1 == 0) {
        sub_40390(15, *param2 * &ELFHeader);
    }
    else {
        snprintf(&__ptr1, 0x800, "unknown set config type = %d\n", param1);
        sub_2E584(SOCK_STREAM, &__ptr1, 0);
    }
    pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
    return -5;
}
