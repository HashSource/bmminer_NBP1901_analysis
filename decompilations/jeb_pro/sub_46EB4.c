int sub_46EB4(int param0) {
    char* __format;
    int result;
    char v0;
    char __ptr1;
    uint8_t v1;
    pthread_mutex_lock(&g50514C);
    int v2 = 0xd000006;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0x106aa55;
    *(short*)&v0 = 0;
    int v6 = sub_4966C(param0, &v5, 8);
    if(v6 == 8) {
        usleep(&loc_493E0);
        int v7 = sub_495E4(param0, &v0, 2);
        if(v7 != 2) {
            __format = "%s read iic err\n";
        loc_46F88:
            snprintf(&__ptr1, 0x800, __format, "_bitmain_pic_seek_1704");
            sub_2E584(0, &__ptr1, 0);
            result = 0x80000200;
        }
        else if(v0 == SOCK_STREAM && v1 == SOCK_STREAM) {
            result = 0;
        }
        else {
            snprintf(&__ptr1, 0x800, "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n", "_bitmain_pic_seek_1704", v0, v1);
            result = 0x80000200;
            sub_2E584(0, &__ptr1, 0);
        }
    }
    else {
        __format = "%s write iic err\n";
        goto loc_46F88;
    }
    pthread_mutex_unlock(&g50514C);
    return result;
}
