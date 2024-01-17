int sub_48910() {
    char v0;
    char v1;
    int __ptr1;
    char v2;
    short result1;
    if(gvar_505180 == 0) {
        int result = sub_48B58();
        if(result < 0) {
            snprintf(&__ptr1, 0x800, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
            sub_2E584(0, &__ptr1, 0);
            return result;
        }
    }
    int v3 = (int)gvar_50517C;
    int v4 = 10;
    while(SOCK_STREAM) {
        v1 = 0xFF;
        v0 = 0;
        pthread_mutex_lock(&g505164);
        int v5 = sub_496F4(v3, &v0, SOCK_STREAM, &v1, SOCK_STREAM);
        if(v5 != SOCK_STREAM) {
            snprintf(&__ptr1, 0x800, "%s: iic read is failed\n", "_bitmain_get_power_code_version");
            sub_2E584(0, &__ptr1, 0);
            pthread_mutex_unlock(&g505164);
        loc_489AC:
            usleep(&loc_186A0);
            --v4;
            if(v4 != 0) {
                continue;
            }
            break;
        }
        pthread_mutex_unlock(&g505164);
        if(v1 == 245) {
            break;
        }
        goto loc_489AC;
    }
    *(int*)&v1 = 33860181;
    *(short*)&v2 = 0;
    *(int*)&v0 = 0;
    *(int*)&result1 = 0;
    v2 = 6;
    int v6 = sub_48520(v3, (char*)&v1, 6, &v0, 8);
    if(v6 == 0) {
        if(result1 != 0) {
            gvar_505184 = (uint32_t)result1;
        }
        return result1;
    }
    __ptr1 = 0x20746567;
    int v7 = 0x65776f70;
    int v8 = 1702240370;
    int v9 = 1869181810;
    int v10 = 0x6166206e;
    int v11 = 0x64656c69;
    short v12 = 10;
    sub_2E584(0, &__ptr1, 0);
    return 0x80000300;
}
