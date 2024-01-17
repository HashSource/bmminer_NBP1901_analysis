int sub_39360() {
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 1667590211;
        int v2 = 1718165611;
        int v3 = 544434464;
        int v4 = 0x61626e75;
        int v5 = 1668178284;
        int v6 = 1634213989;
        int v7 = 0x6e657070;
        short v8 = 2606;
        char v9 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    int v10 = 0;
    do {
        int v11 = sub_1E29C(v10);
        if(v11 != 0) {
            int v12 = sub_392B8(v10);
            if(v12 != 0) {
                return SOCK_STREAM;
            }
        }
        ++v10;
    }
    while(v10 != 4);
    return 0;
}
