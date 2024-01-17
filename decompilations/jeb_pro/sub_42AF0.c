int sub_42AF0(int param0, int param1, size_t param2) {
    int result;
    int __ptr1;
    int v0 = pthread_mutex_lock(&g504FEC);
    if(v0 == 0) {
        int v1 = (int)gvar_7F418;
        if(v1 < 0) {
            int v2 = sub_42C68(ptr_a_dev_bitmain_lc);
            gvar_7F418 = (uint32_t)v2;
            sub_42E88(v2);
            v1 = gvar_7F418;
        }
        if(v1 > 0) {
            result = sub_42D2C(v1, (uint32_t)(uint8_t)param0, param1, param2);
        }
        else {
            result = -1;
            snprintf(&__ptr1, 0x800, "failed to init %s\n", ptr_a_dev_bitmain_lc);
            sub_2E584(0, &__ptr1, 0);
        }
        pthread_mutex_unlock(&g504FEC);
        return result;
    }
    __ptr1 = 1818845542;
    int v3 = 1948279909;
    int v4 = 1885413487;
    int v5 = 1869357161;
    int v6 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -4;
}
