int sub_46CA0(int param0, int param1, int param2, int param3, int param4) {
    char* __format;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char v5;
    char __ptr1;
    uint8_t v6;
    char v7;
    pthread_mutex_lock(&g50514C);
    char v8 = (uint8_t)param1;
    int result = param4 < 16 ? param4: 16;
    int v9 = 0;
    int v10 = (uint32_t)((uint8_t)param4 + 6) + param1 + (param2 + 59);
    char v11 = (uint8_t)param4 + 6;
    char v12 = (uint8_t)param2;
    *(short*)&v5 = 0xaa55;
    if(param4 > 0) {
        v4 = 6;
    }
    int v13 = 0;
    int v14 = 0;
    int v15 = 0;
    short v16 = 0;
    int v17 = 0;
    *(short*)&v7 = 0;
    char v18 = 59;
    if(param4 <= 0) {
        v3 = 8;
        v2 = 7;
        v1 = 8;
        v0 = 6;
    }
    else {
        while(SOCK_STREAM) {
            int v19 = (uint32_t)*(char*)(v9 + param3);
            v9 = (uint32_t)((uint16_t)v9 + SOCK_STREAM);
            *(char*)(v4 + &v5) = (uint8_t)v19;
            v10 = (uint32_t)((uint16_t)v19 + (uint16_t)v10);
            v0 = (uint32_t)((uint16_t)v4 + SOCK_STREAM);
            if(v9 >= result) {
                break;
            }
            v4 = v0;
        }
        v1 = (uint16_t)v4 + 3;
        v2 = (uint32_t)((uint16_t)v4 + 2);
        v3 = v1;
    }
    *(char*)(v0 + &v5) = (uint8_t)(v10 >>> 8);
    *(char*)(v2 + &v5) = (uint8_t)v10;
    int v20 = sub_4966C(param0, &v5, v1);
    if(v20 == v3) {
        usleep(10000);
        int v21 = sub_495E4(param0, &v7, 2);
        if(v21 != 2) {
            __format = "%s read iic err\n";
            snprintf(&__ptr1, 0x800, __format, "_pic_write_iic");
            result = 0x80000200;
            sub_2E584(0, &__ptr1, 0);
            pthread_mutex_unlock(&g50514C);
            return result;
        }
        else if(v7 != 59 || v6 != SOCK_STREAM) {
            snprintf(&__ptr1, 0x800, "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n", "_pic_write_iic", v7, v6);
            result = 0x80000200;
            sub_2E584(0, &__ptr1, 0);
        }
    }
    else {
        __format = "%s write iic err\n";
        snprintf(&__ptr1, 0x800, __format, "_pic_write_iic");
        result = 0x80000200;
        sub_2E584(0, &__ptr1, 0);
    }
    pthread_mutex_unlock(&g50514C);
    return result;
}
