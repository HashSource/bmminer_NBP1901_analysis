int sub_48110(int param0, int param1, int param2, void* __dest, int param4) {
    char* __format;
    int __n;
    char __ptr1;
    char v0;
    char v1;
    char v2;
    char __src;
    uint8_t v3;
    uint8_t v4;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            __n = sub_46024(param0);
            if(__n < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_read_iic", param0);
                sub_2E584(0, &__ptr1, 0);
                return __n;
            }
        }
        int v5 = 0;
        int result = sub_46CA0(*(int*)(param0 * 8 + 10088008), param1, param2, 0, 0);
        if(result >= 0) {
            usleep(10000);
            int v6 = *(int*)(param0 * 8 + 10088008);
            pthread_mutex_lock(&g50514C);
            __n = param4 < 16 ? param4: 16;
            int v7 = (uint32_t)((uint16_t)param1 + (uint16_t)__n + 66);
            char v8 = (uint8_t)__n;
            char v9 = (uint8_t)v7;
            *(int*)&v0 = 0;
            char v10 = (uint8_t)param1;
            *(int*)&v2 = 0;
            char v11 = (uint8_t)(v7 >>> 8);
            int v12 = 0;
            int v13 = 0;
            int v14 = 0;
            short v15 = 0;
            int v16 = 1007069781;
            int v17 = sub_4966C(v6, &v16, 8);
            if(v17 == 8) {
                usleep(10000);
                int v18 = sub_495E4(v6, &v0, __n + 5);
                if(__n + 5 != v18) {
                    __format = "%s read iic err\n";
                    __n = 0;
                    snprintf(&__ptr1, 0x800, __format, "_pic_read_iic");
                    sub_2E584(0, &__ptr1, 0);
                    pthread_mutex_unlock(&g50514C);
                    return __n;
                }
                int v19 = v0;
                if(__n + 5 != v19 || v4 != 60 || v3 != SOCK_STREAM) {
                    __n = 0;
                    snprintf(&__ptr1, 0x800, "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n", "_pic_read_iic", v19, v4, v3);
                    sub_2E584(0, &__ptr1, 0);
                }
                else {
                    int v20 = 0;
                    if(__n > -3) {
                        while(SOCK_STREAM) {
                            v5 = (uint32_t)((uint16_t)v5 + SOCK_STREAM);
                            v20 = (uint32_t)((uint16_t)v20 + (uint16_t)v19);
                            char* ptr0 = (char*)(v5 + (int)&v1);
                            if(__n + 3 <= v5) {
                                break;
                            }
                            v19 = *(ptr0 - 0x818);
                        }
                        v5 = v20 >>> 8;
                    }
                    if((uint32_t)*((char*)(__n + &v0) + 3) != v5 || (uint32_t)(uint8_t)v20 != (uint32_t)*(__n + &v2)) {
                        snprintf(&__ptr1, 0x800, "%s failed 2!\n", "_pic_read_iic");
                        __n = 0;
                        sub_2E584(0, &__ptr1, 0);
                    }
                    else {
                        memcpy(__dest, &__src, (size_t)__n);
                    }
                }
            }
            else {
                __format = "%s write iic err\n";
                __n = 0;
                snprintf(&__ptr1, 0x800, __format, "_pic_read_iic");
                sub_2E584(0, &__ptr1, 0);
            }
            pthread_mutex_unlock(&g50514C);
            return __n;
        }
        snprintf(&__ptr1, 0x800, "%s: select slave: 0x%02x, reg/command: 0x%02x is failed", "pic_read_iic", param1, param2);
        sub_2E584(0, &__ptr1, 0);
        return result;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "pic_read_iic", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
