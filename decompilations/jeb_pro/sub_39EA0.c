int sub_39EA0() {
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
        int v10 = 1668834592;
        int v11 = 544501861;
        int v12 = 1668246626;
        int v13 = 667243;
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v14 = gvar_4FCB3C;
    if(v14 != 0 && *(int*)(v14 + 4) != 0) {
        int v15 = 0;
        while(SOCK_STREAM) {
            int v16 = sub_1E29C(v15);
            uint32_t v17 = (uint32_t)(v15 + 2);
            ++v15;
            if((v16 != 0 && (*(int*)((int)(v17 * 4) + gvar_4FCB3C) & 0xfffffffd) != 0)) {
                return 0;
            }
            if(v15 == 4) {
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
