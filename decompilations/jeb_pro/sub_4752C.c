int sub_4752C(int param0, int param1, int param2, int param3, int param4) {
    char* __format;
    int result;
    char __ptr1;
    char v0;
    uint8_t v1;
    char v2;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            result = sub_46024(param0);
            if(result < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "app_write_data_into_flash", param0);
                sub_2E584(0, &__ptr1, 0);
                return result;
            }
        }
        int v3 = *(int*)(param0 * 8 + 10088008);
        int v4 = 0;
        pthread_mutex_lock(&g50514C);
        result = param4 < 16 ? param4: 16;
        char v5 = (uint8_t)param2;
        char v6 = (uint8_t)param4 + 6;
        char v7 = (uint8_t)param1;
        int v8 = (uint32_t)((uint8_t)param4 + 6) + param1 + (param2 + 53);
        *(short*)&v0 = 0xaa55;
        *(short*)&v2 = 0;
        int v9 = 0;
        int v10 = 0;
        int v11 = 0;
        int v12 = 0;
        int v13 = 0;
        int v14 = 0;
        short v15 = 0;
        char v16 = 53;
        if(param4 > 0) {
            char* ptr0 = (char*)(param3 - SOCK_STREAM);
            do {
                int v17 = (uint32_t)*(ptr0 + SOCK_STREAM);
                ++ptr0;
                if((v4 & SOCK_STREAM) == 0 && v17 > 63) {
                    snprintf(&__ptr1, 0x800, "%s: the data[%d] must less than 0x3f\n", "_app_write_data_into_flash_1704_v8", v4);
                    sub_2E584(v4 & SOCK_STREAM, &__ptr1, v4 & SOCK_STREAM);
                    v17 = (uint32_t)*ptr0;
                }
                char* ptr1 = (char*)(v4 + &v0);
                ++v4;
                *(ptr1 + 6) = (uint8_t)v17;
                v8 = (uint32_t)((uint16_t)v17 + (uint16_t)v8);
            }
            while(v4 < result);
        }
        *(char*)((uint32_t)((uint16_t)result + 6) + &v0) = (uint8_t)(v8 >>> 8);
        *(char*)((uint32_t)((uint16_t)result + 7) + &v0) = (uint8_t)v8;
        int v18 = sub_4966C(v3, &v0, (int)((uint16_t)result + 8));
        if((int)((uint16_t)result + 8) == v18) {
            usleep(&loc_493E0);
            int v19 = sub_495E4(v3, &v2, 2);
            if(v19 != 2) {
                __format = "%s read iic 2 err\n";
            loc_476B8:
                snprintf(&__ptr1, 0x800, __format, "_app_write_data_into_flash_1704_v8");
                result = 0;
                sub_2E584(0, &__ptr1, 0);
            }
            else if(v2 != 53 || v1 != SOCK_STREAM) {
                result = 0;
                snprintf(&__ptr1, 0x800, "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n", "_app_write_data_into_flash_1704_v8", v2, v1);
                sub_2E584(0, &__ptr1, 0);
            }
        }
        else {
            __format = "%s write iic 2 err\n";
            goto loc_476B8;
        }
        pthread_mutex_unlock(&g50514C);
        return result;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "app_write_data_into_flash", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
