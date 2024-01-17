int sub_398BC(int param0) {
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 0x61656c43;
        int v2 = 0x74732072;
        int v3 = 779318369;
        short v4 = 10;
        param0 = sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v5 = gvar_4FCB3C;
    if(v5 == 0) {
    loc_39910:
        if(gvar_7EB9C > 3) {
            return sub_387F8();
        }
    }
    else {
        int* ptr0 = *(uint32_t*)(v5 + 4);
        if(ptr0 == 0) {
            goto loc_39910;
        }
        else {
            param0 = *(ptr0 + 3)(param0);
        }
    }
    return param0;
}
