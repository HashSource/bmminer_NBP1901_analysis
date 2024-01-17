int sub_47158(int param0, int* param1, int param2) {
    char* __format;
    char* ptr0;
    char v0;
    int v1;
    int result;
    char __ptr1;
    char v2;
    uint8_t v3;
    char v4;
    uint8_t v5;
    uint8_t v6;
    uint8_t v7;
    uint8_t v8;
    char v9;
    short v10;
    uint8_t v11;
    uint8_t v12;
    int v13 = param0;
    if((uint32_t)param0 <= 15) {
        int* ptr1 = param1;
        int v14 = param2;
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            result = sub_46024(param0);
            if(result < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_get_voltage", v13);
                sub_2E584(0, &__ptr1, 0);
                return result;
            }
        }
        if(v14 == 3) {
            pthread_mutex_lock(&g50514C);
            int v15 = *(int*)(v13 * 8 + 10088008);
            *(short*)&v2 = 0;
            *(int*)&v3 = 0;
            v1 = 923052629;
            *(int*)&v9 = 0;
            *(int*)&v10 = 0;
            v0 = 59;
            int v16 = sub_4966C(v15, &v1, 6);
            if(v16 != 6) {
                ptr0 = "_read_an_voltage";
                __format = "%s write iic err\n";
                snprintf(&__ptr1, 0x800, __format, ptr0);
                result = -1;
                sub_2E584(0, &__ptr1, 0);
                pthread_mutex_unlock(&g50514C);
                return result;
            }
            usleep(&loc_493E0);
            int v17 = sub_495E4(v15, &v9, 11);
            result = v17;
            if(v17 != 11) {
                ptr0 = "_read_an_voltage";
                __format = "%s read iic err\n";
                snprintf(&__ptr1, 0x800, __format, ptr0);
                result = -1;
                sub_2E584(0, &__ptr1, 0);
                pthread_mutex_unlock(&g50514C);
                return result;
            }
            int v18 = v9;
            int v19 = v7;
            if(v18 == 11 && v19 == 55) {
                char* ptr2 = &v9;
                int i = 0;
                for(i = (uint32_t)((uint16_t)v18 + (uint16_t)i); (int*)((char*)&v10 + SOCK_STREAM) != ptr2; i = (uint32_t)((uint16_t)v18 + (uint16_t)i)) {
                    v18 = ptr2[SOCK_STREAM];
                    ++ptr2;
                }
                if(i >>> 8 == v8 && (uint32_t)(uint8_t)i == v6) {
                    int v20 = (uint32_t)*(short*)&v4;
                    int v21 = (uint32_t)*(short*)&v12;
                    int v22 = v10;
                    *ptr1 = (uint32_t)((uint16_t)(uint8_t)(v20 >>> 8) | ((uint16_t)(uint8_t)v20 << 8));
                    *(ptr1 + SOCK_STREAM) = (uint32_t)((uint16_t)(uint8_t)(v21 >>> 8) | ((uint16_t)(uint8_t)v21 << 8));
                    *(ptr1 + 2) = (uint32_t)((uint16_t)(uint8_t)(v22 >>> 8) | ((uint16_t)(uint8_t)v22 << 8));
                }
                else {
                    ptr0 = "_read_an_voltage";
                    __format = "%s failed 2!\n";
                    snprintf(&__ptr1, 0x800, __format, ptr0);
                    result = -1;
                    sub_2E584(0, &__ptr1, 0);
                }
                pthread_mutex_unlock(&g50514C);
                return result;
            }
            snprintf(&__ptr1, 0x800, "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n", "_read_an_voltage", v18, v19);
        }
        else {
            if(v14 != SOCK_STREAM) {
                snprintf(&__ptr1, 0x800, "%s failed: parameters error!\n", "pic_get_voltage");
                sub_2E584(0, &__ptr1, 0);
                return 0x80000201;
            }
            pthread_mutex_lock(&g50514C);
            int v23 = *(int*)(v13 * 8 + 10088008);
            *(short*)&v2 = 0;
            *(int*)&v9 = 0;
            v1 = 0x3a04aa55;
            *(int*)&v4 = 0;
            v0 = 62;
            int v24 = sub_4966C(v23, &v1, 6);
            if(v24 == 6) {
                usleep(&loc_493E0);
                int v25 = sub_495E4(v23, &v9, 7);
                result = v25;
                if(v25 == 7) {
                    int v26 = v9;
                    int v27 = v7;
                    int v28 = v5;
                    if(v26 == 7 && v27 == 58 && v28 == SOCK_STREAM) {
                        int v29 = (uint32_t)*(short*)&v4;
                        int v30 = v4 + v3 + 66;
                        int v31 = (uint32_t)((uint16_t)(uint8_t)(v29 >>> 8) | ((uint16_t)(uint8_t)v29 << 8));
                        if(v30 >>> 8 == v12 && (uint32_t)(uint8_t)v30 == v11) {
                            *ptr1 = v31;
                        }
                        else {
                            ptr0 = "_read_an6_voltage";
                            __format = "%s failed 2!\n";
                            snprintf(&__ptr1, 0x800, __format, ptr0);
                            result = -1;
                            sub_2E584(0, &__ptr1, 0);
                        }
                        pthread_mutex_unlock(&g50514C);
                        return result;
                    }
                    snprintf(&__ptr1, 0x800, "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n", "_read_an6_voltage", v26, v27, v28);
                }
                else {
                    ptr0 = "_read_an6_voltage";
                    __format = "%s read iic err\n";
                    snprintf(&__ptr1, 0x800, __format, ptr0);
                }
                result = -1;
                sub_2E584(0, &__ptr1, 0);
                pthread_mutex_unlock(&g50514C);
                return result;
            }
            ptr0 = "_read_an6_voltage";
            __format = "%s write iic err\n";
            snprintf(&__ptr1, 0x800, __format, ptr0);
        }
        result = -1;
        sub_2E584(0, &__ptr1, 0);
        pthread_mutex_unlock(&g50514C);
        return result;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "pic_get_voltage", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
