int sub_2C96C(int param0) {
    short v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    int v4 = (uint32_t)*(char*)param0;
    if((v4 & 0x40) != 0) {
        if(gvar_7EB9C > 3) {
            __ptr1 = 0x20212121;
            v3 = 0x20676572;
            v2 = 543388259;
            v1 = 0x6f727265;
            v0 = 2674;
            char v5 = 0;
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        ++gvar_5955BC;
        return param0;
    }
    uint32_t v6 = (uint32_t)*(char*)(param0 + 3);
    if((v6 & 0x60) != 0) {
        if(gvar_7EB9C <= 3) {
            return param0;
        }
        snprintf(&__ptr1, 0x800, "!!! REG_TYPE = 1. %u\n", *(int*)param0);
        return sub_2E584(3, &__ptr1, v4 & 0x40);
    }
    pthread_mutex_lock(&g810DC);
    uint32_t v7 = gvar_5945C0;
    if(v7 <= 510) {
        int v8 = gvar_8110C;
        uint32_t v9 = gvar_5945B8 + SOCK_STREAM;
        *(uint32_t*)(v9 * 8 + (int)&gvar_5945BC) = *(uint32_t*)(param0 + 4);
        *(char*)(v9 * 8 + (int)&gvar_5945C0) = (uint8_t)(*(char*)(param0 + 3) & 0x1f);
        *(char*)((char*)(v9 * 8 + (int)&gvar_5945C0) + SOCK_STREAM) = *(char*)(param0 + 2);
        int v10 = (uint32_t)*(char*)(param0 + SOCK_STREAM);
        if(v10 != 64) {
            v8 |= SOCK_STREAM;
        }
        *(char*)((char*)(v9 * 8 + (int)&gvar_5945C0) + 2) = (uint8_t)v10;
        *(char*)((char*)(v9 * 8 + (int)&gvar_5945C0) + 3) = (uint8_t)(*(char*)param0 & 0xf);
        if(v8 != 0) {
            gvar_5945B8 = v9;
            gvar_5945C0 = v7 + SOCK_STREAM;
            if(v9 > 510) {
                gvar_5945B8 = (uint32_t)(int)(v6 & 0x60);
            }
        }
    }
    else if(gvar_7EB9C > 3) {
        __ptr1 = 0x5f676572;
        v3 = 1970037110;
        v2 = 1969381221;
        v1 = 0x75622066;
        *(int*)&v0 = 0x72656666;
        int v11 = 544434464;
        int v12 = 0x6c6c7566;
        short v13 = 2593;
        char v14 = 0;
        sub_2E584(3, &__ptr1, (int)(v6 & 0x60));
    }
    return pthread_mutex_unlock(&g810DC);
}
