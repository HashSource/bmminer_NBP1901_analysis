int sub_367E4() {
    if(gvar_7EB9C > 4) {
        int __ptr1 = 0x4245445b;
        int v0 = 0x205d4755;
        int v1 = 1931499336;
        int v2 = 0x70656577;
        int v3 = 1936028192;
        int v4 = 170816613;
        char v5 = 0;
        sub_2E584(4, &__ptr1, 0);
    }
    int v6 = 0;
    sub_1F1EC(0xFF, 0);
    do {
        int v7 = sub_1E29C(v6);
        if(v7 != 0) {
            sub_50E78((int)(uint8_t)v6);
        }
        ++v6;
    }
    while(v6 != 4);
    int v8 = sub_4476C();
    return sub_44794((v8 & 0xffff70ff) | 0x8400);
}
