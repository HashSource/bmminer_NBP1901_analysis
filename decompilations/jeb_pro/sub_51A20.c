int sub_51A20(int param0, int param1, int param2, int param3, int* param4) {
    int result;
    int* ptr0;
    int v0;
    if(param1 <= 3) {
        if(param2 <= 0xFF) {
            if((uint8_t)(param3 >>> 2) <= 63) {
                pthread_mutex_lock(&g5059C8);
                switch(param0) {
                    case 0: {
                        v0 = param1 * 64 + (uint32_t)(uint8_t)(param3 >>> 2);
                        break;
                    }
                    case 1: {
                        int v1 = (param1 * 0x100 + param2) * 64 + (uint32_t)(uint8_t)(param3 >>> 2);
                        if(*(int*)(v1 * 8 + 5265888) == param3) {
                            ptr0 = v1 * 8 + 5265888;
                            *param4 = *(ptr0 + SOCK_STREAM);
                            pthread_mutex_unlock(&g5059C8);
                            return 0;
                        }
                        result = -5;
                        pthread_mutex_unlock(&g5059C8);
                        printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n", "get_register_cache_value", param0, param1, param2, param3);
                        return result;
                    }
                    default: {
                        result = -6;
                        pthread_mutex_unlock(&g5059C8);
                        printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n", "get_register_cache_value", param0, param1, param2, param3);
                        return result;
                    }
                }
                if(*(int*)(v0 * 8 + 0x5051c8) != param3) {
                    result = -4;
                    pthread_mutex_unlock(&g5059C8);
                    printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n", "get_register_cache_value", param0, param1, param2, param3);
                    return result;
                }
                ptr0 = v0 * 8 + 0x5051c8;
                *param4 = *(ptr0 + SOCK_STREAM);
                pthread_mutex_unlock(&g5059C8);
                return 0;
            }
            return -3;
        }
        return -2;
    }
    return -1;
}
