int sub_47AC4(int param0, char* param1) {
    char* __format2;
    char* __format1;
    int v0;
    char* __format;
    int v1;
    uint8_t v2;
    char v3;
    char v4;
    char __s;
    char __ptr1;
    char v5;
    char v6;
    int v7 = param0;
    if((uint32_t)param0 <= 15) {
        char* __filename = param1;
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            int result = sub_46024(param0);
            if(result < 0) {
                snprintf((char*)&__s, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "upgrade_pic", v7);
                sub_2E584(0, (char*)&__s, 0);
                return result;
            }
        }
        memset(&__s, 0, 5000);
        int v8 = 0;
        int v9 = 0;
        int v10 = 0;
        int v11 = *(int*)(v7 * 8 + 10088008);
        int v12 = 0;
        int __nptr = 0;
        char v13 = 0;
        snprintf(&__ptr1, 0x800, "\n");
        sub_2E584(2, &__ptr1, 0);
        FILE* __stream = fopen64(__filename, "\n");
        FILE* __stream1 = __stream;
        if(__stream1 != 0) {
            fseek(__stream, 0, 0);
            void* ptr0 = &__s;
            memset(&__s, 0, 5000);
            snprintf(&__ptr1, 0x800, "%s: pic_flash_length = %d\n", "_update_pic_app_program_1704", 2432);
            sub_2E584(2, &__ptr1, 0);
            do {
                ptr0 = (int)ptr0 + 2;
                fgets(&__nptr, 0x3ff, __stream1);
                unsigned long v14 = strtoul(&__nptr, NULL, 16);
                *(char*)((int)ptr0 - SOCK_STREAM) = (uint8_t)v14;
                *(char*)((int)ptr0 - 2) = (uint8_t)(uint32_t)(v14 >>> 8);
            }
            while(ptr0 != &v5);
            fclose(__stream1);
            int result1 = sub_4637C(v7);
            if(result1 == 0) {
                result1 = sub_46EB4(v11);
                if(result1 != 0) {
                    snprintf(&__ptr1, 0x800, "%s set 1704 flash pointer err\n", "_erase_pic_app");
                    sub_2E584(0, &__ptr1, 0);
                    __format = "%s: erase app flash error!\n\n";
                    snprintf(&__ptr1, 0x800, __format, "_update_pic_app_program_1704");
                    sub_2E584(0, &__ptr1, 0);
                    return result1;
                }
                pthread_mutex_lock(&g50514C);
                int v15 = 0x404aa55;
                *(short*)&v3 = 0;
                *(short*)&v4 = 0;
                char v16 = 8;
                int v17 = sub_4966C(v11, &v15, 6);
                if(v17 == 6) {
                    usleep(&loc_493E0);
                    int v18 = sub_495E4(v11, &v4, 2);
                    if(v18 == 2) {
                        usleep(&loc_493E0);
                        int v19 = v4;
                        int v20 = v2;
                        if(v19 == 4 && v20 == SOCK_STREAM) {
                            goto loc_47CD8;
                        }
                        else {
                            v1 = v20;
                            snprintf(&__ptr1, 0x800, "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n", "_bitmain_pic_erase_1704", v19, v1);
                            goto loc_48044;
                        }
                    }
                    snprintf(&__ptr1, 0x800, "%s read iic err\n", "_bitmain_pic_erase_1704");
                    goto loc_48044;
                }
                else {
                    snprintf(&__ptr1, 0x800, "%s write iic err\n", "_bitmain_pic_erase_1704");
                loc_48044:
                    sub_2E584(0, &__ptr1, 0);
                }
            loc_47CD8:
                pthread_mutex_unlock(&g50514C);
                result1 = sub_46EB4(v11);
                if(result1 != 0) {
                    __format = "%s: set 1704 flash pointer err!\n\n";
                    snprintf(&__ptr1, 0x800, __format, "_update_pic_app_program_1704");
                    sub_2E584(0, &__ptr1, 0);
                    return result1;
                }
                do {
                    int* ptr1 = (int*)(result1 * 16 + (int)&__s);
                    int v21 = *(ptr1 + SOCK_STREAM);
                    int v22 = *(ptr1 + 2);
                    int v23 = *(ptr1 + 3);
                    v12 = *ptr1;
                    v8 = v21;
                    v9 = v22;
                    v10 = v23;
                    snprintf(&__ptr1, 0x800, "send pic program time: %d", result1);
                    sub_2E584(2, &__ptr1, 0);
                    pthread_mutex_lock(&g50514C);
                    char* ptr2 = &v3;
                    char* ptr3 = &v6;
                    int v24 = 22;
                    int v25 = 0;
                    *(short*)&v4 = 0;
                    int v26 = 0;
                    short v27 = 0;
                    *(int*)&v3 = 0;
                    v15 = 0x214aa55;
                    int v28 = 0;
                    int v29 = 0;
                    int v30 = 0;
                    do {
                        int v31 = (uint32_t)*(ptr3 + SOCK_STREAM);
                        ++ptr3;
                        v24 = (uint32_t)((uint16_t)v31 + (uint16_t)v24);
                        *ptr2 = (uint8_t)v31;
                        ++ptr2;
                    }
                    while((int*)((char*)&v10 + 3) != ptr3);
                    char v32 = (uint8_t)v24;
                    char v33 = (uint8_t)(v24 >>> 8);
                    int v34 = sub_4966C(v11, &v15, 22);
                    if(v34 == 22) {
                        usleep(&loc_493E0);
                        int v35 = sub_495E4(v11, &v4, 2);
                        if(v35 == 2) {
                            int v36 = v4;
                            int v37 = v2;
                            if(v36 == 2 && v37 == SOCK_STREAM) {
                                v15 = 0x504aa55;
                                *(short*)&v3 = 0x900;
                                int v38 = sub_4966C(v11, &v15, 6);
                                if(v38 == 6) {
                                    usleep(&loc_493E0);
                                    int v39 = sub_495E4(v11, &v4, v36);
                                    int v40 = v39;
                                    if(v39 == 2) {
                                        int v41 = v4;
                                        int v42 = v2;
                                        if(v41 == 5 && v42 == SOCK_STREAM) {
                                            snprintf(&__ptr1, 0x800, "%s  success write to pic flash\n", "_bitmain_pic_write_1704");
                                            sub_2E584(v40, &__ptr1, 0);
                                        }
                                        else {
                                            v1 = v42;
                                            v0 = v41;
                                            __format1 = "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n";
                                            snprintf(&__ptr1, 0x800, __format1, "_bitmain_pic_write_1704", v0, v1);
                                            sub_2E584(0, &__ptr1, 0);
                                        }
                                        goto loc_47EC0;
                                    }
                                    else {
                                        __format2 = "%s read iic 2 err\n";
                                        goto loc_47F68;
                                    }
                                }
                                else {
                                    __format2 = "%s write iic 2 err\n";
                                    goto loc_47F68;
                                }
                            }
                            v1 = v37;
                            __format1 = "%s failed 1! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n";
                            v0 = v36;
                            snprintf(&__ptr1, 0x800, __format1, "_bitmain_pic_write_1704", v0, v1);
                            sub_2E584(0, &__ptr1, 0);
                            goto loc_47EC0;
                        }
                        __format2 = "%s read iic 1 err\n";
                    loc_47F68:
                        snprintf(&__ptr1, 0x800, __format2, "_bitmain_pic_write_1704");
                        sub_2E584(0, &__ptr1, 0);
                    }
                    else {
                        __format2 = "%s write iic 1 err\n";
                        goto loc_47F68;
                    }
                loc_47EC0:
                    ++result1;
                    pthread_mutex_unlock(&g50514C);
                }
                while(result1 != 304);
                result1 = sub_4637C(v7);
                if(result1 == 0) {
                    return result1;
                }
            }
            __format = "%s: reset pic error!\n\n";
            snprintf(&__ptr1, 0x800, __format, "_update_pic_app_program_1704");
            sub_2E584(0, &__ptr1, 0);
            return result1;
        }
        snprintf(&__ptr1, 0x800, "%s: open %s failed\n", "_update_pic_app_program_1704", __filename);
        sub_2E584(0, &__ptr1, 0);
        return 0x80000200;
    }
    snprintf((char*)&__s, 0x800, "%s: Bad pic param, input chain is %d\n", "upgrade_pic", param0);
    sub_2E584(0, (char*)&__s, 0);
    return 0x80000201;
}
