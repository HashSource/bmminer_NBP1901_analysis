size_t sub_41A3C(int param0, void* __src, size_t __n) {
    char* __format;
    char __dest;
    char __ptr1;
    int v0;
    memset(&__dest, 0, 0x100);
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0;
    pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262568));
    int v6 = sub_41250(param0, &v5, &v1, &v2, &v3);
    if(v6 == 0) {
        int v7 = 21;
        do {
            sub_40314(v1, &v4);
            int v8 = (uint32_t)(uint8_t)(v4 >>> v5);
            v4 = (uint32_t)(uint8_t)(v4 >>> v5);
            if(__n <= v8) {
                v7 = 22;
                do {
                    sub_40314(v2, &v4);
                    if(v4 >= 0) {
                        memcpy(&__dest, __src, __n);
                        if(__n >>> 2 != 0) {
                            void* ptr0 = &__dest;
                            int* ptr1 = (int*)((__n >>> 2) * 4 + (int)&__dest);
                            do {
                                int v9 = (uint32_t)*(char*)((int)ptr0 + SOCK_STREAM);
                                ptr0 = (int)ptr0 + 4;
                                sub_40390(v3, ((uint32_t)*(char*)((int)ptr0 - 2) * 0x100) | ((uint32_t)*(char*)((int)ptr0 - 4) * 0x1000000) | (v9 * &ELFHeader) | (uint32_t)*(char*)((int)ptr0 - SOCK_STREAM));
                            }
                            while(ptr1 != ptr0);
                        }
                        if((__n & 0x3) != 0) {
                            char* ptr2 = (char*)((__n >>> 2) * 4 + (int)&v0);
                            int v10 = (uint32_t)*(ptr2 - 0x900) * 0x1000000;
                            if((__n & 0x3) == 2) {
                                v10 |= (uint32_t)*(ptr2 - 0x8ff) * &ELFHeader;
                            }
                            else if((__n & 0x3) == 3) {
                                v10 |= ((uint32_t)*(ptr2 - 2302) * 0x100) | ((uint32_t)*(ptr2 - 0x8ff) * &ELFHeader);
                            }
                            sub_40390(v3, v10);
                        }
                        sub_40390(v2, (int)(__n | 0x80000000));
                        pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
                        return __n;
                    }
                    usleep(3000);
                    --v7;
                }
                while(v7 != 0);
                pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
                __format = "%s: uart%d always busy, break\n";
                snprintf(&__ptr1, 0x800, __format, "uart_send", param0);
                sub_2E584(0, &__ptr1, 0);
                return 0;
            }
            usleep(3000);
            --v7;
        }
        while(v7 != 0);
        pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
        __format = "%s: uart%d always dose not has enough send fifo space, break\n";
        snprintf(&__ptr1, 0x800, __format, "uart_send", param0);
        sub_2E584(0, &__ptr1, 0);
        return 0;
    }
    snprintf(&__ptr1, 0x800, "get_send_address_info error, chain_id = %d\n", param0);
    sub_2E584(0, &__ptr1, 0);
    pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
    return 0;
}
