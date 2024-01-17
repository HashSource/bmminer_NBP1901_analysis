int sub_41F7C(int param0) {
    int v0;
    char __ptr1;
    pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262952));
    short __size = sub_41474((int)(uint8_t)param0);
    if(__size != 0) {
        void* __ptr = malloc((size_t)__size);
        if(__ptr == 0) {
            v0 = param0;
            snprintf(&__ptr1, 0x800, "%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo", param0);
            sub_2E584(0, &__ptr1, 0);
            usleep(500000);
            return pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262952));
        }
        int v1 = sub_41794(param0, (char*)__ptr, (int)__size);
        if(__size != v1) {
            int v2 = v1;
            int v3 = (int)__size;
            v0 = param0;
            snprintf(&__ptr1, 0x800, "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n", "clear_uart_rx_fifo", param0, __size, v2);
            sub_2E584(0, &__ptr1, 0);
        }
        free(__ptr);
        usleep(10000);
    }
    return pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262952));
}
