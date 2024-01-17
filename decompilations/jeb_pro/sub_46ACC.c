int sub_46ACC(int param0) {
    char* __format;
    int result;
    char __ptr1;
    char v0;
    char v1;
    char v2;
    char v3;
    if((uint32_t)param0 <= 15) {
        if(*(int*)(param0 * 8 + 10088012) == 0) {
            result = sub_46024(param0);
            if(result < 0) {
                snprintf(&__ptr1, 0x800, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "send_pic_heart_beat", param0);
                sub_2E584(0, &__ptr1, 0);
                return result;
            }
        }
        int v4 = *(int*)(param0 * 8 + 10088008);
        result = 0;
        pthread_mutex_lock(&g50514C);
        *(int*)&v0 = 0;
        int v5 = 0x1604aa55;
        int v6 = 0;
        int v7 = 0;
        *(int*)&v1 = 0;
        short v8 = 0;
        char v9 = 26;
        int v10 = sub_4966C(v4, &v5, 6);
        if(v10 == 6) {
            usleep(&loc_493E0);
            int v11 = sub_495E4(v4, &v1, 6);
            if(v11 == 6 && v3 == 22 && v2 == SOCK_STREAM) {
                pthread_mutex_unlock(&g50514C);
                return result;
            }
            else if(v11 == 6) {
                snprintf(&__ptr1, 0x800, "%s failed!\n", "_bitmain_pic_heart_beat_common");
                sub_2E584(0, &__ptr1, 0);
                sub_45ED0((int)&v1, 6);
            }
            else {
                __format = "%s read iic err\n";
            loc_46C08:
                snprintf(&__ptr1, 0x800, __format, "_bitmain_pic_heart_beat_common");
                sub_2E584(0, &__ptr1, 0);
            }
            result = 0x80000200;
        }
        else {
            __format = "%s write iic err\n";
            goto loc_46C08;
        }
        pthread_mutex_unlock(&g50514C);
        return result;
    }
    snprintf(&__ptr1, 0x800, "%s: Bad pic param, input chain is %d\n", "send_pic_heart_beat", param0);
    sub_2E584(0, &__ptr1, 0);
    return 0x80000201;
}
