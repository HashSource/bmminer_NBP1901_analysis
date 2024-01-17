int sub_38F58(int param0) {
    int v0;
    int v1;
    int v2;
    int __ptr1;
    char v3;
    if(gvar_7EB9C > 4) {
        __ptr1 = 0x4245445b;
        v2 = 0x205d4755;
        v1 = 1953784144;
        v0 = 544109157;
        *(int*)&v3 = 0x74736574;
        int v4 = 1936028192;
        int v5 = 170816613;
        char v6 = 0;
        param0 = sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v7 = gvar_4FCB3C;
    if(v7 == 0) {
    loc_38FAC:
        if(gvar_7EB9C > 3) {
            __ptr1 = 1684955464;
            v2 = 0x6920656c;
            v1 = 0x554e2073;
            v0 = 0xa2e4c4c;
            v3 = 0;
            return sub_2E584(3, &__ptr1, 0);
        }
    }
    else {
        int* ptr0 = *(uint32_t*)(v7 + 4);
        if(ptr0 == 0) {
            goto loc_38FAC;
        }
        else {
            param0 = *(ptr0 + 4)(param0);
        }
    }
    return param0;
}
