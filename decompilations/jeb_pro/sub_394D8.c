int sub_394D8() {
    int64_t v0;
    int64_t v1 = v0;
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v2 = 0x205d4755;
        int v3 = 0x63656863;
        int v4 = 1718165611;
        int v5 = 544434464;
        int v6 = 0x75716e75;
        int v7 = 0x66696c61;
        int v8 = 543450473;
        int v9 = 1886413160;
        int v10 = 170815077;
        char v11 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    int v12 = 0;
    do {
        int v13 = sub_1E29C(v12);
        if(v13 != 0) {
            int v14 = sub_39404(v12);
            if(v14 != 0) {
                return SOCK_STREAM;
            }
        }
        ++v12;
    }
    while(v12 != 4);
    return 0;
}
