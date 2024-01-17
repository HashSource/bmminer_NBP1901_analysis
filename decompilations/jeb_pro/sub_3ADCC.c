void* sub_3ADCC() {
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 0x71657246;
        int v2 = 1853191200;
        int v3 = 0x20676e69;
        int v4 = 1769169250;
        int v5 = 2019893347;
        int v6 = 170816617;
        char v7 = 0;
        sub_2E584(4, &__ptr1, 0);
        if(gvar_7EB9C > 4) {
            __ptr1 = 0x4245445b;
            v0 = 0x205d4755;
            v1 = 0x65657246;
            v2 = 0x6d656d20;
            v3 = 544830063;
            v4 = 544370534;
            v5 = 0x71657266;
            v6 = 1853191200;
            *(int*)&v7 = 0x20676e69;
            int v8 = 1769169250;
            int v9 = 667235;
            sub_2E584(4, &__ptr1, 0);
        }
    }
    void* __ptr = (void*)gvar_4FCB40;
    if(__ptr != 0) {
        free(__ptr);
        gvar_4FCB40 = 0;
    }
    return __ptr;
}
