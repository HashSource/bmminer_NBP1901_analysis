void* sub_36A0C() {
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 0x65657246;
        int v2 = 0x6d656d20;
        int v3 = 544830063;
        int v4 = 544370534;
        int v5 = 0x73207768;
        int v6 = 0x70656577;
        short v7 = 2606;
        char v8 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    void* __ptr2 = (void*)gvar_4FCB34;
    if(__ptr2 != 0) {
        void* __ptr = *(void**)((int)__ptr2 + 4);
        if(__ptr != 0) {
            free(__ptr);
            __ptr2 = gvar_4FCB34;
        }
        free(__ptr2);
        gvar_4FCB34 = 0;
    }
    return __ptr2;
}
