int sub_39D88() {
    int v0;
    int v1;
    int v2;
    int __ptr1;
    char v3;
    if(gvar_7EB9C > 4) {
        __ptr1 = 0x4245445b;
        v2 = 0x205d4755;
        v1 = 1667590211;
        v0 = 1718165611;
        *(int*)&v3 = 1819042080;
        int v4 = 1634231072;
        int v5 = 1881173609;
        int v6 = 0x65747461;
        int v7 = 1948282482;
        int v8 = 544502629;
        int v9 = 0x656e6f64;
        short v10 = 2606;
        char v11 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v12 = gvar_4FCB3C;
    if(v12 != 0 && *(int*)(v12 + 4) != 0) {
        int v13 = 0;
        while(SOCK_STREAM) {
            int v14 = sub_1E29C(v13);
            uint32_t v15 = (uint32_t)(v13 + 2);
            ++v13;
            if((v14 != 0 && *(uint32_t*)((int)(v15 * 4) + gvar_4FCB3C) != 2)) {
                return 0;
            }
            if(v13 == 4) {
                return SOCK_STREAM;
            }
        }
    }
    else if(gvar_7EB9C > 3) {
        __ptr1 = 1684955464;
        v2 = 0x6920656c;
        v1 = 0x554e2073;
        v0 = 0xa2e4c4c;
        v3 = 0;
        sub_2E584(3, &__ptr1, 0);
    }
    return SOCK_STREAM;
}
