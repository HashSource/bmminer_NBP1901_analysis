int sub_51B44(int param0, int param1, int param2, int param3, int param4) {
    int result;
    int v0 = param4;
    if(param1 <= 3) {
        if(param2 <= 0xFF) {
            if(param3 >>> 2 <= 64) {
                pthread_mutex_lock(&g5059C8);
                if(param0 != 0) {
                    if(param0 == SOCK_STREAM) {
                        int v1 = (param1 * 0x100 + param2) * 64 + (param3 >>> 2);
                        if(*(int*)(v1 * 8 + 5265888) == param3) {
                            *(int*)(v1 * 8 + 5265892) = v0;
                            pthread_mutex_unlock(&g5059C8);
                            return 0;
                        }
                        result = -5;
                    }
                    else {
                        result = -6;
                    }
                    pthread_mutex_unlock(&g5059C8);
                    printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n", "set_register_cache_value", param0, param1, param2, param3);
                    return result;
                }
                int v2 = param1 * 64 + (param3 >>> 2);
                if(*(int*)(v2 * 8 + 0x5051c8) != param3) {
                    result = -4;
                    pthread_mutex_unlock(&g5059C8);
                    printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n", "set_register_cache_value", param0, param1, param2, param3);
                    return result;
                }
                int v3 = (param1 * 0x4000 + (param3 >>> 2)) * 8;
                *(int*)(v2 * 8 + 0x5051cc) = v0;
                int* ptr0 = (int*)(v3 + 5265888);
                do {
                    *(ptr0 + SOCK_STREAM) = v0;
                    ptr0 += 128;
                }
                while(v3 + 5396960 != ptr0);
                pthread_mutex_unlock(&g5059C8);
                return 0;
            }
            return -3;
        }
        return -2;
    }
    return -1;
}
