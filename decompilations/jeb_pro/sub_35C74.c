void* sub_35C74() {
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 0x65657753;
        int v2 = 2019893360;
        int v3 = 170816617;
        char v4 = 0;
        sub_2E584(4, &__ptr1, 0);
        if(gvar_7EB9C > 4) {
            __ptr1 = 0x4245445b;
            v0 = 0x205d4755;
            v1 = 0x65657246;
            v2 = 0x6d656d20;
            v3 = 544830063;
            *(int*)&v4 = 544370534;
            int v5 = 0x65657773;
            int v6 = 667248;
            sub_2E584(4, &__ptr1, 0);
        }
    }
    void* __ptr = (void*)gvar_4FCB28;
    if(__ptr != 0) {
        free(__ptr);
        gvar_4FCB28 = 0;
    }
    return __ptr;
}
