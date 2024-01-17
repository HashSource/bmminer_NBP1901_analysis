int sub_46178(int param0) {
    char* __format1;
    char* __format;
    int result;
    char __ptr1;
    char v0;
    char v1;
    uint8_t v2;
    uint8_t v3;
    char v4;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            result = sub_46024(param0);
            if(result < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "get_pic_version", param0);
                sub_2E584(0, &__ptr1, 0);
                return result;
            }
        }
        int v5 = *(int*)(param0 * 8 + 10088008);
        pthread_mutex_lock(&g50514C);
        *(int*)&v0 = 0;
        int v6 = 386181717;
        int v7 = 0;
        int v8 = 0;
        *(int*)&v1 = 0;
        uint8_t v9 = 0;
        char v10 = 27;
        int v11 = sub_4966C(v5, &v6, 6);
        if(v11 == 6) {
            usleep(&loc_493E0);
            int v12 = sub_495E4(v5, &v1, 5);
            if(v12 == 5) {
                if(v4 == 23 && v1 == 5) {
                    result = v3;
                    if((result + 28) >>> 8 == v2 && v3 + 28 == v9) {
                        pthread_mutex_unlock(&g50514C);
                        return result;
                    }
                    __format = "%s failed 2!\n";
                }
                else {
                    __format = "%s failed!\n";
                }
                snprintf(&__ptr1, 0x800, __format, "_bitmain_pic_get_sw_ver_common");
                sub_2E584(0, &__ptr1, 0);
                sub_45ED0((int)&v1, 5);
            }
            else {
                __format1 = "%s read iic err\n";
            loc_462D4:
                snprintf(&__ptr1, 0x800, __format1, "_bitmain_pic_get_sw_ver_common");
                sub_2E584(0, &__ptr1, 0);
            }
            result = 0x80000200;
        }
        else {
            __format1 = "%s write iic err\n";
            goto loc_462D4;
        }
        pthread_mutex_unlock(&g50514C);
        return result;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "get_pic_version", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
