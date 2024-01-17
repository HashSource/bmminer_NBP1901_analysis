int sub_4637C(int param0) {
    char* __format;
    int result;
    char __ptr1;
    char v0;
    char v1;
    uint8_t v2;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            result = sub_46024(param0);
            if(result < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "reset_pic", param0);
                sub_2E584(0, &__ptr1, 0);
                return result;
            }
        }
        int v3 = *(int*)(param0 * 8 + 10088008);
        result = 0;
        pthread_mutex_lock(&g50514C);
        *(int*)&v0 = 0;
        int v4 = 117746261;
        int v5 = 0;
        int v6 = 0;
        *(short*)&v1 = 0;
        char v7 = 11;
        int v8 = sub_4966C(v3, &v4, 6);
        if(v8 == 6) {
            usleep(&loc_493E0);
            int v9 = sub_495E4(v3, &v1, 2);
            if(v9 == 2 && v1 == 7 && v2 == SOCK_STREAM) {
                pthread_mutex_unlock(&g50514C);
                usleep(500000);
                return result;
            }
            else if(v9 == 2) {
                snprintf(&__ptr1, 0x800, "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n", "_bitmain_pic_reset_common", v1, v2);
                sub_2E584(0, &__ptr1, 0);
            }
            else {
                __format = "%s read iic err\n";
            loc_464C0:
                snprintf(&__ptr1, 0x800, __format, "_bitmain_pic_reset_common");
                sub_2E584(0, &__ptr1, 0);
            }
            result = 0x80000200;
        }
        else {
            __format = "%s write iic err\n";
            goto loc_464C0;
        }
        pthread_mutex_unlock(&g50514C);
        usleep(500000);
        return result;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "reset_pic", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
