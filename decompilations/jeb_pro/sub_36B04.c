int sub_36B04() {
    int v0;
    short v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int __ptr1;
    if(gvar_7EB9C > 4) {
        __ptr1 = 0x4245445b;
        v9 = 0x205d4755;
        v8 = 1931499336;
        v7 = 0x70656577;
        v6 = 0x696e6920;
        v5 = 667252;
        sub_2E584(4, &__ptr1, 0);
        if(gvar_7EB9C > 4) {
            __ptr1 = 0x4245445b;
            v9 = 0x205d4755;
            v8 = 1869376577;
            v7 = 1702125923;
            v6 = 0x6d656d20;
            v5 = 544830063;
            v4 = 544370534;
            v3 = 0x73207768;
            v2 = 0x70656577;
            v1 = 2606;
            char v10 = 0;
            sub_2E584(4, &__ptr1, 0);
        }
    }
    if(gvar_4FCB34 != 0) {
        return 0;
    }
    void* ptr0 = calloc(0x8114ac, 1);
    gvar_4FCB34 = (uint32_t)ptr0;
    if(ptr0 == 0) {
        sub_356C4(13, 0xFF);
        if(gvar_7EB9C > 3) {
            __ptr1 = 1818845510;
            v9 = 544175136;
            v8 = 1869376609;
            v7 = 1702125923;
            v6 = 0x6d656d20;
            v5 = 544830063;
            v4 = 544370534;
            v3 = 0x73207768;
            v2 = 0x70656577;
            *(int*)&v1 = 0x78746320;
            v0 = 667252;
            sub_2E584(3, &__ptr1, 0);
        }
        return -1;
    }
    void* ptr1 = malloc(0x400);
    *(void**)((int)ptr0 + 4) = ptr1;
    if(ptr1 != 0) {
        return 0;
    }
    sub_36A0C();
    sub_356C4(13, 0xFF);
    if(gvar_7EB9C > 3) {
        __ptr1 = 1818845510;
        v9 = 544175136;
        v8 = 1869376609;
        v7 = 1702125923;
        v6 = 0x6d656d20;
        v5 = 544830063;
        v4 = 544370534;
        v3 = 0x73207768;
        v2 = 0x70656577;
        *(int*)&v1 = 0x69727020;
        v0 = 1702125942;
        int v11 = 0x74616420;
        int v12 = 667233;
        sub_2E584(3, &__ptr1, 0);
    }
    return -1;
}
