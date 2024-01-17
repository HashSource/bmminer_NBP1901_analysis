void* sub_38E40() {
    void* __ptr;
    if(gvar_7EB9C <= 4) {
        __ptr = gvar_4FCB3C;
        if(__ptr != 0) {
        loc_38E70:
            int* ptr0 = *(uint32_t*)((int)__ptr + 4);
            if(ptr0 != 0) {
                *(ptr0 + 2)((int)__ptr);
                if(gvar_7EB9C > 4) {
                    goto loc_38ED0;
                }
                else {
                    goto loc_38E90;
                }
            }
            if(gvar_7EB9C <= 4) {
                free(__ptr);
                gvar_4FCB3C = 0;
                return __ptr;
            }
            goto loc_38ED0;
        }
    }
    else {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 1953784144;
        int v2 = 544109157;
        int v3 = 0x74736574;
        int v4 = 1769497888;
        int v5 = 667252;
        sub_2E584(4, &__ptr1, 0);
        __ptr = gvar_4FCB3C;
        if(__ptr != 0) {
            goto loc_38E70;
        }
        if(gvar_7EB9C <= 4) {
            return 0;
        }
    loc_38ED0:
        __ptr1 = 0x4245445b;
        v0 = 0x205d4755;
        v1 = 0x65657246;
        v2 = 0x6d656d20;
        v3 = 544830063;
        v4 = 544370534;
        v5 = 0x74746170;
        int v6 = 544109157;
        int v7 = 0x74736574;
        short v8 = 2606;
        char v9 = 0;
        sub_2E584(4, &__ptr1, 0);
    loc_38E90:
        __ptr = gvar_4FCB3C;
        if(__ptr != 0) {
            free(__ptr);
            gvar_4FCB3C = 0;
        }
    }
    return __ptr;
}
