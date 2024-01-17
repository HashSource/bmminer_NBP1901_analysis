int sub_3C490(int param0) {
    short v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int __ptr1;
    if(gvar_7EB9C > 4) {
        __ptr1 = 0x4245445b;
        v8 = 0x205d4755;
        v7 = 0x71657266;
        v6 = 1853191200;
        v5 = 0x20676e69;
        v4 = 0x656e6966;
        v3 = 0x696e6920;
        v2 = 667252;
        sub_2E584(4, &__ptr1, 0);
        if(gvar_7EB9C > 4) {
            __ptr1 = 0x4245445b;
            v8 = 0x205d4755;
            v7 = 1869376577;
            v6 = 1702125923;
            v5 = 0x6d656d20;
            v4 = 544830063;
            v3 = 544370534;
            v2 = 0x67206d70;
            v1 = 1701077362;
            v0 = 2606;
            char v9 = 0;
            sub_2E584(4, &__ptr1, 0);
        }
    }
    int v10 = (int)gvar_4FCB44;
    if(v10 == 0) {
        void* ptr0 = calloc(12356, 1);
        v10 = ptr0;
        gvar_4FCB44 = (uint32_t)ptr0;
        if(ptr0 == 0) {
            sub_356C4(13, 0xFF);
            if(gvar_7EB9C <= 3) {
                return -1;
            }
            __ptr1 = 1818845510;
            v8 = 544175136;
            v7 = 1869376609;
            v6 = 1702125923;
            v5 = 0x6d656d20;
            v4 = 544830063;
            v3 = 544370534;
            v2 = 0x67206d70;
            v1 = 1701077362;
            *(int*)&v0 = 0x6e6f6320;
            int v11 = 0x74786574;
            short v12 = 2606;
            char v13 = 0;
            sub_2E584(3, &__ptr1, v10);
            return -1;
        }
    }
    *(int*)v10 = param0;
    sub_3BF94();
    return 0;
}
