int sub_477EC(int param0, int param1, int param2, void* __dest, int param4) {
    char* __format;
    int v0;
    int v1;
    int __n;
    char __ptr1;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            __n = sub_46024(param0);
            if(__n < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "app_read_data_from_flash", param0);
                sub_2E584(0, &__ptr1, 0);
                return __n;
            }
        }
        int v2 = *(int*)(param0 * 8 + 10088008);
        pthread_mutex_lock(&g50514C);
        void* __ptr = malloc((size_t)(param4 + 5));
        __n = param4 < 16 ? param4: 16;
        int v3 = 0x3607aa55;
        int v4 = (uint32_t)((uint16_t)param1 + (uint16_t)param2 + ((uint16_t)__n + 61));
        char v5 = (uint8_t)param1;
        char v6 = (uint8_t)param2;
        char v7 = (uint8_t)__n;
        char v8 = (uint8_t)v4;
        char v9 = (uint8_t)(v4 >>> 8);
        int v10 = sub_4966C(v2, &v3, 9);
        if(v10 == 9) {
            usleep(&loc_493E0);
            int v11 = sub_495E4(v2, (char*)__ptr, (int)(size_t)(param4 + 5));
            if((size_t)(param4 + 5) != v11) {
                __format = "%s read iic 2 err\n";
                __n = 0;
                snprintf(&__ptr1, 0x800, __format, "_app_read_data_from_flash_1704_v8");
                sub_2E584(0, &__ptr1, 0);
                free(__ptr);
                pthread_mutex_unlock(&g50514C);
                return __n;
            }
            int v12 = (uint32_t)*(char*)((int)__ptr + SOCK_STREAM);
            int v13 = (int)*(char*)__ptr;
            int v14 = (uint32_t)*(char*)((int)__ptr + 2);
            int v15 = v13;
            if(v12 != 54 || v14 != SOCK_STREAM || (size_t)(param4 + 5) != v13) {
                int v16 = v14;
                int v17 = v12;
                snprintf(&__ptr1, 0x800, "%s failed !\n read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x\n", "_app_read_data_from_flash_1704_v8", v13, v17, v16);
                __n = 0;
                sub_2E584(0, &__ptr1, 0);
                sub_46FE8((int)__ptr, (int)(size_t)(param4 + 5));
            }
            else {
                if(param4 <= -3) {
                    v1 = 0;
                    v0 = 0;
                }
                else {
                    v0 = 0;
                    int v18 = 0;
                    while(SOCK_STREAM) {
                        v18 = (uint32_t)((uint16_t)v18 + SOCK_STREAM);
                        v0 = (uint32_t)((uint16_t)v15 + (uint16_t)v0);
                        if(param4 + 3 <= v18) {
                            break;
                        }
                        v15 = *(char*)((int)__ptr + v18);
                    }
                    v1 = v0 >>> 8;
                }
                char* ptr0 = (char*)((char*)((int)__ptr + param4) + 5);
                if((uint32_t)*(ptr0 - 2) != v1 || (uint32_t)(uint8_t)v0 != (uint32_t)*(ptr0 - SOCK_STREAM)) {
                    __n = 0;
                    snprintf(&__ptr1, 0x800, "%s failed 2!\n", "_app_read_data_from_flash_1704_v8");
                    sub_2E584(0, &__ptr1, 0);
                    sub_46FE8((int)__ptr, v13);
                }
                else {
                    memcpy(__dest, (void*)((int)__ptr + 3), (size_t)__n);
                }
            }
        }
        else {
            __format = "%s write iic 2 err\n";
            __n = 0;
            snprintf(&__ptr1, 0x800, __format, "_app_read_data_from_flash_1704_v8");
            sub_2E584(0, &__ptr1, 0);
        }
        free(__ptr);
        pthread_mutex_unlock(&g50514C);
        return __n;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "app_read_data_from_flash", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
