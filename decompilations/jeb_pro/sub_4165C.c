int sub_4165C(int param0) {
    char __ptr1;
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262568));
    int v5 = sub_41250(param0, &v4, &v0, &v1, &v2);
    if(v5 == 0) {
        int v6 = 21;
        do {
            sub_40314(v0, &v3);
            int v7 = (uint32_t)(uint8_t)(v3 >>> v4);
            v3 = (uint32_t)(uint8_t)(v3 >>> v4);
            if(v7 == 0xFF) {
                return pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
            }
            printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", param0);
            sub_40390(v1, v3 | 0x80000000);
            usleep(3000);
            --v6;
        }
        while(v6 != 0);
        snprintf(&__ptr1, 0x800, "%s: uart%d always dose not has enough send fifo space, break\n", "clear_uart_tx_fifo", param0);
    }
    else {
        snprintf(&__ptr1, 0x800, "get_send_address_info error, chain_id = %d\n", param0);
    }
    sub_2E584(0, &__ptr1, 0);
    return pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
}
