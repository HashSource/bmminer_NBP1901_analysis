int sub_3893C(int param0) {
    int v0 = param0;
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v1 = 0x205d4755;
        int v2 = 0x646e6553;
        int v3 = 1919907616;
        int v4 = 0x6f66206b;
        int v5 = 0x77682072;
        int v6 = 1702327072;
        int v7 = 170815589;
        char v8 = 0;
        param0 = sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v9 = gvar_4FCB3C;
    if(v9 == 0) {
    loc_389A4:
        if(gvar_7EB9C > 3) {
            return sub_387F8();
        }
    }
    else {
        int* ptr0 = *(uint32_t*)(v9 + 4);
        if(ptr0 == 0) {
            goto loc_389A4;
        }
        else {
            param0 = *(ptr0 + 7)(0xFF, v0);
        }
    }
    return param0;
}
